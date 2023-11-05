/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::patchMsgFlow/ */
void patchMsgFlow_RadioSupport_Pkg(
  /* fromEVC/ */
  M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* insafeSessionEstablished/ */
  kcg_bool insafeSessionEstablished,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_patchMsgFlow_RadioSupport_Pkg *outC)
{
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L35, fromEVC);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L19,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  outC->_L10 = insafeSessionEstablished;
  outC->_L18 = !outC->_L10;
  outC->_L15 = co136_Train_Position_Report_Id_Pkg;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L1, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L2,
    &outC->_L1.Message);
  outC->_L13 = outC->_L2.nid_message;
  outC->_L16 = outC->_L13 == outC->_L15;
  outC->_L3 = outC->_L2.valid;
  outC->_L17 = outC->_L3 & outC->_L16 & outC->_L18;
  outC->reset136 = outC->_L17;
  outC->_L32 = outC->reset136;
  outC->_L4 = M_LEVEL_Level_2;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L12, inModeAndLevel);
  outC->_L5 = outC->_L12.level;
  outC->_L9 = outC->_L5 == outC->_L4;
  outC->_L8 = M_LEVEL_Level_3;
  outC->_L6 = outC->_L8 == outC->_L5;
  outC->_L7 = outC->_L6 | outC->_L9;
  outC->_L30 = !outC->_L7;
  outC->_L14 = co132_MA_Request_Id_Pkg;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L27, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L22,
    &outC->_L27.Message);
  outC->_L28 = outC->_L22.nid_message;
  outC->_L21 = outC->_L28 == outC->_L14;
  outC->_L25 = outC->_L22.valid;
  outC->_L26 = outC->_L25 & outC->_L21 & outC->_L30;
  outC->reset132 = outC->_L26;
  outC->_L31 = outC->reset132;
  outC->_L33 = outC->_L31 | outC->_L32;
  /* _L34= */
  if (outC->_L33) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L34, &outC->_L19);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L34, &outC->_L35);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->toRBC, &outC->_L34);
}

#ifndef KCG_USER_DEFINED_INIT
void patchMsgFlow_init_RadioSupport_Pkg(
  outC_patchMsgFlow_RadioSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L35.Message.valid = kcg_true;
  outC->_L35.Message.nid_message = kcg_lit_int32(0);
  outC->_L35.Message.l_message = kcg_lit_int32(0);
  outC->_L35.Message.t_train = kcg_lit_int32(0);
  outC->_L35.Message.nid_engine = kcg_lit_int32(0);
  outC->_L35.Message.field1 = kcg_lit_int32(0);
  outC->_L35.Message.field2 = kcg_lit_int32(0);
  outC->_L35.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L35.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  outC->_L34.Message.valid = kcg_true;
  outC->_L34.Message.nid_message = kcg_lit_int32(0);
  outC->_L34.Message.l_message = kcg_lit_int32(0);
  outC->_L34.Message.t_train = kcg_lit_int32(0);
  outC->_L34.Message.nid_engine = kcg_lit_int32(0);
  outC->_L34.Message.field1 = kcg_lit_int32(0);
  outC->_L34.Message.field2 = kcg_lit_int32(0);
  outC->_L34.Message.field3 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L34.OptionalPackets[idx1] = kcg_lit_int32(0);
  }
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.nid_message = kcg_lit_int32(0);
  outC->_L22.l_message = kcg_lit_int32(0);
  outC->_L22.t_train = kcg_lit_int32(0);
  outC->_L22.nid_engine = kcg_lit_int32(0);
  outC->_L22.field1 = kcg_lit_int32(0);
  outC->_L22.field2 = kcg_lit_int32(0);
  outC->_L22.field3 = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27.Message.valid = kcg_true;
  outC->_L27.Message.nid_message = kcg_lit_int32(0);
  outC->_L27.Message.l_message = kcg_lit_int32(0);
  outC->_L27.Message.t_train = kcg_lit_int32(0);
  outC->_L27.Message.nid_engine = kcg_lit_int32(0);
  outC->_L27.Message.field1 = kcg_lit_int32(0);
  outC->_L27.Message.field2 = kcg_lit_int32(0);
  outC->_L27.Message.field3 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L27.OptionalPackets[idx2] = kcg_lit_int32(0);
  }
  outC->_L28 = kcg_lit_int32(0);
  outC->_L19.Message.valid = kcg_true;
  outC->_L19.Message.nid_message = kcg_lit_int32(0);
  outC->_L19.Message.l_message = kcg_lit_int32(0);
  outC->_L19.Message.t_train = kcg_lit_int32(0);
  outC->_L19.Message.nid_engine = kcg_lit_int32(0);
  outC->_L19.Message.field1 = kcg_lit_int32(0);
  outC->_L19.Message.field2 = kcg_lit_int32(0);
  outC->_L19.Message.field3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L19.OptionalPackets[idx3] = kcg_lit_int32(0);
  }
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = M_LEVEL_Level_0;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L12.compatibleModeAndLevel = kcg_true;
  outC->_L12.level = M_LEVEL_Level_0;
  outC->_L12.newLevel = kcg_true;
  outC->_L12.Mode = M_MODE_Full_Supervision;
  outC->_L12.newMode = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.field1 = kcg_lit_int32(0);
  outC->_L2.field2 = kcg_lit_int32(0);
  outC->_L2.field3 = kcg_lit_int32(0);
  outC->_L1.Message.valid = kcg_true;
  outC->_L1.Message.nid_message = kcg_lit_int32(0);
  outC->_L1.Message.l_message = kcg_lit_int32(0);
  outC->_L1.Message.t_train = kcg_lit_int32(0);
  outC->_L1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L1.Message.field1 = kcg_lit_int32(0);
  outC->_L1.Message.field2 = kcg_lit_int32(0);
  outC->_L1.Message.field3 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L1.OptionalPackets[idx4] = kcg_lit_int32(0);
  }
  outC->reset132 = kcg_true;
  outC->reset136 = kcg_true;
  outC->toRBC.Message.valid = kcg_true;
  outC->toRBC.Message.nid_message = kcg_lit_int32(0);
  outC->toRBC.Message.l_message = kcg_lit_int32(0);
  outC->toRBC.Message.t_train = kcg_lit_int32(0);
  outC->toRBC.Message.nid_engine = kcg_lit_int32(0);
  outC->toRBC.Message.field1 = kcg_lit_int32(0);
  outC->toRBC.Message.field2 = kcg_lit_int32(0);
  outC->toRBC.Message.field3 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->toRBC.OptionalPackets[idx5] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void patchMsgFlow_reset_RadioSupport_Pkg(
  outC_patchMsgFlow_RadioSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** patchMsgFlow_RadioSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

