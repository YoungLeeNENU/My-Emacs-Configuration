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

void code_completion_decls (tree node, bool nonstatic)
{
  while (node)
    {
      print_completion (node);
      node = TREE_CHAIN (node);
    }
}

void code_completion_scope (tree scope)
{
}
