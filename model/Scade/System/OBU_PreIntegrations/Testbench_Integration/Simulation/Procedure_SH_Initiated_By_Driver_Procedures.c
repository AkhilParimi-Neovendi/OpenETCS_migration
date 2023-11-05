/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Initiated_By_Driver_Procedures.h"

/* Procedures::Procedure_SH_Initiated_By_Driver/ */
void Procedure_SH_Initiated_By_Driver_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  /* Condition5/ */
  static kcg_bool Condition5_partial;
  /* Condition6/ */
  static kcg_bool Condition6_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool Clean_BG_List_SH_Area_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_nxt_partial;
  /* SH_Initiated_By_Driver: */
  static kcg_bool SH_Initiated_By_Driver_reset_nxt_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_TR_SH_Initiated_By_Driver SH_Initiated_By_Driver_fired_partial;
  /* Condition5/ */
  static kcg_bool _1_Condition5_partial;
  /* Condition6/ */
  static kcg_bool _2_Condition6_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _3_Clean_BG_List_SH_Area_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _4_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _5_Request_For_SH_To_RBC_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _6_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_ST_SH_Initiated_By_Driver _7_SH_Initiated_By_Driver_state_nxt_partial;
  /* SH_Initiated_By_Driver: */
  static kcg_bool _8_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_TR_SH_Initiated_By_Driver _9_SH_Initiated_By_Driver_fired_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_ST_SH_Initiated_By_Driver SH_Initiated_By_Driver_state_act_partial;
  /* SH_Initiated_By_Driver: */
  static kcg_bool SH_Initiated_By_Driver_reset_act_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_TR_SH_Initiated_By_Driver SH_Initiated_By_Driver_fired_strong_partial;
  /* SH_Initiated_By_Driver:SH_initiated_by_driver_procedure_off:<1> */
  static kcg_bool tr_1_guard_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  /* SH_Initiated_By_Driver: */
  static SSM_ST_SH_Initiated_By_Driver _10_SH_Initiated_By_Driver_state_act_partial;
  /* SH_Initiated_By_Driver: */
  static kcg_bool _11_SH_Initiated_By_Driver_reset_act_partial;
  /* SH_Initiated_By_Driver: */
  static SSM_TR_SH_Initiated_By_Driver _12_SH_Initiated_By_Driver_fired_strong_partial;
  /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:<1> */
  static kcg_bool tr_1_guard_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
  /* SH_Initiated_By_Driver: */
  static kcg_bool SH_Initiated_By_Driver_reset_sel;
  /* SH_Initiated_By_Driver: */
  static kcg_bool SH_Initiated_By_Driver_reset_prv;

  outC->SH_Initiated_By_Driver_state_sel = outC->SH_Initiated_By_Driver_state_nxt;
  outC->_L34 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L32 = kcg_false;
  outC->_L49 = Current_Mode;
  /* _L29= */
  switch (outC->_L49) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L34;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L47;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L12;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L44;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L16;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L23;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L6;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L29 = outC->_L20;
      break;
    default :
      outC->_L29 = outC->_L32;
      break;
  }
  outC->Loc_Procedure_Possible = outC->_L29;
  /* SH_Initiated_By_Driver: */
  switch (outC->SH_Initiated_By_Driver_state_sel) {
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      tr_1_guard_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        (!outC->Loc_Procedure_Possible) | (!Train_Standstill);
      if (tr_1_guard_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver) {
        _10_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      else {
        _10_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      outC->SH_Initiated_By_Driver_state_act =
        _10_SH_Initiated_By_Driver_state_act_partial;
      if (tr_1_guard_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver) {
        _12_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_S0_SH_initiated_by_driver_procedure_on_SH_initiated_by_driver_procedure_off_1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      else {
        _12_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SH_Initiated_By_Driver;
      }
      outC->SH_Initiated_By_Driver_fired_strong =
        _12_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      tr_1_guard_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver =
        outC->Loc_Procedure_Possible & Train_Standstill;
      if (tr_1_guard_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver) {
        SH_Initiated_By_Driver_state_act_partial =
          SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      outC->SH_Initiated_By_Driver_state_act =
        SH_Initiated_By_Driver_state_act_partial;
      if (tr_1_guard_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver) {
        SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_SH_initiated_by_driver_procedure_off_S0_SH_initiated_by_driver_procedure_on_1_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      }
      else {
        SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SH_Initiated_By_Driver;
      }
      outC->SH_Initiated_By_Driver_fired_strong =
        SH_Initiated_By_Driver_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SH_Initiated_By_Driver_state_act) {
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      _9_SH_Initiated_By_Driver_fired_partial =
        outC->SH_Initiated_By_Driver_fired_strong;
      _8_SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      _7_SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      outC->_L11_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        Current_Level;
      outC->_L12_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        Driver_Req_SH;
      outC->_L13_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        On_Going_Mission;
      outC->_L14_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        Shunting_Granted_By_RBC;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SH_Initiated_By_Driver_reset_prv = outC->SH_Initiated_By_Driver_reset_act;
  /* SH_Initiated_By_Driver: */
  switch (outC->SH_Initiated_By_Driver_state_sel) {
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      _11_SH_Initiated_By_Driver_reset_act_partial =
        tr_1_guard_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      outC->SH_Initiated_By_Driver_reset_act =
        _11_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      SH_Initiated_By_Driver_reset_act_partial =
        tr_1_guard_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      outC->SH_Initiated_By_Driver_reset_act =
        SH_Initiated_By_Driver_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SH_Initiated_By_Driver: */
  switch (outC->SH_Initiated_By_Driver_state_act) {
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      if (outC->SH_Initiated_By_Driver_reset_act) {
        /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1=(Procedures::SH_Initiated_By_Driver_On#1)/ */
        SH_Initiated_By_Driver_On_reset_Procedures(
          &outC->Context_SH_Initiated_By_Driver_On_1);
      }
      /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1=(Procedures::SH_Initiated_By_Driver_On#1)/ */
      SH_Initiated_By_Driver_On_Procedures(
        outC->_L11_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver,
        outC->_L12_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver,
        outC->_L13_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver,
        outC->_L14_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver,
        &outC->Context_SH_Initiated_By_Driver_On_1);
      outC->_L1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.Clean_BG_List_SH_Area;
      outC->_L3_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.Condition5;
      outC->_L2_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.Condition6;
      outC->_L4_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.End_Of_Mission_Procedure_Req;
      outC->_L5_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.SH_Refused_By_RBC_To_DMI;
      outC->_L6_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
        outC->Context_SH_Initiated_By_Driver_On_1.Request_For_SH_To_RBC;
      _6_SH_Refused_By_RBC_To_DMI_partial =
        outC->_L5_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      _5_Request_For_SH_To_RBC_partial =
        outC->_L6_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      _4_End_Of_Mission_Procedure_Req_partial =
        outC->_L4_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      _2_Condition6_partial =
        outC->_L2_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      _1_Condition5_partial =
        outC->_L3_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      _3_Clean_BG_List_SH_Area_partial =
        outC->_L1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver;
      outC->Condition5 = _1_Condition5_partial;
      outC->Condition6 = _2_Condition6_partial;
      outC->Clean_BG_List_SH_Area = _3_Clean_BG_List_SH_Area_partial;
      outC->End_Of_Mission_Procedure_Req = _4_End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = _5_Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = _6_SH_Refused_By_RBC_To_DMI_partial;
      outC->SH_Initiated_By_Driver_state_nxt =
        _7_SH_Initiated_By_Driver_state_nxt_partial;
      break;
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      Request_For_SH_To_RBC_partial = kcg_false;
      End_Of_Mission_Procedure_Req_partial = kcg_false;
      Clean_BG_List_SH_Area_partial = kcg_false;
      Condition6_partial = kcg_false;
      Condition5_partial = kcg_false;
      SH_Initiated_By_Driver_fired_partial =
        outC->SH_Initiated_By_Driver_fired_strong;
      SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
      outC->Condition5 = Condition5_partial;
      outC->Condition6 = Condition6_partial;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area_partial;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC_partial;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI_partial;
      outC->SH_Initiated_By_Driver_state_nxt =
        SH_Initiated_By_Driver_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SH_Initiated_By_Driver_reset_sel = outC->SH_Initiated_By_Driver_reset_nxt;
  /* SH_Initiated_By_Driver: */
  switch (outC->SH_Initiated_By_Driver_state_act) {
    case SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver :
      outC->SH_Initiated_By_Driver_reset_nxt =
        _8_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SH_Initiated_By_Driver_fired = _9_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver :
      outC->SH_Initiated_By_Driver_reset_nxt =
        SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SH_Initiated_By_Driver_fired = SH_Initiated_By_Driver_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Initiated_By_Driver_init_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  outC->_L6 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L49 = NP_Level_And_Mode_Types_Pkg;
  outC->Loc_Procedure_Possible = kcg_true;
  outC->SH_Initiated_By_Driver_fired = SSM_TR_no_trans_SH_Initiated_By_Driver;
  outC->SH_Initiated_By_Driver_fired_strong =
    SSM_TR_no_trans_SH_Initiated_By_Driver;
  outC->SH_Initiated_By_Driver_state_act =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  outC->SH_Initiated_By_Driver_state_sel =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
  outC->_L6_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L5_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L4_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L3_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L2_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L1_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L11_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    M_LEVEL_Level_0;
  outC->_L12_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L13_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->_L14_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver =
    kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_init_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  outC->SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SH_Initiated_By_Driver_reset_act = kcg_false;
  outC->SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Initiated_By_Driver_reset_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  /* SH_Initiated_By_Driver:S0_SH_initiated_by_driver_procedure_on:_L1=(Procedures::SH_Initiated_By_Driver_On#1)/ */
  SH_Initiated_By_Driver_On_reset_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1);
  outC->SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SH_Initiated_By_Driver_reset_act = kcg_false;
  outC->SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Procedure_SH_Initiated_By_Driver_Procedures(
  SV_Procedure_SH_Initiated_By_Driver_Procedures *SV,
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC)
{
  kcg_save_SV_SH_Initiated_By_Driver_On_Procedures(
    &SV->Context_SH_Initiated_By_Driver_On_1,
    &outC->Context_SH_Initiated_By_Driver_On_1);
  SV->Context_SH_Initiated_By_Driver_reset_nxt =
    outC->SH_Initiated_By_Driver_reset_nxt;
  SV->Context_SH_Initiated_By_Driver_reset_act =
    outC->SH_Initiated_By_Driver_reset_act;
  SV->Context_SH_Initiated_By_Driver_state_nxt =
    outC->SH_Initiated_By_Driver_state_nxt;
}

void kcg_load_SV_Procedure_SH_Initiated_By_Driver_Procedures(
  outC_Procedure_SH_Initiated_By_Driver_Procedures *outC,
  SV_Procedure_SH_Initiated_By_Driver_Procedures *SV)
{
  kcg_load_SV_SH_Initiated_By_Driver_On_Procedures(
    &outC->Context_SH_Initiated_By_Driver_On_1,
    &SV->Context_SH_Initiated_By_Driver_On_1);
  outC->SH_Initiated_By_Driver_reset_nxt =
    SV->Context_SH_Initiated_By_Driver_reset_nxt;
  outC->SH_Initiated_By_Driver_reset_act =
    SV->Context_SH_Initiated_By_Driver_reset_act;
  outC->SH_Initiated_By_Driver_state_nxt =
    SV->Context_SH_Initiated_By_Driver_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_SH_Initiated_By_Driver_Procedures.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

