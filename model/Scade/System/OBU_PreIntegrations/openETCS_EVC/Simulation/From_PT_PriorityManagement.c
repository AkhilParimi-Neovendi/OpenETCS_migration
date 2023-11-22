/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PT_PriorityManagement.h"

/* PriorityManagement::From_PT/ */
void From_PT_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition8/ */
  kcg_bool Condition8,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition15/ */
  kcg_bool Condition15,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition31/ */
  kcg_bool Condition31,
  /* Condition37/ */
  kcg_bool Condition37,
  /* Condition50/ */
  kcg_bool Condition50,
  /* Condition70/ */
  kcg_bool Condition70,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_PT_PriorityManagement *outC)
{
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _1_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _2_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _3_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _4_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _5_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _6_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _7_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _8_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _9_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _10_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _11_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _12_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _13_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _14_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _15_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _16_FromPT_To_NewMode_partial;
  /* FromPT_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _17_FromPT_To_NewMode_partial;

  outC->_L1 = Condition37;
  outC->_L5 = Condition8;
  outC->_L9 = outC->_L5 | outC->_L1;
  outC->_L2 = Condition50;
  outC->_L3 = Condition6;
  outC->_L7 = Condition5;
  outC->_L8 = outC->_L7 | outC->_L3 | outC->_L2;
  outC->Condition2SR = outC->_L9;
  outC->Condition2SH = outC->_L8;
  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromPT_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromPT_To_NewMode = FromPT_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _17_FromPT_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromPT_To_NewMode_partial = _17_FromPT_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition13;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _2_FromPT_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _16_FromPT_To_NewMode_partial = _2_FromPT_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Condition28;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _15_FromPT_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromPT_To_NewMode_partial = _15_FromPT_To_NewMode_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->Condition2SR;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = SR_Level_And_Mode_Types_Pkg;
            _4_FromPT_To_NewMode_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _14_FromPT_To_NewMode_partial = _4_FromPT_To_NewMode_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = Condition15;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L15_then_else_else_else_else_else_IfBlock1 = OS_Level_And_Mode_Types_Pkg;
              _13_FromPT_To_NewMode_partial =
                outC->_L15_then_else_else_else_else_else_IfBlock1;
              _5_FromPT_To_NewMode_partial = _13_FromPT_To_NewMode_partial;
            }
            else {
              outC->_3_else_clock_else_else_else_else_else_IfBlock1 = outC->Condition2SH;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_3_else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
                  SH_Level_And_Mode_Types_Pkg;
                _6_FromPT_To_NewMode_partial =
                  outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _12_FromPT_To_NewMode_partial = _6_FromPT_To_NewMode_partial;
              }
              else {
                outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = Condition31;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L14_then_else_else_else_else_else_else_else_IfBlock1 =
                    FS_Level_And_Mode_Types_Pkg;
                  _11_FromPT_To_NewMode_partial =
                    outC->_L14_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_FromPT_To_NewMode_partial = _11_FromPT_To_NewMode_partial;
                }
                else {
                  outC->_2_else_clock_else_else_else_else_else_else_else_IfBlock1 = Condition70;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->_2_else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      LS_Level_And_Mode_Types_Pkg;
                    _8_FromPT_To_NewMode_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _10_FromPT_To_NewMode_partial = _8_FromPT_To_NewMode_partial;
                  }
                  else {
                    outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 =
                      previousMode_Loc;
                    _9_FromPT_To_NewMode_partial =
                      outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1;
                    _10_FromPT_To_NewMode_partial = _9_FromPT_To_NewMode_partial;
                  }
                  _7_FromPT_To_NewMode_partial = _10_FromPT_To_NewMode_partial;
                }
                _12_FromPT_To_NewMode_partial = _7_FromPT_To_NewMode_partial;
              }
              _5_FromPT_To_NewMode_partial = _12_FromPT_To_NewMode_partial;
            }
            _14_FromPT_To_NewMode_partial = _5_FromPT_To_NewMode_partial;
          }
          _3_FromPT_To_NewMode_partial = _14_FromPT_To_NewMode_partial;
        }
        _16_FromPT_To_NewMode_partial = _3_FromPT_To_NewMode_partial;
      }
      _1_FromPT_To_NewMode_partial = _16_FromPT_To_NewMode_partial;
    }
    outC->FromPT_To_NewMode = _1_FromPT_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_PT_init_PriorityManagement(outC_From_PT_PriorityManagement *outC)
{
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L7 = kcg_true;
  outC->Condition2SH = kcg_true;
  outC->Condition2SR = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L15_then_else_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_3_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_2_else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->_1_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 =
    NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromPT_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_PT_reset_PriorityManagement(outC_From_PT_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_PT_PriorityManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

