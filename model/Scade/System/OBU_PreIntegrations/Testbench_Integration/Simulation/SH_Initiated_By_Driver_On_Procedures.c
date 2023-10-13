/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

/* Procedures::SH_Initiated_By_Driver_On/ */
void SH_Initiated_By_Driver_On_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  static kcg_bool Condition5_partial;
  /* Condition6/ */
  static kcg_bool Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _1_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  static kcg_bool _2_Condition5_partial;
  /* Condition6/ */
  static kcg_bool _3_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _4_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _5_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _6_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _7_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _8_SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _9_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  static kcg_bool _10_Condition5_partial;
  /* Condition6/ */
  static kcg_bool _11_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _12_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _13_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _14_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _15_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _16_SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  static kcg_bool _17_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  static kcg_bool _18_Condition5_partial;
  /* Condition6/ */
  static kcg_bool _19_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  static kcg_bool _20_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  static kcg_bool _21_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _22_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _23_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _24_SM_SH_Initiated_By_Driver_fired_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1><2> */
  static kcg_bool tr_2_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1><1> */
  static kcg_bool tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1> */
  static kcg_bool tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _25_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _26_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _27_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _28_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<2> */
  static kcg_bool tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<1> */
  static kcg_bool tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _29_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _30_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _31_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _32_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _33_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _34_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _35_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _36_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  static kcg_bool _37_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_ST_SM_SH_Initiated_By_Driver _38_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool _39_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  static SSM_TR_SM_SH_Initiated_By_Driver _40_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_sel;
  /* SM_SH_Initiated_By_Driver: */
  static kcg_bool SM_SH_Initiated_By_Driver_reset_prv;

  outC->SM_SH_Initiated_By_Driver_state_sel =
    outC->SM_SH_Initiated_By_Driver_state_nxt;
  switch (outC->SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _38_SM_SH_Initiated_By_Driver_state_act_partial =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _34_SM_SH_Initiated_By_Driver_state_act_partial =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        !Shunting_Granted_By_RBC;
      tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        Shunting_Granted_By_RBC;
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _26_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _26_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      else {
        _26_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L2 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L4 = kcg_false;
  outC->_L14 = Current_Level;
  /* _L7= */
  switch (outC->_L14) {
    case M_LEVEL_Level_2 :
      outC->_L7 = outC->_L2;
      break;
    case M_LEVEL_Level_3 :
      outC->_L7 = outC->_L13;
      break;
    default :
      outC->_L7 = outC->_L4;
      break;
  }
  outC->Loc_Level_2_3 = outC->_L7;
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_state_act =
        _38_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_state_act =
        _34_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_state_act =
        _26_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver =
        !outC->Loc_Level_2_3;
      tr_2_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver =
        outC->Loc_Level_2_3;
      tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver =
        Driver_Req_SH &
        (tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver |
          tr_2_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver);
      if (tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
        if (tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
          SM_SH_Initiated_By_Driver_state_act_partial =
            SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
        }
        else {
          SM_SH_Initiated_By_Driver_state_act_partial =
            SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      outC->SM_SH_Initiated_By_Driver_state_act =
        SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _21_Request_For_SH_To_RBC_partial = kcg_false;
      _18_Condition5_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _40_SM_SH_Initiated_By_Driver_fired_strong_partial =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _40_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _36_SM_SH_Initiated_By_Driver_fired_strong_partial =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _36_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _28_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_Issue_SH_Request_L2_L3_SH_Authorized_L2_L3_1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _28_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_Issue_SH_Request_L2_L3_SH_procedure_possible_2_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else {
        _28_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _28_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
        if (tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
          SM_SH_Initiated_By_Driver_fired_strong_partial =
            SSM_TR_SH_procedure_possible_SH_Authorized_L0_L1_LNTC_1_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
        }
        else {
          SM_SH_Initiated_By_Driver_fired_strong_partial =
            SSM_TR_SH_procedure_possible_Issue_SH_Request_L2_L3_2_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _24_SM_SH_Initiated_By_Driver_fired_partial =
        outC->SM_SH_Initiated_By_Driver_fired_strong;
      _23_SM_SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      _22_SM_SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      outC->_L3_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
      _17_Clean_BG_List_SH_Area_partial =
        outC->_L3_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      outC->_L2_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = On_Going_Mission;
      _20_End_Of_Mission_Procedure_Req_partial =
        outC->_L2_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      outC->_L1_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
      _19_Condition6_partial =
        outC->_L1_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      outC->Clean_BG_List_SH_Area = _17_Clean_BG_List_SH_Area_partial;
      outC->Condition5 = _18_Condition5_partial;
      outC->Condition6 = _19_Condition6_partial;
      outC->End_Of_Mission_Procedure_Req = _20_End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC_partial;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _22_SM_SH_Initiated_By_Driver_state_nxt_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _13_Request_For_SH_To_RBC_partial = kcg_false;
      _11_Condition6_partial = kcg_false;
      _16_SM_SH_Initiated_By_Driver_fired_partial =
        outC->SM_SH_Initiated_By_Driver_fired_strong;
      _15_SM_SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      _14_SM_SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      outC->_L3_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = kcg_true;
      _9_Clean_BG_List_SH_Area_partial =
        outC->_L3_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      outC->_L2_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = On_Going_Mission;
      _12_End_Of_Mission_Procedure_Req_partial =
        outC->_L2_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      outC->_L1_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = kcg_true;
      _10_Condition5_partial =
        outC->_L1_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      outC->Clean_BG_List_SH_Area = _9_Clean_BG_List_SH_Area_partial;
      outC->Condition5 = _10_Condition5_partial;
      outC->Condition6 = _11_Condition6_partial;
      outC->End_Of_Mission_Procedure_Req = _12_End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = _13_Request_For_SH_To_RBC_partial;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _14_SM_SH_Initiated_By_Driver_state_nxt_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      _4_End_Of_Mission_Procedure_Req_partial = kcg_false;
      _3_Condition6_partial = kcg_false;
      _2_Condition5_partial = kcg_false;
      _1_Clean_BG_List_SH_Area_partial = kcg_false;
      _8_SM_SH_Initiated_By_Driver_fired_partial =
        outC->SM_SH_Initiated_By_Driver_fired_strong;
      _7_SM_SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      _6_SM_SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      outC->_L1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
      _5_Request_For_SH_To_RBC_partial =
        outC->_L1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      outC->Clean_BG_List_SH_Area = _1_Clean_BG_List_SH_Area_partial;
      outC->Condition5 = _2_Condition5_partial;
      outC->Condition6 = _3_Condition6_partial;
      outC->End_Of_Mission_Procedure_Req = _4_End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = _5_Request_For_SH_To_RBC_partial;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        _6_SM_SH_Initiated_By_Driver_state_nxt_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      Request_For_SH_To_RBC_partial = kcg_false;
      End_Of_Mission_Procedure_Req_partial = kcg_false;
      Condition6_partial = kcg_false;
      Condition5_partial = kcg_false;
      Clean_BG_List_SH_Area_partial = kcg_false;
      SM_SH_Initiated_By_Driver_fired_partial =
        outC->SM_SH_Initiated_By_Driver_fired_strong;
      SM_SH_Initiated_By_Driver_reset_nxt_partial = kcg_false;
      SM_SH_Initiated_By_Driver_state_nxt_partial =
        SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area_partial;
      outC->Condition5 = Condition5_partial;
      outC->Condition6 = Condition6_partial;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req_partial;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC_partial;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SM_SH_Initiated_By_Driver_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_SH_Initiated_By_Driver_reset_sel = outC->SM_SH_Initiated_By_Driver_reset_nxt;
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _23_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SM_SH_Initiated_By_Driver_fired =
        _24_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _15_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SM_SH_Initiated_By_Driver_fired =
        _16_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        _7_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SM_SH_Initiated_By_Driver_fired =
        _8_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_nxt =
        SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->SM_SH_Initiated_By_Driver_fired = SM_SH_Initiated_By_Driver_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _37_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _39_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _37_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _33_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _35_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _33_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _27_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_true;
      }
      else {
        _27_SM_SH_Initiated_By_Driver_reset_act_partial =
          tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      outC->tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<1> */
      if (outC->tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _32_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
        _25_SH_Refused_By_RBC_To_DMI_partial = _32_SH_Refused_By_RBC_To_DMI_partial;
      }
      else {
        outC->tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
          tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<2> */
        if (outC->tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
          _29_SH_Refused_By_RBC_To_DMI_partial = kcg_true;
          _31_SH_Refused_By_RBC_To_DMI_partial = _29_SH_Refused_By_RBC_To_DMI_partial;
        }
        else {
          _30_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _31_SH_Refused_By_RBC_To_DMI_partial = _30_SH_Refused_By_RBC_To_DMI_partial;
        }
        _25_SH_Refused_By_RBC_To_DMI_partial = _31_SH_Refused_By_RBC_To_DMI_partial;
      }
      outC->SH_Refused_By_RBC_To_DMI = _25_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      SM_SH_Initiated_By_Driver_reset_act_partial =
        tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_SH_Initiated_By_Driver_reset_prv = outC->SM_SH_Initiated_By_Driver_reset_act;
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _39_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _35_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _27_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SH_Initiated_By_Driver_On_init_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = M_LEVEL_Level_0;
  outC->Loc_Level_2_3 = kcg_true;
  outC->SM_SH_Initiated_By_Driver_fired =
    SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
  outC->SM_SH_Initiated_By_Driver_fired_strong =
    SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
  outC->SM_SH_Initiated_By_Driver_state_act =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  outC->SM_SH_Initiated_By_Driver_state_sel =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  outC->tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L1_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L2_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L3_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L1_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L2_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L3_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver = kcg_true;
  outC->_L1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->SM_SH_Initiated_By_Driver_reset_act = kcg_false;
  outC->SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
}
#endif /* KCG_USER_DEFINED_INIT */


void SH_Initiated_By_Driver_On_reset_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->SM_SH_Initiated_By_Driver_reset_act = kcg_false;
  outC->SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
}


void kcg_save_SV_SH_Initiated_By_Driver_On_Procedures(
  SV_SH_Initiated_By_Driver_On_Procedures *SV,
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  SV->Context_SM_SH_Initiated_By_Driver_reset_nxt =
    outC->SM_SH_Initiated_By_Driver_reset_nxt;
  SV->Context_SM_SH_Initiated_By_Driver_reset_act =
    outC->SM_SH_Initiated_By_Driver_reset_act;
  SV->Context_SM_SH_Initiated_By_Driver_state_nxt =
    outC->SM_SH_Initiated_By_Driver_state_nxt;
}

void kcg_load_SV_SH_Initiated_By_Driver_On_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC,
  SV_SH_Initiated_By_Driver_On_Procedures *SV)
{
  outC->SM_SH_Initiated_By_Driver_reset_nxt =
    SV->Context_SM_SH_Initiated_By_Driver_reset_nxt;
  outC->SM_SH_Initiated_By_Driver_reset_act =
    SV->Context_SM_SH_Initiated_By_Driver_reset_act;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SV->Context_SM_SH_Initiated_By_Driver_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SH_Initiated_By_Driver_On_Procedures.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

