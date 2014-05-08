/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 11515 "../.././gcc/config/i386/sse.md"
  { "TARGET_AES",
    __builtin_constant_p 
#line 11515 "../.././gcc/config/i386/sse.md"
(TARGET_AES)
    ? (int) 
#line 11515 "../.././gcc/config/i386/sse.md"
(TARGET_AES)
    : -1 },
#line 2457 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2457 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2457 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    : -1 },
#line 6918 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6918 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6918 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 12756 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12756 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12756 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 4013 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 4013 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 4013 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
#line 4187 "../.././gcc/config/i386/i386.md"
  { "0",
    __builtin_constant_p 
#line 4187 "../.././gcc/config/i386/i386.md"
(0)
    ? (int) 
#line 4187 "../.././gcc/config/i386/i386.md"
(0)
    : -1 },
#line 13734 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13734 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13734 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 591 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (MULT, V4DFmode, operands)",
    __builtin_constant_p 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MULT, V4DFmode, operands))
    ? (int) 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MULT, V4DFmode, operands))
    : -1 },
#line 341 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4757 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4757 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4757 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 7577 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 7577 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 7577 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 10818 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && (register_operand (operands[1], V16QImode)\n\
       || register_operand (operands[2], V16QImode))",
    __builtin_constant_p 
#line 10818 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode)))
    ? (int) 
#line 10818 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode)))
    : -1 },
#line 18808 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18808 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18808 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 10326 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 10326 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 10326 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 5979 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5987 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5979 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5987 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16249 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16249 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16249 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    : -1 },
#line 16527 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16527 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 16527 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 6031 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6031 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6031 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 2754 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]))\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 2754 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 2754 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 21713 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 21713 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 21713 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 21671 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && INTVAL (operands[4]) + X86_64_SSE_REGPARM_MAX * 16 - 16 < 128\n\
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128",
    __builtin_constant_p 
#line 21671 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + X86_64_SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    ? (int) 
#line 21671 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + X86_64_SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 21654 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 21654 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 21654 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 12544 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12544 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12544 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 16249 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16249 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16249 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V32QImode)\n\
       || register_operand (operands[1], V32QImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode)))
    : -1 },
#line 6689 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6689 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6689 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 1276 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 2443 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2443 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2443 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 1539 "../.././gcc/config/i386/sse.md"
  { "AVX256_VEC_FLOAT_MODE_P (V8SFmode)",
    __builtin_constant_p 
#line 1539 "../.././gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V8SFmode))
    ? (int) 
#line 1539 "../.././gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V8SFmode))
    : -1 },
#line 4465 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4465 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4465 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 13254 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13254 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13254 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 5276 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5276 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5276 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 3546 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && GET_MODE (operands[0]) == XFmode\n\
   && ! (ANY_FP_REG_P (operands[0]) ||\n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) ||\n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 3546 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 3546 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 5662 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 707 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode)",
    __builtin_constant_p 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    ? (int) 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    : -1 },
#line 7696 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7696 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7696 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
#line 3702 "../.././gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND\n\
   || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3702 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3702 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    : -1 },
#line 18646 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_64BIT\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 18646 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_64BIT
   && !flag_trapping_math)
    ? (int) 
#line 18646 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH && TARGET_64BIT
   && !flag_trapping_math)
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
#line 2920 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ((optimize_function_for_size_p (cfun)\n\
       || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
           && optimize_function_for_size_p (cfun)\n\
           && !memory_operand (operands[0], DFmode)\n\
	   && standard_80387_constant_p (operands[1]))\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || ((optimize_function_for_size_p (cfun)\n\
            || !TARGET_MEMORY_MISMATCH_STALL\n\
	    || reload_in_progress || reload_completed)\n\
 	   && memory_operand (operands[0], DFmode)))",
    __builtin_constant_p 
#line 2920 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ((optimize_function_for_size_p (cfun)
       || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
           && !memory_operand (operands[0], DFmode)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || ((optimize_function_for_size_p (cfun)
            || !TARGET_MEMORY_MISMATCH_STALL
	    || reload_in_progress || reload_completed)
 	   && memory_operand (operands[0], DFmode))))
    ? (int) 
#line 2920 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ((optimize_function_for_size_p (cfun)
       || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
           && !memory_operand (operands[0], DFmode)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || ((optimize_function_for_size_p (cfun)
            || !TARGET_MEMORY_MISMATCH_STALL
	    || reload_in_progress || reload_completed)
 	   && memory_operand (operands[0], DFmode))))
    : -1 },
#line 13187 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13187 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13187 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 18761 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 18765 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 18761 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 18765 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 12628 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12628 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 12628 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7236 "../.././gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7236 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7236 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 3408 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || standard_80387_constant_p (operands[1])\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 3408 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || standard_80387_constant_p (operands[1])
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 3408 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || standard_80387_constant_p (operands[1])
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 20658 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
        && (!MEM_P (operands[0])\n\
            || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], SImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20658 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20658 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
#line 1029 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1029 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1029 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 19962 "../.././gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
#line 20353 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 20353 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 20353 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 7223 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 7223 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 7223 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 21186 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_size_p () || !TARGET_ADD_ESP_8",
    __builtin_constant_p 
#line 21186 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_ADD_ESP_8)
    ? (int) 
#line 21186 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_ADD_ESP_8)
    : -1 },
#line 18717 "../.././gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 18717 "../.././gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 18717 "../.././gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 707 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode)",
    __builtin_constant_p 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    ? (int) 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    : -1 },
#line 10083 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 10083 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 10083 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 5483 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5483 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5483 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13849 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 13849 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 13849 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 366 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 366 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 366 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 21263 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 21263 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 21263 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 20471 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 20471 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 20471 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 5926 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5926 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5926 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 18109 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 7793 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !TARGET_64BIT",
    __builtin_constant_p 
#line 7793 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    ? (int) 
#line 7793 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    : -1 },
#line 10601 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 21773 "../.././gcc/config/i386/i386.md"
  { "TARGET_3DNOW && !TARGET_64BIT",
    __builtin_constant_p 
#line 21773 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    ? (int) 
#line 21773 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    : -1 },
#line 13030 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13030 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13030 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 17956 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 17956 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 17956 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1281 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1281 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 11035 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 11035 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 11035 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 10381 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 10381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 10381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    : -1 },
#line 6255 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6255 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6255 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 10193 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10193 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10193 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 482 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4A",
    __builtin_constant_p 
#line 482 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A)
    ? (int) 
#line 482 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A)
    : -1 },
#line 5441 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5441 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5441 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 16288 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16288 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16288 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 10574 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5796 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1",
    __builtin_constant_p 
#line 5796 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    ? (int) 
#line 5796 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    : -1 },
  { "(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 19943 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 19945 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 19943 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 19945 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 1517 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
#line 18646 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_64BIT\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 18646 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_64BIT
   && !flag_trapping_math)
    ? (int) 
#line 18646 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH && TARGET_64BIT
   && !flag_trapping_math)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3538 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 3538 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 18109 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 21389 "../.././gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 21389 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ())
    ? (int) 
#line 21389 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ())
    : -1 },
#line 4776 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 7656 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7656 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7656 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 14035 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 14035 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 14035 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 20004 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 20004 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 20004 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 4423 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4423 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4423 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
#line 4328 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4328 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4328 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 7529 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 7529 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 7529 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 7722 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7722 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7722 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 4913 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 4913 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 4913 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 5066 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 7261 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7261 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7261 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 20894 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20894 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20894 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 12579 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12579 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 12579 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 6553 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6553 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6553 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 313 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 313 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 313 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 13381 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 13381 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 13381 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 5114 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 6312 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   &&  ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6312 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6312 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 5075 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 10874 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && (register_operand (operands[1], V4SImode)\n\
       || register_operand (operands[2], V16QImode))",
    __builtin_constant_p 
#line 10874 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V16QImode)))
    ? (int) 
#line 10874 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V16QImode)))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 336 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 336 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 336 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 8475 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 8475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD)
    ? (int) 
#line 8475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD)
    : -1 },
#line 7680 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7680 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7680 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 7819 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 7819 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 7819 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 935 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
    && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 935 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 935 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 16397 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16397 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16397 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 10751 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5126 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3538 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 3538 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 18638 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18638 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18638 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 8434 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8434 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 8434 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 4695 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 5698 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 53 "../.././gcc/config/i386/sync.md"
  { "!(TARGET_64BIT || TARGET_SSE2)",
    __builtin_constant_p 
#line 53 "../.././gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    ? (int) 
#line 53 "../.././gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    : -1 },
#line 5607 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 5607 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 5607 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 4275 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4275 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4275 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 8838 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
    && ix86_match_ccmode (insn,\n\
 			 CONST_INT_P (operands[1])\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8838 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8838 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 1930 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 1930 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 1930 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 5228 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5228 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5228 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 8369 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8369 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8369 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 380 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 380 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 380 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 9171 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 9171 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 9171 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 16769 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16769 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16769 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5678 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
#line 16288 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16288 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16288 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8977 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 8977 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 8977 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 5483 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5483 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5483 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5417 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5417 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5417 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 4454 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 4454 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 4454 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 266 "../.././gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 21 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 266 "../.././gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 21 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13487 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 13487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 13487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 16361 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16361 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16361 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 707 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode)",
    __builtin_constant_p 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    ? (int) 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    : -1 },
#line 3323 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ! (ANY_FP_REG_P (operands[0]) ||\n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) ||\n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 3323 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 3323 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 1009 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && ( reload_completed)",
    __builtin_constant_p (
#line 1230 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1234 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1230 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1234 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9545 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9545 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9545 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 1617 "../.././gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1617 "../.././gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1617 "../.././gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 2299 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 2299 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 2299 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 11461 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 11461 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 11461 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 591 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 19840 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 19840 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 19840 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 1517 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 9971 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 9971 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 9971 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 16557 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16557 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16557 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 7667 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7667 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7667 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4DImode)\n\
       || register_operand (operands[1], V4DImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode)))
    : -1 },
#line 6401 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6401 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6401 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 14355 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 14355 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 14355 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5660 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5660 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5660 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && TARGET_SSE
   && reload_completed)
    : -1 },
#line 14213 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && !TARGET_SSE5",
    __builtin_constant_p 
#line 14213 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && !TARGET_SSE5)
    ? (int) 
#line 14213 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && !TARGET_SSE5)
    : -1 },
#line 2351 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 2351 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 2351 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 16593 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16593 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16593 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 13780 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 13780 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 13780 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 3705 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3705 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3705 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5134 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5134 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5134 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 20151 "../.././gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 20151 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 20151 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 18102 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 1015 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1015 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1015 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 611 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 611 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 611 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 5678 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 9227 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_REG_STALL) && reload_completed",
    __builtin_constant_p 
#line 9227 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    ? (int) 
#line 9227 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    : -1 },
#line 10751 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 7721 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 7721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 7721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
#line 5242 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5242 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5242 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (IOR, V8SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (IOR, V8SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (IOR, V8SFmode, operands))
    : -1 },
#line 15729 "../.././gcc/config/i386/i386.md"
  { "TARGET_ABM",
    __builtin_constant_p 
#line 15729 "../.././gcc/config/i386/i386.md"
(TARGET_ABM)
    ? (int) 
#line 15729 "../.././gcc/config/i386/i386.md"
(TARGET_ABM)
    : -1 },
#line 5214 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5214 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5214 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 5228 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5228 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5228 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 9274 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 9274 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 9274 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 545 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 12217 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 12217 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 12217 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 21116 "../.././gcc/config/i386/i386.md"
  { "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_size)\n\
     && incdec_operand (operands[3], GET_MODE (operands[3])))\n\
    || (!TARGET_FUSE_CMP_AND_BRANCH\n\
	&& INTVAL (operands[3]) == 128))\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 21116 "../.././gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_size)
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 21116 "../.././gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_size)
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 12449 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12449 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12449 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 4472 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 4472 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 4472 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
  { "(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true)) && ( (reload_completed\n\
       || (!reg_mentioned_p (operands[0], operands[1])\n\
	   && !reg_mentioned_p (operands[0], operands[2]))))",
    __builtin_constant_p (
#line 10117 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true)) && 
#line 10119 "../.././gcc/config/i386/sse.md"
( (reload_completed
       || (!reg_mentioned_p (operands[0], operands[1])
	   && !reg_mentioned_p (operands[0], operands[2])))))
    ? (int) (
#line 10117 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true)) && 
#line 10119 "../.././gcc/config/i386/sse.md"
( (reload_completed
       || (!reg_mentioned_p (operands[0], operands[1])
	   && !reg_mentioned_p (operands[0], operands[2])))))
    : -1 },
#line 21604 "../.././gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 21604 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 21604 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 160 "../.././gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 160 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 160 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5498 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5498 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5498 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    : -1 },
#line 1189 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE",
    __builtin_constant_p 
#line 1189 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    ? (int) 
#line 1189 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    : -1 },
#line 29 "../.././gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic",
    __builtin_constant_p 
#line 29 "../.././gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    ? (int) 
#line 29 "../.././gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 4810 "../.././gcc/config/i386/i386.md"
  { "TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4810 "../.././gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    ? (int) 
#line 4810 "../.././gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    : -1 },
#line 9364 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 CONST_INT_P (operands[2])\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 9364 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 9364 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 4791 "../.././gcc/config/i386/i386.md"
  { "TARGET_SHORTEN_X87_SSE\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 4791 "../.././gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 4791 "../.././gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 7807 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 7807 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 7807 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 5784 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE5\n\
   && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 5876 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5876 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5876 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 7134 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 7134 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 7134 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 591 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 20639 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 20639 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 20639 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 6739 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000",
    __builtin_constant_p 
#line 6739 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    ? (int) 
#line 6739 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 5242 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5242 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5242 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 18109 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 11735 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11735 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11735 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 5469 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5469 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5469 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1295 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1295 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1295 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 1266 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1266 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1266 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
#line 1850 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1850 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1850 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 21421 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   /* We reorder load and the shift.  */\n\
   && !rtx_equal_p (operands[1], operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])\n\
   /* Last PLUS must consist of operand 0 and 3.  */\n\
   && !rtx_equal_p (operands[0], operands[3])\n\
   && (rtx_equal_p (operands[3], operands[6])\n\
       || rtx_equal_p (operands[3], operands[7]))\n\
   && (rtx_equal_p (operands[0], operands[6])\n\
       || rtx_equal_p (operands[0], operands[7]))\n\
   /* The intermediate operand 0 must die or be same as output.  */\n\
   && (rtx_equal_p (operands[0], operands[5])\n\
       || peep2_reg_dead_p (3, operands[0]))",
    __builtin_constant_p 
#line 21421 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    ? (int) 
#line 21421 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    : -1 },
#line 4764 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4764 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4764 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    : -1 },
#line 9714 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 9714 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 9714 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 8863 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8863 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8863 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 4846 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4846 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 5242 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5242 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5242 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 3998 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3998 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3998 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4899 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 11958 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11958 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11958 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 6014 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands)",
    __builtin_constant_p 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands))
    ? (int) 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands))
    : -1 },
#line 995 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 5441 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5441 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5441 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 5498 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5498 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5498 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 8663 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 8663 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 8663 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 12788 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12788 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12788 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V4DImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4DImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4DImode, operands))
    : -1 },
#line 10762 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 10762 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 10762 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
  { "(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15585 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 675 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15585 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 675 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 354 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 354 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 354 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 1455 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode) && !TARGET_SSE5",
    __builtin_constant_p 
#line 1455 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && !TARGET_SSE5)
    ? (int) 
#line 1455 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && !TARGET_SSE5)
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 7031 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7031 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7031 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10794 "../.././gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))",
    __builtin_constant_p 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    ? (int) 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 3705 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 3707 "../.././gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 3705 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 3707 "../.././gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 14694 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14694 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14694 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 10126 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 10126 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 10126 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 5729 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands)",
    __builtin_constant_p 
#line 5729 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    ? (int) 
#line 5729 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    : -1 },
#line 7300 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xff) != 0x80",
    __builtin_constant_p 
#line 7300 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    ? (int) 
#line 7300 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    : -1 },
#line 9260 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 9260 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 9260 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 10512 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 10512 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 10512 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 13222 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13222 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13222 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 18884 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18884 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 18884 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 20869 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE",
    __builtin_constant_p 
#line 20869 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE)
    ? (int) 
#line 20869 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE)
    : -1 },
#line 5441 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5441 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5441 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 19933 "../.././gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 19933 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 19933 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 10174 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10174 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10174 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4634 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4634 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4634 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 14595 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14595 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14595 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 3377 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3377 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3377 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    : -1 },
#line 12999 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		     ? epilogue_completed : reload_completed)",
    __builtin_constant_p 
#line 12999 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? epilogue_completed : reload_completed))
    ? (int) 
#line 12999 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? epilogue_completed : reload_completed))
    : -1 },
#line 9726 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 9726 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 9726 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 3205 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && optimize_function_for_speed_p (cfun)\n\
   && TARGET_INTEGER_DFMODE_MOVES\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
           && optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]))\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 3205 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && optimize_function_for_speed_p (cfun)
   && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 3205 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && optimize_function_for_speed_p (cfun)
   && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 13615 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 13615 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 13615 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 826 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 826 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 826 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 11126 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 3, true, 1, false)",
    __builtin_constant_p 
#line 11126 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 3, true, 1, false))
    ? (int) 
#line 11126 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 3, true, 1, false))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 10840 "../.././gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (TFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 13837 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 13837 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 13837 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
#line 21172 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_size_p () || !TARGET_ADD_ESP_4",
    __builtin_constant_p 
#line 21172 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_ADD_ESP_4)
    ? (int) 
#line 21172 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_ADD_ESP_4)
    : -1 },
#line 20753 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != AX_REG\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20753 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20753 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
  { "(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x3f) == 0x3f) && ( 1)",
    __builtin_constant_p (
#line 14388 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x3f) == 0x3f) && 
#line 14391 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 14388 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x3f) == 0x3f) && 
#line 14391 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10871 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10871 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10871 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 9558 "../.././gcc/config/i386/sse.md"
  { "TARGET_ROUND",
    __builtin_constant_p 
#line 9558 "../.././gcc/config/i386/sse.md"
(TARGET_ROUND)
    ? (int) 
#line 9558 "../.././gcc/config/i386/sse.md"
(TARGET_ROUND)
    : -1 },
#line 2487 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 2487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 2487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
#line 3794 "../.././gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3794 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3794 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 7218 "../.././gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_AVX",
    __builtin_constant_p 
#line 7218 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_AVX)
    ? (int) 
#line 7218 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_AVX)
    : -1 },
  { "(((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (XOR, V4DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (XOR, V4DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (XOR, V4DFmode, operands))
    : -1 },
#line 10347 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 10347 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 10347 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 8348 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8348 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8348 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V16HImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16HImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16HImode, operands))
    : -1 },
#line 14388 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x3f) == 0x3f",
    __builtin_constant_p 
#line 14388 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x3f) == 0x3f)
    ? (int) 
#line 14388 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x3f) == 0x3f)
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    : -1 },
#line 18102 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
#line 7063 "../.././gcc/config/i386/sse.md"
  { "!TARGET_64BIT\n\
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7063 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7063 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 13301 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 13301 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 13301 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 5698 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
#line 6137 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 6137 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 6137 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 16397 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16397 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16397 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 10212 "../.././gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10212 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10212 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 10840 "../.././gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (DFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 5066 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 14926 "../.././gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 14926 "../.././gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 14926 "../.././gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 18717 "../.././gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 18717 "../.././gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 18717 "../.././gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 5257 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5257 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5257 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 1518 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1518 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1518 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 11290 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5",
    __builtin_constant_p 
#line 11290 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5)
    ? (int) 
#line 11290 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5)
    : -1 },
#line 5804 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 5804 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 5804 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 20905 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == HImode\n\
    || GET_MODE (operands[0]) == SImode\n\
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))\n\
   && (optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20905 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20905 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5615 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5615 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5615 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 8070 "../.././gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8070 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8070 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11589 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && !TARGET_64BIT",
    __builtin_constant_p 
#line 11589 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_64BIT)
    ? (int) 
#line 11589 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_64BIT)
    : -1 },
#line 19988 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 19988 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 19988 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8960 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 8960 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 8960 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
#line 10583 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 10583 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 10583 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 5306 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5306 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5306 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 20930 "../.././gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 20930 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 20930 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
#line 5561 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5561 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5561 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 8912 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8912 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8912 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 26 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 26 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 4671 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4671 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4671 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5469 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5469 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5469 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 21249 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9",
    __builtin_constant_p 
#line 21249 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    ? (int) 
#line 21249 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    : -1 },
#line 7515 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 7515 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 7515 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 12679 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12679 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12679 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 10253 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 10253 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 10253 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 255 "../.././gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic",
    __builtin_constant_p 
#line 255 "../.././gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    ? (int) 
#line 255 "../.././gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    : -1 },
#line 16472 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 1189 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1192 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1189 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1192 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9656 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 9656 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 9656 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 4818 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 10452 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 10452 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 10452 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 7692 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 7692 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 7692 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (AND, V8SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (AND, V8SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (AND, V8SFmode, operands))
    : -1 },
#line 995 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 366 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 366 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 366 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10316 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true)",
    __builtin_constant_p 
#line 10316 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true))
    ? (int) 
#line 10316 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true))
    : -1 },
#line 11279 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 11279 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 11279 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 18921 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V8SImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8SImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8SImode, operands))
    : -1 },
#line 10860 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10860 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10860 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 3762 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (TARGET_ZERO_EXTEND_WITH_AND\n\
       && optimize_function_for_speed_p (cfun))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3762 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND
       && optimize_function_for_speed_p (cfun))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3762 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND
       && optimize_function_for_speed_p (cfun))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 18839 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 18839 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 18839 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 20380 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode\n\
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || !CONST_INT_P (operands[2])\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))",
    __builtin_constant_p 
#line 20380 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    ? (int) 
#line 20380 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))",
    __builtin_constant_p (
#line 6936 "../.././gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 6938 "../.././gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    ? (int) (
#line 6936 "../.././gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 6938 "../.././gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    : -1 },
#line 4378 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_VECTOR_FP_CONVERTS\n\
   && optimize_insn_for_speed_p ()\n\
   && reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 4378 "../.././gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 4378 "../.././gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 7579 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 7579 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 7579 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 263 "../.././gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 263 "../.././gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 263 "../.././gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V32QImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V32QImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V32QImode, operands))
    : -1 },
#line 3912 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3912 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3912 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 9292 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 9292 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 9292 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 14483 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_BT || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 14483 "../.././gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    ? (int) 
#line 14483 "../.././gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))) && ( 1)",
    __builtin_constant_p (
#line 14355 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))) && 
#line 14357 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 14355 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || optimize_function_for_size_p (cfun))) && 
#line 14357 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13809 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 13809 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 13809 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 1834 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false)\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false)\n\
   && !reg_mentioned_p (operands[0], operands[1])\n\
   && !reg_mentioned_p (operands[0], operands[2])\n\
   && !reg_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 1834 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false)
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 1834 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false)
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 20121 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 20121 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 20121 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 11647 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 11647 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 11647 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 19920 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 19920 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 19920 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 341 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 16334 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16334 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16334 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5784 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE5\n\
   && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 13349 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 13349 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 13349 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 15565 "../.././gcc/config/i386/i386.md"
  { "TARGET_POPCNT",
    __builtin_constant_p 
#line 15565 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT)
    ? (int) 
#line 15565 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT)
    : -1 },
#line 5276 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5276 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5276 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 1441 "../.././gcc/config/i386/sse.md"
  { "(SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode))\n\
   && !TARGET_SSE5",
    __builtin_constant_p 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode))
   && !TARGET_SSE5)
    ? (int) 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode))
   && !TARGET_SSE5)
    : -1 },
  { "(TARGET_SSE5) && ( (reload_completed\n\
       || (!reg_mentioned_p (operands[0], operands[1])\n\
	   && !reg_mentioned_p (operands[0], operands[2]))))",
    __builtin_constant_p (
#line 10156 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5) && 
#line 10158 "../.././gcc/config/i386/sse.md"
( (reload_completed
       || (!reg_mentioned_p (operands[0], operands[1])
	   && !reg_mentioned_p (operands[0], operands[2])))))
    ? (int) (
#line 10156 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5) && 
#line 10158 "../.././gcc/config/i386/sse.md"
( (reload_completed
       || (!reg_mentioned_p (operands[0], operands[1])
	   && !reg_mentioned_p (operands[0], operands[2])))))
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 4738 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4738 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4738 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    : -1 },
#line 10564 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 10564 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 10564 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
#line 4284 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4284 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4284 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 16472 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
#line 5698 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 17090 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 17090 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 17090 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 18797 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18797 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18797 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
#line 5909 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)",
    __builtin_constant_p 
#line 5909 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2))
    ? (int) 
#line 5909 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2))
    : -1 },
#line 4899 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 13747 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13747 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13747 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 10583 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 10583 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 10583 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && ( 1)",
    __builtin_constant_p (
#line 14483 "../.././gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 14485 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 14483 "../.././gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 14485 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13719 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13719 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13719 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 10053 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 10053 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 10053 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands))
    : -1 },
#line 5276 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5276 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5276 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 12423 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12423 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12423 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 10980 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 10980 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 10980 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V16HImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16HImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16HImode, operands))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5773 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 720 "../.././gcc/config/i386/i386.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode)
    ? (int) 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode)
    : -1 },
#line 18761 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 18761 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 18761 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 5469 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5469 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5469 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress)) && 
#line 5080 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 4738 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4741 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4738 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4741 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(! TARGET_POPCNT) && ( reload_completed)",
    __builtin_constant_p (
#line 15827 "../.././gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 15829 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 15827 "../.././gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 15829 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 12559 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12559 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12559 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 946 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 946 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 946 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 11813 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11813 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11813 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 3660 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3660 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 3660 "../.././gcc/config/i386/i386.md"
(reload_completed
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1])))
    : -1 },
#line 11689 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 11689 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 11689 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 5075 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    : -1 },
  { "(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5134 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5
   && !(reload_completed || reload_in_progress)) && 
#line 5137 "../.././gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5134 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_SSE5
   && !(reload_completed || reload_in_progress)) && 
#line 5137 "../.././gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 3436 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 3436 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 3436 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
#line 545 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    ? (int) 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    : -1 },
#line 16181 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 16181 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 16181 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
  { "(TARGET_SSE2) && (TARGET_SSE4_2 || TARGET_SSE5)",
    __builtin_constant_p (
#line 5865 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 69 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2 || TARGET_SSE5))
    ? (int) (
#line 5865 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 69 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2 || TARGET_SSE5))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 12287 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 12287 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 12287 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 3834 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3834 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3834 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 6014 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands)",
    __builtin_constant_p 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands))
    ? (int) 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands))
    : -1 },
#line 6014 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands)",
    __builtin_constant_p 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands))
    ? (int) 
#line 6014 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands))
    : -1 },
#line 21373 "../.././gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 21373 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 21373 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 10226 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 10226 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 10226 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 20625 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn",
    __builtin_constant_p 
#line 20625 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    ? (int) 
#line 20625 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    : -1 },
#line 4860 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 3848 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3848 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3848 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 30 "../.././gcc/config/i386/sync.md"
  { "TARGET_64BIT && TARGET_CMPXCHG16B",
    __builtin_constant_p 
#line 30 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    ? (int) 
#line 30 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    : -1 },
#line 12185 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 12185 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 12185 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 4445 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4445 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4445 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 9902 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && !ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true)\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true)\n\
   && !reg_mentioned_p (operands[0], operands[1])\n\
   && !reg_mentioned_p (operands[0], operands[2])\n\
   && !reg_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 9902 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true)
   && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 9902 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, false, 1, true)
   && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    : -1 },
#line 5979 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 5979 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 5979 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13499 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 13499 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 13499 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 16117 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 16117 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 16117 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 4582 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4582 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4582 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 13823 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13823 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13823 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 6485 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6485 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6485 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && ( 1)",
    __builtin_constant_p (
#line 14520 "../.././gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 14523 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 14520 "../.././gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 14523 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1559 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 1559 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 1559 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
#line 10373 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, TImode, operands)",
    __builtin_constant_p 
#line 10373 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    ? (int) 
#line 10373 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    : -1 },
#line 9757 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 9757 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 9757 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 11528 "../.././gcc/config/i386/sse.md"
  { "TARGET_PCLMUL && TARGET_AVX",
    __builtin_constant_p 
#line 11528 "../.././gcc/config/i386/sse.md"
(TARGET_PCLMUL && TARGET_AVX)
    ? (int) 
#line 11528 "../.././gcc/config/i386/sse.md"
(TARGET_PCLMUL && TARGET_AVX)
    : -1 },
#line 20939 "../.././gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20939 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20939 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5114 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 18102 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 5066 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 5066 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 214 "../.././gcc/config/i386/mmx.md"
  { "TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 214 "../.././gcc/config/i386/mmx.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 214 "../.././gcc/config/i386/mmx.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 13704 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 13704 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 13704 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 19962 "../.././gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 7765 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 7765 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 7765 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 13453 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)",
    __builtin_constant_p 
#line 13453 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    ? (int) 
#line 13453 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    : -1 },
#line 5697 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5697 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 5697 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 5441 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5441 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5441 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 7708 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 7708 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 7708 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1529 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1529 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1529 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 380 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 380 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 380 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 14625 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14625 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14625 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 10751 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 10751 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 215 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 21 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 215 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 21 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands))
    : -1 },
#line 9887 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true)",
    __builtin_constant_p 
#line 9887 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true))
    ? (int) 
#line 9887 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, 2, true))
    : -1 },
#line 1606 "../.././gcc/config/i386/sse.md"
  { "AVX_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1606 "../.././gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1606 "../.././gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (DFmode))
    : -1 },
#line 21556 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 21556 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 21556 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 4507 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4507 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 4507 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 18656 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 18656 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 18656 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
#line 12202 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 12202 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 12202 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 16433 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16433 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16433 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 18921 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 19962 "../.././gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 19962 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 3822 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3822 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3822 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 5005 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 5005 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 5005 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 4764 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4764 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4764 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 17090 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 17090 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 17090 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 14660 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14660 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14660 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 954 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 954 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 954 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 5069 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 5069 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 5069 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 1441 "../.././gcc/config/i386/sse.md"
  { "(SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode))\n\
   && !TARGET_SSE5",
    __builtin_constant_p 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode))
   && !TARGET_SSE5)
    ? (int) 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode))
   && !TARGET_SSE5)
    : -1 },
#line 10408 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 10408 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 10408 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 21153 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_size_p () || !TARGET_SUB_ESP_4",
    __builtin_constant_p 
#line 21153 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_SUB_ESP_4)
    ? (int) 
#line 21153 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_SUB_ESP_4)
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V32QImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V32QImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V32QImode, operands))
    : -1 },
#line 4695 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 1358 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1358 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1358 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 14610 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14610 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14610 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 5784 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE5\n\
   && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 5784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 19943 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 19943 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 19943 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 16682 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 16682 "../.././gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 16682 "../.././gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 3389 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 3389 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 3389 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 20409 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && optimize_insn_for_speed_p ()\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 20409 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 20409 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 16491 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16491 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16491 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 16472 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 1388 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1388 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1388 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 3339 "../.././gcc/config/i386/i386.md"
  { "reload_completed || TARGET_80387",
    __builtin_constant_p 
#line 3339 "../.././gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    ? (int) 
#line 3339 "../.././gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    : -1 },
#line 4695 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4695 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 21294 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && optimize_insn_for_speed_p ()\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 21294 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 21294 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 9802 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_2",
    __builtin_constant_p 
#line 9802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    ? (int) 
#line 9802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    : -1 },
#line 3365 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3365 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    ? (int) 
#line 3365 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    : -1 },
#line 16304 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16304 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16304 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 12990 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 12990 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 12990 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 9576 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 9576 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 9576 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 5773 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V8SImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8SImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8SImode, operands))
    : -1 },
#line 15636 "../.././gcc/config/i386/i386.md"
  { "TARGET_BSWAP",
    __builtin_constant_p 
#line 15636 "../.././gcc/config/i386/i386.md"
(TARGET_BSWAP)
    ? (int) 
#line 15636 "../.././gcc/config/i386/i386.md"
(TARGET_BSWAP)
    : -1 },
#line 5765 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 5765 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 5765 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 935 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 935 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 935 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 5126 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 9056 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 9056 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 9056 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
#line 5099 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5099 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5099 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 20039 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 20039 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 20039 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 17076 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 17076 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 17076 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10808 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 10811 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13055 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13055 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13055 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 10538 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 10538 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 10538 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 9107 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 9107 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 9107 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 707 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode)",
    __builtin_constant_p 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    ? (int) 
#line 707 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    : -1 },
#line 1009 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
  { "(!TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 13647 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 13649 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 13647 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 13649 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6601 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6601 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6601 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
  { "(((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3032 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3032 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3032 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 909 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 909 "../.././gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 909 "../.././gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    : -1 },
#line 20881 "../.././gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20881 "../.././gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20881 "../.././gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 1455 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode) && !TARGET_SSE5",
    __builtin_constant_p 
#line 1455 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && !TARGET_SSE5)
    ? (int) 
#line 1455 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && !TARGET_SSE5)
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
#line 5228 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5228 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5228 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 16593 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16593 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16593 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9524 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9524 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9524 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4905 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 341 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 887 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 9318 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 9318 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 9318 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 3921 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0])",
    __builtin_constant_p 
#line 3921 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    ? (int) 
#line 3921 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    : -1 },
#line 12511 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12511 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12511 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 16472 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 16472 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 14709 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 14709 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 14709 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 4899 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4899 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 20799 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY",
    __builtin_constant_p 
#line 20799 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY)
    ? (int) 
#line 20799 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY)
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1320 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1322 "../.././gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1320 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1322 "../.././gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 545 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands))
    : -1 },
#line 5662 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 18839 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(reload_completed || reload_in_progress)) && 
#line 18842 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 18839 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(reload_completed || reload_in_progress)) && 
#line 18842 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 13472 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 13472 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 13472 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 4671 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4671 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4671 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 20300 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 20300 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 20300 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 21340 "../.././gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 21340 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 21340 "../.././gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
#line 16334 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16334 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16334 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 12253 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 12253 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 12253 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 11854 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11854 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11854 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 5678 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5678 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 9684 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 9684 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 9684 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 7013 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT\n\
   && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7013 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7013 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 16269 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16269 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16269 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 3248 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)\n\
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)\n\
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)\n\
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))",
    __builtin_constant_p 
#line 3248 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    ? (int) 
#line 3248 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 9388 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 9388 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 9388 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 1487 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1487 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1487 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 19972 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 19972 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 19972 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 10884 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10884 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10884 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 3593 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && MEM_P (operands[1])\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == SFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3593 "../.././gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3593 "../.././gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 3473 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3473 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3473 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5513 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5513 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5513 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15395 "../.././gcc/config/i386/i386.md"
(reload_completed) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15395 "../.././gcc/config/i386/i386.md"
(reload_completed) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 9077 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 9077 "../.././gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 9077 "../.././gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
#line 6968 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 6968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE)
    ? (int) 
#line 6968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE)
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 1581 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT",
    __builtin_constant_p 
#line 1581 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    ? (int) 
#line 1581 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4DFmode)\n\
       || register_operand (operands[1], V4DFmode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode)))
    : -1 },
#line 720 "../.././gcc/config/i386/i386.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode)
    ? (int) 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode)
    : -1 },
#line 6207 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6207 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6207 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 11547 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 11547 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 11547 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 21578 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)\n\
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC",
    __builtin_constant_p 
#line 21578 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    ? (int) 
#line 21578 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    : -1 },
#line 241 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 241 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 241 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
#line 13685 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)",
    __builtin_constant_p 
#line 13685 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    ? (int) 
#line 13685 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10902 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10902 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10902 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 11606 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
     || !TARGET_PARTIAL_FLAG_REG_STALL\n\
     || (operands[2] == const1_rtx\n\
	 && (TARGET_SHIFT1\n\
	     || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 11606 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
     || !TARGET_PARTIAL_FLAG_REG_STALL
     || (operands[2] == const1_rtx
	 && (TARGET_SHIFT1
	     || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 11606 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
     || !TARGET_PARTIAL_FLAG_REG_STALL
     || (operands[2] == const1_rtx
	 && (TARGET_SHIFT1
	     || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 20321 "../.././gcc/config/i386/i386.md"
  { "TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 20321 "../.././gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    ? (int) 
#line 20321 "../.././gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 954 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 954 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 954 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 9721 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_2\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 9721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 9721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
#line 5698 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 5698 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (IOR, V4DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (IOR, V4DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (IOR, V4DFmode, operands))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 17047 "../.././gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 17047 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 17047 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 13512 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 13512 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 13512 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 20487 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 20487 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 20487 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 10794 "../.././gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))",
    __builtin_constant_p 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    ? (int) 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    : -1 },
#line 5454 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5454 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5454 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 20968 "../.././gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20968 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20968 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 18921 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 18921 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 11321 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 11321 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 11321 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands))
    : -1 },
#line 6998 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0])))",
    __builtin_constant_p 
#line 6998 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    ? (int) 
#line 6998 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    : -1 },
#line 1211 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1211 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1211 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 7755 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT || TARGET_SSE2",
    __builtin_constant_p 
#line 7755 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT || TARGET_SSE2)
    ? (int) 
#line 7755 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT || TARGET_SSE2)
    : -1 },
#line 7340 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7340 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7340 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5257 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5257 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5257 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 20589 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ! TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20589 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20589 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5242 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5242 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5242 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 5498 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5498 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5498 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 15231 "../.././gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 15231 "../.././gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 15231 "../.././gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
#line 913 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 913 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 913 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 20672 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
        && (!MEM_P (operands[0])\n\
            || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], HImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20672 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20672 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 13173 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13173 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13173 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 10950 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10950 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10950 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 11585 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 11585 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 11585 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4825 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3693 "../.././gcc/config/i386/i386.md"
  { "reload_completed && TARGET_ZERO_EXTEND_WITH_AND\n\
   && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3693 "../.././gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND
   && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3693 "../.././gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND
   && optimize_function_for_speed_p (cfun))
    : -1 },
#line 8600 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 8600 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 8600 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 11217 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 11217 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 11217 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 8179 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8179 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8179 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 266 "../.././gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 266 "../.././gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 266 "../.././gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 6833 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6833 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6833 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6031 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6038 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6031 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6038 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16415 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16415 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16415 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 2874 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2874 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2874 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 5187 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5187 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5187 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 5126 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 5126 "../.././gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 2475 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 1441 "../.././gcc/config/i386/sse.md"
  { "(SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode))\n\
   && !TARGET_SSE5",
    __builtin_constant_p 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode))
   && !TARGET_SSE5)
    ? (int) 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode))
   && !TARGET_SSE5)
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 5588 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 5588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 5588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 10574 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 7540 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 7540 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 7540 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 12382 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12382 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12382 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 8569 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun) || TARGET_USE_CLTD",
    __builtin_constant_p 
#line 8569 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)
    ? (int) 
#line 8569 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)
    : -1 },
#line 20958 "../.././gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20958 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20958 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 12496 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12496 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12496 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 12057 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 12057 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 12057 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 10840 "../.././gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (SFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 10840 "../.././gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 4860 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 16415 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16415 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16415 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 10239 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 10239 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 10239 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 341 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 341 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 935 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 935 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 935 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 11773 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 11773 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 11773 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 9150 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 9150 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 9150 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 3803 "../.././gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3803 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3803 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    : -1 },
#line 19775 "../.././gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 19775 "../.././gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 19775 "../.././gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 5513 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5513 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5513 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 4639 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 4639 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
#line 1775 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true)\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true)\n\
   && !reg_mentioned_p (operands[0], operands[1])\n\
   && !reg_mentioned_p (operands[0], operands[2])\n\
   && !reg_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 1775 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true)
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 1775 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && !ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true)
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true)
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[0], operands[2])
   && !reg_mentioned_p (operands[0], operands[3]))
    : -1 },
#line 10846 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5\n\
   && (register_operand (operands[1], V8HImode)\n\
       || register_operand (operands[2], V16QImode))",
    __builtin_constant_p 
#line 10846 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V16QImode)))
    ? (int) 
#line 10846 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V16QImode)))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 7763 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 7763 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2)
    ? (int) 
#line 7763 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2)
    : -1 },
#line 12461 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12461 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12461 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 7740 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 7740 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 7740 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 12693 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12693 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12693 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 16361 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16361 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16361 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5577 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5577 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5577 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 1441 "../.././gcc/config/i386/sse.md"
  { "(SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode))\n\
   && !TARGET_SSE5",
    __builtin_constant_p 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode))
   && !TARGET_SSE5)
    ? (int) 
#line 1441 "../.././gcc/config/i386/sse.md"
((SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode))
   && !TARGET_SSE5)
    : -1 },
#line 853 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 853 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 853 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 5114 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 5114 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 7678 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 7678 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    ? (int) 
#line 7678 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    : -1 },
#line 10117 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true)",
    __builtin_constant_p 
#line 10117 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true))
    ? (int) 
#line 10117 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, false, -1, true))
    : -1 },
#line 2132 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true)",
    __builtin_constant_p 
#line 2132 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true))
    ? (int) 
#line 2132 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true))
    : -1 },
#line 16543 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 16543 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 16543 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 20021 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 20021 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 20021 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V8SImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8SImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8SImode, operands))
    : -1 },
#line 1916 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 1916 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    ? (int) 
#line 1916 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    : -1 },
#line 15585 "../.././gcc/config/i386/i386.md"
  { "TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 15585 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 15585 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 1569 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT",
    __builtin_constant_p 
#line 1569 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    ? (int) 
#line 1569 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8SFmode)\n\
       || register_operand (operands[1], V8SFmode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode)))
    : -1 },
#line 16269 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16269 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16269 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 14250 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 14250 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    ? (int) 
#line 14250 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    : -1 },
#line 2496 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? epilogue_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2496 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2496 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5829 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 672 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5829 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 672 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 11501 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])\n\
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4",
    __builtin_constant_p 
#line 11501 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    ? (int) 
#line 11501 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    : -1 },
#line 1315 "../.././gcc/config/i386/i386.md"
  { "TARGET_SAHF",
    __builtin_constant_p 
#line 1315 "../.././gcc/config/i386/i386.md"
(TARGET_SAHF)
    ? (int) 
#line 1315 "../.././gcc/config/i386/i386.md"
(TARGET_SAHF)
    : -1 },
#line 205 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 12708 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12708 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 12708 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 4601 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 10911 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10911 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10911 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 3811 "../.././gcc/config/i386/i386.md"
  { "(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))\n\
   && reload_completed",
    __builtin_constant_p 
#line 3811 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && reload_completed)
    ? (int) 
#line 3811 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && reload_completed)
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V32QImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V32QImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V32QImode, operands))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && ( reload_completed)",
    __builtin_constant_p (
#line 257 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 259 "../.././gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 257 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 259 "../.././gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 257 "../.././gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES",
    __builtin_constant_p 
#line 257 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    ? (int) 
#line 257 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    : -1 },
#line 189 "../.././gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 189 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 189 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 9209 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun) || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)",
    __builtin_constant_p 
#line 9209 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun) || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    ? (int) 
#line 9209 "../.././gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun) || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands))
    : -1 },
#line 8623 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 8623 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 8623 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 10929 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false)",
    __builtin_constant_p 
#line 10929 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false))
    ? (int) 
#line 10929 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false))
    : -1 },
#line 17035 "../.././gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 17035 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 17035 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 21624 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 21624 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 21624 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 1559 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 1559 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 1559 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    : -1 },
#line 168 "../.././gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 168 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 3530 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && reload_completed\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 3530 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 3530 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 6997 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffff) != 0x8000",
    __builtin_constant_p 
#line 6997 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    ? (int) 
#line 6997 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (AND, V4DFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (AND, V4DFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (AND, V4DFmode, operands))
    : -1 },
#line 889 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 889 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_SSE_MATH)
    ? (int) 
#line 889 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_SSE_MATH)
    : -1 },
#line 5773 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 16319 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16319 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16319 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11048 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 11048 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 11048 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1281 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1281 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 2551 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE || TARGET_64BIT",
    __builtin_constant_p 
#line 2551 "../.././gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    ? (int) 
#line 2551 "../.././gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    : -1 },
#line 8427 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 8427 "../.././gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 8427 "../.././gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 19911 "../.././gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 19911 "../.././gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 19911 "../.././gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 15604 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 15604 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 15604 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 16769 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16769 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16769 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 14520 "../.././gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f",
    __builtin_constant_p 
#line 14520 "../.././gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    ? (int) 
#line 14520 "../.././gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 20817 "../.././gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && GENERAL_REGNO_P (REGNO (operands[0]))\n\
   && GENERAL_REGNO_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 20817 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    ? (int) 
#line 20817 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    : -1 },
#line 2288 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && reload_completed",
    __builtin_constant_p 
#line 2288 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed)
    ? (int) 
#line 2288 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed)
    : -1 },
#line 11482 "../.././gcc/config/i386/sse.md"
  { "TARGET_AES && TARGET_AVX",
    __builtin_constant_p 
#line 11482 "../.././gcc/config/i386/sse.md"
(TARGET_AES && TARGET_AVX)
    ? (int) 
#line 11482 "../.././gcc/config/i386/sse.md"
(TARGET_AES && TARGET_AVX)
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V16HImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16HImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16HImode, operands))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    : -1 },
#line 1422 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1422 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1422 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 7802 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && TARGET_64BIT",
    __builtin_constant_p 
#line 7802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    ? (int) 
#line 7802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    : -1 },
#line 18095 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 18095 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 18095 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 15645 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 15645 "../.././gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    ? (int) 
#line 15645 "../.././gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    : -1 },
#line 5089 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5089 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5089 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 10991 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 10991 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 10991 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 21616 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 21616 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 21616 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
  { "(((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10574 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10574 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13545 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 13545 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 13545 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 18109 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 18109 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 18102 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 18102 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 5257 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5257 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5257 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 4001 "../.././gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 4001 "../.././gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 4001 "../.././gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 4949 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4949 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4949 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 2671 "../.././gcc/config/i386/i386.md"
  { "reload_completed && !SSE_REG_P (operands[0])\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 2671 "../.././gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 2671 "../.././gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 9602 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 9602 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 9602 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 5257 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5257 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5257 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 15972 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 15972 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 15972 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands))
    : -1 },
#line 6757 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && TARGET_64BIT",
    __builtin_constant_p 
#line 6757 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    ? (int) 
#line 6757 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    : -1 },
#line 10922 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10922 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10922 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 11902 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11902 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11902 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 2613 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2613 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2613 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4776 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 13438 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATE, DImode, operands)",
    __builtin_constant_p 
#line 13438 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, DImode, operands))
    ? (int) 
#line 13438 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, DImode, operands))
    : -1 },
#line 10025 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 10025 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 10025 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 18884 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18884 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 18884 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 18656 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 18656 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 18656 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
#line 1517 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)",
    __builtin_constant_p 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode))
    ? (int) 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode))
    : -1 },
#line 1047 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1047 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1047 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 6116 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 6118 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6116 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 6118 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4846 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4846 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 983 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 983 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 7497 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands)",
    __builtin_constant_p 
#line 7497 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    ? (int) 
#line 7497 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    : -1 },
#line 16433 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16433 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16433 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8815 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8815 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8815 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 7079 "../.././gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7079 "../.././gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7079 "../.././gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 871 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 871 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 871 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V4DImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4DImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4DImode, operands))
    : -1 },
#line 16304 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 16304 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 16304 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 545 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 545 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
#line 5454 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5454 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5454 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 3682 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 3682 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 3682 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 20710 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != AX_REG\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20710 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20710 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 10275 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10275 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10275 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 4818 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 15451 "../.././gcc/config/i386/i386.md"
  { "!TARGET_CMOVE",
    __builtin_constant_p 
#line 15451 "../.././gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    ? (int) 
#line 15451 "../.././gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    : -1 },
#line 6876 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6876 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6876 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
  { "(reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15395 "../.././gcc/config/i386/i386.md"
(reload_completed) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15395 "../.././gcc/config/i386/i386.md"
(reload_completed) && 
#line 720 "../.././gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 20121 "../.././gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 20121 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 20121 "../.././gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 20833 "../.././gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) \n\
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1])))",
    __builtin_constant_p 
#line 20833 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    ? (int) 
#line 20833 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    : -1 },
#line 3051 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 5228 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5228 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5228 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 591 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (MULT, V8SFmode, operands)",
    __builtin_constant_p 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MULT, V8SFmode, operands))
    ? (int) 
#line 591 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MULT, V8SFmode, operands))
    : -1 },
#line 10495 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 10495 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 10495 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9248 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 9248 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 9248 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 10601 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4628 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 4628 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 5513 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5513 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5513 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1744 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && TARGET_FUSED_MADD\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false)",
    __builtin_constant_p 
#line 1744 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false))
    ? (int) 
#line 1744 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, false))
    : -1 },
#line 1617 "../.././gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1617 "../.././gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1617 "../.././gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 11022 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 11022 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 11022 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 3641 "../.././gcc/config/i386/i386.md"
  { "reload_completed && FP_REGNO_P (REGNO (operands[0]))\n\
   && (standard_80387_constant_p (operands[1]) == 8\n\
       || standard_80387_constant_p (operands[1]) == 9)",
    __builtin_constant_p 
#line 3641 "../.././gcc/config/i386/i386.md"
(reload_completed && FP_REGNO_P (REGNO (operands[0]))
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    ? (int) 
#line 3641 "../.././gcc/config/i386/i386.md"
(reload_completed && FP_REGNO_P (REGNO (operands[0]))
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    : -1 },
#line 5454 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5454 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5454 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9990 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9990 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9990 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 5454 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5454 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5454 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 14101 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE",
    __builtin_constant_p 
#line 14101 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    ? (int) 
#line 14101 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    : -1 },
#line 1469 "../.././gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 1469 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    ? (int) 
#line 1469 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    : -1 },
#line 20549 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 20549 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 20549 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 21787 "../.././gcc/config/i386/i386.md"
  { "TARGET_3DNOW && TARGET_64BIT",
    __builtin_constant_p 
#line 21787 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    ? (int) 
#line 21787 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 12399 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && INTVAL (operands[2]) == 31\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12399 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12399 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 10794 "../.././gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))",
    __builtin_constant_p 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    ? (int) 
#line 10794 "../.././gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    : -1 },
#line 15959 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 15959 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 15959 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 917 "../.././gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 917 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 917 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
#line 5773 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 5773 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 1539 "../.././gcc/config/i386/sse.md"
  { "AVX256_VEC_FLOAT_MODE_P (V4DFmode)",
    __builtin_constant_p 
#line 1539 "../.././gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V4DFmode))
    ? (int) 
#line 1539 "../.././gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V4DFmode))
    : -1 },
#line 13153 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13153 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13153 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 3071 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
           && optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]))\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 3071 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 3071 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]))
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 7251 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_AVX",
    __builtin_constant_p 
#line 7251 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_AVX)
    ? (int) 
#line 7251 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_AVX)
    : -1 },
#line 20438 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ! TARGET_FAST_PREFIX\n\
   && optimize_insn_for_speed_p ()\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 20438 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 20438 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
  { "(TARGET_SSE2\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5187 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(reload_completed || reload_in_progress)) && 
#line 5190 "../.././gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5187 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(reload_completed || reload_in_progress)) && 
#line 5190 "../.././gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 13273 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 13273 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 13273 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 1260 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1260 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1260 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8SImode)\n\
       || register_operand (operands[1], V8SImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode)))
    : -1 },
#line 7783 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 7783 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 7783 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 6081 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6087 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6081 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6087 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9945 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 9945 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 9945 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 11540 "../.././gcc/config/i386/sse.md"
  { "TARGET_PCLMUL",
    __builtin_constant_p 
#line 11540 "../.././gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    ? (int) 
#line 11540 "../.././gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    : -1 },
#line 12593 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12593 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 12593 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 14733 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 14733 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 14733 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
  { "(TARGET_POPCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15565 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 675 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15565 "../.././gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 675 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9337 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 9337 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 9337 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 10601 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 10601 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 995 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 12660 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12660 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 12660 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || !TARGET_PARTIAL_FLAG_REG_STALL)
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 1030 "../.././gcc/config/i386/sse.md"
  { "AVX128_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 1030 "../.././gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 1030 "../.././gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
#line 4715 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4715 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4715 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 1432 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1432 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1432 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 5972 "../.././gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 5972 "../.././gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 1260 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1260 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1260 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 21755 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 21755 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    ? (int) 
#line 21755 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    : -1 },
#line 5483 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5483 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5483 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 21737 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && !TARGET_64BIT",
    __builtin_constant_p 
#line 21737 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    ? (int) 
#line 21737 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    : -1 },
#line 5276 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5276 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5276 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 2727 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && MEM_P (operands[1])\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 2727 "../.././gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 2727 "../.././gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 21961 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE4_2 && TARGET_64BIT",
    __builtin_constant_p 
#line 21961 "../.././gcc/config/i386/i386.md"
(TARGET_SSE4_2 && TARGET_64BIT)
    ? (int) 
#line 21961 "../.././gcc/config/i386/i386.md"
(TARGET_SSE4_2 && TARGET_64BIT)
    : -1 },
#line 611 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 611 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 611 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 10013 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 10013 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 10013 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 7084 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 7084 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 7084 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 1230 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1230 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1230 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 5469 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5469 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5469 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 6353 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6353 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6353 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 8558 "../.././gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 8558 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD)
    ? (int) 
#line 8558 "../.././gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun) && !TARGET_USE_CLTD)
    : -1 },
#line 6954 "../.././gcc/config/i386/sse.md"
  { "reload_completed",
    __builtin_constant_p 
#line 6954 "../.././gcc/config/i386/sse.md"
(reload_completed)
    ? (int) 
#line 6954 "../.././gcc/config/i386/sse.md"
(reload_completed)
    : -1 },
#line 13588 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 13588 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 13588 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 21161 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_size_p () || !TARGET_SUB_ESP_8",
    __builtin_constant_p 
#line 21161 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_SUB_ESP_8)
    ? (int) 
#line 21161 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p () || !TARGET_SUB_ESP_8)
    : -1 },
#line 7289 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7289 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7289 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE)
    : -1 },
#line 5960 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V4DImode, operands)",
    __builtin_constant_p 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4DImode, operands))
    ? (int) 
#line 5960 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4DImode, operands))
    : -1 },
#line 21568 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 21568 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 21568 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_SSE4_2\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 9721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress)) && 
#line 9724 "../.././gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 9721 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && !(reload_completed || reload_in_progress)) && 
#line 9724 "../.././gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 2565 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2565 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2565 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 3749 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND\n\
       || optimize_function_for_size_p (cfun))\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3749 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND
       || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3749 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND
       || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 13105 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 13105 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 13105 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 5214 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5214 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5214 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 5214 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5214 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5214 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 1547 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (XOR, V8SFmode, operands)",
    __builtin_constant_p 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (XOR, V8SFmode, operands))
    ? (int) 
#line 1547 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (XOR, V8SFmode, operands))
    : -1 },
#line 734 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    ? (int) 
#line 734 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    : -1 },
#line 15112 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 15112 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 15112 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 2315 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2315 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2315 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 14213 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && !TARGET_SSE5",
    __builtin_constant_p 
#line 14213 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && !TARGET_SSE5)
    ? (int) 
#line 14213 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && !TARGET_SSE5)
    : -1 },
#line 18808 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 18808 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 18808 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 9622 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 9622 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 9622 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 2340 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2340 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 2340 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 1276 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1276 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 1009 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 995 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 995 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 1567 "../.././gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1567 "../.././gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 6081 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 6081 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 6081 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
#line 1030 "../.././gcc/config/i386/sse.md"
  { "AVX128_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 1030 "../.././gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 1030 "../.././gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
#line 5703 "../.././gcc/config/i386/i386.md"
  { "(TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)\n\
   && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5703 "../.././gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 5703 "../.././gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 7600 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 7600 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 7600 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 5607 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 5607 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 5607 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 10095 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 10095 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 10095 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 1606 "../.././gcc/config/i386/sse.md"
  { "AVX_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1606 "../.././gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1606 "../.././gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (SFmode))
    : -1 },
#line 15443 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 15443 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 15443 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 13670 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATERT, DImode, operands)",
    __builtin_constant_p 
#line 13670 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    ? (int) 
#line 13670 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 11614 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && TARGET_64BIT",
    __builtin_constant_p 
#line 11614 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_64BIT)
    ? (int) 
#line 11614 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_64BIT)
    : -1 },
#line 18858 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS",
    __builtin_constant_p 
#line 18858 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    ? (int) 
#line 18858 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V16HImode)\n\
       || register_operand (operands[1], V16HImode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode)))
    : -1 },
#line 4669 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 4669 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 3001 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 3001 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 3001 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    : -1 },
#line 1517 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)",
    __builtin_constant_p 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode))
    ? (int) 
#line 1517 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode))
    : -1 },
#line 8486 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)",
    __builtin_constant_p 
#line 8486 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_function_for_size_p (cfun) || TARGET_USE_CLTD))
    ? (int) 
#line 8486 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_function_for_size_p (cfun) || TARGET_USE_CLTD))
    : -1 },
#line 7753 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 7753 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 7753 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 5662 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
#line 5662 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 5662 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 8774 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8774 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8774 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 20686 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
        && (!MEM_P (operands[0])\n\
            || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], QImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20686 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20686 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
        && (!MEM_P (operands[0])
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 1761 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && TARGET_FUSED_MADD\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true)",
    __builtin_constant_p 
#line 1761 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true))
    ? (int) 
#line 1761 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, true))
    : -1 },
#line 5214 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5214 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5214 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 7046 "../.././gcc/config/i386/sse.md"
  { "!TARGET_64BIT\n\
   && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7046 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7046 "../.././gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 12437 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 12437 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 12437 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 11528 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 11528 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 11528 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 4434 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 4434 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 4434 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6643 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6643 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6643 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4757 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4757 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4757 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 5588 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 5588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 5588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 510 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 510 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 510 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 806 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 806 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 806 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 7271 "../.././gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE4_1",
    __builtin_constant_p 
#line 7271 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    ? (int) 
#line 7271 "../.././gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    : -1 },
#line 21279 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 21279 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 21279 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 1341 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1341 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1341 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 5995 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 5995 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1364 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1364 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1364 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 1802 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && TARGET_FUSED_MADD\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true)",
    __builtin_constant_p 
#line 1802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true))
    ? (int) 
#line 1802 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 1, true))
    : -1 },
#line 4658 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 4658 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
#line 12861 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? epilogue_completed : reload_completed)",
    __builtin_constant_p 
#line 12861 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed))
    ? (int) 
#line 12861 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed))
    : -1 },
#line 5513 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5513 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5513 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 5137 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 5137 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 161 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 161 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 1053 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 1053 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 11957 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX",
    __builtin_constant_p 
#line 11957 "../.././gcc/config/i386/sse.md"
(TARGET_AVX)
    ? (int) 
#line 11957 "../.././gcc/config/i386/sse.md"
(TARGET_AVX)
    : -1 },
#line 5765 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE5",
    __builtin_constant_p 
#line 5765 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5)
    ? (int) 
#line 5765 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE5)
    : -1 },
#line 2886 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2886 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2886 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 13766 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 13766 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 13766 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 5569 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 5569 "../.././gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 8645 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSSE3",
    __builtin_constant_p 
#line 8645 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3)
    ? (int) 
#line 8645 "../.././gcc/config/i386/sse.md"
(TARGET_SSSE3)
    : -1 },
#line 525 "../.././gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands)",
    __builtin_constant_p 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands))
    ? (int) 
#line 525 "../.././gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands))
    : -1 },
#line 21235 "../.././gcc/config/i386/i386.md"
  { "optimize_insn_for_size_p ()",
    __builtin_constant_p 
#line 21235 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p ())
    ? (int) 
#line 21235 "../.././gcc/config/i386/i386.md"
(optimize_insn_for_size_p ())
    : -1 },
#line 4634 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4634 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4634 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 5483 "../.././gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5483 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5483 "../.././gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5197 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5197 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5197 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 9783 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 9783 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 9783 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 1862 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE5 && TARGET_FUSED_MADD\n\
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false)",
    __builtin_constant_p 
#line 1862 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false))
    ? (int) 
#line 1862 "../.././gcc/config/i386/sse.md"
(TARGET_SSE5 && TARGET_FUSED_MADD
   && ix86_sse5_valid_op_p (operands, insn, 4, true, 2, false))
    : -1 },
#line 5634 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && TARGET_SSE",
    __builtin_constant_p 
#line 5634 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && TARGET_SSE)
    ? (int) 
#line 5634 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && TARGET_SSE)
    : -1 },
#line 5498 "../.././gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5498 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5498 "../.././gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 10635 "../.././gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 10635 "../.././gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 10635 "../.././gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 7564 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 7564 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 7564 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 9634 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 9634 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 9634 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 715 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)",
    __builtin_constant_p 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    ? (int) 
#line 715 "../.././gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    : -1 },
#line 15691 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_ABM",
    __builtin_constant_p 
#line 15691 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_ABM)
    ? (int) 
#line 15691 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_ABM)
    : -1 },
#line 4818 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4818 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 13531 "../.././gcc/config/i386/i386.md"
  { "(TARGET_SHIFT1 || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 13531 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 13531 "../.././gcc/config/i386/i386.md"
((TARGET_SHIFT1 || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 5146 "../.././gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 14733 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 14733 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 14733 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 5075 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 5075 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 13956 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 13956 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 13956 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 15806 "../.././gcc/config/i386/i386.md"
  { "! TARGET_POPCNT",
    __builtin_constant_p 
#line 15806 "../.././gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    ? (int) 
#line 15806 "../.././gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    : -1 },
#line 6778 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 6778 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 6778 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 5983 "../.././gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 5983 "../.././gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 12016 "../.././gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 12016 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 12016 "../.././gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5146 "../.././gcc/config/i386/i386.md"
(((TARGET_80387
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && !(reload_completed || reload_in_progress)) && 
#line 5160 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4860 "../.././gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4860 "../.././gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 17956 "../.././gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 17956 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 17956 "../.././gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 20313 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 20313 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 20313 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 1405 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1405 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1405 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
  { "(!TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 15451 "../.././gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 15453 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 15451 "../.././gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 15453 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
