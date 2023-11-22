/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"

/* TM_specific::Read_P005_ForCalcTrainPos/ */
void Read_P005_ForCalcTrainPos_TM_specific(
  /* RadioMessage_IN/ */
  CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* LRBG/ */
  NID_LRBG LRBG,
  /* NID_C_onboard/ */
  NID_C NID_C_onboard,
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC)
{
  LinkedBGs_T_BG_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1, RadioMessage_IN);
  /* _L6=(TM::Read_P005#1)/ */
  Read_P005_TM(&outC->_L1, &outC->Context_Read_P005_1);
  outC->_L6 = outC->Context_Read_P005_1.received;
  kcg_copy_P005_OBU_T_TM(&outC->_L3, &outC->Context_Read_P005_1.P005_OBU_out);
  outC->every = outC->_L6;
  outC->_L2 = LRBG;
  outC->_L5 = NID_C_onboard;
  if (outC->every) {
    /* _L4=(TM_conversions::C_P005_ForCalcTrainPos#1)/ */
    C_P005_ForCalcTrainPos_TM_conversions(
      &outC->_L3,
      outC->_L2,
      outC->_L5,
      &outC->Context_C_P005_ForCalcTrainPos_1);
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(
      &op_call,
      &outC->Context_C_P005_ForCalcTrainPos_1.LinkedBGsOUT);
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(
      &outC->_L4,
      (LinkedBGs_T_BG_Types_Pkg *) &DEFAULT_LinkedBGs_T_TM_specific);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P005_ForCalcTrainPos_init_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  for (idx = 0; idx < 33; idx++) {
    outC->_L4[idx].valid = kcg_true;
    outC->_L4[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx].q_dir = Q_DIR_Reverse;
    outC->_L4[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx].d_link = kcg_lit_int32(0);
    outC->_L4[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx].nid_c = kcg_lit_int32(0);
    outC->_L4[idx].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L4[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.l_packet = kcg_lit_int32(0);
  outC->_L3.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L3.sections[idx1].valid = kcg_true;
    outC->_L3.sections[idx1].d_link = kcg_lit_int32(0);
    outC->_L3.sections[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.sections[idx1].nid_c = kcg_lit_int32(0);
    outC->_L3.sections[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L3.sections[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.sections[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L3.sections[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L1.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1.PacketHeaders[idx2].valid = kcg_true;
    outC->_L1.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L1.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L1.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->LinkedBGsOUT[idx4].valid = kcg_true;
    outC->LinkedBGsOUT[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->LinkedBGsOUT[idx4].q_dir = Q_DIR_Reverse;
    outC->LinkedBGsOUT[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->LinkedBGsOUT[idx4].d_link = kcg_lit_int32(0);
    outC->LinkedBGsOUT[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->LinkedBGsOUT[idx4].nid_c = kcg_lit_int32(0);
    outC->LinkedBGsOUT[idx4].nid_bg = kcg_lit_int32(0);
    outC->LinkedBGsOUT[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->LinkedBGsOUT[idx4].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->LinkedBGsOUT[idx4].q_locacc = kcg_lit_int32(0);
  }
  /* _L4=(TM_conversions::C_P005_ForCalcTrainPos#1)/ */
  C_P005_ForCalcTrainPos_init_TM_conversions(
    &outC->Context_C_P005_ForCalcTrainPos_1);
  /* _L6=(TM::Read_P005#1)/ */ Read_P005_init_TM(&outC->Context_Read_P005_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P005_ForCalcTrainPos_reset_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC)
{
  /* _L4=(TM_conversions::C_P005_ForCalcTrainPos#1)/ */
  C_P005_ForCalcTrainPos_reset_TM_conversions(
    &outC->Context_C_P005_ForCalcTrainPos_1);
  /* _L6=(TM::Read_P005#1)/ */ Read_P005_reset_TM(&outC->Context_Read_P005_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P005_ForCalcTrainPos_TM_specific.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

