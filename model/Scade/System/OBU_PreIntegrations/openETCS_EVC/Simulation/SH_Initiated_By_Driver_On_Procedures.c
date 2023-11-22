/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
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
  kcg_bool Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  kcg_bool Condition5_partial;
  /* Condition6/ */
  kcg_bool Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  kcg_bool Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  kcg_bool _1_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  kcg_bool _2_Condition5_partial;
  /* Condition6/ */
  kcg_bool _3_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool _4_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  kcg_bool _5_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _6_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _7_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _8_SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  kcg_bool _9_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  kcg_bool _10_Condition5_partial;
  /* Condition6/ */
  kcg_bool _11_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool _12_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  kcg_bool _13_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _14_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _15_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _16_SM_SH_Initiated_By_Driver_fired_partial;
  /* Clean_BG_List_SH_Area/ */
  kcg_bool _17_Clean_BG_List_SH_Area_partial;
  /* Condition5/ */
  kcg_bool _18_Condition5_partial;
  /* Condition6/ */
  kcg_bool _19_Condition6_partial;
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool _20_End_Of_Mission_Procedure_Req_partial;
  /* Request_For_SH_To_RBC/ */
  kcg_bool _21_Request_For_SH_To_RBC_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _22_SM_SH_Initiated_By_Driver_state_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _23_SM_SH_Initiated_By_Driver_reset_nxt_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _24_SM_SH_Initiated_By_Driver_fired_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _25_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _26_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _27_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1><2> */
  kcg_bool tr_2_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1><1> */
  kcg_bool tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:SH_procedure_possible:<1> */
  kcg_bool tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _28_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _29_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _30_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _31_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<2> */
  kcg_bool tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<1> */
  kcg_bool tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _32_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _33_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _34_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _35_SH_Refused_By_RBC_To_DMI_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _36_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _37_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _38_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _39_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool _40_SH_Refused_By_RBC_To_DMI_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_ST_SM_SH_Initiated_By_Driver _41_SM_SH_Initiated_By_Driver_state_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _42_SM_SH_Initiated_By_Driver_reset_act_partial;
  /* SM_SH_Initiated_By_Driver: */
  SSM_TR_SM_SH_Initiated_By_Driver _43_SM_SH_Initiated_By_Driver_fired_strong_partial;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _44_SM_SH_Initiated_By_Driver_reset_sel;
  /* SM_SH_Initiated_By_Driver: */
  kcg_bool _45_SM_SH_Initiated_By_Driver_reset_prv;

  outC->_2_SM_SH_Initiated_By_Driver_state_sel =
    outC->SM_SH_Initiated_By_Driver_state_nxt;
  switch (outC->_2_SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _41_SM_SH_Initiated_By_Driver_state_act_partial =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _37_SM_SH_Initiated_By_Driver_state_act_partial =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        !Shunting_Granted_By_RBC;
      tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        Shunting_Granted_By_RBC;
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _29_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _29_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      else {
        _29_SM_SH_Initiated_By_Driver_state_act_partial =
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
  switch (outC->_2_SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->_3_SM_SH_Initiated_By_Driver_state_act =
        _41_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->_3_SM_SH_Initiated_By_Driver_state_act =
        _37_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->_3_SM_SH_Initiated_By_Driver_state_act =
        _29_SM_SH_Initiated_By_Driver_state_act_partial;
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
          _25_SM_SH_Initiated_By_Driver_state_act_partial =
            SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
        }
        else {
          _25_SM_SH_Initiated_By_Driver_state_act_partial =
            SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        _25_SM_SH_Initiated_By_Driver_state_act_partial =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      outC->_3_SM_SH_Initiated_By_Driver_state_act =
        _25_SM_SH_Initiated_By_Driver_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->_3_SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _21_Request_For_SH_To_RBC_partial = kcg_false;
      _18_Condition5_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->_2_SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _43_SM_SH_Initiated_By_Driver_fired_strong_partial =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _43_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _39_SM_SH_Initiated_By_Driver_fired_strong_partial =
        SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _39_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _31_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_Issue_SH_Request_L2_L3_SH_Authorized_L2_L3_1_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _31_SM_SH_Initiated_By_Driver_fired_strong_partial =
          _245_SSM_TR_Issue_SH_Request_L2_L3_SH_procedure_possible_2_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else {
        _31_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _31_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
        if (tr_1_guard_1_SH_procedure_possible_SM_SH_Initiated_By_Driver) {
          _27_SM_SH_Initiated_By_Driver_fired_strong_partial =
            SSM_TR_SH_procedure_possible_SH_Authorized_L0_L1_LNTC_1_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
        }
        else {
          _27_SM_SH_Initiated_By_Driver_fired_strong_partial =
            SSM_TR_SH_procedure_possible_Issue_SH_Request_L2_L3_2_1_SH_procedure_possible_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        _27_SM_SH_Initiated_By_Driver_fired_strong_partial =
          SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
      }
      outC->SM_SH_Initiated_By_Driver_fired_strong =
        _27_SM_SH_Initiated_By_Driver_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->_3_SM_SH_Initiated_By_Driver_state_act) {
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
  _44_SM_SH_Initiated_By_Driver_reset_sel =
    outC->_1_SM_SH_Initiated_By_Driver_reset_nxt;
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->_3_SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->_1_SM_SH_Initiated_By_Driver_reset_nxt =
        _23_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->_4_SM_SH_Initiated_By_Driver_fired =
        _24_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->_1_SM_SH_Initiated_By_Driver_reset_nxt =
        _15_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->_4_SM_SH_Initiated_By_Driver_fired =
        _16_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->_1_SM_SH_Initiated_By_Driver_reset_nxt =
        _7_SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->_4_SM_SH_Initiated_By_Driver_fired =
        _8_SM_SH_Initiated_By_Driver_fired_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->_1_SM_SH_Initiated_By_Driver_reset_nxt =
        SM_SH_Initiated_By_Driver_reset_nxt_partial;
      outC->_4_SM_SH_Initiated_By_Driver_fired =
        SM_SH_Initiated_By_Driver_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->_2_SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      _40_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _42_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _40_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      _36_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _38_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _36_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      if (tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _30_SM_SH_Initiated_By_Driver_reset_act_partial = kcg_true;
      }
      else {
        _30_SM_SH_Initiated_By_Driver_reset_act_partial =
          tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      outC->tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
        tr_1_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<1> */
      if (outC->tr_1_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
        _35_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
        _28_SH_Refused_By_RBC_To_DMI_partial = _35_SH_Refused_By_RBC_To_DMI_partial;
      }
      else {
        outC->tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver =
          tr_2_guard_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        /* SM_SH_Initiated_By_Driver:Issue_SH_Request_L2_L3:<2> */
        if (outC->tr_2_clock_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver) {
          _32_SH_Refused_By_RBC_To_DMI_partial = kcg_true;
          _34_SH_Refused_By_RBC_To_DMI_partial = _32_SH_Refused_By_RBC_To_DMI_partial;
        }
        else {
          _33_SH_Refused_By_RBC_To_DMI_partial = kcg_false;
          _34_SH_Refused_By_RBC_To_DMI_partial = _33_SH_Refused_By_RBC_To_DMI_partial;
        }
        _28_SH_Refused_By_RBC_To_DMI_partial = _34_SH_Refused_By_RBC_To_DMI_partial;
      }
      outC->SH_Refused_By_RBC_To_DMI = _28_SH_Refused_By_RBC_To_DMI_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      SH_Refused_By_RBC_To_DMI_partial = kcg_false;
      _26_SM_SH_Initiated_By_Driver_reset_act_partial =
        tr_1_guard_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _45_SM_SH_Initiated_By_Driver_reset_prv =
    outC->SM_SH_Initiated_By_Driver_reset_act;
  /* SM_SH_Initiated_By_Driver: */
  switch (outC->_2_SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _42_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _38_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _30_SM_SH_Initiated_By_Driver_reset_act_partial;
      break;
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->SM_SH_Initiated_By_Driver_reset_act =
        _26_SM_SH_Initiated_By_Driver_reset_act_partial;
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
  outC->_4_SM_SH_Initiated_By_Driver_fired =
    SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
  outC->SM_SH_Initiated_By_Driver_fired_strong =
    SSM_TR_no_trans_SM_SH_Initiated_By_Driver;
  outC->_3_SM_SH_Initiated_By_Driver_state_act =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  outC->_2_SM_SH_Initiated_By_Driver_state_sel =
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
  outC->_1_SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
}
#endif /* KCG_USER_DEFINED_INIT */


void SH_Initiated_By_Driver_On_reset_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->SM_SH_Initiated_By_Driver_reset_act = kcg_false;
  outC->_1_SM_SH_Initiated_By_Driver_reset_nxt = kcg_false;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SH_Initiated_By_Driver_On_Procedures.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

