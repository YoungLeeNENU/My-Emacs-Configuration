/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_0[] = {
  "test{l}\t%0, %0",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{w}\t%0, %0",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_6[] = {
  "test{b}\t%0, %0",
  "cmp{b}\t{$0, %0|%0, 0}",
};

static const char *
output_13 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1097 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_15 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1144 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_17 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1178 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1178 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1213 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 1);
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1263 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1263 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1316 "../.././gcc/config/i386/i386.md"
{
#ifdef HAVE_AS_IX86_SAHF
  return "sahf";
#else
  return ".byte\t0x9e";
#endif
}
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1337 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1354 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1372 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1391 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1408 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1426 "../.././gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1520 "../.././gcc/config/i386/i386.md"
{
  operands[1] = constm1_rtx;
  return "or{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_41 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1534 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      if (get_attr_mode (insn) == MODE_TI)
        return "%vpxor\t%0, %d0";
      return "%vxorps\t%0, %d0";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "%vmovd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "%vmovss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%1, %0|%0, %1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1675 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1851 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]));
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_57 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1994 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_59 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2099 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_63[] = {
  "#",
  "#",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovdqa\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2528 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vxorps\t%0, %0, %0";
    case 1:
    case 2:
      if (misaligned_operand (operands[0], OImode)
	  || misaligned_operand (operands[1], OImode))
	return "vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqa\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_65 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2567 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vxorps\t%0, %d0";
      else
	return "%vpxor\t%0, %d0";
    case 1:
    case 2:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	 else
	   return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	 else
	   return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2702 "../.././gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2761 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";
    case 5:
      if (get_attr_mode (insn) == MODE_TI)
	return "%vpxor\t%0, %d0";
      else
	return "%vxorps\t%0, %d0";
    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      else
	return "%vmovss\t{%1, %d0|%d0, %1}";
    case 7:
      if (TARGET_AVX)
	return REG_P (operands[1]) ? "vmovss\t{%1, %0, %0|%0, %0, %1}"
				   : "vmovss\t{%1, %0|%0, %1}";
      else
	return "movss\t{%1, %0|%0, %1}";
    case 8:
      return "%vmovss\t{%1, %0|%0, %1}";

    case 9: case 10: case 14: case 15:
      return "movd\t{%1, %0|%0, %1}";
    case 12: case 13:
      return "%vmovd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2851 "../.././gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2875 "../.././gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_70 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2887 "../.././gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2934 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";
    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "%vxorps\t%0, %d0";
	case MODE_V2DF:
	  return "%vxorpd\t%0, %d0";
	case MODE_TI:
	  return "%vpxor\t%0, %d0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "%vmovapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]) && REG_P (operands[1]))
		return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovsd\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]))
		return "vmovlpd\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovlpd\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  if (TARGET_AVX)
	    {
	      if (REG_P (operands[0]))
		return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	      else
		return "vmovlps\t{%1, %0|%0, %1}";
	    }
	  else
	    return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_72 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3215 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "xorps\t%0, %0";
	case MODE_V2DF:
	  return "xorpd\t%0, %0";
	case MODE_TI:
	  return "pxor\t%0, %0";
	default:
	  gcc_unreachable ();
	}
    case 6:
    case 7:
    case 8:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "movdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  return "movsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "movlpd\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable();
    }
}
}

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3340 "../.././gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3366 "../.././gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3378 "../.././gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3414 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3441 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3: case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_78 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3475 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      else
	return "%vmovdqa\t{%1, %0|%0, %1}";
    case 2:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vxorps\t%0, %d0";
      else
	return "%vpxor\t%0, %d0";
    case 3:
    case 4:
	return "#";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_79 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3519 "../.././gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_80 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3628 "../.././gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char * const output_89[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4073 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4126 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4276 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return "%vcvtss2sd\t{%1, %d0|%d0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4307 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4336 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4336 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4424 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4456 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4466 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";

    default:
      return "#";
    }
}
}

static const char *
output_103 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4489 "../.././gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    default:
      return "#";
    }
}
}

static const char *
output_104 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4510 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_105 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4556 "../.././gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4570 "../.././gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4583 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_108 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4583 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_109 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4592 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4592 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4851 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4851 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4851 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 1);
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4994 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4994 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_152[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_153[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_156[] = {
  "fild%z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_157[] = {
  "fild%z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_158[] = {
  "fild%z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_159[] = {
  "fild%z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_170[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_171[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_172[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_173[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_174[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_175[] = {
  "fild%z1\t%1",
  "#",
};

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6402 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
	{
  	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6558 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6648 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6741 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{l}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6783 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6835 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6878 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_220 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6920 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6959 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6999 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{w}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7039 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7086 "../.././gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7136 "../.././gcc/config/i386/i386.md"
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7182 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.  */
      if (CONST_INT_P (operands[1])
	  && INTVAL (operands[1]) < 0)
	{
	  operands[1] = GEN_INT (-INTVAL (operands[1]));
	  return "sub{b}\t{%1, %0|%0, %1}";
	}
      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7225 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
		          && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7263 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7302 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (CONST_INT_P (operands[2])
	      && INTVAL (operands[2]) == 255))
        return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (INTVAL (operands[2]) < 0)
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "add{b}\t{%2, %0|%0, %2}";
        }
      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7342 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
	  return "dec{b}\t%0";
	}

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (CONST_INT_P (operands[2])
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7386 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx
		      || (CONST_INT_P (operands[2])
			  && INTVAL (operands[2]) == 255));
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_247[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_248[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8842 "../.././gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (CONST_INT_P (operands[1]) && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9172 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	gcc_assert (CONST_INT_P (operands[2]));
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else
	  {
	    gcc_assert (INTVAL (operands[2]) == 0xffff);
	    mode = HImode;
	  }

	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bl|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wl|x}\t{%1,%0|%0, %1}";
      }

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9293 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (CONST_INT_P (operands[2]));
      gcc_assert (INTVAL (operands[2]) == 0xff);
      return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_277[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9368 "../.././gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_292[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_306[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_352[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *
output_354 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11095 "../.././gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11108 "../.././gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "pslldq\t{%2, %0|%0, %2}";
}
}

static const char *
output_358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11462 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t%0, %0";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11613 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_360 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11654 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_361 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11737 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_362 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11775 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_363 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11820 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_364 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11861 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_365 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11904 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_366 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11960 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_367 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12023 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_368 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12064 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (operands[2] == const1_rtx
	       && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_371[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_373[] = {
  "sar{l}\t{%2, %0|%0, %2}",
  "sar{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_379[] = {
  "sar{w}\t{%2, %0|%0, %2}",
  "sar{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_386[] = {
  "sar{b}\t{%2, %0|%0, %2}",
  "sar{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_387[] = {
  "sar{b}\t{%1, %0|%0, %1}",
  "sar{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12815 "../.././gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12828 "../.././gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);
  return "psrldq\t{%2, %0|%0, %2}";
}
}

static const char * const output_396[] = {
  "shr{l}\t{%2, %0|%0, %2}",
  "shr{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_402[] = {
  "shr{w}\t{%2, %0|%0, %2}",
  "shr{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_409[] = {
  "shr{b}\t{%2, %0|%0, %2}",
  "shr{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_410[] = {
  "shr{b}\t{%1, %0|%0, %1}",
  "shr{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_417[] = {
  "rol{l}\t{%2, %0|%0, %2}",
  "rol{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_419[] = {
  "rol{w}\t{%2, %0|%0, %2}",
  "rol{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_422[] = {
  "rol{b}\t{%1, %0|%0, %1}",
  "rol{b}\t{%b1, %0|%0, %b1}",
};

static const char * const output_423[] = {
  "rol{b}\t{%2, %0|%0, %2}",
  "rol{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_426[] = {
  "ror{l}\t{%2, %0|%0, %2}",
  "ror{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_428[] = {
  "ror{w}\t{%2, %0|%0, %2}",
  "ror{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_431[] = {
  "ror{b}\t{%2, %0|%0, %2}",
  "ror{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_432[] = {
  "ror{b}\t{%1, %0|%0, %1}",
  "ror{b}\t{%b1, %0|%0, %b1}",
};

static const char *
output_464 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14968 "../.././gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_465 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14982 "../.././gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char * const output_466[] = {
  "jmp\t%P0",
  "jmp\t%A0",
};

static const char *
output_467 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15024 "../.././gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *
output_468 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15036 "../.././gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[0], Pmode))
    return "call\t%P0";
  return "call\t%A0";
}
}

static const char * const output_469[] = {
  "jmp\t%P0",
  "jmp\t%A0",
};

static const char *
output_478 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15294 "../.././gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_ALIGN
  ASM_OUTPUT_MAX_SKIP_ALIGN (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_479 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15317 "../.././gcc/config/i386/i386.md"
{ return output_set_got (operands[0], NULL_RTX); }
}

static const char *
output_480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15327 "../.././gcc/config/i386/i386.md"
{ return output_set_got (operands[0], operands[1]); }
}

static const char *
output_488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15566 "../.././gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_489 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15566 "../.././gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15586 "../.././gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_491 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15586 "../.././gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15586 "../.././gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{q}\t{%1, %0|%0, %1}";
#endif
}
}

static const char * const output_494[] = {
  "xchg{b}\t{%h0, %b0|%b0, %h0}",
  "rol{w}\t{$8, %0|%0, 8}",
};

static const char *
output_512 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16252 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_513 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16252 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_514 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16272 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_515 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16272 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_516 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16291 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16291 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16307 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_519 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16307 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_520 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16322 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_521 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16322 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_522 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16337 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_523 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16337 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_524 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16364 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_525 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16364 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_527 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16399 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_528 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16399 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_529 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16417 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16417 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16436 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16436 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16455 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16455 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16455 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16455 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16474 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16474 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16474 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16474 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16493 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16510 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16528 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16545 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16559 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16576 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16576 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16594 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16594 "../.././gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16612 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16612 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16629 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16629 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16647 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16647 "../.././gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16707 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16707 "../.././gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17997 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18058 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18058 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18252 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18311 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18311 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18526 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18585 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 18585 "../.././gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, 0);
}

static const char * const output_652[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_653[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_655[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_656[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_657[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char *
output_676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 20192 "../.././gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (CONST_INT_P (operands[2])
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{l}\t{%2, %0|%0, %2}";
	}
      return "add{l}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_678 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21466 "../.././gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_679 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21481 "../.././gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char * const output_680[] = {
  "jmp\t%P1",
  "jmp\t%A1",
};

static const char *
output_681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21505 "../.././gcc/config/i386/i386.md"
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *
output_682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21557 "../.././gcc/config/i386/i386.md"
{
  if (constant_call_address_operand (operands[1], Pmode))
    return "call\t%P1";
  return "call\t%A1";
}
}

static const char * const output_683[] = {
  "jmp\t%P1",
  "jmp\t%A1",
};

static const char *
output_684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21638 "../.././gcc/config/i386/i386.md"
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21738 "../.././gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (locality >= 0 && locality <= 3);

  return patterns[locality];
}
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 21774 "../.././gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char * const output_694[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_695[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_696[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_697[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpxor\t%0, %0, %0",
  "vmovq\t{%1, %0|%0, %1}",
  "vmovq\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_698[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_699[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_700[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_701[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_702[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vxorps\t%0, %0, %0",
  "vmovaps\t{%1, %0|%0, %1}",
  "vmovlps\t{%1, %0, %0|%0, %0, %1}",
  "vmovlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_703[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_706[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%1, %0|%0, %1}",
};

static const char * const output_729[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_731[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
  "#",
};

static const char *
output_793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1203 "../.././gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1248 "../.././gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_799[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_801[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
};

static const char *
output_802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1489 "../.././gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 164 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	case MODE_V4SF:
	  return "vmovaps\t{%1, %0|%0, %1}";
	case MODE_V4DF:
	case MODE_V2DF:
	  return "vmovapd\t{%1, %0|%0, %1}";
	default:
	  return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_822 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_823 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_824 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_825 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_826 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 208 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V4SF:
	  return "movaps\t{%1, %0|%0, %1}";
	case MODE_V2DF:
	  return "movapd\t{%1, %0|%0, %1}";
	default:
	  return "movdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1099 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2641 "../.././gcc/config/i386/sse.md"
 return TARGET_AVX ? "vcvtpd2dq{x}\t{%1, %0|%0, %1}"
		       : "cvtpd2dq\t{%1, %0|%0, %1}";
}

static const char *
output_1101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2672 "../.././gcc/config/i386/sse.md"
 return TARGET_AVX ? "vcvttpd2dq{x}\t{%1, %0|%0, %1}"
		       : "cvttpd2dq\t{%1, %0|%0, %1}";
}

static const char *
output_1107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2765 "../.././gcc/config/i386/sse.md"
 return TARGET_AVX ? "vcvtpd2ps{x}\t{%1, %0|%0, %1}"
		       : "cvtpd2ps\t{%1, %0|%0, %1}";
}

static const char * const output_1110[] = {
  "vmovhlps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%H2, %1, %0|%0, %1, %H2}",
  "vmovhps\t{%2, %0|%0, %2}",
};

static const char * const output_1111[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1112[] = {
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1113[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char *
output_1124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3253 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3294 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3294 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3319 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3319 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1129[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "%vmovhlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%H1, %d0|%d0, %H1}",
};

static const char * const output_1130[] = {
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1131[] = {
  "movhps\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1132[] = {
  "vmovlps\t{%1, %0|%0, %1}",
  "vmovaps\t{%1, %0|%0, %1}",
  "vmovlps\t{%1, %0, %0|%0, %0, %1}",
};

static const char * const output_1133[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1134[] = {
  "shufps\t{$0xe4, %1, %2, %0|%0, %2, %1, 0xe4}",
  "vmovlps\t{%2, %1, %0|%0, %1, %2}",
  "vmovlps\t{%2, %0|%0, %2}",
};

static const char * const output_1135[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "movlps\t{%2, %0|%0, %2}",
};

static const char * const output_1140[] = {
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
  "vinsertps\t{$0x10, %2, %1, %0|%0, %1, %2, 0x10}",
  "vmovss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1141[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1142[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1143[] = {
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1144[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1145[] = {
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "vmovss\t{%2, %0|%0, %2}",
  "vmovd\t{%2, %0|%0, %2}",
  "#",
};

static const char * const output_1146[] = {
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "#",
};

static const char *
output_1147 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1148 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3643 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  return "insertps\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1167[] = {
  "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%H1, %2, %0|%0, %2, %H1}",
  "vmovhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1168[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "movhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1170[] = {
  "vmovddup\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1171[] = {
  "movddup\t{%1, %0|%0, %1}",
  "#",
};

static const char * const output_1173[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %H0|%H0, %2}",
};

static const char * const output_1174[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_1175 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4107 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1180 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4245 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1181 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4245 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1182 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4266 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1183 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4266 "../.././gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1184[] = {
  "vmovhpd\t{%1, %0|%0, %1}",
  "vunpckhpd\t{%1, %1, %0|%0, %1, %1}",
  "#",
  "#",
  "#",
};

static const char * const output_1185[] = {
  "movhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "#",
  "#",
  "#",
};

static const char * const output_1186[] = {
  "%vmovlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_1187[] = {
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
  "#",
};

static const char * const output_1188[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "shufpd\t{$1, %1, %0|%0, %1, 1}",
  "#",
  "#",
  "#",
};

static const char * const output_1189[] = {
  "vmovsd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "vmovhpd\t{%H1, %2, %0|%0, %2, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1190[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1191[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1192[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1193[] = {
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovlpd\t{%2, %0|%0, %2}",
  "vmovhps\t{%H1, %2, %0|%0, %2, %H1}",
  "vmovhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1194[] = {
  "movsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %2, %0|%0, %2, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "movhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1198[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovsd\t{%1, %0|%0, %1}",
};

static const char * const output_1199[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "movhpd\t{%2, %0|%0, %2}",
  "movsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_1392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6591 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6591 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6591 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  else
    return "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
}
}

static const char *
output_1395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6610 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrb\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6629 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6649 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6788 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6831 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6874 "../.././gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1406[] = {
  "vmovd\t{%2, %0|%0, %2}",
  "vmovd\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1407[] = {
  "movd\t{%2, %0|%0, %2}",
  "movd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
};

static const char * const output_1411[] = {
  "vmovhps\t{%1, %0|%0, %1}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "vmovq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1412[] = {
  "movhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "movq\t{%H1, %0|%0, %H1}",
};

static const char * const output_1413[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1414[] = {
  "%vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1416[] = {
  "punpcklqdq\t%0, %0",
  "movlhps\t%0, %0",
};

static const char * const output_1417[] = {
  "vpinsrd\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
  "vmovd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1418[] = {
  "pinsrd\t{$0x1, %2, %0|%0, %2, 0x1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1419[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1420[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1421[] = {
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1422[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1423[] = {
  "vmovq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1424[] = {
  "movq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char *
output_1481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8747 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8762 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char *
output_1483 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8778 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1567[] = {
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
};

static const char * const output_1571[] = {
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
};

static const char * const output_1572[] = {
  "pmacsww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsww\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1573[] = {
  "pmacssww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssww\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssww\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1574[] = {
  "pmacsdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1575[] = {
  "pmacssdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1576[] = {
  "pmacssdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdql\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1577[] = {
  "pmacssdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacssdqh\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1578[] = {
  "pmacsdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdql\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdql\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1581[] = {
  "pmacsdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdqh\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsdqh\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1584[] = {
  "pmacsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacsswd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1585[] = {
  "pmacswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmacswd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1586[] = {
  "pmadcsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmadcsswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmadcsswd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1587[] = {
  "pmadcswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmadcswd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pmadcswd\t{%3, %1, %2, %0|%0, %2, %1, %3}",
};

static const char * const output_1588[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1589[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1590[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1591[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1592[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1593[] = {
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "pcmov\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_1625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11015 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((16 * 8) - INTVAL (operands[2]));
  return "protb\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11015 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((8 * 8) - INTVAL (operands[2]));
  return "protw\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11015 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((4 * 8) - INTVAL (operands[2]));
  return "protd\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11015 "../.././gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT ((2 * 8) - INTVAL (operands[2]));
  return "protq\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11318 "../.././gcc/config/i386/sse.md"
{
  const char *ret = NULL;

  switch (INTVAL (operands[3]))
    {
    case COM_FALSE_S:
      ret = "comfalsess\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_FALSE_P:
      ret = "comfalseps\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_TRUE_S:
      ret = "comfalsess\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_TRUE_P:
      ret = "comfalseps\t{%2, %1, %0|%0, %1, %2}";
      break;

    default:
      gcc_unreachable ();
    }

  return ret;
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11318 "../.././gcc/config/i386/sse.md"
{
  const char *ret = NULL;

  switch (INTVAL (operands[3]))
    {
    case COM_FALSE_S:
      ret = "comfalsesd\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_FALSE_P:
      ret = "comfalsepd\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_TRUE_S:
      ret = "comfalsesd\t{%2, %1, %0|%0, %1, %2}";
      break;

    case COM_TRUE_P:
      ret = "comfalsepd\t{%2, %1, %0|%0, %1, %2}";
      break;

    default:
      gcc_unreachable ();
    }

  return ret;
}
}

static const char *
output_1665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11403 "../.././gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "pcomtrueb\t{%2, %1, %0|%0, %1, %2}"
	  : "pcomfalseb\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11403 "../.././gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "pcomtruew\t{%2, %1, %0|%0, %1, %2}"
	  : "pcomfalsew\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11403 "../.././gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "pcomtrued\t{%2, %1, %0|%0, %1, %2}"
	  : "pcomfalsed\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11403 "../.././gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "pcomtrueq\t{%2, %1, %0|%0, %1, %2}"
	  : "pcomfalseq\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1719 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11888 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11888 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11888 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11924 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11924 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11924 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%x1, %0|%0, %x1}";
	case MODE_V4DF:
	  return "vmovapd\t{%x1, %0|%0, %x1}";
	case MODE_OI:
	  return "vmovdqa\t{%x1, %0|%0, %x1}";
	default:
	  break;
	}
    default:
      break;
    }
  gcc_unreachable ();
}
}

static const char *
output_1725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1727 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11969 "../.././gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
        {
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 287 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{b}\t%0";
    }

  return "lock{%;| }add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 287 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{w}\t%0";
    }

  return "lock{%;| }add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 287 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }inc{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }dec{l}\t%0";
    }

  return "lock{%;| }add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 307 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{b}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{b}\t%0";
    }

  return "lock{%;| }sub{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1752 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 307 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{w}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{w}\t%0";
    }

  return "lock{%;| }sub{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_1753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 307 "../.././gcc/config/i386/sync.md"
{
  if (TARGET_USE_INCDEC)
    {
      if (operands[1] == const1_rtx)
	return "lock{%;| }dec{l}\t%0";
      if (operands[1] == constm1_rtx)
	return "lock{%;| }inc{l}\t%0";
    }

  return "lock{%;| }sub{l}\t{%1, %0|%0, %1}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,mr",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,mq",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Yi,*x",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri,C,*y,*y,rm,C,*x,*Yi,*x,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "*qn,m",
    QImode,
    0,
    1
  },
  {
    q_regs_operand,
    "+q",
    QImode,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "riF*m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*Y2,m,*Y2,*Y2,*x,m,*x,*x",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*Y2,*Y2,m,C,*x,*x,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    OImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,m,x,x,x,m,!*y,!m,!*y,?Yi,?r,!*Ym,!r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,rmF,Fr,C,x,xm,x,m,*y,*y,r,Yi,r,*Ym",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r,Y2",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,rFo,Y2",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o,Y2*x,Y2*x,Y2*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,*Fr,C,Y2*x,mY2*x,Y2*x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o,Y2*x,Y2*x,Y2*x,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr,C,Y2*x,m,Y2*x",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,Fr",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,x,?r,?o",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "xm,x,C,roF,Fr",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    TFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "x,Fo,*r",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,?r,?o,?*Ym,?*y,?*Yi,*Y2",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,r,m,r,m",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,Y2,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,Y2m,f,f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?Y2,?*r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,&x",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V4SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,&x",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V2DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qnm",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rnm",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    no_seg_address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri,li",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,ri",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm,ln",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmn",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,ln",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qnm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "K,n,mr",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i,i,ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rn,rm,L",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,g",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,f,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "xm,0,X",
    V4SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm,0,X",
    V2DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,0",
    TFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xmC",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "1,1,x,1,x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Ic",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,qm",
    QImode,
    1,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rN",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+Q,r",
    HImode,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    const_double_operand,
    "F",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "lsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sibcall_insn_operand,
    "s,U",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,r,m",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,irm,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V8QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V4HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V2SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*Y2,*Y2,m,*x,*x,*x,m,r,m",
    V1DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!ym,!?y,*Y2,!y,C,*Y2m,*Y2,C,*x,m,*x,irm,r",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!?y,m,!y,*Y2,*x,*x,*x,m,r,m",
    V2SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,!?ym,!?y,*Y2,!y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,y,x,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o,o,o,o",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,Y2,Y2,x,y,x,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,Y2,0,o,o,o",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=?x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&x,X",
    V4SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V8SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    avx_comparison_float_operator,
    "",
    V4DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,x,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,x,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,x",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,x,m",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C,*ym,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C,*ym,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,C,C,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x*rfF",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,Y2,m",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "0,C,C,0",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "x,m,*r,x*rfF",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,f,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x*rf",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "o",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_5_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_6_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,o,o,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x,0,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,x,x,o,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m,m,m",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,0,0,x,o,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,0,0,x,*f,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,x,0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,x,x,o",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,0,x,o,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,0,0,0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,m,C",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,Y2,Y2,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,m,0,0",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "Y2,m,C,x,m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "xN",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    const_pow2_1_to_32768_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    QImode,
    0,
    1
  },
  {
    const_pow2_1_to_32768_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    const_pow2_1_to_128_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    const_pow2_1_to_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x,Yi,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,x",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,Yi,x,x",
    V4SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "C,C,C,0",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,m,x",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,Yi",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "o",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=mx",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,o",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "Y2,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,x,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "rm,x,C,*ym,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "rm,x,C,*ym,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,x,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y2,x,m",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,?x,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,*y,x,x",
    DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,x,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y2,?Y2,Y2,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY2,*y,0,0,0",
    DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "C,C,Y2,x,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V4SFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "a,a,a,a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d,d",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=&x,&x,&x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V4SImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m,m",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%x,x,m",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,m,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,0",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "x,xm,0,0",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,x,x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,xm",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,xm,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,0,0",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_63_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=xm",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V16QImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V8HImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    ix86_comparison_int_operator,
    "",
    V2DImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V16QImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V8HImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    ix86_comparison_uns_operator,
    "",
    V2DImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    vzeroall_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,xm",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "xm,C",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    cmpxchg8b_pic_memory_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "SD",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpsi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CDImode,
    0,
    1
  },
  {
    general_operand,
    "",
    CDImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    any_fp_register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y2",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "Y2",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    vector_move_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const8_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    float_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    tls_modbase_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    commutative_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    commutative_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    reg_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimm_not_xmm0_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    sse5_comparison_float_operator,
    "",
    V2DFmode,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* ../.././gcc/config/i386/i386.md:848 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_0 },
#else
    { 0, output_0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:860 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:877 */
  {
    "*cmpsi_1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[3],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:887 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[5],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:899 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:909 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:919 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[9],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:931 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:941 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:951 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:979 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[14],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1006 */
  {
    "cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3_insn,
    &operand_data[16],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1034 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[18],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1088 */
  {
    "*cmpfp_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_13 },
#else
    { 0, 0, output_13 },
#endif
    0,
    &operand_data[20],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1108 */
  {
    "*cmpfp_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[20],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1136 */
  {
    "*cmpfp_xf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_15 },
#else
    { 0, 0, output_15 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1149 */
  {
    "*cmpfp_xf_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1170 */
  {
    "*cmpfp_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_17 },
#else
    { 0, 0, output_17 },
#endif
    0,
    &operand_data[26],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1170 */
  {
    "*cmpfp_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    0,
    &operand_data[29],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1183 */
  {
    "*cmpfp_sf_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1183 */
  {
    "*cmpfp_df_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1204 */
  {
    "*cmpfp_u",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    0,
    &operand_data[32],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1224 */
  {
    "*cmpfp_u_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[32],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1252 */
  {
    "*cmpfp_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_23 },
#else
    { 0, 0, output_23 },
#endif
    0,
    &operand_data[35],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1252 */
  {
    "*cmpfp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[39],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1269 */
  {
    "*cmpfp_hi_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[35],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1269 */
  {
    "*cmpfp_si_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[39],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1299 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[20],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1311 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[43],
    1,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1330 */
  {
    "*cmpfp_i_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    0,
    &operand_data[44],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1347 */
  {
    "*cmpfp_i_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1364 */
  {
    "*cmpfp_i_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    0,
    &operand_data[33],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1384 */
  {
    "*cmpfp_iu_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[44],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1401 */
  {
    "*cmpfp_iu_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1418 */
  {
    "*cmpfp_iu_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    0,
    &operand_data[33],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1457 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1474 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[48],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1483 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[50],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1494 */
  {
    "popsi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popsi1,
    &operand_data[50],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1504 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[51],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1514 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    0,
    &operand_data[53],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1528 */
  {
    "*movsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_41 },
#else
    { 0, 0, output_41 },
#endif
    0,
    &operand_data[55],
    2,
    0,
    12,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1635 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[57],
    2,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1654 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1671 */
  {
    "*movhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    0,
    &operand_data[61],
    2,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1753 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    2,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1767 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[63],
    2,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1791 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[65],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1800 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[67],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1820 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[69],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1847 */
  {
    "*movqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    0,
    &operand_data[71],
    2,
    0,
    7,
    3
  },
  /* ../.././gcc/config/i386/i386.md:1911 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    2,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1925 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[75],
    2,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1949 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1958 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[79],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1968 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1978 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[83],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:1988 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_57 },
#else
    { 0, 0, output_57 },
#endif
    0,
    &operand_data[85],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2083 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:2093 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_59 },
#else
    { 0, 0, output_59 },
#endif
    0,
    &operand_data[87],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2146 */
  {
    "movsi_insv_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%b1, %h0|%h0, %b1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_insv_1,
    &operand_data[89],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:2176 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:2193 */
  {
    "*pushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:2310 */
  {
    "*movdi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_63 },
#else
    { 0, output_63, 0 },
#endif
    0,
    &operand_data[95],
    2,
    0,
    13,
    2
  },
  /* ../.././gcc/config/i386/i386.md:2523 */
  {
    "*movoi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    0,
    &operand_data[97],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2562 */
  {
    "*movti_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_65 },
#else
    { 0, 0, output_65 },
#endif
    0,
    &operand_data[99],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2698 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    0,
    &operand_data[101],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2749 */
  {
    "*movsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    0,
    &operand_data[103],
    2,
    0,
    16,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2845 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    0,
    &operand_data[105],
    2,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2871 */
  {
    "*pushdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[107],
    2,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2883 */
  {
    "*pushdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_70 },
#else
    { 0, 0, output_70 },
#endif
    0,
    &operand_data[109],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:2915 */
  {
    "*movdf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    0,
    &operand_data[111],
    2,
    0,
    9,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3200 */
  {
    "*movdf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_72 },
#else
    { 0, 0, output_72 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    9,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3334 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    0,
    &operand_data[115],
    2,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3362 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3374 */
  {
    "*pushxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    0,
    &operand_data[119],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3405 */
  {
    "*movxf_nointeger",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    0,
    &operand_data[121],
    2,
    0,
    5,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3433 */
  {
    "*movxf_integer",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    0,
    &operand_data[123],
    2,
    0,
    5,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3470 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_78 },
#else
    { 0, 0, output_78 },
#endif
    0,
    &operand_data[125],
    2,
    0,
    5,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3515 */
  {
    "*pushtf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_79 },
#else
    { 0, 0, output_79 },
#endif
    0,
    &operand_data[127],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3622 */
  {
    "swapxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_80 },
#else
    { 0, 0, output_80 },
#endif
    (insn_gen_fn) gen_swapxf,
    &operand_data[129],
    2,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:3680 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[131],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3699 */
  {
    "*zero_extendhisi2_movzwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[133],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3716 */
  {
    "*zero_extendqihi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3725 */
  {
    "*zero_extendqihi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[137],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3735 */
  {
    "*zero_extendqihi2_movzbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[139],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3790 */
  {
    "*zero_extendqisi2_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[141],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3799 */
  {
    "*zero_extendqisi2_movzbw_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[143],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3808 */
  {
    "*zero_extendqisi2_movzbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:3867 */
  {
    "zero_extendsidi2_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_89 },
#else
    { 0, output_89, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2_32,
    &operand_data[147],
    2,
    0,
    7,
    2
  },
  /* ../.././gcc/config/i386/i386.md:3959 */
  {
    "*extendsidi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[149],
    3,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4069 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[152],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4122 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[154],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4148 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1,%0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[145],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4271 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    0,
    &operand_data[156],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4294 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[158],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4303 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    0,
    &operand_data[160],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4331 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[162],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4331 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[164],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4419 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4441 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[168],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4451 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    0,
    &operand_data[170],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4460 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_102 },
#else
    { 0, 0, output_102 },
#endif
    0,
    &operand_data[172],
    3,
    0,
    5,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4483 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_103 },
#else
    { 0, 0, output_103 },
#endif
    0,
    &operand_data[175],
    3,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4503 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_104 },
#else
    { 0, 0, output_104 },
#endif
    0,
    &operand_data[178],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4550 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_105 },
#else
    { 0, 0, output_105 },
#endif
    0,
    &operand_data[180],
    3,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4564 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_106 },
#else
    { 0, 0, output_106 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4578 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_107 },
#else
    { 0, 0, output_107 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop,
    &operand_data[186],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4578 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_108 },
#else
    { 0, 0, output_108 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop,
    &operand_data[188],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4587 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_109 },
#else
    { 0, 0, output_109 },
#endif
    0,
    &operand_data[190],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4587 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    0,
    &operand_data[192],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4731 */
  {
    "*fixuns_truncsf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4731 */
  {
    "*fixuns_truncdf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[199],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4773 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[204],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4773 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[206],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_fisttp_i387_1,
    &operand_data[208],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_fisttp_i387_1,
    &operand_data[210],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_fisttp_i387_1,
    &operand_data[212],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4842 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp,
    &operand_data[214],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4842 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp,
    &operand_data[217],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4842 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp,
    &operand_data[220],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4855 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_fisttp_with_temp,
    &operand_data[223],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4855 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_fisttp_with_temp,
    &operand_data[227],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4855 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_fisttp_with_temp,
    &operand_data[231],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[208],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4928 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387,
    &operand_data[235],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4942 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdi_i387_with_temp,
    &operand_data[240],
    6,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4986 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387,
    &operand_data[246],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4986 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387,
    &operand_data[250],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:4999 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunchi_i387_with_temp,
    &operand_data[254],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:4999 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsi_i387_with_temp,
    &operand_data[259],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5038 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[214],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5047 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[37],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5072 */
  {
    "*floathisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[264],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5072 */
  {
    "*floathidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[266],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5072 */
  {
    "*floathixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[268],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5086 */
  {
    "*floathisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[270],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5086 */
  {
    "*floathidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[273],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5086 */
  {
    "*floathixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[276],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5099 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[279],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5099 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[281],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5099 */
  {
    "*floathixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[283],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatsisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[285],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatsidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[287],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatsixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[289],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatdisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[291],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatdidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5143 */
  {
    "*floatdixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5179 */
  {
    "*floatsisf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[297],
    3,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5179 */
  {
    "*floatsidf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[300],
    3,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5194 */
  {
    "*floatsisf2_vector_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_152 },
#else
    { 0, output_152, 0 },
#endif
    0,
    &operand_data[303],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5194 */
  {
    "*floatsidf2_vector_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_153 },
#else
    { 0, output_153, 0 },
#endif
    0,
    &operand_data[305],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5209 */
  {
    "*floatsisf2_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[307],
    3,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5209 */
  {
    "*floatsidf2_mixed_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[310],
    3,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5253 */
  {
    "*floatsisf2_mixed_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    0,
    &operand_data[313],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5253 */
  {
    "*floatsidf2_mixed_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_157 },
#else
    { 0, output_157, 0 },
#endif
    0,
    &operand_data[315],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5272 */
  {
    "*floatsisf2_mixed_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[303],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5272 */
  {
    "*floatsidf2_mixed_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[305],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5289 */
  {
    "*floatsisf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[317],
    3,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5289 */
  {
    "*floatsidf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[320],
    3,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5303 */
  {
    "*floatsisf2_vector_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[323],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5303 */
  {
    "*floatsidf2_vector_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[325],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5436 */
  {
    "*floatsisf2_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[327],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5436 */
  {
    "*floatsidf2_sse_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5450 */
  {
    "*floatsisf2_sse_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[327],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5450 */
  {
    "*floatsidf2_sse_interunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5479 */
  {
    "*floatsisf2_sse_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[323],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5479 */
  {
    "*floatsidf2_sse_nointerunit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[325],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatsisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    0,
    &operand_data[333],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatsidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_171 },
#else
    { 0, output_171, 0 },
#endif
    0,
    &operand_data[336],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatsixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[339],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatdisf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[342],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatdidf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[345],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5522 */
  {
    "*floatdixf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[348],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[351],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[353],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatsixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[355],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[357],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[359],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5536 */
  {
    "*floatdixf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%z1\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[361],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5570 */
  {
    "floatdisf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2_i387_with_xmm,
    &operand_data[363],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5570 */
  {
    "floatdidf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2_i387_with_xmm,
    &operand_data[368],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5570 */
  {
    "floatdixf2_i387_with_xmm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdixf2_i387_with_xmm,
    &operand_data[373],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5628 */
  {
    "*floatunssisf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[378],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5628 */
  {
    "*floatunssidf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[382],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5628 */
  {
    "*floatunssixf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[386],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5760 */
  {
    "*adddi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[390],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*addqi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[393],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*subqi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[396],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*addhi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[399],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*subhi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*addsi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[405],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*subsi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[408],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*adddi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[411],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5808 */
  {
    "*subdi3_cc_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[414],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5822 */
  {
    "*addqi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[417],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5822 */
  {
    "*addhi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[420],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5822 */
  {
    "*addsi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[423],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5822 */
  {
    "*adddi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[426],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5834 */
  {
    "*subqi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[429],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5834 */
  {
    "*subhi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5834 */
  {
    "*subsi3_cconly_overflow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[433],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5858 */
  {
    "addqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_carry,
    &operand_data[435],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5870 */
  {
    "addhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addhi3_carry,
    &operand_data[439],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5882 */
  {
    "addsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsi3_carry,
    &operand_data[443],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5907 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[405],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5919 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[393],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5938 */
  {
    "*lea_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a1, %0|%0, %a1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[447],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:5974 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[449],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:6026 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[453],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:6075 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[457],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:6396 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[462],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6545 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[465],
    3,
    2,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6638 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6734 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[471],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6771 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6828 */
  {
    "*addhi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[474],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6871 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    0,
    &operand_data[399],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6910 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_220 },
#else
    { 0, 0, output_220 },
#endif
    0,
    &operand_data[477],
    3,
    2,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6952 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    0,
    &operand_data[480],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:6992 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    0,
    &operand_data[483],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7030 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    0,
    &operand_data[480],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7079 */
  {
    "*addqi_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    0,
    &operand_data[486],
    3,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7129 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    0,
    &operand_data[489],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7175 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    0,
    &operand_data[492],
    2,
    1,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7215 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    0,
    &operand_data[494],
    3,
    2,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7256 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7295 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[500],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7333 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7374 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[503],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:7446 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[506],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7524 */
  {
    "*subdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[509],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7595 */
  {
    "subqi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subqi3_carry,
    &operand_data[512],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7607 */
  {
    "subhi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subhi3_carry,
    &operand_data[516],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7619 */
  {
    "subsi3_carry",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3_carry,
    &operand_data[520],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7651 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[408],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7672 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[408],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7702 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[408],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7735 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7745 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7759 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7778 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[396],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7788 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[524],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7799 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[396],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7813 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[396],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:7904 */
  {
    "*mulsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_247 },
#else
    { 0, output_247, 0 },
#endif
    0,
    &operand_data[526],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:7977 */
  {
    "*mulhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_248 },
#else
    { 0, output_248, 0 },
#endif
    0,
    &operand_data[529],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:8013 */
  {
    "*mulqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[532],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8040 */
  {
    "*umulqihi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[535],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8065 */
  {
    "*mulqihi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[535],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8120 */
  {
    "*umulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[538],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8174 */
  {
    "*mulsidi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[538],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8242 */
  {
    "*umulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[541],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8337 */
  {
    "*smulsi3_highpart_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "imul{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[541],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8401 */
  {
    "divqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divqi3,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8411 */
  {
    "udivqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{b}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivqi3,
    &operand_data[545],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8551 */
  {
    "*divmodsi4_nocltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[548],
    4,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8562 */
  {
    "*divmodsi4_cltd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[552],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8573 */
  {
    "*divmodsi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "idiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8620 */
  {
    "divmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cwtd\n\tidiv{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[561],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8676 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%3, %3\n\tdiv{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[565],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8689 */
  {
    "*udivmodsi4_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{l}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    4,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8731 */
  {
    "*udivmodhi_noext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "div{w}\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[569],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8787 */
  {
    "testsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_testsi_1,
    &operand_data[574],
    2,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8810 */
  {
    "*testhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[576],
    2,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8831 */
  {
    "*testqi_1_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    0,
    &operand_data[578],
    2,
    0,
    4,
    3
  },
  /* ../.././gcc/config/i386/i386.md:8856 */
  {
    "*testqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[580],
    2,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8884 */
  {
    "*testqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[582],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8901 */
  {
    "*testqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8934 */
  {
    "*testqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[18],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:8953 */
  {
    "*testqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9166 */
  {
    "*andsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    0,
    &operand_data[589],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:9253 */
  {
    "*andsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[465],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9287 */
  {
    "*andhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_275 },
#else
    { 0, 0, output_275 },
#endif
    0,
    &operand_data[592],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:9311 */
  {
    "*andhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9332 */
  {
    "*andqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_277 },
#else
    { 0, output_277, 0 },
#endif
    0,
    &operand_data[489],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:9345 */
  {
    "*andqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[595],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9356 */
  {
    "*andqi_2_maybe_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    0,
    &operand_data[597],
    3,
    2,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:9380 */
  {
    "*andqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9394 */
  {
    "*andqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[600],
    2,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9413 */
  {
    "andqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[602],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9433 */
  {
    "*andqi_ext_0_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[602],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9458 */
  {
    "*andqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[605],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9494 */
  {
    "*andqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[506],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9617 */
  {
    "*iorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[608],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9649 */
  {
    "*iorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[465],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9690 */
  {
    "*iorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9709 */
  {
    "*iorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[611],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9719 */
  {
    "*iorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9732 */
  {
    "*iorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9752 */
  {
    "*iorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_292 },
#else
    { 0, output_292, 0 },
#endif
    0,
    &operand_data[614],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:9765 */
  {
    "*iorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[617],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9776 */
  {
    "*iorqi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9789 */
  {
    "*iorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[619],
    2,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9803 */
  {
    "*iorqi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9815 */
  {
    "*iorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[602],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9832 */
  {
    "*iorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[605],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9870 */
  {
    "*iorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[621],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:9985 */
  {
    "*xorsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[405],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10018 */
  {
    "*xorsi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[465],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10059 */
  {
    "*xorsi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[468],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10078 */
  {
    "*xorhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[611],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10088 */
  {
    "*xorhi_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10101 */
  {
    "*xorhi_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10121 */
  {
    "*xorqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_306 },
#else
    { 0, output_306, 0 },
#endif
    0,
    &operand_data[614],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/i386.md:10134 */
  {
    "*xorqi_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[595],
    2,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10145 */
  {
    "*xorqi_ext_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[602],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10162 */
  {
    "*xorqi_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[605],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10200 */
  {
    "*xorqi_ext_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[621],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10218 */
  {
    "*xorqi_cc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    3,
    2,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10232 */
  {
    "*xorqi_2_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[619],
    2,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10246 */
  {
    "*xorqi_cc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10259 */
  {
    "*xorqi_cc_ext_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%2, %h0|%h0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[624],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10404 */
  {
    "*negdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[627],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10464 */
  {
    "*negsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10489 */
  {
    "*negsi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10523 */
  {
    "*neghi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10532 */
  {
    "*neghi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10549 */
  {
    "*negqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10558 */
  {
    "*negqi2_cmpz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10577 */
  {
    "*absnegsf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[635],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10577 */
  {
    "*absnegdf2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[639],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10586 */
  {
    "*absnegsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[643],
    4,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10586 */
  {
    "*absnegdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[647],
    4,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10595 */
  {
    "*absnegsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[651],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10595 */
  {
    "*absnegdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[655],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10595 */
  {
    "*absnegxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10610 */
  {
    "*absnegtf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[663],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*abssf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*negsf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[667],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*absdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*negdf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*absxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10748 */
  {
    "*negxf2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10758 */
  {
    "*absextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10758 */
  {
    "*negextendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[673],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10767 */
  {
    "*absextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10767 */
  {
    "*negextendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10776 */
  {
    "*absextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10776 */
  {
    "*negextenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fchs",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10801 */
  {
    "copysignsf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_const,
    &operand_data[679],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10801 */
  {
    "copysigndf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_const,
    &operand_data[683],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10801 */
  {
    "copysigntf3_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_const,
    &operand_data[687],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10818 */
  {
    "copysignsf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3_var,
    &operand_data[691],
    6,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10818 */
  {
    "copysigndf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3_var,
    &operand_data[697],
    6,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10818 */
  {
    "copysigntf3_var",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copysigntf3_var,
    &operand_data[703],
    6,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10899 */
  {
    "*one_cmplsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10916 */
  {
    "*one_cmplsi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10977 */
  {
    "*one_cmplhi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:10985 */
  {
    "*one_cmplhi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:11019 */
  {
    "*one_cmplqi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_352 },
#else
    { 0, output_352, 0 },
#endif
    0,
    &operand_data[709],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:11029 */
  {
    "*one_cmplqi2_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:11090 */
  {
    "*avx_ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_354 },
#else
    { 0, 0, output_354 },
#endif
    0,
    &operand_data[711],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11103 */
  {
    "sse2_ashlti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_355 },
#else
    { 0, 0, output_355 },
#endif
    (insn_gen_fn) gen_sse2_ashlti3,
    &operand_data[714],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11356 */
  {
    "*ashldi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[717],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:11389 */
  {
    "x86_shld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shld{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shld,
    &operand_data[720],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:11456 */
  {
    "*ashlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_358 },
#else
    { 0, 0, output_358 },
#endif
    0,
    &operand_data[723],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11598 */
  {
    "*ashlsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_359 },
#else
    { 0, 0, output_359 },
#endif
    0,
    &operand_data[726],
    3,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11640 */
  {
    "*ashlsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_360 },
#else
    { 0, 0, output_360 },
#endif
    0,
    &operand_data[729],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11730 */
  {
    "*ashlhi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_361 },
#else
    { 0, 0, output_361 },
#endif
    0,
    &operand_data[732],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11768 */
  {
    "*ashlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_362 },
#else
    { 0, 0, output_362 },
#endif
    0,
    &operand_data[735],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11805 */
  {
    "*ashlhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_363 },
#else
    { 0, 0, output_363 },
#endif
    0,
    &operand_data[738],
    3,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11847 */
  {
    "*ashlhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_364 },
#else
    { 0, 0, output_364 },
#endif
    0,
    &operand_data[741],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11897 */
  {
    "*ashlqi3_1_lea",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_365 },
#else
    { 0, 0, output_365 },
#endif
    0,
    &operand_data[744],
    3,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:11953 */
  {
    "*ashlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_366 },
#else
    { 0, 0, output_366 },
#endif
    0,
    &operand_data[747],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:12008 */
  {
    "*ashlqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_367 },
#else
    { 0, 0, output_367 },
#endif
    0,
    &operand_data[750],
    3,
    2,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:12050 */
  {
    "*ashlqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_368 },
#else
    { 0, 0, output_368 },
#endif
    0,
    &operand_data[753],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:12295 */
  {
    "*ashrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[756],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12328 */
  {
    "x86_shrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_shrd,
    &operand_data[720],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12377 */
  {
    "*ashrsi3_31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_371 },
#else
    { 0, output_371, 0 },
#endif
    0,
    &operand_data[759],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:12418 */
  {
    "*ashrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12444 */
  {
    "*ashrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_373 },
#else
    { 0, output_373, 0 },
#endif
    0,
    &operand_data[765],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:12471 */
  {
    "*ashrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12489 */
  {
    "*ashrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12522 */
  {
    "*ashrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[726],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12537 */
  {
    "*ashrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12574 */
  {
    "*ashrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12588 */
  {
    "*ashrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_379 },
#else
    { 0, output_379, 0 },
#endif
    0,
    &operand_data[774],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:12603 */
  {
    "*ashrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12621 */
  {
    "*ashrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[777],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12638 */
  {
    "*ashrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[738],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12653 */
  {
    "*ashrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[741],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12674 */
  {
    "*ashrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12688 */
  {
    "*ashrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12703 */
  {
    "*ashrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_386 },
#else
    { 0, output_386, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:12715 */
  {
    "*ashrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_387 },
#else
    { 0, output_387, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:12731 */
  {
    "*ashrqi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[790],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12749 */
  {
    "*ashrqi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12766 */
  {
    "*ashrqi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[750],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12781 */
  {
    "*ashrqi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sar{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[753],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:12810 */
  {
    "*avx_lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_392 },
#else
    { 0, 0, output_392 },
#endif
    0,
    &operand_data[711],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:12823 */
  {
    "sse2_lshrti3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    (insn_gen_fn) gen_sse2_lshrti3,
    &operand_data[714],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:12971 */
  {
    "*lshrdi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[756],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13011 */
  {
    "*lshrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13037 */
  {
    "*lshrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_396 },
#else
    { 0, output_396, 0 },
#endif
    0,
    &operand_data[765],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13065 */
  {
    "*lshrsi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13083 */
  {
    "*lshrsi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13116 */
  {
    "*lshrsi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[726],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13131 */
  {
    "*lshrsi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13168 */
  {
    "*lshrhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13182 */
  {
    "*lshrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_402 },
#else
    { 0, output_402, 0 },
#endif
    0,
    &operand_data[774],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13197 */
  {
    "*lshrhi3_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13215 */
  {
    "*lshrhi3_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[777],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13232 */
  {
    "*lshrhi3_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[738],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13247 */
  {
    "*lshrhi3_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[741],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13268 */
  {
    "*lshrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13282 */
  {
    "*lshrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13296 */
  {
    "*lshrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_409 },
#else
    { 0, output_409, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13308 */
  {
    "*lshrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_410 },
#else
    { 0, output_410, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13324 */
  {
    "*lshrqi2_one_bit_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13342 */
  {
    "*lshrqi2_one_bit_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13359 */
  {
    "*lshrqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[750],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13374 */
  {
    "*lshrqi2_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shr{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[753],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13409 */
  {
    "ix86_rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotldi3,
    &operand_data[796],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13467 */
  {
    "*rotlsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13494 */
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_417 },
#else
    { 0, output_417, 0 },
#endif
    0,
    &operand_data[765],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13526 */
  {
    "*rotlhi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13540 */
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_419 },
#else
    { 0, output_419, 0 },
#endif
    0,
    &operand_data[774],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13569 */
  {
    "*rotlqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13583 */
  {
    "*rotlqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13597 */
  {
    "*rotlqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_422 },
#else
    { 0, output_422, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13610 */
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_423 },
#else
    { 0, output_423, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13641 */
  {
    "ix86_rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ix86_rotrdi3,
    &operand_data[796],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13699 */
  {
    "*rotrsi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{l}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13729 */
  {
    "*rotrsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_426 },
#else
    { 0, output_426, 0 },
#endif
    0,
    &operand_data[765],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13761 */
  {
    "*rotrhi3_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{w}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[771],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13775 */
  {
    "*rotrhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_428 },
#else
    { 0, output_428, 0 },
#endif
    0,
    &operand_data[774],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13804 */
  {
    "*rotrqi3_1_one_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[780],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13818 */
  {
    "*rotrqi3_1_one_bit_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror{b}\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[783],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:13832 */
  {
    "*rotrqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_431 },
#else
    { 0, output_431, 0 },
#endif
    0,
    &operand_data[785],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:13844 */
  {
    "*rotrqi3_1_slp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_432 },
#else
    { 0, output_432, 0 },
#endif
    0,
    &operand_data[788],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:14071 */
  {
    "*btsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[800],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14104 */
  {
    "*setcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[802],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14113 */
  {
    "*setcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "set%C1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[804],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14197 */
  {
    "*avx_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D1ss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[806],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14197 */
  {
    "*avx_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D1sd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[810],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14208 */
  {
    "*sse_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1ss\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[814],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14208 */
  {
    "*sse_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D1sd\t{%3, %0|%0, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[818],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14218 */
  {
    "*sse5_setccsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1ss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[822],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14218 */
  {
    "*sse5_setccdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1sd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[826],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14253 */
  {
    "*jcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%C1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[830],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14271 */
  {
    "*jcc_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%+j%c1\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[830],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14409 */
  {
    "*jcc_btsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14442 */
  {
    "*jcc_btsi_mask",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[836],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14471 */
  {
    "*jcc_btsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14504 */
  {
    "*jcc_btsi_mask_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[836],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14541 */
  {
    "*fp_jcc_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[841],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14556 */
  {
    "*fp_jcc_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[845],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14571 */
  {
    "*fp_jcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[849],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14586 */
  {
    "*fp_jcc_2_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[841],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14601 */
  {
    "*fp_jcc_2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[845],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14616 */
  {
    "*fp_jcc_2_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[849],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14631 */
  {
    "*fp_jcc_3_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14650 */
  {
    "*fp_jcc_4_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14669 */
  {
    "*fp_jcc_5_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[858],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14684 */
  {
    "*fp_jcc_6_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[858],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14699 */
  {
    "*fp_jcc_7_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[863],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14722 */
  {
    "*fp_jcc_8hi_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[868],
    6,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14722 */
  {
    "*fp_jcc_8si_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[874],
    6,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14822 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[653],
    1,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14842 */
  {
    "*indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[540],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14887 */
  {
    "*tablejump_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[880],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:14962 */
  {
    "*call_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_464 },
#else
    { 0, 0, output_464 },
#endif
    0,
    &operand_data[882],
    3,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:14976 */
  {
    "*call_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_465 },
#else
    { 0, 0, output_465 },
#endif
    0,
    &operand_data[885],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:14989 */
  {
    "*sibcall_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_466 },
#else
    { 0, output_466, 0 },
#endif
    0,
    &operand_data[888],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:15020 */
  {
    "*call_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_467 },
#else
    { 0, 0, output_467 },
#endif
    0,
    &operand_data[891],
    2,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15032 */
  {
    "*call_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_468 },
#else
    { 0, 0, output_468 },
#endif
    0,
    &operand_data[893],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15043 */
  {
    "*sibcall_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_469 },
#else
    { 0, output_469, 0 },
#endif
    0,
    &operand_data[895],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:15193 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15210 */
  {
    "*memory_blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15219 */
  {
    "prologue_use",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[653],
    1,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15241 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15252 */
  {
    "return_internal_long",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep\n\tret",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal_long,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15262 */
  {
    "return_pop_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_pop_internal,
    &operand_data[587],
    1,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15271 */
  {
    "return_indirect_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_indirect_internal,
    &operand_data[721],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15279 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15291 */
  {
    "align",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_478 },
#else
    { 0, 0, output_478 },
#endif
    (insn_gen_fn) gen_align,
    &operand_data[653],
    1,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15312 */
  {
    "set_got",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_479 },
#else
    { 0, 0, output_479 },
#endif
    (insn_gen_fn) gen_set_got,
    &operand_data[51],
    1,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15321 */
  {
    "set_got_labelled",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_480 },
#else
    { 0, 0, output_480 },
#endif
    (insn_gen_fn) gen_set_got_labelled,
    &operand_data[898],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15389 */
  {
    "eh_return_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_return_si,
    &operand_data[900],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15399 */
  {
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "leave",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15446 */
  {
    "*ffs_no_cmove",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15470 */
  {
    "*ffssi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15506 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsf{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[901],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15540 */
  {
    "clzsi2_abm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2_abm,
    &operand_data[901],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15550 */
  {
    "*bsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[901],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15560 */
  {
    "popcounthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_488 },
#else
    { 0, 0, output_488 },
#endif
    (insn_gen_fn) gen_popcounthi2,
    &operand_data[904],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15560 */
  {
    "popcountsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_489 },
#else
    { 0, 0, output_489 },
#endif
    (insn_gen_fn) gen_popcountsi2,
    &operand_data[901],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15577 */
  {
    "*popcounthi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_490 },
#else
    { 0, 0, output_490 },
#endif
    0,
    &operand_data[904],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15577 */
  {
    "*popcountsi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_491 },
#else
    { 0, 0, output_491 },
#endif
    0,
    &operand_data[901],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15577 */
  {
    "*popcountdi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_492 },
#else
    { 0, 0, output_492 },
#endif
    0,
    &operand_data[906],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:15633 */
  {
    "*bswapsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bswap\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15641 */
  {
    "*bswaphi_lowpart_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_494 },
#else
    { 0, output_494, 0 },
#endif
    0,
    &operand_data[910],
    1,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:15652 */
  {
    "bswaphi_lowpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rol{w}\t{$8, %0|%0, 8}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bswaphi_lowpart,
    &operand_data[67],
    1,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15725 */
  {
    "clzhi2_abm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lzcnt{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzhi2_abm,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15735 */
  {
    "*bsrhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bsr{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15773 */
  {
    "paritydi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritydi2_cmp,
    &operand_data[911],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15822 */
  {
    "paritysi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_paritysi2_cmp,
    &operand_data[915],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15845 */
  {
    "*parityhi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t{%h0, %b0|%b0, %h0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[918],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15854 */
  {
    "*parityqi2_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[920],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15867 */
  {
    "*tls_global_dynamic_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSGD(,%1,1), %0|%0, %a2@TLSGD[%1*1]}\n\tcall\t%P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[921],
    6,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15881 */
  {
    "*tls_global_dynamic_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@DTLNDX(%1), %4|%4, %a2@DTLNDX[%1]}\n\
	push{l}\t%4\n\tcall\t%a2@TLSPLT\n\tpop{l}\t%4\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[921],
    6,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15951 */
  {
    "*tls_local_dynamic_base_32_gnu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TLSLDM(%1), %0|%0, %&@TLSLDM[%1]}\n\tcall\t%P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[927],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:15964 */
  {
    "*tls_local_dynamic_base_32_sun",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%&@TMDNX(%1), %3|%3, %&@TMDNX[%1]}\n\
	push{l}\t%3\n\tcall\t%&@TLSPLT\n\tpop{l}\t%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[927],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16031 */
  {
    "*tls_local_dynamic_32_once",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[932],
    6,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16055 */
  {
    "*load_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[51],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16066 */
  {
    "*add_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%%gs:0, %0|%0, DWORD PTR gs:0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[908],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16123 */
  {
    "*tls_dynamic_lea_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lea{l}\t{%a2@TLSDESC(%1), %0|%0, %a2@TLSDESC[%1]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[938],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16136 */
  {
    "*tls_dynamic_call_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t{*%a1@TLSCALL(%2)|[DWORD PTR [%2+%a1@TLSCALL]]}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[941],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16151 */
  {
    "*tls_dynamic_gnu2_combine_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[945],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16244 */
  {
    "*fop_sf_comm_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_512 },
#else
    { 0, 0, output_512 },
#endif
    0,
    &operand_data[950],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16244 */
  {
    "*fop_df_comm_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_513 },
#else
    { 0, 0, output_513 },
#endif
    0,
    &operand_data[954],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16264 */
  {
    "*fop_sf_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_514 },
#else
    { 0, 0, output_514 },
#endif
    0,
    &operand_data[958],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16264 */
  {
    "*fop_df_comm_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_515 },
#else
    { 0, 0, output_515 },
#endif
    0,
    &operand_data[962],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16283 */
  {
    "*fop_sf_comm_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_516 },
#else
    { 0, 0, output_516 },
#endif
    0,
    &operand_data[966],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16283 */
  {
    "*fop_df_comm_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_517 },
#else
    { 0, 0, output_517 },
#endif
    0,
    &operand_data[970],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16299 */
  {
    "*fop_sf_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_518 },
#else
    { 0, 0, output_518 },
#endif
    0,
    &operand_data[974],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16299 */
  {
    "*fop_df_comm_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_519 },
#else
    { 0, 0, output_519 },
#endif
    0,
    &operand_data[978],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16314 */
  {
    "*fop_sf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_520 },
#else
    { 0, 0, output_520 },
#endif
    0,
    &operand_data[982],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16314 */
  {
    "*fop_df_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_521 },
#else
    { 0, 0, output_521 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16329 */
  {
    "*fop_sf_1_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_522 },
#else
    { 0, 0, output_522 },
#endif
    0,
    &operand_data[990],
    4,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16329 */
  {
    "*fop_df_1_mixed_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_523 },
#else
    { 0, 0, output_523 },
#endif
    0,
    &operand_data[994],
    4,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16356 */
  {
    "*fop_sf_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_524 },
#else
    { 0, 0, output_524 },
#endif
    0,
    &operand_data[998],
    4,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16356 */
  {
    "*fop_df_1_mixed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_525 },
#else
    { 0, 0, output_525 },
#endif
    0,
    &operand_data[1002],
    4,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16382 */
  {
    "*rcpsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrcpss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16392 */
  {
    "*fop_sf_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_527 },
#else
    { 0, 0, output_527 },
#endif
    0,
    &operand_data[1008],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16392 */
  {
    "*fop_df_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_528 },
#else
    { 0, 0, output_528 },
#endif
    0,
    &operand_data[1012],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16410 */
  {
    "*fop_sf_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_529 },
#else
    { 0, 0, output_529 },
#endif
    0,
    &operand_data[1016],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16410 */
  {
    "*fop_df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_530 },
#else
    { 0, 0, output_530 },
#endif
    0,
    &operand_data[1020],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16428 */
  {
    "*fop_sf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_531 },
#else
    { 0, 0, output_531 },
#endif
    0,
    &operand_data[1024],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16428 */
  {
    "*fop_df_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_532 },
#else
    { 0, 0, output_532 },
#endif
    0,
    &operand_data[1028],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16447 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_533 },
#else
    { 0, 0, output_533 },
#endif
    0,
    &operand_data[1032],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16447 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_534 },
#else
    { 0, 0, output_534 },
#endif
    0,
    &operand_data[1036],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16447 */
  {
    "*fop_sf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_535 },
#else
    { 0, 0, output_535 },
#endif
    0,
    &operand_data[1040],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16447 */
  {
    "*fop_df_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_536 },
#else
    { 0, 0, output_536 },
#endif
    0,
    &operand_data[1044],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16466 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_537 },
#else
    { 0, 0, output_537 },
#endif
    0,
    &operand_data[1048],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16466 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    0,
    &operand_data[1052],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16466 */
  {
    "*fop_sf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_539 },
#else
    { 0, 0, output_539 },
#endif
    0,
    &operand_data[1056],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16466 */
  {
    "*fop_df_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_540 },
#else
    { 0, 0, output_540 },
#endif
    0,
    &operand_data[1060],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16485 */
  {
    "*fop_df_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_541 },
#else
    { 0, 0, output_541 },
#endif
    0,
    &operand_data[1064],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16503 */
  {
    "*fop_df_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_542 },
#else
    { 0, 0, output_542 },
#endif
    0,
    &operand_data[1068],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16520 */
  {
    "*fop_df_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_543 },
#else
    { 0, 0, output_543 },
#endif
    0,
    &operand_data[1072],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16538 */
  {
    "*fop_xf_comm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_544 },
#else
    { 0, 0, output_544 },
#endif
    0,
    &operand_data[1076],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16552 */
  {
    "*fop_xf_1_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_545 },
#else
    { 0, 0, output_545 },
#endif
    0,
    &operand_data[1080],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16569 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_546 },
#else
    { 0, 0, output_546 },
#endif
    0,
    &operand_data[1084],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16569 */
  {
    "*fop_xf_2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_547 },
#else
    { 0, 0, output_547 },
#endif
    0,
    &operand_data[1088],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16587 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_548 },
#else
    { 0, 0, output_548 },
#endif
    0,
    &operand_data[1092],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16587 */
  {
    "*fop_xf_3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_549 },
#else
    { 0, 0, output_549 },
#endif
    0,
    &operand_data[1096],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16605 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_550 },
#else
    { 0, 0, output_550 },
#endif
    0,
    &operand_data[1100],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16605 */
  {
    "*fop_xf_4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_551 },
#else
    { 0, 0, output_551 },
#endif
    0,
    &operand_data[1104],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16622 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_552 },
#else
    { 0, 0, output_552 },
#endif
    0,
    &operand_data[1108],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16622 */
  {
    "*fop_xf_5_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_553 },
#else
    { 0, 0, output_553 },
#endif
    0,
    &operand_data[1112],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16639 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    0,
    &operand_data[1116],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16639 */
  {
    "*fop_xf_6_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_555 },
#else
    { 0, 0, output_555 },
#endif
    0,
    &operand_data[1120],
    4,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16702 */
  {
    "truncxfsf2_i387_noop_unspec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_556 },
#else
    { 0, 0, output_556 },
#endif
    (insn_gen_fn) gen_truncxfsf2_i387_noop_unspec,
    &operand_data[186],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16702 */
  {
    "truncxfdf2_i387_noop_unspec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_557 },
#else
    { 0, 0, output_557 },
#endif
    (insn_gen_fn) gen_truncxfdf2_i387_noop_unspec,
    &operand_data[188],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:16711 */
  {
    "sqrtxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16721 */
  {
    "sqrt_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extendsfxf2_i387,
    &operand_data[675],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16721 */
  {
    "sqrt_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrt_extenddfxf2_i387,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16733 */
  {
    "*rsqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16753 */
  {
    "*sqrtsf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16753 */
  {
    "*sqrtdf2_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtsd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1124],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16792 */
  {
    "fpremxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpremxf4_i387,
    &operand_data[1126],
    4,
    4,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16860 */
  {
    "fprem1xf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fprem1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fprem1xf4_i387,
    &operand_data[1126],
    4,
    4,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16929 */
  {
    "*sinxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16938 */
  {
    "*sin_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16938 */
  {
    "*sin_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsin",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16951 */
  {
    "*cosxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16960 */
  {
    "*cos_extendsfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16960 */
  {
    "*cos_extenddfxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:16979 */
  {
    "sincosxf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincosxf3,
    &operand_data[1126],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17013 */
  {
    "sincos_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extendsfxf3_i387,
    &operand_data[1130],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17013 */
  {
    "sincos_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsincos",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sincos_extenddfxf3_i387,
    &operand_data[1133],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17070 */
  {
    "fptanxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptanxf4_i387,
    &operand_data[1136],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17083 */
  {
    "fptan_extendsfxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extendsfxf4_i387,
    &operand_data[1140],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17083 */
  {
    "fptan_extenddfxf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fptan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fptan_extenddfxf4_i387,
    &operand_data[1144],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17131 */
  {
    "*fpatanxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1148],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17143 */
  {
    "fpatan_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extendsfxf3_i387,
    &operand_data[1152],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17143 */
  {
    "fpatan_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpatan",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpatan_extenddfxf3_i387,
    &operand_data[1156],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17304 */
  {
    "fyl2xxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xxf3_i387,
    &operand_data[1148],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17316 */
  {
    "fyl2x_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extendsfxf3_i387,
    &operand_data[1160],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17316 */
  {
    "fyl2x_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2x",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2x_extenddfxf3_i387,
    &operand_data[1164],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17421 */
  {
    "fyl2xp1xf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1xf3_i387,
    &operand_data[1148],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17433 */
  {
    "fyl2xp1_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extendsfxf3_i387,
    &operand_data[1160],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17433 */
  {
    "fyl2xp1_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fyl2xp1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fyl2xp1_extenddfxf3_i387,
    &operand_data[1164],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17483 */
  {
    "fxtractxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtractxf3_i387,
    &operand_data[1126],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17495 */
  {
    "fxtract_extendsfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extendsfxf3_i387,
    &operand_data[1130],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17495 */
  {
    "fxtract_extenddfxf3_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtract",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxtract_extenddfxf3_i387,
    &operand_data[1133],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17578 */
  {
    "*f2xm1xf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "f2xm1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17588 */
  {
    "*fscalexf4_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fscale",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1126],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17897 */
  {
    "sse4_1_roundsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundss\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsf2,
    &operand_data[1168],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17897 */
  {
    "sse4_1_rounddf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundsd\t{%2, %1, %d0|%d0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_rounddf2,
    &operand_data[1171],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17909 */
  {
    "rintxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frndint",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rintxf2,
    &operand_data[671],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17968 */
  {
    "*fistdi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1174],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:17991 */
  {
    "fistdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_596 },
#else
    { 0, 0, output_596 },
#endif
    (insn_gen_fn) gen_fistdi2,
    &operand_data[1176],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18001 */
  {
    "fistdi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_with_temp,
    &operand_data[1179],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18035 */
  {
    "*fisthi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18035 */
  {
    "*fistsi2_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[288],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18053 */
  {
    "fisthi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_600 },
#else
    { 0, 0, output_600 },
#endif
    (insn_gen_fn) gen_fisthi2,
    &operand_data[1183],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18053 */
  {
    "fistsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_601 },
#else
    { 0, 0, output_601 },
#endif
    (insn_gen_fn) gen_fistsi2,
    &operand_data[1185],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18062 */
  {
    "fisthi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_with_temp,
    &operand_data[1187],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18062 */
  {
    "fistsi2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_with_temp,
    &operand_data[1190],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18120 */
  {
    "frndintxf2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor,
    &operand_data[1193],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18145 */
  {
    "frndintxf2_floor_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_floor_i387,
    &operand_data[1195],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18211 */
  {
    "*fisthi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1199],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18211 */
  {
    "*fistsi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1201],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18211 */
  {
    "*fistdi2_floor_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1174],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18243 */
  {
    "fistdi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_609 },
#else
    { 0, 0, output_609 },
#endif
    (insn_gen_fn) gen_fistdi2_floor,
    &operand_data[1203],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18257 */
  {
    "fistdi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_floor_with_temp,
    &operand_data[1208],
    6,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18303 */
  {
    "fisthi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_611 },
#else
    { 0, 0, output_611 },
#endif
    (insn_gen_fn) gen_fisthi2_floor,
    &operand_data[1214],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18303 */
  {
    "fistsi2_floor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_612 },
#else
    { 0, 0, output_612 },
#endif
    (insn_gen_fn) gen_fistsi2_floor,
    &operand_data[1218],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18316 */
  {
    "fisthi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_floor_with_temp,
    &operand_data[1222],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18316 */
  {
    "fistsi2_floor_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_floor_with_temp,
    &operand_data[1227],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18394 */
  {
    "frndintxf2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil,
    &operand_data[1193],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18419 */
  {
    "frndintxf2_ceil_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_ceil_i387,
    &operand_data[1195],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18485 */
  {
    "*fisthi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1199],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18485 */
  {
    "*fistsi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1201],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18485 */
  {
    "*fistdi2_ceil_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1174],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18517 */
  {
    "fistdi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_620 },
#else
    { 0, 0, output_620 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil,
    &operand_data[1203],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18531 */
  {
    "fistdi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistdi2_ceil_with_temp,
    &operand_data[1208],
    6,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18577 */
  {
    "fisthi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_622 },
#else
    { 0, 0, output_622 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil,
    &operand_data[1214],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18577 */
  {
    "fistsi2_ceil",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil,
    &operand_data[1218],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:18590 */
  {
    "fisthi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fisthi2_ceil_with_temp,
    &operand_data[1222],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18590 */
  {
    "fistsi2_ceil_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fistsi2_ceil_with_temp,
    &operand_data[1227],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18664 */
  {
    "frndintxf2_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc,
    &operand_data[1193],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18689 */
  {
    "frndintxf2_trunc_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_trunc_i387,
    &operand_data[1195],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18756 */
  {
    "frndintxf2_mask_pm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm,
    &operand_data[1193],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18781 */
  {
    "frndintxf2_mask_pm_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%3\n\tfrndint\n\tfclex\n\tfldcw\t%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_frndintxf2_mask_pm_i387,
    &operand_data[1195],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18823 */
  {
    "fxamsf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18823 */
  {
    "fxamdf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387,
    &operand_data[29],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18823 */
  {
    "fxamxf2_i387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxam\n\tfnstsw\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamxf2_i387,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18834 */
  {
    "fxamsf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamsf2_i387_with_temp,
    &operand_data[1232],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18834 */
  {
    "fxamdf2_i387_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fxamdf2_i387_with_temp,
    &operand_data[1234],
    2,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:18935 */
  {
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cld",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19032 */
  {
    "*strmovsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1236],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19062 */
  {
    "*strmovhi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1236],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19092 */
  {
    "*strmovqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1236],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19153 */
  {
    "*rep_movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep movs{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1240],
    6,
    4,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19191 */
  {
    "*rep_movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep movsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1240],
    6,
    4,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19306 */
  {
    "*strsetsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stos{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1246],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19330 */
  {
    "*strsethi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosw",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1249],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19354 */
  {
    "*strsetqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1252],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19405 */
  {
    "*rep_stossi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep stos{l|d}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1255],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19439 */
  {
    "*rep_stosqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rep stosb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1260],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19567 */
  {
    "*cmpstrnqi_nz_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1265],
    7,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19614 */
  {
    "*cmpstrnqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repz cmpsb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1265],
    7,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19683 */
  {
    "*strlenqi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "repnz scasb",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1272],
    6,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19819 */
  {
    "*x86_movdicc_0_m1_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1278],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19860 */
  {
    "x86_movsicc_0_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_x86_movsicc_0_m1,
    &operand_data[1280],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19877 */
  {
    "*x86_movsicc_0_m1_se",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1280],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19892 */
  {
    "*movsicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_652 },
#else
    { 0, output_652, 0 },
#endif
    0,
    &operand_data[1282],
    4,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:19914 */
  {
    "*movhicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_653 },
#else
    { 0, output_653, 0 },
#endif
    0,
    &operand_data[1286],
    4,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:19936 */
  {
    "*movqicc_noc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1290],
    5,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:19966 */
  {
    "*movsfcc_1_387",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_655 },
#else
    { 0, output_655, 0 },
#endif
    0,
    &operand_data[1295],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/i386.md:19982 */
  {
    "*movdfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_656 },
#else
    { 0, output_656, 0 },
#endif
    0,
    &operand_data[1299],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/i386.md:20033 */
  {
    "*movxfcc_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_657 },
#else
    { 0, output_657, 0 },
#endif
    0,
    &operand_data[1303],
    4,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:20050 */
  {
    "*sse5_pcmov_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1307],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20050 */
  {
    "*sse5_pcmov_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmov\t{%1, %3, %2, %0|%0, %2, %3, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1311],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20065 */
  {
    "*avx_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20065 */
  {
    "*avx_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20065 */
  {
    "*avx_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[970],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20065 */
  {
    "*avx_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[970],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20076 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[974],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20076 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[974],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20076 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[978],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20076 */
  {
    "smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[978],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20092 */
  {
    "*avx_ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1008],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20092 */
  {
    "*avx_ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1012],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20104 */
  {
    "*ieee_sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1016],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20104 */
  {
    "*ieee_smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1020],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20115 */
  {
    "*avx_ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1016],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20115 */
  {
    "*avx_ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1020],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20127 */
  {
    "*ieee_smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1016],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20127 */
  {
    "*ieee_smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1020],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:20185 */
  {
    "pro_epilogue_adjust_stack_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_676 },
#else
    { 0, 0, output_676 },
#endif
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_1,
    &operand_data[1315],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/i386.md:20294 */
  {
    "allocate_stack_worker_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t___chkstk",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack_worker_32,
    &operand_data[556],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21459 */
  {
    "*call_value_pop_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_678 },
#else
    { 0, 0, output_678 },
#endif
    0,
    &operand_data[881],
    4,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21474 */
  {
    "*call_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_679 },
#else
    { 0, 0, output_679 },
#endif
    0,
    &operand_data[1318],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21488 */
  {
    "*sibcall_value_pop_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_680 },
#else
    { 0, output_680, 0 },
#endif
    0,
    &operand_data[1322],
    4,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:21500 */
  {
    "*call_value_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_681 },
#else
    { 0, 0, output_681 },
#endif
    0,
    &operand_data[881],
    3,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21552 */
  {
    "*call_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_682 },
#else
    { 0, 0, output_682 },
#endif
    0,
    &operand_data[1318],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21564 */
  {
    "*sibcall_value_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_683 },
#else
    { 0, output_683, 0 },
#endif
    0,
    &operand_data[1322],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/i386.md:21635 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_684 },
#else
    { 0, 0, output_684 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21733 */
  {
    "*prefetch_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_685 },
#else
    { 0, 0, output_685 },
#endif
    0,
    &operand_data[1326],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21769 */
  {
    "*prefetch_3dnow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_686 },
#else
    { 0, 0, output_686 },
#endif
    0,
    &operand_data[1328],
    2,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/i386.md:21818 */
  {
    "stack_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %2|%2, %1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set_si,
    &operand_data[1330],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21836 */
  {
    "stack_tls_protect_set_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%%gs:%P1, %2|%2, DWORD PTR gs:%P1}\n\tmov{l}\t{%2, %0|%0, %2}\n\txor{l}\t%2, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_set_si,
    &operand_data[1333],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21890 */
  {
    "stack_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%2, %3|%3, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test_si,
    &operand_data[1336],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21910 */
  {
    "stack_tls_protect_test_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{l}\t{%1, %3|%3, %1}\n\txor{l}\t{%%gs:%P2, %3|%3, DWORD PTR gs:%P2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tls_protect_test_si,
    &operand_data[1340],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21938 */
  {
    "sse4_2_crc32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32qi,
    &operand_data[1344],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21938 */
  {
    "sse4_2_crc32hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32hi,
    &operand_data[1347],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:21938 */
  {
    "sse4_2_crc32si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_crc32si,
    &operand_data[1350],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:94 */
  {
    "*movv8qi_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_694 },
#else
    { 0, output_694, 0 },
#endif
    0,
    &operand_data[1353],
    2,
    0,
    10,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:94 */
  {
    "*movv4hi_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_695 },
#else
    { 0, output_695, 0 },
#endif
    0,
    &operand_data[1355],
    2,
    0,
    10,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:94 */
  {
    "*movv2si_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_696 },
#else
    { 0, output_696, 0 },
#endif
    0,
    &operand_data[1357],
    2,
    0,
    10,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:94 */
  {
    "*movv1di_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_697 },
#else
    { 0, output_697, 0 },
#endif
    0,
    &operand_data[1359],
    2,
    0,
    10,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:120 */
  {
    "*movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_698 },
#else
    { 0, output_698, 0 },
#endif
    0,
    &operand_data[1361],
    2,
    0,
    14,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:120 */
  {
    "*movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_699 },
#else
    { 0, output_699, 0 },
#endif
    0,
    &operand_data[1363],
    2,
    0,
    14,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:120 */
  {
    "*movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_700 },
#else
    { 0, output_700, 0 },
#endif
    0,
    &operand_data[1365],
    2,
    0,
    14,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:120 */
  {
    "*movv1di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_701 },
#else
    { 0, output_701, 0 },
#endif
    0,
    &operand_data[1367],
    2,
    0,
    14,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:209 */
  {
    "*movv2sf_internal_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_702 },
#else
    { 0, output_702, 0 },
#endif
    0,
    &operand_data[1369],
    2,
    0,
    11,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:236 */
  {
    "*movv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_703 },
#else
    { 0, output_703, 0 },
#endif
    0,
    &operand_data[1369],
    2,
    0,
    11,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:286 */
  {
    "sse_movntdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntdi,
    &operand_data[1371],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:309 */
  {
    "*mmx_addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfadd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1373],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:332 */
  {
    "*mmx_subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_706 },
#else
    { 0, output_706, 0 },
#endif
    0,
    &operand_data[1376],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:350 */
  {
    "*mmx_mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmul\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1373],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:375 */
  {
    "*mmx_smaxv2sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1373],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:375 */
  {
    "*mmx_sminv2sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1373],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:386 */
  {
    "*mmx_smaxv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmax\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1379],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:386 */
  {
    "*mmx_sminv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfmin\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1379],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:396 */
  {
    "mmx_rcpv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcp\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpv2sf2,
    &operand_data[1382],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:405 */
  {
    "mmx_rcpit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit1v2sf3,
    &operand_data[1379],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:415 */
  {
    "mmx_rcpit2v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrcpit2\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rcpit2v2sf3,
    &operand_data[1379],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:425 */
  {
    "mmx_rsqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqrt\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqrtv2sf2,
    &operand_data[1382],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:434 */
  {
    "mmx_rsqit1v2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfrsqit1\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_rsqit1v2sf3,
    &operand_data[1379],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:444 */
  {
    "mmx_haddv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_haddv2sf3,
    &operand_data[1379],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:462 */
  {
    "mmx_hsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_hsubv2sf3,
    &operand_data[1379],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:480 */
  {
    "mmx_addsubv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfpnacc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_addsubv2sf3,
    &operand_data[1379],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:506 */
  {
    "*mmx_eqv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpeq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1384],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:515 */
  {
    "mmx_gtv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpgt\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2sf3,
    &operand_data[1387],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:524 */
  {
    "mmx_gev2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pfcmpge\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gev2sf3,
    &operand_data[1387],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:539 */
  {
    "mmx_pf2id",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2id\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2id,
    &operand_data[1390],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:547 */
  {
    "mmx_pf2iw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pf2iw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pf2iw,
    &operand_data[1390],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:558 */
  {
    "mmx_pi2fw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pi2fw,
    &operand_data[1392],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:569 */
  {
    "mmx_floatv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pi2fd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_floatv2si2,
    &operand_data[1392],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:583 */
  {
    "mmx_pswapdv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2sf2,
    &operand_data[1382],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:592 */
  {
    "*vec_dupv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1394],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:601 */
  {
    "*mmx_concatv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_729 },
#else
    { 0, output_729, 0 },
#endif
    0,
    &operand_data[1396],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:626 */
  {
    "*vec_extractv2sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1399],
    2,
    0,
    6,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:647 */
  {
    "*vec_extractv2sf_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_731 },
#else
    { 0, output_731, 0 },
#endif
    0,
    &operand_data[1401],
    2,
    0,
    6,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1418],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_addv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1421],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:710 */
  {
    "*mmx_subv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1424],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1406],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:729 */
  {
    "*mmx_ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1412],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:746 */
  {
    "*mmx_mulv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:768 */
  {
    "*mmx_smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:796 */
  {
    "*mmx_umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:834 */
  {
    "*mmx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1427],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:874 */
  {
    "*mmx_pmulhrwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:906 */
  {
    "*sse2_umulv1siv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1430],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:930 */
  {
    "*mmx_smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:930 */
  {
    "*mmx_sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:949 */
  {
    "*mmx_umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:949 */
  {
    "*mmx_uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:960 */
  {
    "mmx_ashrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv4hi3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:960 */
  {
    "mmx_ashrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashrv2si3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:970 */
  {
    "mmx_lshrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv4hi3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:970 */
  {
    "mmx_lshrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv2si3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:970 */
  {
    "mmx_lshrv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_lshrv1di3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:980 */
  {
    "mmx_ashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv4hi3,
    &operand_data[1433],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:980 */
  {
    "mmx_ashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv2si3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:980 */
  {
    "mmx_ashlv1di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_ashlv1di3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1004 */
  {
    "*mmx_eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1004 */
  {
    "*mmx_eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1004 */
  {
    "*mmx_eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1014 */
  {
    "mmx_gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv8qi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1014 */
  {
    "mmx_gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv4hi3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1014 */
  {
    "mmx_gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_gtv2si3,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1030 */
  {
    "mmx_andnotv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv8qi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1030 */
  {
    "mmx_andnotv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv4hi3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1030 */
  {
    "mmx_andnotv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_andnotv2si3,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1048 */
  {
    "*mmx_xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1415],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1064 */
  {
    "mmx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1451],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1076 */
  {
    "mmx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1088 */
  {
    "mmx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1451],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1100 */
  {
    "mmx_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhbw,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1115 */
  {
    "mmx_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklbw,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1130 */
  {
    "mmx_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhwd,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1143 */
  {
    "mmx_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpcklwd,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1156 */
  {
    "mmx_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckhdq,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1169 */
  {
    "mmx_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_punpckldq,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1195 */
  {
    "*mmx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_793 },
#else
    { 0, 0, output_793 },
#endif
    0,
    &operand_data[1457],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/mmx.md:1213 */
  {
    "mmx_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pextrw,
    &operand_data[1461],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1239 */
  {
    "mmx_pshufw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_795 },
#else
    { 0, 0, output_795 },
#endif
    (insn_gen_fn) gen_mmx_pshufw_1,
    &operand_data[1464],
    6,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/mmx.md:1261 */
  {
    "mmx_pswapdv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pswapd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pswapdv2si2,
    &operand_data[1470],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1271 */
  {
    "*vec_dupv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufw\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1472],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1281 */
  {
    "*vec_dupv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1474],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1290 */
  {
    "*mmx_concatv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_799 },
#else
    { 0, output_799, 0 },
#endif
    0,
    &operand_data[1476],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:1315 */
  {
    "*vec_extractv2si_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1479],
    2,
    0,
    5,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1336 */
  {
    "*vec_extractv2si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_801 },
#else
    { 0, output_801, 0 },
#endif
    0,
    &operand_data[1481],
    2,
    0,
    7,
    2
  },
  /* ../.././gcc/config/i386/mmx.md:1472 */
  {
    "*mmx_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_802 },
#else
    { 0, 0, output_802 },
#endif
    0,
    &operand_data[1403],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/mmx.md:1516 */
  {
    "*mmx_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1535 */
  {
    "mmx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_psadbw,
    &operand_data[1483],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1545 */
  {
    "mmx_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_pmovmskb,
    &operand_data[1486],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1563 */
  {
    "*mmx_maskmovq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maskmovq\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1488],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1587 */
  {
    "mmx_emms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "emms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_emms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/mmx.md:1610 */
  {
    "mmx_femms",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "femms",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mmx_femms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_809 },
#else
    { 0, 0, output_809 },
#endif
    0,
    &operand_data[1491],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_810 },
#else
    { 0, 0, output_810 },
#endif
    0,
    &operand_data[1493],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_811 },
#else
    { 0, 0, output_811 },
#endif
    0,
    &operand_data[1495],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_812 },
#else
    { 0, 0, output_812 },
#endif
    0,
    &operand_data[1497],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_813 },
#else
    { 0, 0, output_813 },
#endif
    0,
    &operand_data[1499],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_814 },
#else
    { 0, 0, output_814 },
#endif
    0,
    &operand_data[1501],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv32qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_815 },
#else
    { 0, 0, output_815 },
#endif
    0,
    &operand_data[1503],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv16hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_816 },
#else
    { 0, 0, output_816 },
#endif
    0,
    &operand_data[1505],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv8si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_817 },
#else
    { 0, 0, output_817 },
#endif
    0,
    &operand_data[1507],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv4di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_818 },
#else
    { 0, 0, output_818 },
#endif
    0,
    &operand_data[1509],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv8sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_819 },
#else
    { 0, 0, output_819 },
#endif
    0,
    &operand_data[1511],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:158 */
  {
    "*avx_movv4df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_820 },
#else
    { 0, 0, output_820 },
#endif
    0,
    &operand_data[1513],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_821 },
#else
    { 0, 0, output_821 },
#endif
    0,
    &operand_data[1491],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_822 },
#else
    { 0, 0, output_822 },
#endif
    0,
    &operand_data[1493],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_823 },
#else
    { 0, 0, output_823 },
#endif
    0,
    &operand_data[1495],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_824 },
#else
    { 0, 0, output_824 },
#endif
    0,
    &operand_data[1497],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_825 },
#else
    { 0, 0, output_825 },
#endif
    0,
    &operand_data[1499],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:202 */
  {
    "*movv2df_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_826 },
#else
    { 0, 0, output_826 },
#endif
    0,
    &operand_data[1501],
    2,
    0,
    3,
    3
  },
  /* ../.././gcc/config/i386/sse.md:252 */
  {
    "movdi_to_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_to_sse,
    &operand_data[1515],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:336 */
  {
    "avx_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movups,
    &operand_data[1518],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:336 */
  {
    "avx_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movupd,
    &operand_data[1520],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:336 */
  {
    "avx_movups256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movups256,
    &operand_data[1522],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:336 */
  {
    "avx_movupd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movupd256,
    &operand_data[1524],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:348 */
  {
    "sse2_movq128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movq128,
    &operand_data[1526],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:361 */
  {
    "sse_movups",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movups\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movups,
    &operand_data[1518],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:361 */
  {
    "sse2_movupd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movupd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movupd,
    &operand_data[1520],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:372 */
  {
    "avx_movdqu256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movdqu256,
    &operand_data[1528],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:372 */
  {
    "avx_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movdqu,
    &operand_data[1530],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:383 */
  {
    "sse2_movdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movdqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movdqu,
    &operand_data[1530],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:393 */
  {
    "avx_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4sf,
    &operand_data[1532],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:393 */
  {
    "avx_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv2df,
    &operand_data[1534],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:393 */
  {
    "avx_movntv8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv8sf,
    &operand_data[1536],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:393 */
  {
    "avx_movntv4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4df,
    &operand_data[1538],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:404 */
  {
    "sse_movntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movntv4sf,
    &operand_data[1532],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:404 */
  {
    "sse2_movntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2df,
    &operand_data[1534],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:414 */
  {
    "avx_movntv4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv4di,
    &operand_data[1540],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:414 */
  {
    "avx_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movntv2di,
    &operand_data[1542],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:425 */
  {
    "sse2_movntv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntv2di,
    &operand_data[1542],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:435 */
  {
    "sse2_movntsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movnti\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movntsi,
    &operand_data[1544],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:444 */
  {
    "avx_lddqu256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vlddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_lddqu256,
    &operand_data[1546],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:444 */
  {
    "avx_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vlddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_lddqu,
    &operand_data[1548],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:455 */
  {
    "sse3_lddqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lddqu\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_lddqu,
    &operand_data[1548],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1553],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1559],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_addv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_subv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1565],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_addv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:520 */
  {
    "*avx_subv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1571],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:540 */
  {
    "*addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:540 */
  {
    "*subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1577],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:540 */
  {
    "*addv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:540 */
  {
    "*subv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1583],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:551 */
  {
    "*avx_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:551 */
  {
    "*avx_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:551 */
  {
    "*avx_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:551 */
  {
    "*avx_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:565 */
  {
    "sse_vmaddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmaddv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:565 */
  {
    "sse_vmsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsubv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:565 */
  {
    "sse2_vmaddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmaddv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:565 */
  {
    "sse2_vmsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsubv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:586 */
  {
    "*avx_mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:586 */
  {
    "*avx_mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:586 */
  {
    "*avx_mulv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:586 */
  {
    "*avx_mulv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:606 */
  {
    "*mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:606 */
  {
    "*mulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:617 */
  {
    "*avx_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:617 */
  {
    "*avx_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:631 */
  {
    "sse_vmmulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmulv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:631 */
  {
    "sse2_vmmulv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmulv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:669 */
  {
    "avx_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv4sf3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:669 */
  {
    "avx_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv2df3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:669 */
  {
    "avx_divv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv8sf3,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:669 */
  {
    "avx_divv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_divv4df3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:703 */
  {
    "*avx_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:703 */
  {
    "*avx_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:714 */
  {
    "sse_divv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_divv4sf3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:714 */
  {
    "sse2_divv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_divv2df3,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:724 */
  {
    "*avx_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:724 */
  {
    "*avx_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdivsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:738 */
  {
    "sse_vmdivv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmdivv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:738 */
  {
    "sse2_vmdivv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmdivv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:751 */
  {
    "avx_rcpv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_rcpv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:761 */
  {
    "sse_rcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrcpps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rcpv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:771 */
  {
    "*avx_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrcpss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:784 */
  {
    "sse_vmrcpv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rcpss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrcpv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:810 */
  {
    "avx_sqrtv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_sqrtv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:833 */
  {
    "sse_sqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_sqrtv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:842 */
  {
    "sqrtv4df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv4df2,
    &operand_data[1612],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:851 */
  {
    "sqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vsqrtpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtv2df2,
    &operand_data[1614],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:860 */
  {
    "*avx_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:860 */
  {
    "*avx_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsqrtsd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1614],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:873 */
  {
    "sse_vmsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsqrtv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:873 */
  {
    "sse2_vmsqrtv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqrtsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsqrtv2df2,
    &operand_data[1617],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:895 */
  {
    "avx_rsqrtv8sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_rsqrtv8sf2,
    &operand_data[1604],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:915 */
  {
    "sse_rsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vrsqrtps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_rsqrtv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:925 */
  {
    "*avx_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrsqrtss\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:938 */
  {
    "sse_vmrsqrtv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrtss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmrsqrtv4sf2,
    &operand_data[1609],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_smaxv8sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_sminv8sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_smaxv4df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:978 */
  {
    "*avx_sminv4df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:990 */
  {
    "*smaxv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:990 */
  {
    "*sminv4sf3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:990 */
  {
    "*smaxv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:990 */
  {
    "*sminv2df3_finite",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_smaxv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_sminv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_smaxv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1001 */
  {
    "*avx_sminv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1012 */
  {
    "*smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1012 */
  {
    "*sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1012 */
  {
    "*smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1012 */
  {
    "*sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1022 */
  {
    "*avx_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1022 */
  {
    "*avx_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1022 */
  {
    "*avx_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1022 */
  {
    "*avx_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1036 */
  {
    "sse_vmsmaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsmaxv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1036 */
  {
    "sse_vmsminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmsminv4sf3,
    &operand_data[1592],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1036 */
  {
    "sse2_vmsmaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsmaxv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1036 */
  {
    "sse2_vmsminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmsminv2df3,
    &operand_data[1595],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1055 */
  {
    "*avx_ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1055 */
  {
    "*avx_ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1055 */
  {
    "*avx_ieee_sminv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1055 */
  {
    "*avx_ieee_sminv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1067 */
  {
    "*avx_ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1067 */
  {
    "*avx_ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1067 */
  {
    "*avx_ieee_smaxv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1067 */
  {
    "*avx_ieee_smaxv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1079 */
  {
    "*ieee_sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1079 */
  {
    "*ieee_sminv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "minpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1090 */
  {
    "*ieee_smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1090 */
  {
    "*ieee_smaxv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maxpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1101 */
  {
    "avx_addsubv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_addsubv8sf3,
    &operand_data[1598],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1115 */
  {
    "avx_addsubv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_addsubv4df3,
    &operand_data[1601],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1129 */
  {
    "*avx_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1143 */
  {
    "sse3_addsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv4sf3,
    &operand_data[1592],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1157 */
  {
    "*avx_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1171 */
  {
    "sse3_addsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_addsubv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1184 */
  {
    "avx_haddv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_haddv4df3,
    &operand_data[1601],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1184 */
  {
    "avx_hsubv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_hsubv4df3,
    &operand_data[1601],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1211 */
  {
    "avx_haddv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_haddv8sf3,
    &operand_data[1598],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1211 */
  {
    "avx_hsubv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_hsubv8sf3,
    &operand_data[1598],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1254 */
  {
    "*avx_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1254 */
  {
    "*avx_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1281 */
  {
    "sse3_haddv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv4sf3,
    &operand_data[1592],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1281 */
  {
    "sse3_hsubv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv4sf3,
    &operand_data[1592],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1308 */
  {
    "*avx_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1308 */
  {
    "*avx_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1589],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1327 */
  {
    "sse3_haddv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "haddpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_haddv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1327 */
  {
    "sse3_hsubv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "hsubpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_hsubv2df3,
    &operand_data[1595],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1394 */
  {
    "avx_cmppsv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppsv4sf3,
    &operand_data[1620],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1394 */
  {
    "avx_cmppdv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppdv2df3,
    &operand_data[1624],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1394 */
  {
    "avx_cmppsv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppsv8sf3,
    &operand_data[1628],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1394 */
  {
    "avx_cmppdv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmppdv4df3,
    &operand_data[1632],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1407 */
  {
    "avx_cmpssv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmpssv4sf3,
    &operand_data[1636],
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1407 */
  {
    "avx_cmpsdv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cmpsdv2df3,
    &operand_data[1640],
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1425 */
  {
    "*avx_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1644],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1425 */
  {
    "*avx_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1648],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1425 */
  {
    "*avx_maskcmpv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1425 */
  {
    "*avx_maskcmpv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1656],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1436 */
  {
    "sse_maskcmpsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpsf3,
    &operand_data[1660],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1436 */
  {
    "sse2_maskcmpdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpdf3,
    &operand_data[1664],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1436 */
  {
    "sse_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_maskcmpv4sf3,
    &operand_data[1668],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1436 */
  {
    "sse2_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3pd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_maskcmpv2df3,
    &operand_data[1672],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1447 */
  {
    "sse_vmmaskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_vmmaskcmpv4sf3,
    &operand_data[1668],
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1447 */
  {
    "sse2_vmmaskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%D3sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_vmmaskcmpv2df3,
    &operand_data[1672],
    4,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1460 */
  {
    "sse_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_comi,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1460 */
  {
    "sse2_comi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_comi,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1475 */
  {
    "sse_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vucomiss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ucomi,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1475 */
  {
    "sse2_ucomi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vucomisd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_ucomi,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1511 */
  {
    "avx_andnotv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv4sf3,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1511 */
  {
    "avx_andnotv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv2df3,
    &operand_data[1589],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1511 */
  {
    "avx_andnotv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv8sf3,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1511 */
  {
    "avx_andnotv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_andnotv4df3,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1523 */
  {
    "sse_andnotv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_andnotv4sf3,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1523 */
  {
    "sse2_andnotv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv2df3,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1550],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1556],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_andv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_iorv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_xorv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1562],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_andv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_iorv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1542 */
  {
    "*avx_xorv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1568],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1574],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*andv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*iorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1562 */
  {
    "*xorv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1578 */
  {
    "*avx_andnotsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1578 */
  {
    "*avx_andnotdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1590 */
  {
    "*andnotsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1590 */
  {
    "*andnotdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1685],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1676],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1601 */
  {
    "*avx_xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1679],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*andsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*iorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*xorsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*anddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1685],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*iordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1685],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1612 */
  {
    "*xordf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorpd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1685],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1640 */
  {
    "sse5_fmaddsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmaddsf4,
    &operand_data[1688],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1640 */
  {
    "sse5_fmadddf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmadddf4,
    &operand_data[1692],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1640 */
  {
    "sse5_fmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmaddv4sf4,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1640 */
  {
    "sse5_fmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmaddv2df4,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1678 */
  {
    "sse5_vmfmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfmaddv4sf4,
    &operand_data[1704],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1678 */
  {
    "sse5_vmfmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfmaddv2df4,
    &operand_data[1708],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1696 */
  {
    "sse5_fmsubsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmsubsf4,
    &operand_data[1688],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1696 */
  {
    "sse5_fmsubdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmsubdf4,
    &operand_data[1692],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1696 */
  {
    "sse5_fmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmsubv4sf4,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1696 */
  {
    "sse5_fmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fmsubv2df4,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1734 */
  {
    "sse5_vmfmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfmsubv4sf4,
    &operand_data[1704],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1734 */
  {
    "sse5_vmfmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfmsubv2df4,
    &operand_data[1708],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1754 */
  {
    "sse5_fnmaddsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmaddsf4,
    &operand_data[1688],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1754 */
  {
    "sse5_fnmadddf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmadddf4,
    &operand_data[1692],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1754 */
  {
    "sse5_fnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmaddv4sf4,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1754 */
  {
    "sse5_fnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmaddv2df4,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1792 */
  {
    "sse5_vmfnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfnmaddv4sf4,
    &operand_data[1704],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1792 */
  {
    "sse5_vmfnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfnmaddv2df4,
    &operand_data[1708],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1811 */
  {
    "sse5_fnmsubsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmsubsf4,
    &operand_data[1712],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1811 */
  {
    "sse5_fnmsubdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmsubdf4,
    &operand_data[1716],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1811 */
  {
    "sse5_fnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmsubv4sf4,
    &operand_data[1704],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1811 */
  {
    "sse5_fnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_fnmsubv2df4,
    &operand_data[1708],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1851 */
  {
    "sse5_vmfnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfnmsubv4sf4,
    &operand_data[1704],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1851 */
  {
    "sse5_vmfnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfnmsubv2df4,
    &operand_data[1708],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1892 */
  {
    "*sse5i_fmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1892 */
  {
    "*sse5i_fmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1926 */
  {
    "*sse5i_fmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1926 */
  {
    "*sse5i_fmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1962 */
  {
    "*sse5i_fnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1696],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1962 */
  {
    "*sse5i_fnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1700],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1998 */
  {
    "*sse5i_fnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1720],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:1998 */
  {
    "*sse5i_fnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1724],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2039 */
  {
    "*sse5i_vmfmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1728],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2039 */
  {
    "*sse5i_vmfmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1732],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2079 */
  {
    "*sse5i_vmfmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1728],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2079 */
  {
    "*sse5i_vmfmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1732],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2120 */
  {
    "*sse5i_vmfnmaddv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1736],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2120 */
  {
    "*sse5i_vmfnmaddv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1740],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2161 */
  {
    "*sse5i_vmfnmsubv4sf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1728],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2161 */
  {
    "*sse5i_vmfnmsubv2df4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1732],
    4,
    1,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2185 */
  {
    "sse_cvtpi2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2ps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtpi2ps,
    &operand_data[1744],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2197 */
  {
    "sse_cvtps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtps2pi,
    &operand_data[1747],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2209 */
  {
    "sse_cvttps2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttps2pi,
    &operand_data[1747],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2220 */
  {
    "*avx_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsi2ss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1749],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2233 */
  {
    "sse_cvtsi2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtsi2ss,
    &operand_data[1752],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2274 */
  {
    "sse_cvtss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si,
    &operand_data[1755],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2289 */
  {
    "sse_cvtss2si_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvtss2si_2,
    &operand_data[204],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2330 */
  {
    "sse_cvttss2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_cvttss2si,
    &operand_data[1755],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2360 */
  {
    "avx_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2ps,
    &operand_data[1757],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2360 */
  {
    "avx_cvtdq2ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2ps256,
    &operand_data[1759],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2370 */
  {
    "sse2_cvtdq2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtdq2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2ps,
    &operand_data[1757],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2378 */
  {
    "avx_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2dq,
    &operand_data[1761],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2378 */
  {
    "avx_cvtps2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2dq256,
    &operand_data[1763],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2389 */
  {
    "sse2_cvtps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2dq,
    &operand_data[1761],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2399 */
  {
    "avx_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttps2dq,
    &operand_data[1761],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2399 */
  {
    "avx_cvttps2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttps2dq256,
    &operand_data[1763],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2409 */
  {
    "sse2_cvttps2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttps2dq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttps2dq,
    &operand_data[1761],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2424 */
  {
    "sse2_cvtpi2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpi2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpi2pd,
    &operand_data[1765],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2433 */
  {
    "sse2_cvtpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtpd2pi,
    &operand_data[1767],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2444 */
  {
    "sse2_cvttpd2pi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvttpd2pi\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttpd2pi,
    &operand_data[1767],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2454 */
  {
    "*avx_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsi2sd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1769],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2467 */
  {
    "sse2_cvtsi2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsi2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsi2sd,
    &operand_data[1772],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2508 */
  {
    "sse2_cvtsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si,
    &operand_data[1775],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2523 */
  {
    "sse2_cvtsd2si_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2si_2,
    &operand_data[206],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2564 */
  {
    "sse2_cvttsd2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvttsd2si,
    &operand_data[1775],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2594 */
  {
    "avx_cvtdq2pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtdq2pd256,
    &operand_data[1777],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2603 */
  {
    "sse2_cvtdq2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtdq2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtdq2pd,
    &operand_data[1779],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2615 */
  {
    "avx_cvtpd2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtpd2dq{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtpd2dq256,
    &operand_data[1781],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2634 */
  {
    "*sse2_cvtpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1099 },
#else
    { 0, 0, output_1099 },
#endif
    0,
    &operand_data[1783],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:2649 */
  {
    "avx_cvttpd2dq256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvttpd2dq{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvttpd2dq256,
    &operand_data[1781],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2666 */
  {
    "*sse2_cvttpd2dq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1101 },
#else
    { 0, 0, output_1101 },
#endif
    0,
    &operand_data[1783],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:2680 */
  {
    "*avx_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtsd2ss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1786],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2694 */
  {
    "sse2_cvtsd2ss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtsd2ss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtsd2ss,
    &operand_data[1789],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2709 */
  {
    "*avx_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtss2sd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1792],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2724 */
  {
    "sse2_cvtss2sd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtss2sd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtss2sd,
    &operand_data[1795],
    3,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2739 */
  {
    "avx_cvtpd2ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtpd2ps{y}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtpd2ps256,
    &operand_data[1798],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2758 */
  {
    "*sse2_cvtpd2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1107 },
#else
    { 0, 0, output_1107 },
#endif
    0,
    &operand_data[1800],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:2773 */
  {
    "avx_cvtps2pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_cvtps2pd256,
    &operand_data[1803],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2783 */
  {
    "sse2_cvtps2pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtps2pd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_cvtps2pd,
    &operand_data[1805],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:2972 */
  {
    "*avx_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1110 },
#else
    { 0, output_1110, 0 },
#endif
    0,
    &operand_data[1807],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:2991 */
  {
    "sse_movhlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1111 },
#else
    { 0, output_1111, 0 },
#endif
    (insn_gen_fn) gen_sse_movhlps,
    &operand_data[1810],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3022 */
  {
    "*avx_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1112 },
#else
    { 0, output_1112, 0 },
#endif
    0,
    &operand_data[1813],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3041 */
  {
    "sse_movlhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1113 },
#else
    { 0, output_1113, 0 },
#endif
    (insn_gen_fn) gen_sse_movlhps,
    &operand_data[1816],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3059 */
  {
    "avx_unpckhps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpckhps256,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3075 */
  {
    "*avx_unpckhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3089 */
  {
    "sse_unpckhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpckhps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpckhps,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3102 */
  {
    "avx_unpcklps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpcklps256,
    &operand_data[1598],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3118 */
  {
    "*avx_unpcklps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1586],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3132 */
  {
    "sse_unpcklps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_unpcklps,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3147 */
  {
    "avx_movshdup256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movshdup256,
    &operand_data[1604],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3163 */
  {
    "sse3_movshdup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovshdup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movshdup,
    &operand_data[1606],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3180 */
  {
    "avx_movsldup256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movsldup256,
    &operand_data[1604],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3196 */
  {
    "sse3_movsldup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovsldup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_movsldup,
    &operand_data[1606],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3234 */
  {
    "avx_shufps256_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1124 },
#else
    { 0, 0, output_1124 },
#endif
    (insn_gen_fn) gen_avx_shufps256_1,
    &operand_data[1819],
    11,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3283 */
  {
    "*avx_shufps_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1125 },
#else
    { 0, 0, output_1125 },
#endif
    0,
    &operand_data[1830],
    7,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3283 */
  {
    "*avx_shufps_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1126 },
#else
    { 0, 0, output_1126 },
#endif
    0,
    &operand_data[1837],
    7,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3308 */
  {
    "sse_shufps_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1127 },
#else
    { 0, 0, output_1127 },
#endif
    (insn_gen_fn) gen_sse_shufps_v4sf,
    &operand_data[1844],
    7,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3308 */
  {
    "sse_shufps_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1128 },
#else
    { 0, 0, output_1128 },
#endif
    (insn_gen_fn) gen_sse_shufps_v4si,
    &operand_data[1851],
    7,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3332 */
  {
    "sse_storehps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1129 },
#else
    { 0, output_1129, 0 },
#endif
    (insn_gen_fn) gen_sse_storehps,
    &operand_data[1858],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3356 */
  {
    "*avx_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1130 },
#else
    { 0, output_1130, 0 },
#endif
    0,
    &operand_data[1860],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3372 */
  {
    "sse_loadhps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1131 },
#else
    { 0, output_1131, 0 },
#endif
    (insn_gen_fn) gen_sse_loadhps,
    &operand_data[1863],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3387 */
  {
    "*avx_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1132 },
#else
    { 0, output_1132, 0 },
#endif
    0,
    &operand_data[1866],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3401 */
  {
    "sse_storelps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1133 },
#else
    { 0, output_1133, 0 },
#endif
    (insn_gen_fn) gen_sse_storelps,
    &operand_data[1866],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3424 */
  {
    "*avx_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1134 },
#else
    { 0, output_1134, 0 },
#endif
    0,
    &operand_data[1868],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3440 */
  {
    "sse_loadlps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1135 },
#else
    { 0, output_1135, 0 },
#endif
    (insn_gen_fn) gen_sse_loadlps,
    &operand_data[1871],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3455 */
  {
    "*avx_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovss\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1874],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3467 */
  {
    "sse_movss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movss,
    &operand_data[1877],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3478 */
  {
    "*vec_dupv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshufps\t{$0, %1, %1, %0|%0, %1, %1, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3488 */
  {
    "*vec_dupv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shufps\t{$0, %0, %0|%0, %0, 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1882],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3497 */
  {
    "*vec_concatv2sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1140 },
#else
    { 0, output_1140, 0 },
#endif
    0,
    &operand_data[1884],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3518 */
  {
    "*vec_concatv2sf_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1141 },
#else
    { 0, output_1141, 0 },
#endif
    0,
    &operand_data[1887],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3537 */
  {
    "*vec_concatv2sf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1142 },
#else
    { 0, output_1142, 0 },
#endif
    0,
    &operand_data[1890],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3551 */
  {
    "*vec_concatv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1143 },
#else
    { 0, output_1143, 0 },
#endif
    0,
    &operand_data[1893],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3564 */
  {
    "*vec_concatv4sf_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1144 },
#else
    { 0, output_1144, 0 },
#endif
    0,
    &operand_data[1896],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3585 */
  {
    "*vec_setv4sf_0_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1145 },
#else
    { 0, output_1145, 0 },
#endif
    0,
    &operand_data[1899],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3602 */
  {
    "vec_setv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1146 },
#else
    { 0, output_1146, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4sf_0,
    &operand_data[1902],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3619 */
  {
    "*vec_setv4sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1147 },
#else
    { 0, 0, output_1147 },
#endif
    0,
    &operand_data[1905],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3635 */
  {
    "*vec_setv4sf_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1148 },
#else
    { 0, 0, output_1148 },
#endif
    0,
    &operand_data[1909],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:3651 */
  {
    "*avx_insertps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1913],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3663 */
  {
    "sse4_1_insertps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_insertps,
    &operand_data[1917],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3700 */
  {
    "*vec_extractv4sf_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1921],
    2,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3739 */
  {
    "vec_extract_lo_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x0, %1, %0|%0, %1, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v4di,
    &operand_data[1923],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3739 */
  {
    "vec_extract_lo_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x0, %1, %0|%0, %1, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v4df,
    &operand_data[1925],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3751 */
  {
    "vec_extract_hi_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v4di,
    &operand_data[1923],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3751 */
  {
    "vec_extract_hi_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v4df,
    &operand_data[1925],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3763 */
  {
    "vec_extract_lo_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v8si,
    &operand_data[1927],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3763 */
  {
    "vec_extract_lo_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v8sf,
    &operand_data[1929],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3776 */
  {
    "vec_extract_hi_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v8si,
    &operand_data[1927],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3776 */
  {
    "vec_extract_hi_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v8sf,
    &operand_data[1929],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3789 */
  {
    "vec_extract_lo_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v16hi,
    &operand_data[1931],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3804 */
  {
    "vec_extract_hi_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v16hi,
    &operand_data[1931],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3819 */
  {
    "vec_extract_lo_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_lo_v32qi,
    &operand_data[1933],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3838 */
  {
    "vec_extract_hi_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_extract_hi_v32qi,
    &operand_data[1933],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3857 */
  {
    "*sse4_1_extractps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vextractps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1935],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3869 */
  {
    "*vec_extract_v4sf_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1938],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3902 */
  {
    "avx_unpckhpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpckhpd256,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3927 */
  {
    "*avx_unpckhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1167 },
#else
    { 0, output_1167, 0 },
#endif
    0,
    &operand_data[1941],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3944 */
  {
    "sse2_unpckhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1168 },
#else
    { 0, output_1168, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpckhpd,
    &operand_data[1944],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3960 */
  {
    "avx_movddup256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movddup256,
    &operand_data[1612],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:3974 */
  {
    "*avx_movddup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1170 },
#else
    { 0, output_1170, 0 },
#endif
    0,
    &operand_data[1947],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:3990 */
  {
    "*sse3_movddup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1171 },
#else
    { 0, output_1171, 0 },
#endif
    0,
    &operand_data[1947],
    2,
    1,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4022 */
  {
    "avx_unpcklpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_unpcklpd256,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4047 */
  {
    "*avx_unpcklpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1173 },
#else
    { 0, output_1173, 0 },
#endif
    0,
    &operand_data[1949],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4064 */
  {
    "sse2_unpcklpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1174 },
#else
    { 0, output_1174, 0 },
#endif
    (insn_gen_fn) gen_sse2_unpcklpd,
    &operand_data[1952],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4096 */
  {
    "avx_shufpd256_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1175 },
#else
    { 0, 0, output_1175 },
#endif
    (insn_gen_fn) gen_avx_shufpd256_1,
    &operand_data[1955],
    7,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:4180 */
  {
    "*avx_punpckhqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhqdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4194 */
  {
    "sse2_punpckhqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhqdq,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4208 */
  {
    "*avx_punpcklqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4222 */
  {
    "sse2_punpcklqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklqdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklqdq,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4236 */
  {
    "*avx_shufpd_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1180 },
#else
    { 0, 0, output_1180 },
#endif
    0,
    &operand_data[1968],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:4236 */
  {
    "*avx_shufpd_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1181 },
#else
    { 0, 0, output_1181 },
#endif
    0,
    &operand_data[1973],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:4257 */
  {
    "sse2_shufpd_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1182 },
#else
    { 0, 0, output_1182 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_v2df,
    &operand_data[1978],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:4257 */
  {
    "sse2_shufpd_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1183 },
#else
    { 0, 0, output_1183 },
#endif
    (insn_gen_fn) gen_sse2_shufpd_v2di,
    &operand_data[1983],
    5,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:4279 */
  {
    "*avx_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1184 },
#else
    { 0, output_1184, 0 },
#endif
    0,
    &operand_data[1988],
    2,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4295 */
  {
    "sse2_storehpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1185 },
#else
    { 0, output_1185, 0 },
#endif
    (insn_gen_fn) gen_sse2_storehpd,
    &operand_data[1990],
    2,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4323 */
  {
    "sse2_storelpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1186 },
#else
    { 0, output_1186, 0 },
#endif
    (insn_gen_fn) gen_sse2_storelpd,
    &operand_data[1992],
    2,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4368 */
  {
    "*avx_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1187 },
#else
    { 0, output_1187, 0 },
#endif
    0,
    &operand_data[1994],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4386 */
  {
    "sse2_loadhpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1188 },
#else
    { 0, output_1188, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadhpd,
    &operand_data[1997],
    3,
    0,
    6,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4427 */
  {
    "*avx_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1189 },
#else
    { 0, output_1189, 0 },
#endif
    0,
    &operand_data[2000],
    3,
    0,
    7,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4447 */
  {
    "sse2_loadlpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1190 },
#else
    { 0, output_1190, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadlpd,
    &operand_data[2003],
    3,
    0,
    8,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4480 */
  {
    "*vec_extractv2df_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1191 },
#else
    { 0, output_1191, 0 },
#endif
    0,
    &operand_data[2006],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4494 */
  {
    "*vec_extractv2df_0_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1192 },
#else
    { 0, output_1192, 0 },
#endif
    0,
    &operand_data[2008],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4508 */
  {
    "*avx_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1193 },
#else
    { 0, output_1193, 0 },
#endif
    0,
    &operand_data[2010],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4525 */
  {
    "sse2_movsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1194 },
#else
    { 0, output_1194, 0 },
#endif
    (insn_gen_fn) gen_sse2_movsd,
    &operand_data[2013],
    3,
    0,
    6,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4542 */
  {
    "*vec_dupv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2016],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4552 */
  {
    "vec_dupv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "unpcklpd\t%0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_dupv2df,
    &operand_data[2018],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4561 */
  {
    "*vec_concatv2df_sse3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovddup\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2016],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4572 */
  {
    "*vec_concatv2df_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1198 },
#else
    { 0, output_1198, 0 },
#endif
    0,
    &operand_data[2020],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4586 */
  {
    "*vec_concatv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1199 },
#else
    { 0, output_1199, 0 },
#endif
    0,
    &operand_data[2023],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2029],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2035],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2041],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2044],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4623 */
  {
    "*avx_subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2047],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2053],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2059],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2065],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*addv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4634 */
  {
    "*subv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2071],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2029],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2029],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2035],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4653 */
  {
    "*avx_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2035],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_ssaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_usaddv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_sssubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2053],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_ussubv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2053],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_ssaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_usaddv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_sssubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2059],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4664 */
  {
    "*sse2_ussubv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2059],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4675 */
  {
    "mulv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv16qi3,
    &operand_data[2074],
    3,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4761 */
  {
    "*avx_mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmullw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4771 */
  {
    "*mulv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4794 */
  {
    "*avxv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4810 */
  {
    "*smulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4839 */
  {
    "*avx_umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4855 */
  {
    "*umulv8hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4885 */
  {
    "*avx_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmuludq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2077],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4902 */
  {
    "*sse2_umulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuludq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2080],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4933 */
  {
    "*avx_mulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmuldq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2077],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:4950 */
  {
    "*sse4_1_mulv2siv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2080],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5001 */
  {
    "*avx_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaddwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2083],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5038 */
  {
    "*sse2_pmaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2086],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5085 */
  {
    "*avx_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5095 */
  {
    "*sse4_1_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5109 */
  {
    "*sse5_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2089],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5130 */
  {
    "*sse2_mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2092],
    3,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5183 */
  {
    "mulv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2di3,
    &operand_data[2095],
    3,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5478 */
  {
    "*avx_ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsraw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2098],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5478 */
  {
    "*avx_ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrad\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2101],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5489 */
  {
    "ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv8hi3,
    &operand_data[2104],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5489 */
  {
    "ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrad\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4si3,
    &operand_data[2107],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5500 */
  {
    "*avx_lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2098],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5500 */
  {
    "*avx_lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2101],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5500 */
  {
    "*avx_lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2110],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5511 */
  {
    "lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv8hi3,
    &operand_data[2104],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5511 */
  {
    "lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4si3,
    &operand_data[2107],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5511 */
  {
    "lshrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2di3,
    &operand_data[2113],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5522 */
  {
    "*avx_ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsllw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2098],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5522 */
  {
    "*avx_ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpslld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2101],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5522 */
  {
    "*avx_ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsllq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2110],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5533 */
  {
    "ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3,
    &operand_data[2104],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5533 */
  {
    "ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pslld\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3,
    &operand_data[2107],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5533 */
  {
    "ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3,
    &operand_data[2113],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxub\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminub\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminuw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminsd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaxud\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5564 */
  {
    "*avx_uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpminud\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5583 */
  {
    "*umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5583 */
  {
    "*uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5602 */
  {
    "*smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5602 */
  {
    "*sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5657 */
  {
    "*sse4_1_smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5657 */
  {
    "*sse4_1_sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5657 */
  {
    "*sse4_1_smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5657 */
  {
    "*sse4_1_sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5693 */
  {
    "*sse4_1_umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5693 */
  {
    "*sse4_1_uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminuw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5693 */
  {
    "*sse4_1_umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5693 */
  {
    "*sse4_1_uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminud\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5768 */
  {
    "*avx_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5768 */
  {
    "*avx_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5768 */
  {
    "*avx_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5768 */
  {
    "*avx_eqv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpeqq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2044],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5779 */
  {
    "*sse2_eqv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5779 */
  {
    "*sse2_eqv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5779 */
  {
    "*sse2_eqv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5799 */
  {
    "*sse4_1_eqv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5810 */
  {
    "*avx_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5810 */
  {
    "*avx_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5810 */
  {
    "*avx_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5810 */
  {
    "*avx_gtv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpcmpgtq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5821 */
  {
    "sse2_gtv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv16qi3,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5821 */
  {
    "sse2_gtv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv8hi3,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5821 */
  {
    "sse2_gtv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_gtv4si3,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5832 */
  {
    "sse4_2_gtv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_gtv2di3,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5893 */
  {
    "*avx_andnotv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2128],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5893 */
  {
    "*avx_andnotv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2131],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5893 */
  {
    "*avx_andnotv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2134],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5893 */
  {
    "*avx_andnotv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandnps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2137],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5904 */
  {
    "*sse_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5904 */
  {
    "*sse_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5904 */
  {
    "*sse_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5904 */
  {
    "*sse_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andnps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5914 */
  {
    "*avx_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5914 */
  {
    "*avx_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5914 */
  {
    "*avx_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5914 */
  {
    "*avx_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpandn\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5925 */
  {
    "sse2_andnotv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv16qi3,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5925 */
  {
    "sse2_andnotv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv8hi3,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5925 */
  {
    "sse2_andnotv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv4si3,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5925 */
  {
    "sse2_andnotv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_andnotv2di3,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5936 */
  {
    "*andnottf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2140],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_andv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2143],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_iorv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2143],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_xorv32qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2143],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_andv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2146],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_iorv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2146],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_xorv16hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2146],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_andv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2149],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_iorv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2149],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_xorv8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2149],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_andv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2152],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_iorv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2152],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5955 */
  {
    "*avx_xorv4di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxorps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2152],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5967 */
  {
    "*sse_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xorps\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2038],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpand\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2044],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2044],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5978 */
  {
    "*avx_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpxor\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2044],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2062],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:5990 */
  {
    "*sse2_xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2068],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6009 */
  {
    "*andtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pand\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2155],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6009 */
  {
    "*iortf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "por\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2155],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6009 */
  {
    "*xortf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pxor\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2155],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6305 */
  {
    "*avx_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2158],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6318 */
  {
    "sse2_packsswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packsswb,
    &operand_data[2161],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6331 */
  {
    "*avx_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2164],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6344 */
  {
    "sse2_packssdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packssdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packssdw,
    &operand_data[2167],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6357 */
  {
    "*avx_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2158],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6370 */
  {
    "sse2_packuswb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packuswb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_packuswb,
    &operand_data[2161],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6383 */
  {
    "*avx_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6403 */
  {
    "sse2_punpckhbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhbw,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6423 */
  {
    "*avx_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6443 */
  {
    "sse2_punpcklbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklbw,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6463 */
  {
    "*avx_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6479 */
  {
    "sse2_punpckhwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhwd,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6495 */
  {
    "*avx_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklwd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6511 */
  {
    "sse2_punpcklwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpcklwd,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6527 */
  {
    "*avx_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckhdq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6541 */
  {
    "sse2_punpckhdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhdq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckhdq,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6555 */
  {
    "*avx_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6569 */
  {
    "sse2_punpckldq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckldq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_punpckldq,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6583 */
  {
    "*avx_pinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1392 },
#else
    { 0, 0, output_1392 },
#endif
    0,
    &operand_data[2170],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6583 */
  {
    "*avx_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1393 },
#else
    { 0, 0, output_1393 },
#endif
    0,
    &operand_data[2174],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6583 */
  {
    "*avx_pinsrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1394 },
#else
    { 0, 0, output_1394 },
#endif
    0,
    &operand_data[2178],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6602 */
  {
    "*sse4_1_pinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1395 },
#else
    { 0, 0, output_1395 },
#endif
    0,
    &operand_data[2182],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6621 */
  {
    "*sse2_pinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1396 },
#else
    { 0, 0, output_1396 },
#endif
    0,
    &operand_data[2186],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6641 */
  {
    "*sse4_1_pinsrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1397 },
#else
    { 0, 0, output_1397 },
#endif
    0,
    &operand_data[2190],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6689 */
  {
    "*sse4_1_pextrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2194],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6702 */
  {
    "*sse4_1_pextrb_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2197],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6714 */
  {
    "*sse2_pextrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2200],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6727 */
  {
    "*sse4_1_pextrw_memory",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2203],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6739 */
  {
    "*sse4_1_pextrd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpextrd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2206],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6779 */
  {
    "sse2_pshufd_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1403 },
#else
    { 0, 0, output_1403 },
#endif
    (insn_gen_fn) gen_sse2_pshufd_1,
    &operand_data[2209],
    6,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6818 */
  {
    "sse2_pshuflw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1404 },
#else
    { 0, 0, output_1404 },
#endif
    (insn_gen_fn) gen_sse2_pshuflw_1,
    &operand_data[2215],
    6,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6861 */
  {
    "sse2_pshufhw_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1405 },
#else
    { 0, 0, output_1405 },
#endif
    (insn_gen_fn) gen_sse2_pshufhw_1,
    &operand_data[2221],
    6,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:6899 */
  {
    "*avx_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1406 },
#else
    { 0, output_1406, 0 },
#endif
    0,
    &operand_data[2227],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:6915 */
  {
    "sse2_loadld",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1407 },
#else
    { 0, output_1407, 0 },
#endif
    (insn_gen_fn) gen_sse2_loadld,
    &operand_data[2230],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:6931 */
  {
    "sse2_stored",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_stored,
    &operand_data[2233],
    2,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6947 */
  {
    "*vec_ext_v4si_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2235],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:6985 */
  {
    "*sse2_storeq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2238],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7041 */
  {
    "*vec_extractv2di_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1411 },
#else
    { 0, output_1411, 0 },
#endif
    0,
    &operand_data[2240],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7058 */
  {
    "*vec_extractv2di_1_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1412 },
#else
    { 0, output_1412, 0 },
#endif
    0,
    &operand_data[2242],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7074 */
  {
    "*vec_extractv2di_1_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1413 },
#else
    { 0, output_1413, 0 },
#endif
    0,
    &operand_data[2240],
    2,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7088 */
  {
    "*vec_dupv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1414 },
#else
    { 0, output_1414, 0 },
#endif
    0,
    &operand_data[2244],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7100 */
  {
    "*vec_dupv2di_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpunpcklqdq\t{%1, %1, %0|%0, %1, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2246],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7110 */
  {
    "*vec_dupv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1416 },
#else
    { 0, output_1416, 0 },
#endif
    0,
    &operand_data[2248],
    2,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7121 */
  {
    "*vec_concatv2si_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1417 },
#else
    { 0, output_1417, 0 },
#endif
    0,
    &operand_data[2250],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7140 */
  {
    "*vec_concatv2si_sse4_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1418 },
#else
    { 0, output_1418, 0 },
#endif
    0,
    &operand_data[2253],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7159 */
  {
    "*vec_concatv2si_sse2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1419 },
#else
    { 0, output_1419, 0 },
#endif
    0,
    &operand_data[2256],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7173 */
  {
    "*vec_concatv2si_sse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1420 },
#else
    { 0, output_1420, 0 },
#endif
    0,
    &operand_data[2259],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7187 */
  {
    "*vec_concatv4si_1_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1421 },
#else
    { 0, output_1421, 0 },
#endif
    0,
    &operand_data[2262],
    3,
    0,
    2,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7200 */
  {
    "*vec_concatv4si_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1422 },
#else
    { 0, output_1422, 0 },
#endif
    0,
    &operand_data[2265],
    3,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7213 */
  {
    "*vec_concatv2di_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1423 },
#else
    { 0, output_1423, 0 },
#endif
    0,
    &operand_data[2268],
    3,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7231 */
  {
    "vec_concatv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1424 },
#else
    { 0, output_1424, 0 },
#endif
    (insn_gen_fn) gen_vec_concatv2di,
    &operand_data[2271],
    3,
    0,
    5,
    2
  },
  /* ../.././gcc/config/i386/sse.md:7496 */
  {
    "*avx_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpavgb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2026],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7521 */
  {
    "*sse2_uavgv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2050],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7564 */
  {
    "*avx_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpavgw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7585 */
  {
    "*sse2_uavgv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7608 */
  {
    "*avx_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2274],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7619 */
  {
    "sse2_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_psadbw,
    &operand_data[2277],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7630 */
  {
    "avx_movmskps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movmskps256,
    &operand_data[2280],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7630 */
  {
    "avx_movmskpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmovmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_movmskpd256,
    &operand_data[2282],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7641 */
  {
    "sse_movmskps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovmskps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_movmskps,
    &operand_data[2284],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7641 */
  {
    "sse2_movmskpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovmskpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_movmskpd,
    &operand_data[2286],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7652 */
  {
    "sse2_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovmskb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_pmovmskb,
    &operand_data[2194],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7672 */
  {
    "*sse2_maskmovdqu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmaskmovdqu\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2288],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7700 */
  {
    "sse_ldmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vldmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_ldmxcsr,
    &operand_data[41],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7709 */
  {
    "sse_stmxcsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vstmxcsr\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse_stmxcsr,
    &operand_data[217],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7727 */
  {
    "*sse_sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7735 */
  {
    "sse2_clflush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clflush\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse2_clflush,
    &operand_data[2291],
    1,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7752 */
  {
    "*sse2_mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7769 */
  {
    "*sse2_lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lfence",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[897],
    1,
    1,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7777 */
  {
    "sse3_mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mwait",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_mwait,
    &operand_data[2292],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7788 */
  {
    "sse3_monitor",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "monitor\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse3_monitor,
    &operand_data[2292],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7815 */
  {
    "*avx_phaddwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7858 */
  {
    "ssse3_phaddwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv8hi3,
    &operand_data[2125],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7902 */
  {
    "ssse3_phaddwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddwv4hi3,
    &operand_data[1445],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7929 */
  {
    "*avx_phadddv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7956 */
  {
    "ssse3_phadddv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv4si3,
    &operand_data[1851],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:7984 */
  {
    "ssse3_phadddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phadddv2si3,
    &operand_data[1448],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8003 */
  {
    "*avx_phaddswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphaddsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8046 */
  {
    "ssse3_phaddswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv8hi3,
    &operand_data[2125],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8090 */
  {
    "ssse3_phaddswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phaddswv4hi3,
    &operand_data[1445],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8117 */
  {
    "*avx_phsubwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8160 */
  {
    "ssse3_phsubwv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv8hi3,
    &operand_data[2125],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8204 */
  {
    "ssse3_phsubwv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubwv4hi3,
    &operand_data[1445],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8231 */
  {
    "*avx_phsubdv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8258 */
  {
    "ssse3_phsubdv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv4si3,
    &operand_data[1851],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8286 */
  {
    "ssse3_phsubdv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubdv2si3,
    &operand_data[1448],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8305 */
  {
    "*avx_phsubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vphsubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8348 */
  {
    "ssse3_phsubswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv8hi3,
    &operand_data[2125],
    3,
    14,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8392 */
  {
    "ssse3_phsubswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_phsubswv4hi3,
    &operand_data[1445],
    3,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8419 */
  {
    "*avx_pmaddubsw128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmaddubsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2295],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8472 */
  {
    "ssse3_pmaddubsw128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubsw128,
    &operand_data[2298],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8526 */
  {
    "ssse3_pmaddubsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddubsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pmaddubsw,
    &operand_data[2301],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8583 */
  {
    "*avx_pmulhrswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2032],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8606 */
  {
    "*ssse3_pmulhrswv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2056],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8648 */
  {
    "*ssse3_pmulhrswv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhrsw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1409],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8669 */
  {
    "*avx_pshufbv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpshufb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8680 */
  {
    "ssse3_pshufbv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv16qi3,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8692 */
  {
    "ssse3_pshufbv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_pshufbv8qi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8703 */
  {
    "*avx_psignv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2116],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8703 */
  {
    "*avx_psignv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2119],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8703 */
  {
    "*avx_psignv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpsignd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1837],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8715 */
  {
    "ssse3_psignv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv16qi3,
    &operand_data[2122],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8715 */
  {
    "ssse3_psignv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8hi3,
    &operand_data[2125],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8715 */
  {
    "ssse3_psignv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4si3,
    &operand_data[1851],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8728 */
  {
    "ssse3_psignv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignb\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv8qi3,
    &operand_data[1442],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8728 */
  {
    "ssse3_psignv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv4hi3,
    &operand_data[1445],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8728 */
  {
    "ssse3_psignv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psignd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssse3_psignv2si3,
    &operand_data[1448],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8740 */
  {
    "*avx_palignrti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1481 },
#else
    { 0, 0, output_1481 },
#endif
    0,
    &operand_data[2304],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:8755 */
  {
    "ssse3_palignrti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1482 },
#else
    { 0, 0, output_1482 },
#endif
    (insn_gen_fn) gen_ssse3_palignrti,
    &operand_data[2308],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:8771 */
  {
    "ssse3_palignrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1483 },
#else
    { 0, 0, output_1483 },
#endif
    (insn_gen_fn) gen_ssse3_palignrdi,
    &operand_data[2312],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:8786 */
  {
    "absv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv16qi2,
    &operand_data[2316],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8786 */
  {
    "absv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8hi2,
    &operand_data[2215],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8786 */
  {
    "absv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4si2,
    &operand_data[2209],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8797 */
  {
    "absv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsb\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8qi2,
    &operand_data[2318],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8797 */
  {
    "absv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4hi2,
    &operand_data[1464],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8797 */
  {
    "absv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pabsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2si2,
    &operand_data[1470],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8812 */
  {
    "sse4a_movntsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntsf,
    &operand_data[2320],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8812 */
  {
    "sse4a_movntdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_movntdf,
    &operand_data[2322],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8822 */
  {
    "sse4a_vmmovntv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv4sf,
    &operand_data[2324],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8822 */
  {
    "sse4a_vmmovntv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movntsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_vmmovntv2df,
    &operand_data[2326],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8834 */
  {
    "sse4a_extrqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrqi,
    &operand_data[2328],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8846 */
  {
    "sse4a_extrq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extrq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_extrq,
    &operand_data[2332],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8857 */
  {
    "sse4a_insertqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%4, %3, %2, %0|%0, %2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertqi,
    &operand_data[2335],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8870 */
  {
    "sse4a_insertq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insertq\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4a_insertq,
    &operand_data[2335],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8887 */
  {
    "avx_blendps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendps,
    &operand_data[2340],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8887 */
  {
    "avx_blendpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendpd,
    &operand_data[2344],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8887 */
  {
    "avx_blendps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendps256,
    &operand_data[2348],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8887 */
  {
    "avx_blendpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendpd256,
    &operand_data[2352],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8899 */
  {
    "avx_blendvps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvps,
    &operand_data[2356],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8899 */
  {
    "avx_blendvpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvpd,
    &operand_data[2360],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8899 */
  {
    "avx_blendvps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvps256,
    &operand_data[2364],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8899 */
  {
    "avx_blendvpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_blendvpd256,
    &operand_data[2368],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8912 */
  {
    "sse4_1_blendps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendps,
    &operand_data[2372],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8912 */
  {
    "sse4_1_blendpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendpd,
    &operand_data[2376],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8924 */
  {
    "sse4_1_blendvps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvps,
    &operand_data[2380],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8924 */
  {
    "sse4_1_blendvpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blendvpd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_blendvpd,
    &operand_data[2384],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8937 */
  {
    "avx_dpps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dpps,
    &operand_data[2388],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8937 */
  {
    "avx_dppd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dppd,
    &operand_data[2392],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8937 */
  {
    "avx_dpps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dpps256,
    &operand_data[2396],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8937 */
  {
    "avx_dppd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_dppd256,
    &operand_data[2400],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8950 */
  {
    "sse4_1_dpps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dpps,
    &operand_data[2404],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8950 */
  {
    "sse4_1_dppd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dppd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_dppd,
    &operand_data[2408],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8963 */
  {
    "sse4_1_movntdqa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vmovntdqa\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_movntdqa,
    &operand_data[2412],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8974 */
  {
    "*avx_mpsadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2414],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8986 */
  {
    "sse4_1_mpsadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_mpsadbw,
    &operand_data[2418],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:8998 */
  {
    "*avx_packusdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2164],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9011 */
  {
    "sse4_1_packusdw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packusdw\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_packusdw,
    &operand_data[2167],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9024 */
  {
    "*avx_pblendvb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2422],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9036 */
  {
    "sse4_1_pblendvb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendvb\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendvb,
    &operand_data[2426],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9048 */
  {
    "*avx_pblendw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2430],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9060 */
  {
    "sse4_1_pblendw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pblendw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_pblendw,
    &operand_data[2434],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9072 */
  {
    "sse4_1_phminposuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vphminposuw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_phminposuw,
    &operand_data[2215],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9083 */
  {
    "sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv8qiv8hi2,
    &operand_data[2295],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9103 */
  {
    "*sse4_1_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2438],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9124 */
  {
    "sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4qiv4si2,
    &operand_data[2440],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9140 */
  {
    "*sse4_1_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2442],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9157 */
  {
    "sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2qiv2di2,
    &operand_data[2274],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9171 */
  {
    "*sse4_1_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2444],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9186 */
  {
    "sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv4hiv4si2,
    &operand_data[2446],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9202 */
  {
    "*sse4_1_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2448],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9219 */
  {
    "sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2hiv2di2,
    &operand_data[2450],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9233 */
  {
    "*sse4_1_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2452],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9248 */
  {
    "sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_extendv2siv2di2,
    &operand_data[2454],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9262 */
  {
    "*sse4_1_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovsxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2456],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9277 */
  {
    "sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv8qiv8hi2,
    &operand_data[2295],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9297 */
  {
    "*sse4_1_zero_extendv8qiv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2438],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9318 */
  {
    "sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4qiv4si2,
    &operand_data[2440],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9334 */
  {
    "*sse4_1_zero_extendv4qiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2442],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9351 */
  {
    "sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2qiv2di2,
    &operand_data[2274],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9365 */
  {
    "*sse4_1_zero_extendv2qiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2444],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9380 */
  {
    "sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv4hiv4si2,
    &operand_data[2446],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9396 */
  {
    "*sse4_1_zero_extendv4hiv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2458],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9413 */
  {
    "sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2hiv2di2,
    &operand_data[2450],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9427 */
  {
    "*sse4_1_zero_extendv2hiv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2460],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9442 */
  {
    "sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_zero_extendv2siv2di2,
    &operand_data[2454],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9456 */
  {
    "*sse4_1_zero_extendv2siv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpmovzxdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2456],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9473 */
  {
    "avx_vtestps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestps,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9473 */
  {
    "avx_vtestpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestpd,
    &operand_data[1590],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9473 */
  {
    "avx_vtestps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestps256,
    &operand_data[1599],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9473 */
  {
    "avx_vtestpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vtestpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vtestpd256,
    &operand_data[1602],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9486 */
  {
    "avx_ptest256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vptest\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_ptest256,
    &operand_data[2138],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9497 */
  {
    "sse4_1_ptest",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vptest\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_ptest,
    &operand_data[1963],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9509 */
  {
    "avx_roundps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_roundps256,
    &operand_data[2462],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9509 */
  {
    "avx_roundpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_roundpd256,
    &operand_data[2465],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9521 */
  {
    "sse4_1_roundps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundps,
    &operand_data[2468],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9521 */
  {
    "sse4_1_roundpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vroundpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundpd,
    &operand_data[2471],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9534 */
  {
    "*avx_roundss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2474],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9534 */
  {
    "*avx_roundsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vroundsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2478],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9549 */
  {
    "sse4_1_roundss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundss,
    &operand_data[2482],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9549 */
  {
    "sse4_1_roundsd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "roundsd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_1_roundsd,
    &operand_data[2486],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9570 */
  {
    "sse4_2_pcmpestr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr,
    &operand_data[2490],
    7,
    10,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9626 */
  {
    "sse4_2_pcmpestri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpestri\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestri,
    &operand_data[2497],
    6,
    5,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9652 */
  {
    "sse4_2_pcmpestrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpestrm\t{%5, %3, %1|%1, %3, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestrm,
    &operand_data[2503],
    6,
    5,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9678 */
  {
    "sse4_2_pcmpestr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1567 },
#else
    { 0, output_1567, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpestr_cconly,
    &operand_data[2509],
    7,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9702 */
  {
    "sse4_2_pcmpistr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr,
    &operand_data[2516],
    5,
    6,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9749 */
  {
    "sse4_2_pcmpistri",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpistri\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistri,
    &operand_data[2521],
    4,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9771 */
  {
    "sse4_2_pcmpistrm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vpcmpistrm\t{%3, %2, %1|%1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistrm,
    &operand_data[2525],
    4,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:9793 */
  {
    "sse4_2_pcmpistr_cconly",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1571 },
#else
    { 0, output_1571, 0 },
#endif
    (insn_gen_fn) gen_sse4_2_pcmpistr_cconly,
    &operand_data[2529],
    5,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9826 */
  {
    "sse5_pmacsww",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1572 },
#else
    { 0, output_1572, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacsww,
    &operand_data[2534],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9862 */
  {
    "sse5_pmacssww",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1573 },
#else
    { 0, output_1573, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacssww,
    &operand_data[2538],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9880 */
  {
    "sse5_pmacsdd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1574 },
#else
    { 0, output_1574, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacsdd,
    &operand_data[2542],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9916 */
  {
    "sse5_pmacssdd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1575 },
#else
    { 0, output_1575, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacssdd,
    &operand_data[2542],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9930 */
  {
    "sse5_pmacssdql",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1576 },
#else
    { 0, output_1576, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacssdql,
    &operand_data[2546],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9952 */
  {
    "sse5_pmacssdqh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1577 },
#else
    { 0, output_1577, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacssdqh,
    &operand_data[2546],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9975 */
  {
    "sse5_pmacsdql",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1578 },
#else
    { 0, output_1578, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacsdql,
    &operand_data[2546],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:9998 */
  {
    "*sse5_pmacsdql_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2550],
    4,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10039 */
  {
    "sse5_mulv2div2di3_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_mulv2div2di3_low,
    &operand_data[2554],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10079 */
  {
    "sse5_pmacsdqh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1581 },
#else
    { 0, output_1581, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacsdqh,
    &operand_data[2546],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10102 */
  {
    "*sse5_pmacsdqh_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2550],
    4,
    0,
    3,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10143 */
  {
    "sse5_mulv2div2di3_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_mulv2div2di3_high,
    &operand_data[2554],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10184 */
  {
    "sse5_pmacsswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1584 },
#else
    { 0, output_1584, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacsswd,
    &operand_data[2557],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10211 */
  {
    "sse5_pmacswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1585 },
#else
    { 0, output_1585, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmacswd,
    &operand_data[2557],
    4,
    0,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10238 */
  {
    "sse5_pmadcsswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1586 },
#else
    { 0, output_1586, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmadcsswd,
    &operand_data[2557],
    4,
    2,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10281 */
  {
    "sse5_pmadcswd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1587 },
#else
    { 0, output_1587, 0 },
#endif
    (insn_gen_fn) gen_sse5_pmadcswd,
    &operand_data[2557],
    4,
    2,
    3,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1588 },
#else
    { 0, output_1588, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v16qi,
    &operand_data[2561],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1589 },
#else
    { 0, output_1589, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v8hi,
    &operand_data[2565],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1590 },
#else
    { 0, output_1590, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v4si,
    &operand_data[2569],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1591 },
#else
    { 0, output_1591, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v2di,
    &operand_data[2573],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1592 },
#else
    { 0, output_1592, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v4sf,
    &operand_data[2577],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10325 */
  {
    "sse5_pcmov_v2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1593 },
#else
    { 0, output_1593, 0 },
#endif
    (insn_gen_fn) gen_sse5_pcmov_v2df,
    &operand_data[2581],
    4,
    0,
    4,
    2
  },
  /* ../.././gcc/config/i386/sse.md:10340 */
  {
    "sse5_phaddbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddbw,
    &operand_data[2585],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10369 */
  {
    "sse5_phaddbd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddbd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddbd,
    &operand_data[2587],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10406 */
  {
    "sse5_phaddbq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddbq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddbq,
    &operand_data[2589],
    2,
    7,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10459 */
  {
    "sse5_phaddwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddwd,
    &operand_data[2591],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10480 */
  {
    "sse5_phaddwq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddwq,
    &operand_data[2452],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10509 */
  {
    "sse5_phadddq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phadddq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phadddq,
    &operand_data[2593],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10526 */
  {
    "sse5_phaddubw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddubw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddubw,
    &operand_data[2585],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10555 */
  {
    "sse5_phaddubd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddubd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddubd,
    &operand_data[2587],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10592 */
  {
    "sse5_phaddubq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddubq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddubq,
    &operand_data[2589],
    2,
    7,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10645 */
  {
    "sse5_phadduwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phadduwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phadduwd,
    &operand_data[2591],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10666 */
  {
    "sse5_phadduwq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phadduwq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phadduwq,
    &operand_data[2452],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10695 */
  {
    "sse5_phaddudq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phaddudq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phaddudq,
    &operand_data[2593],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10712 */
  {
    "sse5_phsubbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubbw\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phsubbw,
    &operand_data[2585],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10741 */
  {
    "sse5_phsubwd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubwd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phsubwd,
    &operand_data[2591],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10762 */
  {
    "sse5_phsubdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "phsubdq\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_phsubdq,
    &operand_data[2593],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10780 */
  {
    "sse5_pperm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm,
    &operand_data[2595],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10797 */
  {
    "sse5_pperm_zero_v16qi_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_zero_v16qi_v8hi,
    &operand_data[2599],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10811 */
  {
    "sse5_pperm_sign_v16qi_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_sign_v16qi_v8hi,
    &operand_data[2599],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10825 */
  {
    "sse5_pperm_zero_v8hi_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_zero_v8hi_v4si,
    &operand_data[2603],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10839 */
  {
    "sse5_pperm_sign_v8hi_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_sign_v8hi_v4si,
    &operand_data[2603],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10853 */
  {
    "sse5_pperm_zero_v4si_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_zero_v4si_v2di,
    &operand_data[2607],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10867 */
  {
    "sse5_pperm_sign_v4si_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %1, %0, %0|%0, %0, %1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_sign_v4si_v2di,
    &operand_data[2607],
    4,
    0,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10882 */
  {
    "sse5_pperm_pack_v2di_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_pack_v2di_v4si,
    &operand_data[2611],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10895 */
  {
    "sse5_pperm_pack_v4si_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_pack_v4si_v8hi,
    &operand_data[2615],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10908 */
  {
    "sse5_pperm_pack_v8hi_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pperm\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_pperm_pack_v8hi_v16qi,
    &operand_data[2619],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10922 */
  {
    "sse5_permv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "permps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_permv4sf,
    &operand_data[2623],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10922 */
  {
    "sse5_permv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "permpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_permv2df,
    &operand_data[2627],
    4,
    0,
    4,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10999 */
  {
    "sse5_rotlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_rotlv16qi3,
    &operand_data[2631],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10999 */
  {
    "sse5_rotlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_rotlv8hi3,
    &operand_data[2634],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10999 */
  {
    "sse5_rotlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_rotlv4si3,
    &operand_data[2637],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:10999 */
  {
    "sse5_rotlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_rotlv2di3,
    &operand_data[2640],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11009 */
  {
    "sse5_rotrv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1625 },
#else
    { 0, 0, output_1625 },
#endif
    (insn_gen_fn) gen_sse5_rotrv16qi3,
    &operand_data[2631],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11009 */
  {
    "sse5_rotrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1626 },
#else
    { 0, 0, output_1626 },
#endif
    (insn_gen_fn) gen_sse5_rotrv8hi3,
    &operand_data[2634],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11009 */
  {
    "sse5_rotrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1627 },
#else
    { 0, 0, output_1627 },
#endif
    (insn_gen_fn) gen_sse5_rotrv4si3,
    &operand_data[2637],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11009 */
  {
    "sse5_rotrv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1628 },
#else
    { 0, 0, output_1628 },
#endif
    (insn_gen_fn) gen_sse5_rotrv2di3,
    &operand_data[2640],
    3,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11044 */
  {
    "sse5_vrotlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vrotlv16qi3,
    &operand_data[2643],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11044 */
  {
    "sse5_vrotlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vrotlv8hi3,
    &operand_data[2646],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11044 */
  {
    "sse5_vrotlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vrotlv4si3,
    &operand_data[2649],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11044 */
  {
    "sse5_vrotlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "protq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vrotlv2di3,
    &operand_data[2652],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11097 */
  {
    "sse5_ashlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshab\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_ashlv16qi3,
    &operand_data[2643],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11097 */
  {
    "sse5_ashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshaw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_ashlv8hi3,
    &operand_data[2646],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11097 */
  {
    "sse5_ashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshad\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_ashlv4si3,
    &operand_data[2649],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11097 */
  {
    "sse5_ashlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshaq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_ashlv2di3,
    &operand_data[2652],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11114 */
  {
    "sse5_lshlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshlb\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_lshlv16qi3,
    &operand_data[2643],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11114 */
  {
    "sse5_lshlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshlw\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_lshlv8hi3,
    &operand_data[2646],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11114 */
  {
    "sse5_lshlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshld\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_lshlv4si3,
    &operand_data[2649],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11114 */
  {
    "sse5_lshlv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshlq\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_lshlv2di3,
    &operand_data[2652],
    3,
    3,
    2,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11234 */
  {
    "sse5_frczv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frczps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_frczv4sf2,
    &operand_data[1606],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11234 */
  {
    "sse5_frczv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frczpd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_frczv2df2,
    &operand_data[1614],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11246 */
  {
    "sse5_vmfrczv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frczss\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfrczv4sf2,
    &operand_data[1592],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11246 */
  {
    "sse5_vmfrczv2df2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frczsd\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_vmfrczv2df2,
    &operand_data[1595],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11260 */
  {
    "sse5_cvtph2ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtph2ps\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_cvtph2ps,
    &operand_data[2655],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11269 */
  {
    "sse5_cvtps2ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvtps2ph\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_cvtps2ph,
    &operand_data[2657],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11295 */
  {
    "*sse5_vmmaskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1ss\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2659],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11295 */
  {
    "*sse5_vmmaskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1sd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2664],
    5,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11310 */
  {
    "sse5_com_tfv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1649 },
#else
    { 0, 0, output_1649 },
#endif
    (insn_gen_fn) gen_sse5_com_tfv4sf3,
    &operand_data[2669],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11310 */
  {
    "sse5_com_tfv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1650 },
#else
    { 0, 0, output_1650 },
#endif
    (insn_gen_fn) gen_sse5_com_tfv2df3,
    &operand_data[2673],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11348 */
  {
    "sse5_maskcmpv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1ps\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv4sf3,
    &operand_data[2659],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11348 */
  {
    "sse5_maskcmpv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "com%Y1pd\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv2df3,
    &operand_data[2664],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11358 */
  {
    "sse5_maskcmpv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1b\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv16qi3,
    &operand_data[2677],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11358 */
  {
    "sse5_maskcmpv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1w\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv8hi3,
    &operand_data[2681],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11358 */
  {
    "sse5_maskcmpv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1d\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv4si3,
    &operand_data[2685],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11358 */
  {
    "sse5_maskcmpv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1q\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmpv2di3,
    &operand_data[2689],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11368 */
  {
    "sse5_maskcmp_unsv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1ub\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_unsv16qi3,
    &operand_data[2693],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11368 */
  {
    "sse5_maskcmp_unsv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1uw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_unsv8hi3,
    &operand_data[2697],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11368 */
  {
    "sse5_maskcmp_unsv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1ud\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_unsv4si3,
    &operand_data[2701],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11368 */
  {
    "sse5_maskcmp_unsv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1uq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_unsv2di3,
    &operand_data[2705],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11381 */
  {
    "sse5_maskcmp_uns2v16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1ub\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_uns2v16qi3,
    &operand_data[2693],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11381 */
  {
    "sse5_maskcmp_uns2v8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1uw\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_uns2v8hi3,
    &operand_data[2697],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11381 */
  {
    "sse5_maskcmp_uns2v4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1ud\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_uns2v4si3,
    &operand_data[2701],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11381 */
  {
    "sse5_maskcmp_uns2v2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcom%Y1uq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sse5_maskcmp_uns2v2di3,
    &operand_data[2705],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11395 */
  {
    "sse5_pcom_tfv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1665 },
#else
    { 0, 0, output_1665 },
#endif
    (insn_gen_fn) gen_sse5_pcom_tfv16qi3,
    &operand_data[2709],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11395 */
  {
    "sse5_pcom_tfv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1666 },
#else
    { 0, 0, output_1666 },
#endif
    (insn_gen_fn) gen_sse5_pcom_tfv8hi3,
    &operand_data[2713],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11395 */
  {
    "sse5_pcom_tfv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1667 },
#else
    { 0, 0, output_1667 },
#endif
    (insn_gen_fn) gen_sse5_pcom_tfv4si3,
    &operand_data[2717],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11395 */
  {
    "sse5_pcom_tfv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1668 },
#else
    { 0, 0, output_1668 },
#endif
    (insn_gen_fn) gen_sse5_pcom_tfv2di3,
    &operand_data[2721],
    4,
    0,
    1,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11411 */
  {
    "*avx_aesenc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesenc\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11422 */
  {
    "aesenc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesenc\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesenc,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11433 */
  {
    "*avx_aesenclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesenclast\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11444 */
  {
    "aesenclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesenclast\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesenclast,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11455 */
  {
    "*avx_aesdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesdec\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11466 */
  {
    "aesdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesdec\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesdec,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11477 */
  {
    "*avx_aesdeclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaesdeclast\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1962],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11488 */
  {
    "aesdeclast",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "aesdeclast\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesdeclast,
    &operand_data[1965],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11499 */
  {
    "aesimc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vaesimc\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aesimc,
    &operand_data[1526],
    2,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11510 */
  {
    "aeskeygenassist",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vaeskeygenassist\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aeskeygenassist,
    &operand_data[2725],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11522 */
  {
    "*vpclmulqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpclmulqdq\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2728],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11534 */
  {
    "pclmulqdq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pclmulqdq\t{%3, %2, %0|%0, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pclmulqdq,
    &operand_data[2732],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11566 */
  {
    "*avx_vzeroall",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vzeroall",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2736],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11579 */
  {
    "avx_vzeroupper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vzeroupper",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vzeroupper,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11621 */
  {
    "avx_vpermilv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilv4sf,
    &operand_data[2739],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11621 */
  {
    "avx_vpermilv2df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilv2df,
    &operand_data[2742],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11621 */
  {
    "avx_vpermilv8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilv8sf,
    &operand_data[2745],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11621 */
  {
    "avx_vpermilv4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilv4df,
    &operand_data[2748],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11633 */
  {
    "avx_vpermilvarv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv4sf3,
    &operand_data[2751],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11633 */
  {
    "avx_vpermilvarv2df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv2df3,
    &operand_data[2754],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11633 */
  {
    "avx_vpermilvarv8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv8sf3,
    &operand_data[2757],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11633 */
  {
    "avx_vpermilvarv4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpermilpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vpermilvarv4df3,
    &operand_data[2760],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11645 */
  {
    "avx_vperm2f128v8si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vperm2f128v8si3,
    &operand_data[2763],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11645 */
  {
    "avx_vperm2f128v8sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vperm2f128v8sf3,
    &operand_data[2348],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11645 */
  {
    "avx_vperm2f128v4df3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vperm2f128v4df3,
    &operand_data[2767],
    4,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11658 */
  {
    "avx_vbroadcastss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbroadcastss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastss,
    &operand_data[2771],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11658 */
  {
    "avx_vbroadcastsd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbroadcastsd\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastsd256,
    &operand_data[2773],
    2,
    3,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11673 */
  {
    "avx_vbroadcastss256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbroadcastss\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastss256,
    &operand_data[2775],
    2,
    7,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11696 */
  {
    "avx_vbroadcastf128_ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbroadcastf128\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_ps256,
    &operand_data[2777],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11696 */
  {
    "avx_vbroadcastf128_pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbroadcastf128\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_vbroadcastf128_pd256,
    &operand_data[2779],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11730 */
  {
    "vec_set_lo_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v4di,
    &operand_data[2781],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11730 */
  {
    "vec_set_lo_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v4df,
    &operand_data[2784],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11743 */
  {
    "vec_set_hi_v4di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v4di,
    &operand_data[2781],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11743 */
  {
    "vec_set_hi_v4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v4df,
    &operand_data[2784],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11756 */
  {
    "vec_set_lo_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v8si,
    &operand_data[2787],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11756 */
  {
    "vec_set_lo_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v8sf,
    &operand_data[2790],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11770 */
  {
    "vec_set_hi_v8si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v8si,
    &operand_data[2787],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11770 */
  {
    "vec_set_hi_v8sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v8sf,
    &operand_data[2790],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11784 */
  {
    "vec_set_lo_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v16hi,
    &operand_data[2793],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11800 */
  {
    "vec_set_hi_v16hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v16hi,
    &operand_data[2793],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11816 */
  {
    "vec_set_lo_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_lo_v32qi,
    &operand_data[2796],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11836 */
  {
    "vec_set_hi_v32qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_set_hi_v32qi,
    &operand_data[2796],
    3,
    0,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11856 */
  {
    "avx_maskloadps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadps,
    &operand_data[2799],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11856 */
  {
    "avx_maskloadpd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadpd,
    &operand_data[2802],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11856 */
  {
    "avx_maskloadps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadps256,
    &operand_data[2805],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11856 */
  {
    "avx_maskloadpd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%1, %2, %0|%0, %2, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskloadpd256,
    &operand_data[2808],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11869 */
  {
    "avx_maskstoreps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstoreps,
    &operand_data[2811],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11869 */
  {
    "avx_maskstorepd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstorepd,
    &operand_data[2814],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11869 */
  {
    "avx_maskstoreps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovps\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstoreps256,
    &operand_data[2817],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11869 */
  {
    "avx_maskstorepd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaskmovpd\t{%2, %1, %0|%0, %1, %2}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_avx_maskstorepd256,
    &operand_data[2820],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sse.md:11882 */
  {
    "avx_si256_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1719 },
#else
    { 0, 0, output_1719 },
#endif
    (insn_gen_fn) gen_avx_si256_si,
    &operand_data[2823],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11882 */
  {
    "avx_ps256_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1720 },
#else
    { 0, 0, output_1720 },
#endif
    (insn_gen_fn) gen_avx_ps256_ps,
    &operand_data[2825],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11882 */
  {
    "avx_pd256_pd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1721 },
#else
    { 0, 0, output_1721 },
#endif
    (insn_gen_fn) gen_avx_pd256_pd,
    &operand_data[2827],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11918 */
  {
    "avx_si_si256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1722 },
#else
    { 0, 0, output_1722 },
#endif
    (insn_gen_fn) gen_avx_si_si256,
    &operand_data[2829],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11918 */
  {
    "avx_ps_ps256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1723 },
#else
    { 0, 0, output_1723 },
#endif
    (insn_gen_fn) gen_avx_ps_ps256,
    &operand_data[2831],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11918 */
  {
    "avx_pd_pd256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1724 },
#else
    { 0, 0, output_1724 },
#endif
    (insn_gen_fn) gen_avx_pd_pd256,
    &operand_data[2833],
    2,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv32qi_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1725 },
#else
    { 0, 0, output_1725 },
#endif
    0,
    &operand_data[2835],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv16hi_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1726 },
#else
    { 0, 0, output_1726 },
#endif
    0,
    &operand_data[2838],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv8si_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1727 },
#else
    { 0, 0, output_1727 },
#endif
    0,
    &operand_data[2841],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv4di_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1728 },
#else
    { 0, 0, output_1728 },
#endif
    0,
    &operand_data[2844],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv8sf_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1729 },
#else
    { 0, 0, output_1729 },
#endif
    0,
    &operand_data[2847],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sse.md:11963 */
  {
    "*vec_concatv4df_avx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1730 },
#else
    { 0, 0, output_1730 },
#endif
    0,
    &operand_data[2850],
    3,
    0,
    2,
    3
  },
  /* ../.././gcc/config/i386/sync.md:49 */
  {
    "memory_barrier_nosse",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }or{l}\t{$0, (%%esp)|DWORD PTR [esp], 0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_memory_barrier_nosse,
    &operand_data[897],
    1,
    1,
    0,
    1
  },
  /* ../.././gcc/config/i386/sync.md:103 */
  {
    "*sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2853],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:103 */
  {
    "*sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2857],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:103 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2861],
    4,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:116 */
  {
    "sync_double_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swapdi,
    &operand_data[2865],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:139 */
  {
    "*sync_double_compare_and_swapdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock{%;| }cmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2870],
    5,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:201 */
  {
    "*sync_compare_and_swap_ccqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{b}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2853],
    4,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:201 */
  {
    "*sync_compare_and_swap_cchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{w}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2857],
    4,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:201 */
  {
    "*sync_compare_and_swap_ccsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg{l}\t{%3, %1|%1, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2861],
    4,
    6,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:218 */
  {
    "sync_double_compare_and_swap_ccdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }cmpxchg8b\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_double_compare_and_swap_ccdi,
    &operand_data[2865],
    5,
    7,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:239 */
  {
    "*sync_double_compare_and_swap_ccdi_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%%ebx, %3\n\tlock{%;| }cmpxchg8b\t%1\n\txchg{l}\t%%ebx, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2870],
    5,
    7,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:258 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xadd{b}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addqi,
    &operand_data[2875],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:258 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xadd{w}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addhi,
    &operand_data[2878],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:258 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xadd{l}\t{%0, %1|%1, %0}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addsi,
    &operand_data[2881],
    3,
    2,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:270 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[2875],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:270 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[2878],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:270 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[2881],
    3,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:279 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1748 },
#else
    { 0, 0, output_1748 },
#endif
    (insn_gen_fn) gen_sync_addqi,
    &operand_data[2884],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:279 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1749 },
#else
    { 0, 0, output_1749 },
#endif
    (insn_gen_fn) gen_sync_addhi,
    &operand_data[2886],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:279 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1750 },
#else
    { 0, 0, output_1750 },
#endif
    (insn_gen_fn) gen_sync_addsi,
    &operand_data[2888],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:299 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1751 },
#else
    { 0, 0, output_1751 },
#endif
    (insn_gen_fn) gen_sync_subqi,
    &operand_data[2884],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:299 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1752 },
#else
    { 0, 0, output_1752 },
#endif
    (insn_gen_fn) gen_sync_subhi,
    &operand_data[2886],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:299 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1753 },
#else
    { 0, 0, output_1753 },
#endif
    (insn_gen_fn) gen_sync_subsi,
    &operand_data[2888],
    2,
    1,
    1,
    3
  },
  /* ../.././gcc/config/i386/sync.md:319 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }or{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorqi,
    &operand_data[2884],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:319 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }or{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorhi,
    &operand_data[2886],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:319 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }or{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorsi,
    &operand_data[2888],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:329 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }and{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andqi,
    &operand_data[2884],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:329 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }and{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andhi,
    &operand_data[2886],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:329 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }and{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_andsi,
    &operand_data[2888],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:339 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xor{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorqi,
    &operand_data[2884],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:339 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xor{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorhi,
    &operand_data[2886],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/sync.md:339 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lock{%;| }xor{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorsi,
    &operand_data[2888],
    2,
    1,
    1,
    1
  },
  /* ../.././gcc/config/i386/i386.md:757 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[2890],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:770 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[2892],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:783 */
  {
    "cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmphi,
    &operand_data[2894],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:796 */
  {
    "cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi,
    &operand_data[2896],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:870 */
  {
    "cmpsi_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi_1,
    &operand_data[2898],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:994 */
  {
    "cmpqi_ext_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi_ext_3,
    &operand_data[2900],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1057 */
  {
    "cmpxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpxf,
    &operand_data[2902],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1068 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[2904],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1068 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[2906],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1108 */
  {
    "cmpdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2908],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1149 */
  {
    "cmpdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2911],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1183 */
  {
    "cmpdf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2914],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1183 */
  {
    "cmpdf+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2917],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1224 */
  {
    "movsi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2920],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1269 */
  {
    "movsi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2923],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1269 */
  {
    "movsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2927],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1442 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[2898],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1648 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[2894],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1779 */
  {
    "movstricthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstricthi,
    &operand_data[2931],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1810 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[2896],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:1937 */
  {
    "movstrictqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[2933],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2187 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[2935],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2337 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2937],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2346 */
  {
    "movoi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2935],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2517 */
  {
    "movoi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movoi,
    &operand_data[2939],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2548 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movti,
    &operand_data[2941],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2668 */
  {
    "movti+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2942],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2680 */
  {
    "movcdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movcdi,
    &operand_data[2944],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2692 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[2946],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2724 */
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2948],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2735 */
  {
    "movdf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2950],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2860 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[2952],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2896 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2954],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:2904 */
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2956],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3320 */
  {
    "movxf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2952],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3349 */
  {
    "movxf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movxf,
    &operand_data[2958],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3386 */
  {
    "movxf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2960],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3396 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2962],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3461 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[2964],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3527 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2966],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3535 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2968],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3543 */
  {
    "movtf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2970],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3558 */
  {
    "movtf+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2972],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3590 */
  {
    "movtf+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2972],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3638 */
  {
    "zero_extendhisi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2974],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3638 */
  {
    "zero_extendhisi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2976],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3638 */
  {
    "zero_extendhisi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2978],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3657 */
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2980],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3667 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[2982],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3689 */
  {
    "zero_extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2984],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3708 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[2985],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3745 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2985],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3758 */
  {
    "zero_extendqihi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2985],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3772 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2987],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3782 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[2989],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3818 */
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2989],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3830 */
  {
    "zero_extendqisi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2989],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3844 */
  {
    "zero_extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2991],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3855 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[2993],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3908 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2995],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3917 */
  {
    "extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2997],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3945 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[2999],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:3996 */
  {
    "extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3002],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4011 */
  {
    "extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3002],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4041 */
  {
    "extendsidi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2999],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4177 */
  {
    "extendsfdf2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3005],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4190 */
  {
    "extendsfdf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3007],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4198 */
  {
    "extendsfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3009],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4206 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[3011],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4234 */
  {
    "extendsfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3013],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4311 */
  {
    "extendsfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfxf2,
    &operand_data[3015],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4311 */
  {
    "extenddfxf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddfxf2,
    &operand_data[3017],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4348 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[3019],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4374 */
  {
    "truncdfsf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3021],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4413 */
  {
    "truncdfsf2_with_temp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2_with_temp,
    &operand_data[3023],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4514 */
  {
    "truncdfsf2_with_temp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3026],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4528 */
  {
    "truncxfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfsf2,
    &operand_data[3029],
    2,
    1,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4528 */
  {
    "truncxfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncxfdf2,
    &operand_data[3031],
    2,
    1,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4596 */
  {
    "truncxfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3033],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4596 */
  {
    "truncxfdf2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3036],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4606 */
  {
    "fix_truncxfdi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3039],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4606 */
  {
    "fix_truncxfdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3042],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4617 */
  {
    "fix_truncxfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfdi2,
    &operand_data[1174],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4630 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[3045],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4630 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[3047],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4654 */
  {
    "fix_truncxfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfsi2,
    &operand_data[1201],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4667 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[3049],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4667 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[3051],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4691 */
  {
    "fix_truncsfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfhi2,
    &operand_data[3053],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4691 */
  {
    "fix_truncdfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfhi2,
    &operand_data[3055],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4691 */
  {
    "fix_truncxfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncxfhi2,
    &operand_data[1199],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4707 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[3057],
    5,
    1,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4707 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[3062],
    5,
    1,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4731 */
  {
    "fixuns_truncdfsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3067],
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4731 */
  {
    "fixuns_truncsfhi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3072],
    5,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4752 */
  {
    "fixuns_truncsfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfhi2,
    &operand_data[3077],
    2,
    2,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4752 */
  {
    "fixuns_truncdfhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfhi2,
    &operand_data[3079],
    2,
    2,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4786 */
  {
    "fixuns_truncdfhi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3081],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4786 */
  {
    "fixuns_truncdfhi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3084],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4786 */
  {
    "fixuns_truncdfhi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3087],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4786 */
  {
    "fixuns_truncdfhi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3090],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4797 */
  {
    "fixuns_truncdfhi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3093],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4797 */
  {
    "fixuns_truncdfhi2+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3096],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4806 */
  {
    "fixuns_truncdfhi2+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3099],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4806 */
  {
    "fixuns_truncdfhi2+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3102],
    3,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fixuns_truncdfhi2+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[208],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fixuns_truncdfhi2+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4815 */
  {
    "fixuns_truncdfhi2+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4869 */
  {
    "fixuns_truncdfhi2+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3105],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4869 */
  {
    "fixuns_truncdfhi2+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3109],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4869 */
  {
    "floathisf2-13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3113],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4880 */
  {
    "floathisf2-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3117],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4880 */
  {
    "floathisf2-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3121],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4880 */
  {
    "floathisf2-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3125],
    4,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "floathisf2-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[208],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "floathisf2-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4895 */
  {
    "floathisf2-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4957 */
  {
    "floathisf2-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3129],
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:4972 */
  {
    "floathisf2-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[3135],
    6,
    0,
    0,
    0
  },
  /* ../.././gcc/config/i386/i386.md:5013 */
  {
#else
