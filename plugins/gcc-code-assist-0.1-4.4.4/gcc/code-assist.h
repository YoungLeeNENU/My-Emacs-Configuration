#ifndef GCC_CODE_ASSIST_H
#define GCC_CODE_ASSIST_H

#include "cpplib.h"
#include "input.h"

extern enum cpp_ttype code_assist_type;

extern void code_assist_setup (cpp_options *, enum cpp_ttype, const char *, const char *);
extern void print_completion (tree);
extern void code_completion_decls (tree, bool);
extern void code_completion_type (tree, bool);
extern void code_completion_expr (tree);
extern void code_completion_scope (tree);

#endif /* ! GCC_CODE_ASSIST_H */
