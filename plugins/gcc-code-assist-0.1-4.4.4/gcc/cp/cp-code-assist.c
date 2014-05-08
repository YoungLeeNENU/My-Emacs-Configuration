#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "tree.h"
#include "cp-tree.h"
#include "toplev.h"
#include "langhooks.h"
#include "diagnostic.h"
#include "debug.h"
#include "code-assist.h"
#include "name-lookup.h"

void code_completion_decls (tree node, bool nonstatic)
{
  while (node)
    {
      enum tree_code code = TREE_CODE (node);

      if (nonstatic
	  ? (code == FIELD_DECL
	     || (code == FUNCTION_DECL
		 && !DECL_STATIC_FUNCTION_P (node)))
	  : ((code == VAR_DECL
	      || code == CONST_DECL
	      || code == TYPE_DECL)
	     || (code == FUNCTION_DECL
		 && DECL_STATIC_FUNCTION_P (node))))
	print_completion (node);
      
      node = TREE_CHAIN (node);
    }
}

void code_completion_scope (tree scope)
{
  enum tree_code code;

  if (!scope)
    return;

  code = TREE_CODE (scope);

  if (code == NAMESPACE_DECL)
    {
      tree decls = cp_namespace_decls (scope);
      while (decls)
	{
	  print_completion (decls);
	  decls = TREE_CHAIN (decls);
	}
    }
  else
    code_completion_type (scope, false);
}
