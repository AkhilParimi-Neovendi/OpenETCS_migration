/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

/* OutputManagement::Output_To_DMI/ */
void Output_To_DMI_OutputManagement(
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  /* needsAckFromDriver/ */
  kcg_bool needsAckFromDriver,
  /* Data_To_DMI_From_Mode/ */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* announcedLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* isAvailableForUse/ */
  kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC)
{
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _1_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _2_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _3_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _4_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _5_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _6_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _7_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _8_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _9_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _10_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _11_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _12_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _13_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _14_Loc_Valid_partial;
  /* Loc_Valid/ */
  static kcg_bool _15_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _16_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _17_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _18_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _19_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _20_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _21_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _22_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _23_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _24_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _25_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _26_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _27_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _28_Loc_Selected_Mode_For_Ack_partial;
  /* Loc_Valid/ */
  static kcg_bool _29_Loc_Valid_partial;
  /* Loc_Selected_Mode_For_Ack/ */
  static M_MODE _30_Loc_Selected_Mode_For_Ack_partial;
  /* needsAckFromDriver/ */
  static kcg_bool last_needsAckFromDriver;

  last_needsAckFromDriver = outC->mem_needsAckFromDriver;
  outC->mem_needsAckFromDriver = needsAckFromDriver;
  outC->_L46 = last_needsAckFromDriver;
  outC->_L45 = needsAckFromDriver;
  outC->_L44 = outC->_L45 != outC->_L46;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L40,
    announcedLevelTransition);
  outC->_L41 = isAvailableForUse;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L43.LevelTransition,
    &outC->_L40);
  outC->_L43.IsAvailableForUse = outC->_L41;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L18,
    Data_To_DMI_From_Mode);
  outC->_L31 = outC->_L18.SH_Refused_By_RBC;
  outC->Loc_SH_Refused_By_RBC_To_DMI = outC->_L31;
  outC->_L39 = outC->Loc_SH_Refused_By_RBC_To_DMI;
  outC->_L23 = outC->_L18.Ack_LS;
  outC->Loc_Ack_LS_Req_To_Driver = outC->_L23;
  outC->IfBlock1_clock = outC->Loc_Ack_LS_Req_To_Driver;
  outC->_L24 = outC->_L18.Ack_OS;
  outC->Loc_Ack_OS_Req_To_Driver = outC->_L24;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->Loc_Ack_OS_Req_To_Driver;
  }
  outC->_L25 = outC->_L18.Ack_RV;
  outC->Loc_Ack_RV_Req_To_Driver = outC->_L25;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else {
    outC->else_clock_else_IfBlock1 = outC->Loc_Ack_RV_Req_To_Driver;
  }
  outC->_L26 = outC->_L18.Ack_SH;
  outC->Loc_Ack_SH_Req_To_Driver = outC->_L26;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_IfBlock1 = outC->Loc_Ack_SH_Req_To_Driver;
  }
  outC->_L27 = outC->_L18.Ack_SN;
  outC->Loc_Ack_SN_Req_To_Driver = outC->_L27;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_else_IfBlock1 = outC->Loc_Ack_SN_Req_To_Driver;
  }
  outC->_L28 = outC->_L18.Ack_SR;
  outC->Loc_Ack_SR_Req_To_Driver = outC->_L28;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_else_else_IfBlock1 = outC->Loc_Ack_SR_Req_To_Driver;
  }
  outC->_L29 = outC->_L18.Ack_TR;
  outC->Loc_Ack_TR_Req_To_Driver = outC->_L29;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else if (outC->else_clock_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_IfBlock1) {
  }
  else if (outC->else_clock_else_else_else_else_IfBlock1) {
  }
  else {
    outC->else_clock_else_else_else_else_else_IfBlock1 =
      outC->Loc_Ack_TR_Req_To_Driver;
  }
  outC->_L30 = outC->_L18.Ack_UN;
  outC->Loc_Ack_UN_Req_To_Driver = outC->_L30;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_true;
    Loc_Valid_partial = outC->_L2_then_IfBlock1;
    outC->Loc_Valid = Loc_Valid_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L9_then_else_IfBlock1 = kcg_true;
      _29_Loc_Valid_partial = outC->_L9_then_else_IfBlock1;
      _2_Loc_Valid_partial = _29_Loc_Valid_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_true;
        _4_Loc_Valid_partial = outC->_L2_then_else_else_IfBlock1;
        _27_Loc_Valid_partial = _4_Loc_Valid_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
          _25_Loc_Valid_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_Loc_Valid_partial = _25_Loc_Valid_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
            _8_Loc_Valid_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _23_Loc_Valid_partial = _8_Loc_Valid_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_true;
              _21_Loc_Valid_partial = outC->_L3_then_else_else_else_else_else_IfBlock1;
              _10_Loc_Valid_partial = _21_Loc_Valid_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
                _12_Loc_Valid_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _19_Loc_Valid_partial = _12_Loc_Valid_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->Loc_Ack_UN_Req_To_Driver;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                  _17_Loc_Valid_partial =
                    outC->_L3_then_else_else_else_else_else_else_else_IfBlock1;
                  _14_Loc_Valid_partial = _17_Loc_Valid_partial;
                }
                else {
                  outC->_L3_else_else_else_else_else_else_else_else_IfBlock1 = needsAckFromDriver;
                  _15_Loc_Valid_partial =
                    outC->_L3_else_else_else_else_else_else_else_else_IfBlock1;
                  _14_Loc_Valid_partial = _15_Loc_Valid_partial;
                }
                _19_Loc_Valid_partial = _14_Loc_Valid_partial;
              }
              _10_Loc_Valid_partial = _19_Loc_Valid_partial;
            }
            _23_Loc_Valid_partial = _10_Loc_Valid_partial;
          }
          _6_Loc_Valid_partial = _23_Loc_Valid_partial;
        }
        _27_Loc_Valid_partial = _6_Loc_Valid_partial;
      }
      _2_Loc_Valid_partial = _27_Loc_Valid_partial;
    }
    outC->Loc_Valid = _2_Loc_Valid_partial;
  }
  outC->_L22 = outC->Loc_Valid;
  outC->_L37 = outC->_L22 | outC->_L44 | outC->_L39;
  outC->_L35 = Level_Mode_Compatible;
  outC->_L20 = outC->_L35 & outC->_L37;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = M_MODE_Limited_Supervision;
    Loc_Selected_Mode_For_Ack_partial = outC->_L1_then_IfBlock1;
    outC->Loc_Selected_Mode_For_Ack = Loc_Selected_Mode_For_Ack_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = M_MODE_On_Sight;
      _30_Loc_Selected_Mode_For_Ack_partial = outC->_L6_then_else_IfBlock1;
      _1_Loc_Selected_Mode_For_Ack_partial = _30_Loc_Selected_Mode_For_Ack_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = M_MODE_Reversing;
        _3_Loc_Selected_Mode_For_Ack_partial = outC->_L1_then_else_else_IfBlock1;
        _28_Loc_Selected_Mode_For_Ack_partial = _3_Loc_Selected_Mode_For_Ack_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = M_MODE_Shunting;
          _26_Loc_Selected_Mode_For_Ack_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_Loc_Selected_Mode_For_Ack_partial = _26_Loc_Selected_Mode_For_Ack_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L1_then_else_else_else_else_IfBlock1 = M_MODE_National_System;
            _7_Loc_Selected_Mode_For_Ack_partial =
              outC->_L1_then_else_else_else_else_IfBlock1;
            _24_Loc_Selected_Mode_For_Ack_partial = _7_Loc_Selected_Mode_For_Ack_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L1_then_else_else_else_else_else_IfBlock1 = M_MODE_Staff_Responsible;
              _22_Loc_Selected_Mode_For_Ack_partial =
                outC->_L1_then_else_else_else_else_else_IfBlock1;
              _9_Loc_Selected_Mode_For_Ack_partial = _22_Loc_Selected_Mode_For_Ack_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 = M_MODE_Trip;
                _11_Loc_Selected_Mode_For_Ack_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _20_Loc_Selected_Mode_For_Ack_partial = _11_Loc_Selected_Mode_For_Ack_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = M_MODE_Unfitted;
                  _18_Loc_Selected_Mode_For_Ack_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_Loc_Selected_Mode_For_Ack_partial = _18_Loc_Selected_Mode_For_Ack_partial;
                }
                else {
                  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 = M_MODE_Stand_By;
                  _16_Loc_Selected_Mode_For_Ack_partial =
                    outC->_L1_else_else_else_else_else_else_else_else_IfBlock1;
                  _13_Loc_Selected_Mode_For_Ack_partial = _16_Loc_Selected_Mode_For_Ack_partial;
                }
                _20_Loc_Selected_Mode_For_Ack_partial = _13_Loc_Selected_Mode_For_Ack_partial;
              }
              _9_Loc_Selected_Mode_For_Ack_partial = _20_Loc_Selected_Mode_For_Ack_partial;
            }
            _24_Loc_Selected_Mode_For_Ack_partial = _9_Loc_Selected_Mode_For_Ack_partial;
          }
          _5_Loc_Selected_Mode_For_Ack_partial = _24_Loc_Selected_Mode_For_Ack_partial;
        }
        _28_Loc_Selected_Mode_For_Ack_partial = _5_Loc_Selected_Mode_For_Ack_partial;
      }
      _1_Loc_Selected_Mode_For_Ack_partial = _28_Loc_Selected_Mode_For_Ack_partial;
    }
    outC->Loc_Selected_Mode_For_Ack = _1_Loc_Selected_Mode_For_Ack_partial;
  }
  outC->_L19 = outC->Loc_Selected_Mode_For_Ack;
  outC->_L21 = outC->Loc_SH_Refused_By_RBC_To_DMI;
  outC->_L32 = needsAckFromDriver;
  outC->_L42.valid = outC->_L20;
  outC->_L42.whichMode = outC->_L19;
  outC->_L42.SH_Req_RefusedByRBC = outC->_L21;
  outC->_L42.LevelNeedsAck = outC->_L32;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->_L43);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->_L42);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_To_DMI_init_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43.LevelTransition.is_set = kcg_true;
  outC->_L43.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L43.LevelTransition.transition.position = kcg_lit_int64(0);
  outC->_L43.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L43.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L43.LevelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->_L43.LevelTransition.LRBG = kcg_lit_int64(0);
  outC->_L43.LevelTransition.referenceLocation = kcg_lit_int64(0);
  outC->_L43.IsAvailableForUse = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.whichMode = M_MODE_Full_Supervision;
  outC->_L42.SH_Req_RefusedByRBC = kcg_true;
  outC->_L42.LevelNeedsAck = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40.is_set = kcg_true;
  outC->_L40.transition.level = M_LEVEL_Level_0;
  outC->_L40.transition.position = kcg_lit_int64(0);
  outC->_L40.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L40.transition.immediateAck = kcg_true;
  outC->_L40.transition.AckLength = kcg_lit_int64(0);
  outC->_L40.LRBG = kcg_lit_int64(0);
  outC->_L40.referenceLocation = kcg_lit_int64(0);
  outC->_L39 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L18.Ack_LS = kcg_true;
  outC->_L18.Ack_OS = kcg_true;
  outC->_L18.Ack_RV = kcg_true;
  outC->_L18.Ack_SH = kcg_true;
  outC->_L18.Ack_SN = kcg_true;
  outC->_L18.Ack_SR = kcg_true;
  outC->_L18.Ack_TR = kcg_true;
  outC->_L18.Ack_UN = kcg_true;
  outC->_L18.SH_Refused_By_RBC = kcg_true;
  outC->_L19 = M_MODE_Full_Supervision;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L35 = kcg_true;
  outC->Loc_Ack_LS_Req_To_Driver = kcg_true;
  outC->Loc_Ack_OS_Req_To_Driver = kcg_true;
  outC->Loc_Ack_RV_Req_To_Driver = kcg_true;
  outC->Loc_Ack_SH_Req_To_Driver = kcg_true;
  outC->Loc_Ack_SN_Req_To_Driver = kcg_true;
  outC->Loc_Ack_SR_Req_To_Driver = kcg_true;
  outC->Loc_Ack_TR_Req_To_Driver = kcg_true;
  outC->Loc_Ack_UN_Req_To_Driver = kcg_true;
  outC->Loc_SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Loc_Valid = kcg_true;
  outC->Loc_Selected_Mode_For_Ack = M_MODE_Full_Supervision;
  outC->IfBlock1_clock = kcg_true;
  outC->_L9_then_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L3_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = kcg_lit_int64(0);
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = kcg_lit_int64(0);
  outC->announcedLevel.LevelTransition.LRBG = kcg_lit_int64(0);
  outC->announcedLevel.LevelTransition.referenceLocation = kcg_lit_int64(0);
  outC->announcedLevel.IsAvailableForUse = kcg_true;
  outC->mem_needsAckFromDriver = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->mem_needsAckFromDriver = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Output_To_DMI_OutputManagement(
  SV_Output_To_DMI_OutputManagement *SV,
  outC_Output_To_DMI_OutputManagement *outC)
{
  SV->Context_mem_needsAckFromDriver = outC->mem_needsAckFromDriver;
}

void kcg_load_SV_Output_To_DMI_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC,
  SV_Output_To_DMI_OutputManagement *SV)
{
  outC->mem_needsAckFromDriver = SV->Context_mem_needsAckFromDriver;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_DMI_OutputManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

