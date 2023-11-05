/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_MsgHdr136/ */
void nextGen_MsgHdr136_radioOutput_Pkg(
  /* inCommonHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inCommonHeader,
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC)
{
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L1, inCommonHeader);
  outC->_L16 = outC->_L1.nid_engine;
  outC->_L15 = outC->_L1.t_train;
  outC->_L14 = outC->_L1.nid_message;
  outC->_L13 = outC->_L1.present;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L2.valid = outC->_L13;
  outC->_L2.nid_message = outC->_L14;
  outC->_L2.l_message = outC->_L12;
  outC->_L2.t_train = outC->_L15;
  outC->_L2.nid_engine = outC->_L16;
  kcg_copy_M_136_T_TM_radio_messages(&outC->outnextGenHeader, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_MsgHdr136_init_radioOutput_Pkg(
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC)
{
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L1.present = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1.xNID_EM = kcg_lit_int32(0);
  outC->_L1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->outnextGenHeader.valid = kcg_true;
  outC->outnextGenHeader.nid_message = kcg_lit_int32(0);
  outC->outnextGenHeader.l_message = kcg_lit_int32(0);
  outC->outnextGenHeader.t_train = kcg_lit_int32(0);
  outC->outnextGenHeader.nid_engine = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_MsgHdr136_reset_radioOutput_Pkg(
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_MsgHdr136_radioOutput_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

