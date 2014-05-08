#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "flags.h"
#include "toplev.h"
#include "langhooks.h"
#include "diagnostic.h"
#include "debug.h"
#include "opts.h"
#include "options.h"
#include "c-tree.h"
#include "code-assist.h"

enum cpp_ttype code_assist_type;

static const char *generic_node_name (tree node)
{
  enum tree_code code;
  enum tree_code_class tclass;
  const char *name = 0;
  
  if (!node)
    return 0;

  code = TREE_CODE (node);
  tclass = TREE_CODE_CLASS (code);

  if (tclass == tcc_declaration)
    {
      if (DECL_NAME (node))
        name = IDENTIFIER_POINTER (DECL_NAME (node));
    }
  
  return name;
}

static void code_completion_base_types (tree type, bool nonstatic)
{
  /* Base types.  */
  int i;
  tree base_binfo;
  tree binfo;

  for (binfo = TYPE_BINFO (type), i = 0;
       binfo && BINFO_BASE_ITERATE (binfo, i, base_binfo); i++)
    {
      tree basetype = TREE_TYPE (base_binfo);
      code_completion_type (basetype, nonstatic);
    }
}

void code_assist_setup (cpp_options *cpp_opts, enum cpp_ttype type, const char *arg, const char *opt)
{
  const char *p = strchr (arg, ':');
  const char *q = 0;

  if (p)
    {
      q = strchr (p + 1, ':');
    }
  if (!p || !q)
    {
      error ("%s must take a form of line:column", opt);
      return;
    }

  code_assist_type = type;
  cpp_opts->phantom_token.type = type;
  cpp_opts->phantom_token.file = xstrndup (arg, p - arg);
  cpp_opts->phantom_token.line = atoi (p + 1);
  cpp_opts->phantom_token.column = atoi (q + 1);
}

void print_completion (tree node)
{
  const char *name = generic_node_name (node);
  if (name)
    printf ("completion: %s \"%s\"\n", name, lang_hooks.decl_printable_name (node, 2));
}

void code_completion_type (tree type, bool nonstatic)
{
  enum tree_code code;
  
  if (!type)
    return;
  
  code = TREE_CODE (type);

  switch (code)
    {
    case RECORD_TYPE:
    case UNION_TYPE:
    case QUAL_UNION_TYPE:
      code_completion_decls (TYPE_FIELDS (type), nonstatic);
      code_completion_decls (TYPE_METHODS (type), nonstatic);
      code_completion_base_types (type, nonstatic);
      break;
    default:
      break;
    }
}

void code_completion_expr (tree expr)
{
  if (!expr)
    return;
  code_completion_type (TREE_TYPE (expr), true);
}
