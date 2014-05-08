/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1762:  /* sync_xorsi */
    case 1761:  /* sync_xorhi */
    case 1760:  /* sync_xorqi */
    case 1759:  /* sync_andsi */
    case 1758:  /* sync_andhi */
    case 1757:  /* sync_andqi */
    case 1756:  /* sync_iorsi */
    case 1755:  /* sync_iorhi */
    case 1754:  /* sync_iorqi */
    case 1753:  /* sync_subsi */
    case 1752:  /* sync_subhi */
    case 1751:  /* sync_subqi */
    case 1750:  /* sync_addsi */
    case 1749:  /* sync_addhi */
    case 1748:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1747:  /* sync_lock_test_and_setsi */
    case 1746:  /* sync_lock_test_and_sethi */
    case 1745:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1744:  /* sync_old_addsi */
    case 1743:  /* sync_old_addhi */
    case 1742:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1741:  /* *sync_double_compare_and_swap_ccdi_pic */
    case 1740:  /* sync_double_compare_and_swap_ccdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 3);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1739:  /* *sync_compare_and_swap_ccsi */
    case 1738:  /* *sync_compare_and_swap_cchi */
    case 1737:  /* *sync_compare_and_swap_ccqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1736:  /* *sync_double_compare_and_swapdi_pic */
    case 1735:  /* sync_double_compare_and_swapdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1734:  /* *sync_compare_and_swapsi */
    case 1733:  /* *sync_compare_and_swaphi */
    case 1732:  /* *sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1731:  /* memory_barrier_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1718:  /* avx_maskstorepd256 */
    case 1717:  /* avx_maskstoreps256 */
    case 1716:  /* avx_maskstorepd */
    case 1715:  /* avx_maskstoreps */
    case 1714:  /* avx_maskloadpd256 */
    case 1713:  /* avx_maskloadps256 */
    case 1712:  /* avx_maskloadpd */
    case 1711:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1696:  /* avx_vbroadcastss256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1);
      recog_data.dup_num[6] = 1;
      break;

    case 1695:  /* avx_vbroadcastsd256 */
    case 1694:  /* avx_vbroadcastss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1681:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 1664:  /* sse5_maskcmp_uns2v2di3 */
    case 1663:  /* sse5_maskcmp_uns2v4si3 */
    case 1662:  /* sse5_maskcmp_uns2v8hi3 */
    case 1661:  /* sse5_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1648:  /* *sse5_vmmaskcmpv2df3 */
    case 1647:  /* *sse5_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1644:  /* sse5_vmfrczv2df2 */
    case 1643:  /* sse5_vmfrczv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1640:  /* sse5_lshlv2di3 */
    case 1639:  /* sse5_lshlv4si3 */
    case 1638:  /* sse5_lshlv8hi3 */
    case 1637:  /* sse5_lshlv16qi3 */
    case 1636:  /* sse5_ashlv2di3 */
    case 1635:  /* sse5_ashlv4si3 */
    case 1634:  /* sse5_ashlv8hi3 */
    case 1633:  /* sse5_ashlv16qi3 */
    case 1632:  /* sse5_vrotlv2di3 */
    case 1631:  /* sse5_vrotlv4si3 */
    case 1630:  /* sse5_vrotlv8hi3 */
    case 1629:  /* sse5_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1618:  /* sse5_pperm_pack_v8hi_v16qi */
    case 1617:  /* sse5_pperm_pack_v4si_v8hi */
    case 1616:  /* sse5_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1615:  /* sse5_pperm_sign_v4si_v2di */
    case 1614:  /* sse5_pperm_zero_v4si_v2di */
    case 1613:  /* sse5_pperm_sign_v8hi_v4si */
    case 1612:  /* sse5_pperm_zero_v8hi_v4si */
    case 1611:  /* sse5_pperm_sign_v16qi_v8hi */
    case 1610:  /* sse5_pperm_zero_v16qi_v8hi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1602:  /* sse5_phaddubq */
    case 1596:  /* sse5_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1604:  /* sse5_phadduwq */
    case 1601:  /* sse5_phaddubd */
    case 1598:  /* sse5_phaddwq */
    case 1595:  /* sse5_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1608:  /* sse5_phsubdq */
    case 1607:  /* sse5_phsubwd */
    case 1606:  /* sse5_phsubbw */
    case 1605:  /* sse5_phaddudq */
    case 1603:  /* sse5_phadduwd */
    case 1600:  /* sse5_phaddubw */
    case 1599:  /* sse5_phadddq */
    case 1597:  /* sse5_phaddwd */
    case 1594:  /* sse5_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1593:  /* sse5_pcmov_v2df */
    case 1592:  /* sse5_pcmov_v4sf */
    case 1591:  /* sse5_pcmov_v2di */
    case 1590:  /* sse5_pcmov_v4si */
    case 1589:  /* sse5_pcmov_v8hi */
    case 1588:  /* sse5_pcmov_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1587:  /* sse5_pmadcswd */
    case 1586:  /* sse5_pmadcsswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1585:  /* sse5_pmacswd */
    case 1584:  /* sse5_pmacsswd */
    case 1582:  /* *sse5_pmacsdqh_mem */
    case 1581:  /* sse5_pmacsdqh */
    case 1579:  /* *sse5_pmacsdql_mem */
    case 1578:  /* sse5_pmacsdql */
    case 1577:  /* sse5_pmacssdqh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1576:  /* sse5_pmacssdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1571:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1570:  /* sse4_2_pcmpistrm */
    case 1569:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1568:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1567:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1566:  /* sse4_2_pcmpestrm */
    case 1565:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1564:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1563:  /* sse4_1_roundsd */
    case 1562:  /* sse4_1_roundss */
    case 1561:  /* *avx_roundsd */
    case 1560:  /* *avx_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1555:  /* sse4_1_ptest */
    case 1554:  /* avx_ptest256 */
    case 1553:  /* avx_vtestpd256 */
    case 1552:  /* avx_vtestps256 */
    case 1551:  /* avx_vtestpd */
    case 1550:  /* avx_vtestps */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1524:  /* sse4_1_pblendw */
    case 1523:  /* *avx_pblendw */
    case 1507:  /* sse4_1_blendpd */
    case 1506:  /* sse4_1_blendps */
    case 1501:  /* avx_blendpd256 */
    case 1500:  /* avx_blendps256 */
    case 1499:  /* avx_blendpd */
    case 1498:  /* avx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1496:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1468:  /* *ssse3_pmulhrswv4hi3 */
    case 1467:  /* *ssse3_pmulhrswv8hi3 */
    case 1466:  /* *avx_pmulhrswv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1461:  /* ssse3_phsubswv8hi3 */
    case 1460:  /* *avx_phsubswv8hi3 */
    case 1455:  /* ssse3_phsubwv8hi3 */
    case 1454:  /* *avx_phsubwv8hi3 */
    case 1452:  /* ssse3_phaddswv8hi3 */
    case 1451:  /* *avx_phaddswv8hi3 */
    case 1446:  /* ssse3_phaddwv8hi3 */
    case 1445:  /* *avx_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1444:  /* sse3_monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1443:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1405:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1698:  /* avx_vbroadcastf128_pd256 */
    case 1697:  /* avx_vbroadcastf128_ps256 */
    case 1197:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1183:  /* sse2_shufpd_v2di */
    case 1182:  /* sse2_shufpd_v2df */
    case 1181:  /* *avx_shufpd_v2di */
    case 1180:  /* *avx_shufpd_v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1409:  /* *vec_ext_v4si_mem */
    case 1402:  /* *sse4_1_pextrd */
    case 1401:  /* *sse4_1_pextrw_memory */
    case 1399:  /* *sse4_1_pextrb_memory */
    case 1165:  /* *vec_extract_v4sf_mem */
    case 1164:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1150:  /* sse4_1_insertps */
    case 1149:  /* *avx_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1407:  /* sse2_loadld */
    case 1406:  /* *avx_loadld */
    case 1146:  /* vec_setv4sf_0 */
    case 1145:  /* *vec_setv4sf_0_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1194:  /* sse2_movsd */
    case 1193:  /* *avx_movsd */
    case 1137:  /* sse_movss */
    case 1136:  /* *avx_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1709:  /* vec_set_lo_v32qi */
    case 1707:  /* vec_set_lo_v16hi */
    case 1704:  /* vec_set_lo_v8sf */
    case 1703:  /* vec_set_lo_v8si */
    case 1700:  /* vec_set_lo_v4df */
    case 1699:  /* vec_set_lo_v4di */
    case 1190:  /* sse2_loadlpd */
    case 1189:  /* *avx_loadlpd */
    case 1135:  /* sse_loadlps */
    case 1134:  /* *avx_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1175:  /* avx_shufpd256_1 */
    case 1128:  /* sse_shufps_v4si */
    case 1127:  /* sse_shufps_v4sf */
    case 1126:  /* *avx_shufps_v4si */
    case 1125:  /* *avx_shufps_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1124:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1171:  /* *sse3_movddup */
    case 1170:  /* *avx_movddup */
    case 1169:  /* avx_movddup256 */
    case 1123:  /* sse3_movsldup */
    case 1122:  /* avx_movsldup256 */
    case 1121:  /* sse3_movshdup */
    case 1120:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1072:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1105:  /* sse2_cvtss2sd */
    case 1104:  /* *avx_cvtss2sd */
    case 1103:  /* sse2_cvtsd2ss */
    case 1102:  /* *avx_cvtsd2ss */
    case 1092:  /* sse2_cvtsi2sd */
    case 1091:  /* *avx_cvtsi2sd */
    case 1075:  /* sse_cvtsi2ss */
    case 1074:  /* *avx_cvtsi2ss */
    case 1071:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1070:  /* *sse5i_vmfnmsubv2df4 */
    case 1069:  /* *sse5i_vmfnmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1068:  /* *sse5i_vmfnmaddv2df4 */
    case 1067:  /* *sse5i_vmfnmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1066:  /* *sse5i_vmfmsubv2df4 */
    case 1065:  /* *sse5i_vmfmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1064:  /* *sse5i_vmfmaddv2df4 */
    case 1063:  /* *sse5i_vmfmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1062:  /* *sse5i_fnmsubv2df4 */
    case 1061:  /* *sse5i_fnmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1060:  /* *sse5i_fnmaddv2df4 */
    case 1059:  /* *sse5i_fnmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1058:  /* *sse5i_fmsubv2df4 */
    case 1057:  /* *sse5i_fmsubv4sf4 */
    case 1056:  /* *sse5i_fmaddv2df4 */
    case 1055:  /* *sse5i_fmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1054:  /* sse5_vmfnmsubv2df4 */
    case 1053:  /* sse5_vmfnmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1052:  /* sse5_fnmsubv2df4 */
    case 1051:  /* sse5_fnmsubv4sf4 */
    case 1050:  /* sse5_fnmsubdf4 */
    case 1049:  /* sse5_fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1048:  /* sse5_vmfnmaddv2df4 */
    case 1047:  /* sse5_vmfnmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1046:  /* sse5_fnmaddv2df4 */
    case 1045:  /* sse5_fnmaddv4sf4 */
    case 1044:  /* sse5_fnmadddf4 */
    case 1043:  /* sse5_fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1042:  /* sse5_vmfmsubv2df4 */
    case 1041:  /* sse5_vmfmsubv4sf4 */
    case 1036:  /* sse5_vmfmaddv2df4 */
    case 1035:  /* sse5_vmfmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 990:  /* sse2_ucomi */
    case 989:  /* sse_ucomi */
    case 988:  /* sse2_comi */
    case 987:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 986:  /* sse2_vmmaskcmpv2df3 */
    case 985:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 976:  /* avx_cmpsdv2df3 */
    case 975:  /* avx_cmpssv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 962:  /* avx_hsubv8sf3 */
    case 961:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1462:  /* ssse3_phsubswv4hi3 */
    case 1458:  /* ssse3_phsubdv4si3 */
    case 1457:  /* *avx_phsubdv4si3 */
    case 1456:  /* ssse3_phsubwv4hi3 */
    case 1453:  /* ssse3_phaddswv4hi3 */
    case 1449:  /* ssse3_phadddv4si3 */
    case 1448:  /* *avx_phadddv4si3 */
    case 1447:  /* ssse3_phaddwv4hi3 */
    case 966:  /* sse3_hsubv4sf3 */
    case 965:  /* sse3_haddv4sf3 */
    case 964:  /* *avx_hsubv4sf3 */
    case 963:  /* *avx_haddv4sf3 */
    case 960:  /* avx_hsubv4df3 */
    case 959:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1099:  /* *sse2_cvtpd2dq */
    case 908:  /* sse_vmrsqrtv4sf2 */
    case 907:  /* *avx_vmrsqrtv4sf2 */
    case 896:  /* sse_vmrcpv4sf2 */
    case 895:  /* *avx_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 940:  /* sse2_vmsminv2df3 */
    case 939:  /* sse2_vmsmaxv2df3 */
    case 938:  /* sse_vmsminv4sf3 */
    case 937:  /* sse_vmsmaxv4sf3 */
    case 936:  /* *avx_vmsminv2df3 */
    case 935:  /* *avx_vmsmaxv2df3 */
    case 934:  /* *avx_vmsminv4sf3 */
    case 933:  /* *avx_vmsmaxv4sf3 */
    case 892:  /* sse2_vmdivv2df3 */
    case 891:  /* sse_vmdivv4sf3 */
    case 890:  /* *avx_vmdivv2df3 */
    case 889:  /* *avx_vmdivv4sf3 */
    case 880:  /* sse2_vmmulv2df3 */
    case 879:  /* sse_vmmulv4sf3 */
    case 878:  /* *avx_vmmulv2df3 */
    case 877:  /* *avx_vmmulv4sf3 */
    case 870:  /* sse2_vmsubv2df3 */
    case 869:  /* sse2_vmaddv2df3 */
    case 868:  /* sse_vmsubv4sf3 */
    case 867:  /* sse_vmaddv4sf3 */
    case 866:  /* *avx_vmsubv2df3 */
    case 865:  /* *avx_vmaddv2df3 */
    case 864:  /* *avx_vmsubv4sf3 */
    case 863:  /* *avx_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1436:  /* *sse2_maskmovdqu */
    case 806:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1404:  /* sse2_pshuflw_1 */
    case 1403:  /* sse2_pshufd_1 */
    case 795:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1400:  /* *sse2_pextrw */
    case 1398:  /* *sse4_1_pextrb */
    case 794:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1397:  /* *sse4_1_pinsrd */
    case 1396:  /* *sse2_pinsrw */
    case 1395:  /* *sse4_1_pinsrb */
    case 1394:  /* *avx_pinsrd */
    case 1393:  /* *avx_pinsrw */
    case 1392:  /* *avx_pinsrb */
    case 1148:  /* *vec_setv4sf_sse4_1 */
    case 1147:  /* *vec_setv4sf_avx */
    case 793:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1391:  /* sse2_punpckldq */
    case 1390:  /* *avx_punpckldq */
    case 1389:  /* sse2_punpckhdq */
    case 1388:  /* *avx_punpckhdq */
    case 1387:  /* sse2_punpcklwd */
    case 1386:  /* *avx_punpcklwd */
    case 1385:  /* sse2_punpckhwd */
    case 1384:  /* *avx_punpckhwd */
    case 1383:  /* sse2_punpcklbw */
    case 1382:  /* *avx_punpcklbw */
    case 1381:  /* sse2_punpckhbw */
    case 1380:  /* *avx_punpckhbw */
    case 1179:  /* sse2_punpcklqdq */
    case 1178:  /* *avx_punpcklqdq */
    case 1177:  /* sse2_punpckhqdq */
    case 1176:  /* *avx_punpckhqdq */
    case 1174:  /* sse2_unpcklpd */
    case 1173:  /* *avx_unpcklpd */
    case 1172:  /* avx_unpcklpd256 */
    case 1168:  /* sse2_unpckhpd */
    case 1167:  /* *avx_unpckhpd */
    case 1166:  /* avx_unpckhpd256 */
    case 1119:  /* sse_unpcklps */
    case 1118:  /* *avx_unpcklps */
    case 1117:  /* avx_unpcklps256 */
    case 1116:  /* sse_unpckhps */
    case 1115:  /* *avx_unpckhps */
    case 1114:  /* avx_unpckhps256 */
    case 1113:  /* sse_movlhps */
    case 1112:  /* *avx_movlhps */
    case 1111:  /* sse_movhlps */
    case 1110:  /* *avx_movhlps */
    case 792:  /* mmx_punpckldq */
    case 791:  /* mmx_punpckhdq */
    case 790:  /* mmx_punpcklwd */
    case 789:  /* mmx_punpckhwd */
    case 788:  /* mmx_punpcklbw */
    case 787:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1520:  /* sse4_1_packusdw */
    case 1519:  /* *avx_packusdw */
    case 1379:  /* sse2_packuswb */
    case 1378:  /* *avx_packuswb */
    case 1377:  /* sse2_packssdw */
    case 1376:  /* *avx_packssdw */
    case 1375:  /* sse2_packsswb */
    case 1374:  /* *avx_packsswb */
    case 786:  /* mmx_packuswb */
    case 785:  /* mmx_packssdw */
    case 784:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1583:  /* sse5_mulv2div2di3_high */
    case 1580:  /* sse5_mulv2div2di3_low */
    case 1242:  /* *sse4_1_mulv2siv2di3 */
    case 1241:  /* *avx_mulv2siv2di3 */
    case 1240:  /* *sse2_umulv2siv2di3 */
    case 1239:  /* *avx_umulv2siv2di3 */
    case 753:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1428:  /* *sse2_uavgv8hi3 */
    case 1427:  /* *avx_uavgv8hi3 */
    case 1426:  /* *sse2_uavgv16qi3 */
    case 1425:  /* *avx_uavgv16qi3 */
    case 803:  /* *mmx_uavgv4hi3 */
    case 802:  /* *mmx_uavgv8qi3 */
    case 752:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1465:  /* ssse3_pmaddubsw */
    case 1464:  /* ssse3_pmaddubsw128 */
    case 1463:  /* *avx_pmaddubsw128 */
    case 1244:  /* *sse2_pmaddwd */
    case 1243:  /* *avx_pmaddwd */
    case 751:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1238:  /* *umulv8hi3_highpart */
    case 1237:  /* *avx_umulv8hi3_highpart */
    case 1236:  /* *smulv8hi3_highpart */
    case 1235:  /* *avxv8hi3_highpart */
    case 750:  /* *mmx_umulv4hi3_highpart */
    case 749:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1549:  /* *sse4_1_zero_extendv2siv2di2 */
    case 1547:  /* *sse4_1_zero_extendv2hiv2di2 */
    case 1545:  /* *sse4_1_zero_extendv4hiv4si2 */
    case 1543:  /* *sse4_1_zero_extendv2qiv2di2 */
    case 1541:  /* *sse4_1_zero_extendv4qiv4si2 */
    case 1539:  /* *sse4_1_zero_extendv8qiv8hi2 */
    case 1537:  /* *sse4_1_extendv2siv2di2 */
    case 1535:  /* *sse4_1_extendv2hiv2di2 */
    case 1533:  /* *sse4_1_extendv4hiv4si2 */
    case 1531:  /* *sse4_1_extendv2qiv2di2 */
    case 1529:  /* *sse4_1_extendv4qiv4si2 */
    case 1527:  /* *sse4_1_extendv8qiv8hi2 */
    case 725:  /* mmx_pi2fw */
    case 724:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 958:  /* sse3_addsubv2df3 */
    case 957:  /* *avx_addsubv2df3 */
    case 956:  /* sse3_addsubv4sf3 */
    case 955:  /* *avx_addsubv4sf3 */
    case 954:  /* avx_addsubv4df3 */
    case 953:  /* avx_addsubv8sf3 */
    case 719:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1459:  /* ssse3_phsubdv2si3 */
    case 1450:  /* ssse3_phadddv2si3 */
    case 970:  /* sse3_hsubv2df3 */
    case 969:  /* sse3_haddv2df3 */
    case 968:  /* *avx_hsubv2df3 */
    case 967:  /* *avx_haddv2df3 */
    case 718:  /* mmx_hsubv2sf3 */
    case 717:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 685:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1710:  /* vec_set_hi_v32qi */
    case 1708:  /* vec_set_hi_v16hi */
    case 1706:  /* vec_set_hi_v8sf */
    case 1705:  /* vec_set_hi_v8si */
    case 1702:  /* vec_set_hi_v4df */
    case 1701:  /* vec_set_hi_v4di */
    case 1322:  /* *andnottf3 */
    case 1321:  /* sse2_andnotv2di3 */
    case 1320:  /* sse2_andnotv4si3 */
    case 1319:  /* sse2_andnotv8hi3 */
    case 1318:  /* sse2_andnotv16qi3 */
    case 1317:  /* *avx_andnotv2di3 */
    case 1316:  /* *avx_andnotv4si3 */
    case 1315:  /* *avx_andnotv8hi3 */
    case 1314:  /* *avx_andnotv16qi3 */
    case 1313:  /* *sse_andnotv2di3 */
    case 1312:  /* *sse_andnotv4si3 */
    case 1311:  /* *sse_andnotv8hi3 */
    case 1310:  /* *sse_andnotv16qi3 */
    case 1309:  /* *avx_andnotv4di3 */
    case 1308:  /* *avx_andnotv8si3 */
    case 1307:  /* *avx_andnotv16hi3 */
    case 1306:  /* *avx_andnotv32qi3 */
    case 1188:  /* sse2_loadhpd */
    case 1187:  /* *avx_loadhpd */
    case 1131:  /* sse_loadhps */
    case 1130:  /* *avx_loadhps */
    case 1107:  /* *sse2_cvtpd2ps */
    case 1101:  /* *sse2_cvttpd2dq */
    case 1018:  /* *andnotdf3 */
    case 1017:  /* *andnotsf3 */
    case 1016:  /* *avx_andnotdf3 */
    case 1015:  /* *avx_andnotsf3 */
    case 996:  /* sse2_andnotv2df3 */
    case 995:  /* sse_andnotv4sf3 */
    case 994:  /* avx_andnotv4df3 */
    case 993:  /* avx_andnotv8sf3 */
    case 992:  /* avx_andnotv2df3 */
    case 991:  /* avx_andnotv4sf3 */
    case 904:  /* sse2_vmsqrtv2df2 */
    case 903:  /* sse_vmsqrtv4sf2 */
    case 902:  /* *avx_vmsqrtv2df2 */
    case 901:  /* *avx_vmsqrtv4sf2 */
    case 774:  /* mmx_andnotv2si3 */
    case 773:  /* mmx_andnotv4hi3 */
    case 772:  /* mmx_andnotv8qi3 */
    case 683:  /* *sibcall_value_1 */
    case 682:  /* *call_value_1 */
    case 681:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 680:  /* *sibcall_value_pop_1 */
    case 679:  /* *call_value_pop_1 */
    case 678:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 677:  /* allocate_stack_worker_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 654:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 659:  /* *sse5_pcmov_df */
    case 658:  /* *sse5_pcmov_sf */
    case 657:  /* *movxfcc_1 */
    case 656:  /* *movdfcc_1 */
    case 655:  /* *movsfcc_1_387 */
    case 653:  /* *movhicc_noc */
    case 652:  /* *movsicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 648:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 647:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 646:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 645:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 644:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 643:  /* *strsetqi_1 */
    case 642:  /* *strsethi_1 */
    case 641:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 640:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 639:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 638:  /* *strmovqi_1 */
    case 637:  /* *strmovhi_1 */
    case 636:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 621:  /* fistdi2_ceil_with_temp */
    case 610:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 625:  /* fistsi2_ceil_with_temp */
    case 624:  /* fisthi2_ceil_with_temp */
    case 620:  /* fistdi2_ceil */
    case 614:  /* fistsi2_floor_with_temp */
    case 613:  /* fisthi2_floor_with_temp */
    case 609:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 628:  /* frndintxf2_mask_pm */
    case 626:  /* frndintxf2_trunc */
    case 619:  /* *fistdi2_ceil_1 */
    case 618:  /* *fistsi2_ceil_1 */
    case 617:  /* *fisthi2_ceil_1 */
    case 615:  /* frndintxf2_ceil */
    case 608:  /* *fistdi2_floor_1 */
    case 607:  /* *fistsi2_floor_1 */
    case 606:  /* *fisthi2_floor_1 */
    case 604:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 629:  /* frndintxf2_mask_pm_i387 */
    case 627:  /* frndintxf2_trunc_i387 */
    case 623:  /* fistsi2_ceil */
    case 622:  /* fisthi2_ceil */
    case 616:  /* frndintxf2_ceil_i387 */
    case 612:  /* fistsi2_floor */
    case 611:  /* fisthi2_floor */
    case 605:  /* frndintxf2_floor_i387 */
    case 597:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 688:  /* stack_tls_protect_set_si */
    case 687:  /* stack_protect_set_si */
    case 603:  /* fistsi2_with_temp */
    case 602:  /* fisthi2_with_temp */
    case 596:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1690:  /* avx_vpermilvarv4df3 */
    case 1689:  /* avx_vpermilvarv8sf3 */
    case 1688:  /* avx_vpermilvarv2df3 */
    case 1687:  /* avx_vpermilvarv4sf3 */
    case 1686:  /* avx_vpermilv4df */
    case 1685:  /* avx_vpermilv8sf */
    case 1684:  /* avx_vpermilv2df */
    case 1683:  /* avx_vpermilv4sf */
    case 1678:  /* aeskeygenassist */
    case 1676:  /* aesdeclast */
    case 1675:  /* *avx_aesdeclast */
    case 1674:  /* aesdec */
    case 1673:  /* *avx_aesdec */
    case 1672:  /* aesenclast */
    case 1671:  /* *avx_aesenclast */
    case 1670:  /* aesenc */
    case 1669:  /* *avx_aesenc */
    case 1559:  /* sse4_1_roundpd */
    case 1558:  /* sse4_1_roundps */
    case 1557:  /* avx_roundpd256 */
    case 1556:  /* avx_roundps256 */
    case 1497:  /* sse4a_insertq */
    case 1495:  /* sse4a_extrq */
    case 1480:  /* ssse3_psignv2si3 */
    case 1479:  /* ssse3_psignv4hi3 */
    case 1478:  /* ssse3_psignv8qi3 */
    case 1477:  /* ssse3_psignv4si3 */
    case 1476:  /* ssse3_psignv8hi3 */
    case 1475:  /* ssse3_psignv16qi3 */
    case 1474:  /* *avx_psignv4si3 */
    case 1473:  /* *avx_psignv8hi3 */
    case 1472:  /* *avx_psignv16qi3 */
    case 1471:  /* ssse3_pshufbv8qi3 */
    case 1470:  /* ssse3_pshufbv16qi3 */
    case 1469:  /* *avx_pshufbv16qi3 */
    case 1430:  /* sse2_psadbw */
    case 1429:  /* *avx_psadbw */
    case 952:  /* *ieee_smaxv2df3 */
    case 951:  /* *ieee_smaxv4sf3 */
    case 950:  /* *ieee_sminv2df3 */
    case 949:  /* *ieee_sminv4sf3 */
    case 948:  /* *avx_ieee_smaxv4df3 */
    case 947:  /* *avx_ieee_smaxv8sf3 */
    case 946:  /* *avx_ieee_smaxv2df3 */
    case 945:  /* *avx_ieee_smaxv4sf3 */
    case 944:  /* *avx_ieee_sminv4df3 */
    case 943:  /* *avx_ieee_sminv8sf3 */
    case 942:  /* *avx_ieee_sminv2df3 */
    case 941:  /* *avx_ieee_sminv4sf3 */
    case 804:  /* mmx_psadbw */
    case 716:  /* mmx_rsqit1v2sf3 */
    case 714:  /* mmx_rcpit2v2sf3 */
    case 713:  /* mmx_rcpit1v2sf3 */
    case 693:  /* sse4_2_crc32si */
    case 692:  /* sse4_2_crc32hi */
    case 691:  /* sse4_2_crc32qi */
    case 675:  /* *ieee_smaxdf3 */
    case 674:  /* *ieee_smaxsf3 */
    case 673:  /* *avx_ieee_smaxdf3 */
    case 672:  /* *avx_ieee_smaxsf3 */
    case 671:  /* *ieee_smindf3 */
    case 670:  /* *ieee_sminsf3 */
    case 669:  /* *avx_ieee_smindf3 */
    case 668:  /* *avx_ieee_sminsf3 */
    case 593:  /* sse4_1_rounddf2 */
    case 592:  /* sse4_1_roundsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 591:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 586:  /* fyl2xp1_extenddfxf3_i387 */
    case 585:  /* fyl2xp1_extendsfxf3_i387 */
    case 583:  /* fyl2x_extenddfxf3_i387 */
    case 582:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 580:  /* fpatan_extenddfxf3_i387 */
    case 579:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 690:  /* stack_tls_protect_test_si */
    case 689:  /* stack_protect_test_si */
    case 584:  /* fyl2xp1xf3_i387 */
    case 581:  /* fyl2xxf3_i387 */
    case 578:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 577:  /* fptan_extenddfxf4_i387 */
    case 576:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 575:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 589:  /* fxtract_extenddfxf3_i387 */
    case 588:  /* fxtract_extendsfxf3_i387 */
    case 574:  /* sincos_extenddfxf3_i387 */
    case 573:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 587:  /* fxtractxf3_i387 */
    case 572:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1493:  /* sse4a_vmmovntv2df */
    case 1492:  /* sse4a_vmmovntv4sf */
    case 1093:  /* sse2_cvtsd2si */
    case 1076:  /* sse_cvtss2si */
    case 571:  /* *cos_extenddfxf2_i387 */
    case 570:  /* *cos_extendsfxf2_i387 */
    case 568:  /* *sin_extenddfxf2_i387 */
    case 567:  /* *sin_extendsfxf2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 565:  /* fprem1xf4_i387 */
    case 564:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 555:  /* *fop_xf_6_i387 */
    case 554:  /* *fop_xf_6_i387 */
    case 543:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 553:  /* *fop_xf_5_i387 */
    case 552:  /* *fop_xf_5_i387 */
    case 549:  /* *fop_xf_3_i387 */
    case 548:  /* *fop_xf_3_i387 */
    case 542:  /* *fop_df_5_i387 */
    case 540:  /* *fop_df_3_i387 */
    case 539:  /* *fop_sf_3_i387 */
    case 538:  /* *fop_df_3_i387 */
    case 537:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 551:  /* *fop_xf_4_i387 */
    case 550:  /* *fop_xf_4_i387 */
    case 547:  /* *fop_xf_2_i387 */
    case 546:  /* *fop_xf_2_i387 */
    case 541:  /* *fop_df_4_i387 */
    case 536:  /* *fop_df_2_i387 */
    case 535:  /* *fop_sf_2_i387 */
    case 534:  /* *fop_df_2_i387 */
    case 533:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1724:  /* avx_pd_pd256 */
    case 1723:  /* avx_ps_ps256 */
    case 1722:  /* avx_si_si256 */
    case 1721:  /* avx_pd256_pd */
    case 1720:  /* avx_ps256_ps */
    case 1719:  /* avx_si256_si */
    case 1677:  /* aesimc */
    case 1646:  /* sse5_cvtps2ph */
    case 1645:  /* sse5_cvtph2ps */
    case 1642:  /* sse5_frczv2df2 */
    case 1641:  /* sse5_frczv4sf2 */
    case 1525:  /* sse4_1_phminposuw */
    case 1516:  /* sse4_1_movntdqa */
    case 1491:  /* sse4a_movntdf */
    case 1490:  /* sse4a_movntsf */
    case 1435:  /* sse2_pmovmskb */
    case 1434:  /* sse2_movmskpd */
    case 1433:  /* sse_movmskps */
    case 1432:  /* avx_movmskpd256 */
    case 1431:  /* avx_movmskps256 */
    case 1098:  /* avx_cvtpd2dq256 */
    case 1094:  /* sse2_cvtsd2si_2 */
    case 1089:  /* sse2_cvtpd2pi */
    case 1084:  /* sse2_cvtps2dq */
    case 1083:  /* avx_cvtps2dq256 */
    case 1082:  /* avx_cvtps2dq */
    case 1077:  /* sse_cvtss2si_2 */
    case 906:  /* sse_rsqrtv4sf2 */
    case 905:  /* avx_rsqrtv8sf2 */
    case 894:  /* sse_rcpv4sf2 */
    case 893:  /* avx_rcpv8sf2 */
    case 850:  /* sse3_lddqu */
    case 849:  /* avx_lddqu */
    case 848:  /* avx_lddqu256 */
    case 847:  /* sse2_movntsi */
    case 846:  /* sse2_movntv2di */
    case 845:  /* avx_movntv2di */
    case 844:  /* avx_movntv4di */
    case 843:  /* sse2_movntv2df */
    case 842:  /* sse_movntv4sf */
    case 841:  /* avx_movntv4df */
    case 840:  /* avx_movntv8sf */
    case 839:  /* avx_movntv2df */
    case 838:  /* avx_movntv4sf */
    case 837:  /* sse2_movdqu */
    case 836:  /* avx_movdqu */
    case 835:  /* avx_movdqu256 */
    case 834:  /* sse2_movupd */
    case 833:  /* sse_movups */
    case 831:  /* avx_movupd256 */
    case 830:  /* avx_movups256 */
    case 829:  /* avx_movupd */
    case 828:  /* avx_movups */
    case 805:  /* mmx_pmovmskb */
    case 715:  /* mmx_rsqrtv2sf2 */
    case 712:  /* mmx_rcpv2sf2 */
    case 704:  /* sse_movntdi */
    case 634:  /* fxamdf2_i387_with_temp */
    case 633:  /* fxamsf2_i387_with_temp */
    case 632:  /* fxamxf2_i387 */
    case 631:  /* fxamdf2_i387 */
    case 630:  /* fxamsf2_i387 */
    case 601:  /* fistsi2 */
    case 600:  /* fisthi2 */
    case 599:  /* *fistsi2_1 */
    case 598:  /* *fisthi2_1 */
    case 595:  /* *fistdi2_1 */
    case 594:  /* rintxf2 */
    case 590:  /* *f2xm1xf2_i387 */
    case 569:  /* *cosxf2_i387 */
    case 566:  /* *sinxf2_i387 */
    case 561:  /* *rsqrtsf2_sse */
    case 557:  /* truncxfdf2_i387_noop_unspec */
    case 556:  /* truncxfsf2_i387_noop_unspec */
    case 526:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 984:  /* sse2_maskcmpv2df3 */
    case 983:  /* sse_maskcmpv4sf3 */
    case 982:  /* sse2_maskcmpdf3 */
    case 981:  /* sse_maskcmpsf3 */
    case 980:  /* *avx_maskcmpv4df3 */
    case 979:  /* *avx_maskcmpv8sf3 */
    case 978:  /* *avx_maskcmpv2df3 */
    case 977:  /* *avx_maskcmpv4sf3 */
    case 545:  /* *fop_xf_1_i387 */
    case 544:  /* *fop_xf_comm_i387 */
    case 532:  /* *fop_df_1_i387 */
    case 531:  /* *fop_sf_1_i387 */
    case 530:  /* *fop_df_1_sse */
    case 529:  /* *fop_sf_1_sse */
    case 528:  /* *fop_df_1_avx */
    case 527:  /* *fop_sf_1_avx */
    case 525:  /* *fop_df_1_mixed */
    case 524:  /* *fop_sf_1_mixed */
    case 523:  /* *fop_df_1_mixed_avx */
    case 522:  /* *fop_sf_1_mixed_avx */
    case 521:  /* *fop_df_comm_i387 */
    case 520:  /* *fop_sf_comm_i387 */
    case 519:  /* *fop_df_comm_sse */
    case 518:  /* *fop_sf_comm_sse */
    case 517:  /* *fop_df_comm_avx */
    case 516:  /* *fop_sf_comm_avx */
    case 515:  /* *fop_df_comm_mixed */
    case 514:  /* *fop_sf_comm_mixed */
    case 513:  /* *fop_df_comm_mixed_avx */
    case 512:  /* *fop_sf_comm_mixed_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 511:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 510:  /* *tls_dynamic_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 509:  /* *tls_dynamic_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 508:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 506:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 505:  /* *tls_local_dynamic_base_32_sun */
    case 504:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 503:  /* *tls_global_dynamic_32_sun */
    case 502:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 500:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 499:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 498:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 495:  /* bswaphi_lowpart */
    case 494:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 497:  /* *bsrhi */
    case 487:  /* *bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 484:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 480:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 476:  /* return_indirect_internal */
    case 475:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1440:  /* sse2_clflush */
    case 1437:  /* sse_ldmxcsr */
    case 478:  /* align */
    case 472:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1442:  /* *sse2_lfence */
    case 1441:  /* *sse2_mfence */
    case 1439:  /* *sse_sfence */
    case 471:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1682:  /* avx_vzeroupper */
    case 808:  /* mmx_femms */
    case 807:  /* mmx_emms */
    case 684:  /* trap */
    case 635:  /* cld */
    case 482:  /* leave */
    case 477:  /* nop */
    case 474:  /* return_internal_long */
    case 473:  /* return_internal */
    case 470:  /* blockage */
      break;

    case 466:  /* *sibcall_pop_1 */
    case 465:  /* *call_pop_1 */
    case 464:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 463:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 462:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 501:  /* *parityqi2_cmp */
    case 461:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 460:  /* *fp_jcc_8si_387 */
    case 459:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 457:  /* *fp_jcc_6_387 */
    case 455:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 458:  /* *fp_jcc_7_387 */
    case 456:  /* *fp_jcc_5_387 */
    case 454:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 453:  /* *fp_jcc_2_387 */
    case 452:  /* *fp_jcc_2_sse */
    case 451:  /* *fp_jcc_2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 450:  /* *fp_jcc_1_387 */
    case 449:  /* *fp_jcc_1_sse */
    case 448:  /* *fp_jcc_1_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 447:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 446:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 445:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 444:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 443:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 442:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1660:  /* sse5_maskcmp_unsv2di3 */
    case 1659:  /* sse5_maskcmp_unsv4si3 */
    case 1658:  /* sse5_maskcmp_unsv8hi3 */
    case 1657:  /* sse5_maskcmp_unsv16qi3 */
    case 1656:  /* sse5_maskcmpv2di3 */
    case 1655:  /* sse5_maskcmpv4si3 */
    case 1654:  /* sse5_maskcmpv8hi3 */
    case 1653:  /* sse5_maskcmpv16qi3 */
    case 1652:  /* sse5_maskcmpv2df3 */
    case 1651:  /* sse5_maskcmpv4sf3 */
    case 441:  /* *sse5_setccdf */
    case 440:  /* *sse5_setccsf */
    case 439:  /* *sse_setccdf */
    case 438:  /* *sse_setccsf */
    case 437:  /* *avx_setccdf */
    case 436:  /* *avx_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 433:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 424:  /* ix86_rotrdi3 */
    case 415:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 370:  /* x86_shrd */
    case 357:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1730:  /* *vec_concatv4df_avx */
    case 1729:  /* *vec_concatv8sf_avx */
    case 1728:  /* *vec_concatv4di_avx */
    case 1727:  /* *vec_concatv8si_avx */
    case 1726:  /* *vec_concatv16hi_avx */
    case 1725:  /* *vec_concatv32qi_avx */
    case 1628:  /* sse5_rotrv2di3 */
    case 1627:  /* sse5_rotrv4si3 */
    case 1626:  /* sse5_rotrv8hi3 */
    case 1625:  /* sse5_rotrv16qi3 */
    case 1624:  /* sse5_rotlv2di3 */
    case 1623:  /* sse5_rotlv4si3 */
    case 1622:  /* sse5_rotlv8hi3 */
    case 1621:  /* sse5_rotlv16qi3 */
    case 1424:  /* vec_concatv2di */
    case 1423:  /* *vec_concatv2di_avx */
    case 1422:  /* *vec_concatv4si_1 */
    case 1421:  /* *vec_concatv4si_1_avx */
    case 1420:  /* *vec_concatv2si_sse */
    case 1419:  /* *vec_concatv2si_sse2 */
    case 1418:  /* *vec_concatv2si_sse4_1 */
    case 1417:  /* *vec_concatv2si_avx */
    case 1373:  /* *xortf3 */
    case 1372:  /* *iortf3 */
    case 1371:  /* *andtf3 */
    case 1370:  /* *sse2_xorv2di3 */
    case 1369:  /* *sse2_iorv2di3 */
    case 1368:  /* *sse2_andv2di3 */
    case 1367:  /* *sse2_xorv4si3 */
    case 1366:  /* *sse2_iorv4si3 */
    case 1365:  /* *sse2_andv4si3 */
    case 1364:  /* *sse2_xorv8hi3 */
    case 1363:  /* *sse2_iorv8hi3 */
    case 1362:  /* *sse2_andv8hi3 */
    case 1361:  /* *sse2_xorv16qi3 */
    case 1360:  /* *sse2_iorv16qi3 */
    case 1359:  /* *sse2_andv16qi3 */
    case 1358:  /* *avx_xorv2di3 */
    case 1357:  /* *avx_iorv2di3 */
    case 1356:  /* *avx_andv2di3 */
    case 1355:  /* *avx_xorv4si3 */
    case 1354:  /* *avx_iorv4si3 */
    case 1353:  /* *avx_andv4si3 */
    case 1352:  /* *avx_xorv8hi3 */
    case 1351:  /* *avx_iorv8hi3 */
    case 1350:  /* *avx_andv8hi3 */
    case 1349:  /* *avx_xorv16qi3 */
    case 1348:  /* *avx_iorv16qi3 */
    case 1347:  /* *avx_andv16qi3 */
    case 1346:  /* *sse_xorv2di3 */
    case 1345:  /* *sse_iorv2di3 */
    case 1344:  /* *sse_andv2di3 */
    case 1343:  /* *sse_xorv4si3 */
    case 1342:  /* *sse_iorv4si3 */
    case 1341:  /* *sse_andv4si3 */
    case 1340:  /* *sse_xorv8hi3 */
    case 1339:  /* *sse_iorv8hi3 */
    case 1338:  /* *sse_andv8hi3 */
    case 1337:  /* *sse_xorv16qi3 */
    case 1336:  /* *sse_iorv16qi3 */
    case 1335:  /* *sse_andv16qi3 */
    case 1334:  /* *avx_xorv4di3 */
    case 1333:  /* *avx_iorv4di3 */
    case 1332:  /* *avx_andv4di3 */
    case 1331:  /* *avx_xorv8si3 */
    case 1330:  /* *avx_iorv8si3 */
    case 1329:  /* *avx_andv8si3 */
    case 1328:  /* *avx_xorv16hi3 */
    case 1327:  /* *avx_iorv16hi3 */
    case 1326:  /* *avx_andv16hi3 */
    case 1325:  /* *avx_xorv32qi3 */
    case 1324:  /* *avx_iorv32qi3 */
    case 1323:  /* *avx_andv32qi3 */
    case 1305:  /* sse4_2_gtv2di3 */
    case 1304:  /* sse2_gtv4si3 */
    case 1303:  /* sse2_gtv8hi3 */
    case 1302:  /* sse2_gtv16qi3 */
    case 1301:  /* *avx_gtv2di3 */
    case 1300:  /* *avx_gtv4si3 */
    case 1299:  /* *avx_gtv8hi3 */
    case 1298:  /* *avx_gtv16qi3 */
    case 1297:  /* *sse4_1_eqv2di3 */
    case 1296:  /* *sse2_eqv4si3 */
    case 1295:  /* *sse2_eqv8hi3 */
    case 1294:  /* *sse2_eqv16qi3 */
    case 1293:  /* *avx_eqv2di3 */
    case 1292:  /* *avx_eqv4si3 */
    case 1291:  /* *avx_eqv8hi3 */
    case 1290:  /* *avx_eqv16qi3 */
    case 1289:  /* *sse4_1_uminv4si3 */
    case 1288:  /* *sse4_1_umaxv4si3 */
    case 1287:  /* *sse4_1_uminv8hi3 */
    case 1286:  /* *sse4_1_umaxv8hi3 */
    case 1285:  /* *sse4_1_sminv4si3 */
    case 1284:  /* *sse4_1_smaxv4si3 */
    case 1283:  /* *sse4_1_sminv16qi3 */
    case 1282:  /* *sse4_1_smaxv16qi3 */
    case 1281:  /* *sminv8hi3 */
    case 1280:  /* *smaxv8hi3 */
    case 1279:  /* *uminv16qi3 */
    case 1278:  /* *umaxv16qi3 */
    case 1277:  /* *avx_uminv4si3 */
    case 1276:  /* *avx_umaxv4si3 */
    case 1275:  /* *avx_sminv4si3 */
    case 1274:  /* *avx_smaxv4si3 */
    case 1273:  /* *avx_uminv8hi3 */
    case 1272:  /* *avx_umaxv8hi3 */
    case 1271:  /* *avx_sminv8hi3 */
    case 1270:  /* *avx_smaxv8hi3 */
    case 1269:  /* *avx_uminv16qi3 */
    case 1268:  /* *avx_umaxv16qi3 */
    case 1267:  /* *avx_sminv16qi3 */
    case 1266:  /* *avx_smaxv16qi3 */
    case 1265:  /* ashlv2di3 */
    case 1264:  /* ashlv4si3 */
    case 1263:  /* ashlv8hi3 */
    case 1262:  /* *avx_ashlv2di3 */
    case 1261:  /* *avx_ashlv4si3 */
    case 1260:  /* *avx_ashlv8hi3 */
    case 1259:  /* lshrv2di3 */
    case 1258:  /* lshrv4si3 */
    case 1257:  /* lshrv8hi3 */
    case 1256:  /* *avx_lshrv2di3 */
    case 1255:  /* *avx_lshrv4si3 */
    case 1254:  /* *avx_lshrv8hi3 */
    case 1253:  /* ashrv4si3 */
    case 1252:  /* ashrv8hi3 */
    case 1251:  /* *avx_ashrv4si3 */
    case 1250:  /* *avx_ashrv8hi3 */
    case 1249:  /* mulv2di3 */
    case 1248:  /* *sse2_mulv4si3 */
    case 1247:  /* *sse5_mulv4si3 */
    case 1246:  /* *sse4_1_mulv4si3 */
    case 1245:  /* *avx_mulv4si3 */
    case 1234:  /* *mulv8hi3 */
    case 1233:  /* *avx_mulv8hi3 */
    case 1232:  /* mulv16qi3 */
    case 1231:  /* *sse2_ussubv8hi3 */
    case 1230:  /* *sse2_sssubv8hi3 */
    case 1229:  /* *sse2_usaddv8hi3 */
    case 1228:  /* *sse2_ssaddv8hi3 */
    case 1227:  /* *sse2_ussubv16qi3 */
    case 1226:  /* *sse2_sssubv16qi3 */
    case 1225:  /* *sse2_usaddv16qi3 */
    case 1224:  /* *sse2_ssaddv16qi3 */
    case 1223:  /* *avx_ussubv8hi3 */
    case 1222:  /* *avx_sssubv8hi3 */
    case 1221:  /* *avx_usaddv8hi3 */
    case 1220:  /* *avx_ssaddv8hi3 */
    case 1219:  /* *avx_ussubv16qi3 */
    case 1218:  /* *avx_sssubv16qi3 */
    case 1217:  /* *avx_usaddv16qi3 */
    case 1216:  /* *avx_ssaddv16qi3 */
    case 1215:  /* *subv2di3 */
    case 1214:  /* *addv2di3 */
    case 1213:  /* *subv4si3 */
    case 1212:  /* *addv4si3 */
    case 1211:  /* *subv8hi3 */
    case 1210:  /* *addv8hi3 */
    case 1209:  /* *subv16qi3 */
    case 1208:  /* *addv16qi3 */
    case 1207:  /* *avx_subv2di3 */
    case 1206:  /* *avx_addv2di3 */
    case 1205:  /* *avx_subv4si3 */
    case 1204:  /* *avx_addv4si3 */
    case 1203:  /* *avx_subv8hi3 */
    case 1202:  /* *avx_addv8hi3 */
    case 1201:  /* *avx_subv16qi3 */
    case 1200:  /* *avx_addv16qi3 */
    case 1199:  /* *vec_concatv2df */
    case 1198:  /* *vec_concatv2df_avx */
    case 1144:  /* *vec_concatv4sf_sse */
    case 1143:  /* *vec_concatv4sf_avx */
    case 1142:  /* *vec_concatv2sf_sse */
    case 1141:  /* *vec_concatv2sf_sse4_1 */
    case 1140:  /* *vec_concatv2sf_avx */
    case 1030:  /* *xordf3 */
    case 1029:  /* *iordf3 */
    case 1028:  /* *anddf3 */
    case 1027:  /* *xorsf3 */
    case 1026:  /* *iorsf3 */
    case 1025:  /* *andsf3 */
    case 1024:  /* *avx_xordf3 */
    case 1023:  /* *avx_iordf3 */
    case 1022:  /* *avx_anddf3 */
    case 1021:  /* *avx_xorsf3 */
    case 1020:  /* *avx_iorsf3 */
    case 1019:  /* *avx_andsf3 */
    case 1014:  /* *xorv2df3 */
    case 1013:  /* *iorv2df3 */
    case 1012:  /* *andv2df3 */
    case 1011:  /* *xorv4sf3 */
    case 1010:  /* *iorv4sf3 */
    case 1009:  /* *andv4sf3 */
    case 1008:  /* *avx_xorv4df3 */
    case 1007:  /* *avx_iorv4df3 */
    case 1006:  /* *avx_andv4df3 */
    case 1005:  /* *avx_xorv8sf3 */
    case 1004:  /* *avx_iorv8sf3 */
    case 1003:  /* *avx_andv8sf3 */
    case 1002:  /* *avx_xorv2df3 */
    case 1001:  /* *avx_iorv2df3 */
    case 1000:  /* *avx_andv2df3 */
    case 999:  /* *avx_xorv4sf3 */
    case 998:  /* *avx_iorv4sf3 */
    case 997:  /* *avx_andv4sf3 */
    case 932:  /* *sminv2df3 */
    case 931:  /* *smaxv2df3 */
    case 930:  /* *sminv4sf3 */
    case 929:  /* *smaxv4sf3 */
    case 928:  /* *avx_sminv4df3 */
    case 927:  /* *avx_smaxv4df3 */
    case 926:  /* *avx_sminv8sf3 */
    case 925:  /* *avx_smaxv8sf3 */
    case 924:  /* *avx_sminv2df3 */
    case 923:  /* *avx_smaxv2df3 */
    case 922:  /* *avx_sminv4sf3 */
    case 921:  /* *avx_smaxv4sf3 */
    case 920:  /* *sminv2df3_finite */
    case 919:  /* *smaxv2df3_finite */
    case 918:  /* *sminv4sf3_finite */
    case 917:  /* *smaxv4sf3_finite */
    case 916:  /* *avx_sminv4df3_finite */
    case 915:  /* *avx_smaxv4df3_finite */
    case 914:  /* *avx_sminv8sf3_finite */
    case 913:  /* *avx_smaxv8sf3_finite */
    case 912:  /* *avx_sminv2df3_finite */
    case 911:  /* *avx_smaxv2df3_finite */
    case 910:  /* *avx_sminv4sf3_finite */
    case 909:  /* *avx_smaxv4sf3_finite */
    case 888:  /* sse2_divv2df3 */
    case 887:  /* sse_divv4sf3 */
    case 886:  /* *avx_divv2df3 */
    case 885:  /* *avx_divv4sf3 */
    case 884:  /* avx_divv4df3 */
    case 883:  /* avx_divv8sf3 */
    case 882:  /* avx_divv2df3 */
    case 881:  /* avx_divv4sf3 */
    case 876:  /* *mulv2df3 */
    case 875:  /* *mulv4sf3 */
    case 874:  /* *avx_mulv4df3 */
    case 873:  /* *avx_mulv8sf3 */
    case 872:  /* *avx_mulv2df3 */
    case 871:  /* *avx_mulv4sf3 */
    case 862:  /* *subv2df3 */
    case 861:  /* *addv2df3 */
    case 860:  /* *subv4sf3 */
    case 859:  /* *addv4sf3 */
    case 858:  /* *avx_subv4df3 */
    case 857:  /* *avx_addv4df3 */
    case 856:  /* *avx_subv8sf3 */
    case 855:  /* *avx_addv8sf3 */
    case 854:  /* *avx_subv2df3 */
    case 853:  /* *avx_addv2df3 */
    case 852:  /* *avx_subv4sf3 */
    case 851:  /* *avx_addv4sf3 */
    case 799:  /* *mmx_concatv2si */
    case 783:  /* *mmx_xorv2si3 */
    case 782:  /* *mmx_iorv2si3 */
    case 781:  /* *mmx_andv2si3 */
    case 780:  /* *mmx_xorv4hi3 */
    case 779:  /* *mmx_iorv4hi3 */
    case 778:  /* *mmx_andv4hi3 */
    case 777:  /* *mmx_xorv8qi3 */
    case 776:  /* *mmx_iorv8qi3 */
    case 775:  /* *mmx_andv8qi3 */
    case 771:  /* mmx_gtv2si3 */
    case 770:  /* mmx_gtv4hi3 */
    case 769:  /* mmx_gtv8qi3 */
    case 768:  /* *mmx_eqv2si3 */
    case 767:  /* *mmx_eqv4hi3 */
    case 766:  /* *mmx_eqv8qi3 */
    case 765:  /* mmx_ashlv1di3 */
    case 764:  /* mmx_ashlv2si3 */
    case 763:  /* mmx_ashlv4hi3 */
    case 762:  /* mmx_lshrv1di3 */
    case 761:  /* mmx_lshrv2si3 */
    case 760:  /* mmx_lshrv4hi3 */
    case 759:  /* mmx_ashrv2si3 */
    case 758:  /* mmx_ashrv4hi3 */
    case 757:  /* *mmx_uminv8qi3 */
    case 756:  /* *mmx_umaxv8qi3 */
    case 755:  /* *mmx_sminv4hi3 */
    case 754:  /* *mmx_smaxv4hi3 */
    case 748:  /* *mmx_mulv4hi3 */
    case 747:  /* *mmx_ussubv4hi3 */
    case 746:  /* *mmx_sssubv4hi3 */
    case 745:  /* *mmx_usaddv4hi3 */
    case 744:  /* *mmx_ssaddv4hi3 */
    case 743:  /* *mmx_ussubv8qi3 */
    case 742:  /* *mmx_sssubv8qi3 */
    case 741:  /* *mmx_usaddv8qi3 */
    case 740:  /* *mmx_ssaddv8qi3 */
    case 739:  /* *mmx_subv1di3 */
    case 738:  /* *mmx_addv1di3 */
    case 737:  /* *mmx_subv2si3 */
    case 736:  /* *mmx_addv2si3 */
    case 735:  /* *mmx_subv4hi3 */
    case 734:  /* *mmx_addv4hi3 */
    case 733:  /* *mmx_subv8qi3 */
    case 732:  /* *mmx_addv8qi3 */
    case 729:  /* *mmx_concatv2sf */
    case 722:  /* mmx_gev2sf3 */
    case 721:  /* mmx_gtv2sf3 */
    case 720:  /* *mmx_eqv2sf3 */
    case 711:  /* *mmx_sminv2sf3 */
    case 710:  /* *mmx_smaxv2sf3 */
    case 709:  /* *mmx_sminv2sf3_finite */
    case 708:  /* *mmx_smaxv2sf3_finite */
    case 707:  /* *mmx_mulv2sf3 */
    case 706:  /* *mmx_subv2sf3 */
    case 705:  /* *mmx_addv2sf3 */
    case 667:  /* smindf3 */
    case 666:  /* smaxdf3 */
    case 665:  /* sminsf3 */
    case 664:  /* smaxsf3 */
    case 663:  /* *avx_smindf3 */
    case 662:  /* *avx_smaxdf3 */
    case 661:  /* *avx_sminsf3 */
    case 660:  /* *avx_smaxsf3 */
    case 393:  /* sse2_lshrti3 */
    case 392:  /* *avx_lshrti3 */
    case 355:  /* sse2_ashlti3 */
    case 354:  /* *avx_ashlti3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 347:  /* copysigntf3_var */
    case 346:  /* copysigndf3_var */
    case 345:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1693:  /* avx_vperm2f128v4df3 */
    case 1692:  /* avx_vperm2f128v8sf3 */
    case 1691:  /* avx_vperm2f128v8si3 */
    case 1680:  /* pclmulqdq */
    case 1679:  /* *vpclmulqdq */
    case 1668:  /* sse5_pcom_tfv2di3 */
    case 1667:  /* sse5_pcom_tfv4si3 */
    case 1666:  /* sse5_pcom_tfv8hi3 */
    case 1665:  /* sse5_pcom_tfv16qi3 */
    case 1650:  /* sse5_com_tfv2df3 */
    case 1649:  /* sse5_com_tfv4sf3 */
    case 1620:  /* sse5_permv2df */
    case 1619:  /* sse5_permv4sf */
    case 1609:  /* sse5_pperm */
    case 1522:  /* sse4_1_pblendvb */
    case 1521:  /* *avx_pblendvb */
    case 1518:  /* sse4_1_mpsadbw */
    case 1517:  /* *avx_mpsadbw */
    case 1515:  /* sse4_1_dppd */
    case 1514:  /* sse4_1_dpps */
    case 1513:  /* avx_dppd256 */
    case 1512:  /* avx_dpps256 */
    case 1511:  /* avx_dppd */
    case 1510:  /* avx_dpps */
    case 1509:  /* sse4_1_blendvpd */
    case 1508:  /* sse4_1_blendvps */
    case 1505:  /* avx_blendvpd256 */
    case 1504:  /* avx_blendvps256 */
    case 1503:  /* avx_blendvpd */
    case 1502:  /* avx_blendvps */
    case 1494:  /* sse4a_extrqi */
    case 1483:  /* ssse3_palignrdi */
    case 1482:  /* ssse3_palignrti */
    case 1481:  /* *avx_palignrti */
    case 974:  /* avx_cmppdv4df3 */
    case 973:  /* avx_cmppsv8sf3 */
    case 972:  /* avx_cmppdv2df3 */
    case 971:  /* avx_cmppsv4sf3 */
    case 344:  /* copysigntf3_const */
    case 343:  /* copysigndf3_const */
    case 342:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 329:  /* *absnegtf2_sse */
    case 328:  /* *absnegxf2_i387 */
    case 327:  /* *absnegdf2_i387 */
    case 326:  /* *absnegsf2_i387 */
    case 325:  /* *absnegdf2_sse */
    case 324:  /* *absnegsf2_sse */
    case 323:  /* *absnegdf2_mixed */
    case 322:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 492:  /* *popcountdi2_cmp */
    case 491:  /* *popcountsi2_cmp */
    case 490:  /* *popcounthi2_cmp */
    case 353:  /* *one_cmplqi2_2 */
    case 351:  /* *one_cmplhi2_2 */
    case 349:  /* *one_cmplsi2_2 */
    case 321:  /* *negqi2_cmpz */
    case 319:  /* *neghi2_cmpz */
    case 317:  /* *negsi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 314:  /* *xorqi_cc_ext_1 */
    case 283:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 312:  /* *xorqi_2_slp */
    case 295:  /* *iorqi_2_slp */
    case 281:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 272:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 271:  /* *testqi_ext_2 */
    case 270:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 269:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 263:  /* *udivmodsi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 262:  /* udivmodsi4 */
    case 261:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 264:  /* *udivmodhi_noext */
    case 260:  /* *divmodsi_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 259:  /* *divmodsi4_cltd */
    case 258:  /* *divmodsi4_nocltd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 255:  /* *smulsi3_highpart_insn */
    case 254:  /* *umulsi3_highpart_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 253:  /* *mulsidi3_insn */
    case 252:  /* *umulsidi3_insn */
    case 251:  /* *mulqihi3_insn */
    case 250:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 246:  /* *subqi_3 */
    case 242:  /* *subhi_3 */
    case 239:  /* *subsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 236:  /* subsi3_carry */
    case 235:  /* subhi3_carry */
    case 234:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 310:  /* *xorqi_ext_2 */
    case 309:  /* *xorqi_ext_1 */
    case 299:  /* *iorqi_ext_2 */
    case 298:  /* *iorqi_ext_1 */
    case 285:  /* *andqi_ext_2 */
    case 284:  /* *andqi_ext_1 */
    case 232:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 308:  /* *xorqi_ext_0 */
    case 297:  /* *iorqi_ext_0 */
    case 282:  /* andqi_ext_0 */
    case 231:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 432:  /* *rotrqi3_1_slp */
    case 430:  /* *rotrqi3_1_one_bit_slp */
    case 422:  /* *rotlqi3_1_slp */
    case 420:  /* *rotlqi3_1_one_bit_slp */
    case 410:  /* *lshrqi3_1_slp */
    case 408:  /* *lshrqi3_1_one_bit_slp */
    case 387:  /* *ashrqi3_1_slp */
    case 385:  /* *ashrqi3_1_one_bit_slp */
    case 307:  /* *xorqi_1_slp */
    case 293:  /* *iorqi_1_slp */
    case 278:  /* *andqi_1_slp */
    case 244:  /* *subqi_1_slp */
    case 226:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 414:  /* *lshrqi2_cconly */
    case 412:  /* *lshrqi2_one_bit_cconly */
    case 406:  /* *lshrhi3_cconly */
    case 404:  /* *lshrhi3_one_bit_cconly */
    case 400:  /* *lshrsi3_cconly */
    case 398:  /* *lshrsi3_one_bit_cconly */
    case 391:  /* *ashrqi3_cconly */
    case 389:  /* *ashrqi3_one_bit_cconly */
    case 383:  /* *ashrhi3_cconly */
    case 381:  /* *ashrhi3_one_bit_cconly */
    case 377:  /* *ashrsi3_cconly */
    case 375:  /* *ashrsi3_one_bit_cconly */
    case 368:  /* *ashlqi3_cconly */
    case 364:  /* *ashlhi3_cconly */
    case 360:  /* *ashlsi3_cconly */
    case 313:  /* *xorqi_cc_2 */
    case 305:  /* *xorhi_3 */
    case 302:  /* *xorsi_3 */
    case 296:  /* *iorqi_3 */
    case 291:  /* *iorhi_3 */
    case 288:  /* *iorsi_3 */
    case 230:  /* *addqi_5 */
    case 223:  /* *addhi_5 */
    case 217:  /* *addsi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 228:  /* *addqi_3 */
    case 221:  /* *addhi_3 */
    case 215:  /* *addsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 413:  /* *lshrqi2_cmp */
    case 411:  /* *lshrqi2_one_bit_cmp */
    case 405:  /* *lshrhi3_cmp */
    case 403:  /* *lshrhi3_one_bit_cmp */
    case 399:  /* *lshrsi3_cmp */
    case 397:  /* *lshrsi3_one_bit_cmp */
    case 390:  /* *ashrqi3_cmp */
    case 388:  /* *ashrqi3_one_bit_cmp */
    case 382:  /* *ashrhi3_cmp */
    case 380:  /* *ashrhi3_one_bit_cmp */
    case 376:  /* *ashrsi3_cmp */
    case 374:  /* *ashrsi3_one_bit_cmp */
    case 367:  /* *ashlqi3_cmp */
    case 363:  /* *ashlhi3_cmp */
    case 359:  /* *ashlsi3_cmp */
    case 311:  /* *xorqi_cc_1 */
    case 304:  /* *xorhi_2 */
    case 301:  /* *xorsi_2 */
    case 294:  /* *iorqi_2 */
    case 290:  /* *iorhi_2 */
    case 287:  /* *iorsi_2 */
    case 280:  /* *andqi_2 */
    case 279:  /* *andqi_2_maybe_si */
    case 276:  /* *andhi_2 */
    case 274:  /* *andsi_2 */
    case 245:  /* *subqi_2 */
    case 241:  /* *subhi_2 */
    case 238:  /* *subsi_2 */
    case 227:  /* *addqi_2 */
    case 220:  /* *addhi_2 */
    case 214:  /* *addsi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 212:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1575:  /* sse5_pmacssdd */
    case 1574:  /* sse5_pmacsdd */
    case 1573:  /* sse5_pmacssww */
    case 1572:  /* sse5_pmacsww */
    case 1040:  /* sse5_fmsubv2df4 */
    case 1039:  /* sse5_fmsubv4sf4 */
    case 1038:  /* sse5_fmsubdf4 */
    case 1037:  /* sse5_fmsubsf4 */
    case 1034:  /* sse5_fmaddv2df4 */
    case 1033:  /* sse5_fmaddv4sf4 */
    case 1032:  /* sse5_fmadddf4 */
    case 1031:  /* sse5_fmaddsf4 */
    case 211:  /* *lea_general_2 */
    case 210:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 208:  /* addqi3_cc */
    case 207:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 206:  /* addsi3_carry */
    case 205:  /* addhi3_carry */
    case 204:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 203:  /* *subsi3_cconly_overflow */
    case 202:  /* *subhi3_cconly_overflow */
    case 201:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 200:  /* *adddi3_cconly_overflow */
    case 199:  /* *addsi3_cconly_overflow */
    case 198:  /* *addhi3_cconly_overflow */
    case 197:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 196:  /* *subdi3_cc_overflow */
    case 195:  /* *adddi3_cc_overflow */
    case 194:  /* *subsi3_cc_overflow */
    case 193:  /* *addsi3_cc_overflow */
    case 192:  /* *subhi3_cc_overflow */
    case 191:  /* *addhi3_cc_overflow */
    case 190:  /* *subqi3_cc_overflow */
    case 189:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 676:  /* pro_epilogue_adjust_stack_1 */
    case 431:  /* *rotrqi3_1 */
    case 429:  /* *rotrqi3_1_one_bit */
    case 428:  /* *rotrhi3_1 */
    case 427:  /* *rotrhi3_one_bit */
    case 426:  /* *rotrsi3_1 */
    case 425:  /* *rotrsi3_1_one_bit */
    case 423:  /* *rotlqi3_1 */
    case 421:  /* *rotlqi3_1_one_bit */
    case 419:  /* *rotlhi3_1 */
    case 418:  /* *rotlhi3_1_one_bit */
    case 417:  /* *rotlsi3_1 */
    case 416:  /* *rotlsi3_1_one_bit */
    case 409:  /* *lshrqi3_1 */
    case 407:  /* *lshrqi3_1_one_bit */
    case 402:  /* *lshrhi3_1 */
    case 401:  /* *lshrhi3_1_one_bit */
    case 396:  /* *lshrsi3_1 */
    case 395:  /* *lshrsi3_1_one_bit */
    case 394:  /* *lshrdi3_1 */
    case 386:  /* *ashrqi3_1 */
    case 384:  /* *ashrqi3_1_one_bit */
    case 379:  /* *ashrhi3_1 */
    case 378:  /* *ashrhi3_1_one_bit */
    case 373:  /* *ashrsi3_1 */
    case 372:  /* *ashrsi3_1_one_bit */
    case 371:  /* *ashrsi3_31 */
    case 369:  /* *ashrdi3_1 */
    case 366:  /* *ashlqi3_1 */
    case 365:  /* *ashlqi3_1_lea */
    case 362:  /* *ashlhi3_1 */
    case 361:  /* *ashlhi3_1_lea */
    case 358:  /* *ashlsi3_1 */
    case 356:  /* *ashldi3_1 */
    case 306:  /* *xorqi_1 */
    case 303:  /* *xorhi_1 */
    case 300:  /* *xorsi_1 */
    case 292:  /* *iorqi_1 */
    case 289:  /* *iorhi_1 */
    case 286:  /* *iorsi_1 */
    case 277:  /* *andqi_1 */
    case 275:  /* *andhi_1 */
    case 273:  /* *andsi_1 */
    case 257:  /* udivqi3 */
    case 256:  /* divqi3 */
    case 249:  /* *mulqi3_1 */
    case 248:  /* *mulhi3_1 */
    case 247:  /* *mulsi3_1 */
    case 243:  /* *subqi_1 */
    case 240:  /* *subhi_1 */
    case 237:  /* *subsi_1 */
    case 233:  /* *subdi3_1 */
    case 225:  /* *addqi_1 */
    case 224:  /* *addqi_1_lea */
    case 219:  /* *addhi_1 */
    case 218:  /* *addhi_1_lea */
    case 213:  /* *addsi_1 */
    case 188:  /* *adddi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 184:  /* floatdixf2_i387_with_xmm */
    case 183:  /* floatdidf2_i387_with_xmm */
    case 182:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 128:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 132:  /* fix_truncsi_i387_with_temp */
    case 131:  /* fix_trunchi_i387_with_temp */
    case 127:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 187:  /* *floatunssixf2_1 */
    case 186:  /* *floatunssidf2_1 */
    case 185:  /* *floatunssisf2_1 */
    case 130:  /* fix_truncsi_i387 */
    case 129:  /* fix_trunchi_i387 */
    case 123:  /* fix_truncdi_i387_fisttp_with_temp */
    case 122:  /* fix_truncsi_i387_fisttp_with_temp */
    case 121:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 112:  /* *fixuns_truncdf_1 */
    case 111:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 827:  /* movdi_to_sse */
    case 483:  /* *ffs_no_cmove */
    case 175:  /* *floatdixf2_i387_with_temp */
    case 174:  /* *floatdidf2_i387_with_temp */
    case 173:  /* *floatdisf2_i387_with_temp */
    case 172:  /* *floatsixf2_i387_with_temp */
    case 171:  /* *floatsidf2_i387_with_temp */
    case 170:  /* *floatsisf2_i387_with_temp */
    case 165:  /* *floatsidf2_sse_with_temp */
    case 164:  /* *floatsisf2_sse_with_temp */
    case 161:  /* *floatsidf2_vector_sse_with_temp */
    case 160:  /* *floatsisf2_vector_sse_with_temp */
    case 155:  /* *floatsidf2_mixed_with_temp */
    case 154:  /* *floatsisf2_mixed_with_temp */
    case 151:  /* *floatsidf2_vector_mixed_with_temp */
    case 150:  /* *floatsisf2_vector_mixed_with_temp */
    case 140:  /* *floathixf2_i387_with_temp */
    case 139:  /* *floathidf2_i387_with_temp */
    case 138:  /* *floathisf2_i387_with_temp */
    case 120:  /* fix_truncdi_i387_fisttp */
    case 119:  /* fix_truncsi_i387_fisttp */
    case 118:  /* fix_trunchi_i387_fisttp */
    case 106:  /* *truncxfdf2_mixed */
    case 105:  /* *truncxfsf2_mixed */
    case 103:  /* *truncdfsf_i387 */
    case 102:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 90:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 651:  /* *x86_movsicc_0_m1_se */
    case 650:  /* x86_movsicc_0_m1 */
    case 649:  /* *x86_movdicc_0_m1_se */
    case 496:  /* clzhi2_abm */
    case 489:  /* popcountsi2 */
    case 488:  /* popcounthi2 */
    case 486:  /* clzsi2_abm */
    case 485:  /* ctzsi2 */
    case 320:  /* *negqi2_1 */
    case 318:  /* *neghi2_1 */
    case 316:  /* *negsi2_1 */
    case 315:  /* *negdi2_1 */
    case 126:  /* *fix_truncdi_i387_1 */
    case 125:  /* *fix_truncsi_i387_1 */
    case 124:  /* *fix_trunchi_i387_1 */
    case 89:  /* zero_extendsidi2_32 */
    case 87:  /* *zero_extendqisi2_movzbw_and */
    case 86:  /* *zero_extendqisi2_and */
    case 84:  /* *zero_extendqihi2_movzbw_and */
    case 83:  /* *zero_extendqihi2_and */
    case 81:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 61:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1548:  /* sse4_1_zero_extendv2siv2di2 */
    case 1546:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1544:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1542:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1540:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1538:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1536:  /* sse4_1_extendv2siv2di2 */
    case 1534:  /* sse4_1_extendv2hiv2di2 */
    case 1532:  /* sse4_1_extendv4hiv4si2 */
    case 1530:  /* sse4_1_extendv2qiv2di2 */
    case 1528:  /* sse4_1_extendv4qiv4si2 */
    case 1526:  /* sse4_1_extendv8qiv8hi2 */
    case 1109:  /* sse2_cvtps2pd */
    case 1097:  /* sse2_cvtdq2pd */
    case 1095:  /* sse2_cvttsd2si */
    case 1078:  /* sse_cvttss2si */
    case 1073:  /* sse_cvttps2pi */
    case 832:  /* sse2_movq128 */
    case 797:  /* *vec_dupv4hi */
    case 560:  /* sqrt_extenddfxf2_i387 */
    case 559:  /* sqrt_extendsfxf2_i387 */
    case 341:  /* *negextenddfxf2 */
    case 340:  /* *absextenddfxf2 */
    case 339:  /* *negextendsfxf2 */
    case 338:  /* *absextendsfxf2 */
    case 337:  /* *negextendsfdf2 */
    case 336:  /* *absextendsfdf2 */
    case 59:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1489:  /* absv2si2 */
    case 1488:  /* absv4hi2 */
    case 1487:  /* absv8qi2 */
    case 1486:  /* absv4si2 */
    case 1485:  /* absv8hi2 */
    case 1484:  /* absv16qi2 */
    case 1416:  /* *vec_dupv2di */
    case 1415:  /* *vec_dupv2di_avx */
    case 1414:  /* *vec_dupv4si */
    case 1413:  /* *vec_extractv2di_1_sse */
    case 1412:  /* *vec_extractv2di_1_sse2 */
    case 1411:  /* *vec_extractv2di_1_avx */
    case 1410:  /* *sse2_storeq */
    case 1408:  /* sse2_stored */
    case 1196:  /* vec_dupv2df */
    case 1195:  /* *vec_dupv2df_sse3 */
    case 1192:  /* *vec_extractv2df_0_sse */
    case 1191:  /* *vec_extractv2df_1_sse */
    case 1186:  /* sse2_storelpd */
    case 1185:  /* sse2_storehpd */
    case 1184:  /* *avx_storehpd */
    case 1163:  /* vec_extract_hi_v32qi */
    case 1162:  /* vec_extract_lo_v32qi */
    case 1161:  /* vec_extract_hi_v16hi */
    case 1160:  /* vec_extract_lo_v16hi */
    case 1159:  /* vec_extract_hi_v8sf */
    case 1158:  /* vec_extract_hi_v8si */
    case 1157:  /* vec_extract_lo_v8sf */
    case 1156:  /* vec_extract_lo_v8si */
    case 1155:  /* vec_extract_hi_v4df */
    case 1154:  /* vec_extract_hi_v4di */
    case 1153:  /* vec_extract_lo_v4df */
    case 1152:  /* vec_extract_lo_v4di */
    case 1151:  /* *vec_extractv4sf_0 */
    case 1139:  /* *vec_dupv4sf */
    case 1138:  /* *vec_dupv4sf_avx */
    case 1133:  /* sse_storelps */
    case 1132:  /* *avx_storelps */
    case 1129:  /* sse_storehps */
    case 1108:  /* avx_cvtps2pd256 */
    case 1106:  /* avx_cvtpd2ps256 */
    case 1100:  /* avx_cvttpd2dq256 */
    case 1096:  /* avx_cvtdq2pd256 */
    case 1090:  /* sse2_cvttpd2pi */
    case 1088:  /* sse2_cvtpi2pd */
    case 1087:  /* sse2_cvttps2dq */
    case 1086:  /* avx_cvttps2dq256 */
    case 1085:  /* avx_cvttps2dq */
    case 1081:  /* sse2_cvtdq2ps */
    case 1080:  /* avx_cvtdq2ps256 */
    case 1079:  /* avx_cvtdq2ps */
    case 900:  /* sqrtv2df2 */
    case 899:  /* sqrtv4df2 */
    case 898:  /* sse_sqrtv4sf2 */
    case 897:  /* avx_sqrtv8sf2 */
    case 801:  /* *vec_extractv2si_1 */
    case 800:  /* *vec_extractv2si_0 */
    case 798:  /* *vec_dupv2si */
    case 796:  /* mmx_pswapdv2si2 */
    case 731:  /* *vec_extractv2sf_1 */
    case 730:  /* *vec_extractv2sf_0 */
    case 728:  /* *vec_dupv2sf */
    case 727:  /* mmx_pswapdv2sf2 */
    case 726:  /* mmx_floatv2si2 */
    case 723:  /* mmx_pf2id */
    case 563:  /* *sqrtdf2_sse */
    case 562:  /* *sqrtsf2_sse */
    case 558:  /* sqrtxf2 */
    case 493:  /* *bswapsi_1 */
    case 352:  /* *one_cmplqi2_1 */
    case 350:  /* *one_cmplhi2_1 */
    case 348:  /* *one_cmplsi2_1 */
    case 335:  /* *negxf2_1 */
    case 334:  /* *absxf2_1 */
    case 333:  /* *negdf2_1 */
    case 332:  /* *absdf2_1 */
    case 331:  /* *negsf2_1 */
    case 330:  /* *abssf2_1 */
    case 181:  /* *floatdixf2_i387 */
    case 180:  /* *floatdidf2_i387 */
    case 179:  /* *floatdisf2_i387 */
    case 178:  /* *floatsixf2_i387 */
    case 177:  /* *floatsidf2_i387 */
    case 176:  /* *floatsisf2_i387 */
    case 169:  /* *floatsidf2_sse_nointerunit */
    case 168:  /* *floatsisf2_sse_nointerunit */
    case 167:  /* *floatsidf2_sse_interunit */
    case 166:  /* *floatsisf2_sse_interunit */
    case 163:  /* *floatsidf2_vector_sse */
    case 162:  /* *floatsisf2_vector_sse */
    case 159:  /* *floatsidf2_mixed_nointerunit */
    case 158:  /* *floatsisf2_mixed_nointerunit */
    case 157:  /* *floatsidf2_mixed_interunit */
    case 156:  /* *floatsisf2_mixed_interunit */
    case 153:  /* *floatsidf2_vector_mixed */
    case 152:  /* *floatsisf2_vector_mixed */
    case 149:  /* *floatdixf2_1 */
    case 148:  /* *floatdidf2_1 */
    case 147:  /* *floatdisf2_1 */
    case 146:  /* *floatsixf2_1 */
    case 145:  /* *floatsidf2_1 */
    case 144:  /* *floatsisf2_1 */
    case 143:  /* *floathixf2_i387 */
    case 142:  /* *floathidf2_i387 */
    case 141:  /* *floathisf2_i387 */
    case 137:  /* *floathixf2_1 */
    case 136:  /* *floathidf2_1 */
    case 135:  /* *floathisf2_1 */
    case 117:  /* fix_truncdi_fisttp_i387_1 */
    case 116:  /* fix_truncsi_fisttp_i387_1 */
    case 115:  /* fix_trunchi_fisttp_i387_1 */
    case 114:  /* fix_truncdfsi_sse */
    case 113:  /* fix_truncsfsi_sse */
    case 110:  /* *truncxfdf2_i387 */
    case 109:  /* *truncxfsf2_i387 */
    case 108:  /* truncxfdf2_i387_noop */
    case 107:  /* truncxfsf2_i387_noop */
    case 104:  /* *truncdfsf2_i387_1 */
    case 101:  /* *truncdfsf_fast_i387 */
    case 100:  /* *truncdfsf_fast_sse */
    case 99:  /* *truncdfsf_fast_mixed */
    case 98:  /* *extenddfxf2_i387 */
    case 97:  /* *extendsfxf2_i387 */
    case 96:  /* *extendsfdf2_i387 */
    case 95:  /* *extendsfdf2_sse */
    case 94:  /* *extendsfdf2_mixed */
    case 93:  /* extendqisi2 */
    case 92:  /* extendqihi2 */
    case 91:  /* extendhisi2 */
    case 88:  /* *zero_extendqisi2_movzbw */
    case 85:  /* *zero_extendqihi2_movzbl */
    case 82:  /* *zero_extendhisi2_movzwl */
    case 58:  /* *movsi_extzv_1 */
    case 57:  /* *movqi_extv_1 */
    case 56:  /* *movhi_extv_1 */
    case 55:  /* *movsi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 54:  /* *movstrictqi_xor */
    case 48:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 469:  /* *sibcall_1 */
    case 468:  /* *call_1 */
    case 467:  /* *call_0 */
    case 435:  /* *setcc_2 */
    case 60:  /* movsi_insv_1 */
    case 53:  /* *movstrictqi_1 */
    case 47:  /* *movstricthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 80:  /* swapxf */
    case 73:  /* *swapdf */
    case 68:  /* *swapsf */
    case 52:  /* *swapqi_2 */
    case 51:  /* *swapqi_1 */
    case 46:  /* *swaphi_2 */
    case 45:  /* *swaphi_1 */
    case 42:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 479:  /* set_got */
    case 38:  /* popsi1 */
    case 37:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 40:  /* *movsi_or */
    case 39:  /* *movsi_xor */
    case 36:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 826:  /* *movv2df_internal */
    case 825:  /* *movv4sf_internal */
    case 824:  /* *movv2di_internal */
    case 823:  /* *movv4si_internal */
    case 822:  /* *movv8hi_internal */
    case 821:  /* *movv16qi_internal */
    case 820:  /* *avx_movv4df_internal */
    case 819:  /* *avx_movv8sf_internal */
    case 818:  /* *avx_movv4di_internal */
    case 817:  /* *avx_movv8si_internal */
    case 816:  /* *avx_movv16hi_internal */
    case 815:  /* *avx_movv32qi_internal */
    case 814:  /* *avx_movv2df_internal */
    case 813:  /* *avx_movv4sf_internal */
    case 812:  /* *avx_movv2di_internal */
    case 811:  /* *avx_movv4si_internal */
    case 810:  /* *avx_movv8hi_internal */
    case 809:  /* *avx_movv16qi_internal */
    case 703:  /* *movv2sf_internal */
    case 702:  /* *movv2sf_internal_avx */
    case 701:  /* *movv1di_internal */
    case 700:  /* *movv2si_internal */
    case 699:  /* *movv4hi_internal */
    case 698:  /* *movv8qi_internal */
    case 697:  /* *movv1di_internal_avx */
    case 696:  /* *movv2si_internal_avx */
    case 695:  /* *movv4hi_internal_avx */
    case 694:  /* *movv8qi_internal_avx */
    case 686:  /* *prefetch_3dnow */
    case 434:  /* *setcc_1 */
    case 209:  /* *lea_1 */
    case 79:  /* *pushtf_sse */
    case 78:  /* *movtf_internal */
    case 77:  /* *movxf_integer */
    case 76:  /* *movxf_nointeger */
    case 75:  /* *pushxf_integer */
    case 74:  /* *pushxf_nointeger */
    case 72:  /* *movdf_integer */
    case 71:  /* *movdf_nointeger */
    case 70:  /* *pushdf_integer */
    case 69:  /* *pushdf_nointeger */
    case 67:  /* *movsf_1 */
    case 66:  /* *pushsf */
    case 65:  /* *movti_internal */
    case 64:  /* *movoi_internal */
    case 63:  /* *movdi_2 */
    case 62:  /* *pushdi */
    case 50:  /* *movqi_1 */
    case 49:  /* *pushqi2 */
    case 44:  /* *movhi_1 */
    case 43:  /* *pushhi2 */
    case 41:  /* *movsi_1 */
    case 35:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 481:  /* eh_return_si */
    case 134:  /* x86_fldcw_1 */
    case 28:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1438:  /* sse_stmxcsr */
    case 507:  /* *load_tp_si */
    case 133:  /* x86_fnstcw_1 */
    case 27:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 26:  /* *cmpfp_si_cc */
    case 25:  /* *cmpfp_hi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 24:  /* *cmpfp_si */
    case 23:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 229:  /* *addqi_4 */
    case 222:  /* *addhi_4 */
    case 216:  /* *addsi_4 */
    case 22:  /* *cmpfp_u_cc */
    case 20:  /* *cmpfp_df_cc */
    case 19:  /* *cmpfp_sf_cc */
    case 16:  /* *cmpfp_xf_cc */
    case 14:  /* *cmpfp_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 21:  /* *cmpfp_u */
    case 18:  /* *cmpfp_df */
    case 17:  /* *cmpfp_sf */
    case 15:  /* *cmpfp_xf */
    case 13:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 12:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 11:  /* cmpqi_ext_3_insn */
    case 10:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 268:  /* *testqi_1 */
    case 267:  /* *testqi_1_maybe_si */
    case 266:  /* *testhi_1 */
    case 265:  /* testsi_1 */
    case 8:  /* *cmpqi_minus_1 */
    case 4:  /* *cmphi_minus_1 */
    case 1:  /* *cmpsi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 34:  /* *cmpfp_iu_387 */
    case 33:  /* *cmpfp_iu_sse */
    case 32:  /* *cmpfp_iu_mixed */
    case 31:  /* *cmpfp_i_i387 */
    case 30:  /* *cmpfp_i_sse */
    case 29:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpqi_1 */
    case 6:  /* *cmpqi_ccno_1 */
    case 5:  /* *cmphi_1 */
    case 3:  /* *cmphi_ccno_1 */
    case 2:  /* *cmpsi_1_insn */
    case 0:  /* *cmpsi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
