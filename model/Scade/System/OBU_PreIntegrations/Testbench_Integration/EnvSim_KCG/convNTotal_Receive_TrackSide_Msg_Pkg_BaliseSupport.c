/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ */
void convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inNTotal/ */
  N_TOTAL inNTotal,
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* outTotal/ */
  static kcg_int64 outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _1_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _2_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _3_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _4_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _5_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _6_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _7_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _8_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _9_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _10_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _11_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _12_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _13_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _14_outTotal_partial;
  /* outTotal/ */
  static kcg_int64 _15_outTotal_partial;

  outC->IfBlock1_clock = inNTotal == N_TOTAL_1_balise_in_the_group;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_lit_int64(1);
    outTotal_partial = outC->_L1_then_IfBlock1;
    outC->outTotal = outTotal_partial;
  }
  else {
    outC->else_clock_IfBlock1 = inNTotal == N_TOTAL_2_balises_in_the_group;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_lit_int64(2);
      _15_outTotal_partial = outC->_L1_then_else_IfBlock1;
      _1_outTotal_partial = _15_outTotal_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = inNTotal == N_TOTAL_3_balises_in_the_group;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_lit_int64(3);
        _2_outTotal_partial = outC->_L1_then_else_else_IfBlock1;
        _14_outTotal_partial = _2_outTotal_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = inNTotal ==
          N_TOTAL_4_balises_in_the_group;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_int64(4);
          _13_outTotal_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_outTotal_partial = _13_outTotal_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = inNTotal ==
            N_TOTAL_5_balises_in_the_group;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int64(5);
            _4_outTotal_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _12_outTotal_partial = _4_outTotal_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = inNTotal ==
              N_TOTAL_6_balises_in_the_group;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_lit_int64(6);
              _11_outTotal_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_outTotal_partial = _11_outTotal_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 = inNTotal ==
                N_TOTAL_7_balises_in_the_group;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(7);
                _6_outTotal_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _10_outTotal_partial = _6_outTotal_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  inNTotal == N_TOTAL_8_balises_in_the_group;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(8);
                  _9_outTotal_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_outTotal_partial = _9_outTotal_partial;
                }
                else {
                  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
                  _8_outTotal_partial =
                    outC->_L2_else_else_else_else_else_else_else_else_IfBlock1;
                  _7_outTotal_partial = _8_outTotal_partial;
                }
                _10_outTotal_partial = _7_outTotal_partial;
              }
              _5_outTotal_partial = _10_outTotal_partial;
            }
            _12_outTotal_partial = _5_outTotal_partial;
          }
          _3_outTotal_partial = _12_outTotal_partial;
        }
        _14_outTotal_partial = _3_outTotal_partial;
      }
      _1_outTotal_partial = _14_outTotal_partial;
    }
    outC->outTotal = _1_outTotal_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void convNTotal_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int64(0);
  outC->outTotal = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

