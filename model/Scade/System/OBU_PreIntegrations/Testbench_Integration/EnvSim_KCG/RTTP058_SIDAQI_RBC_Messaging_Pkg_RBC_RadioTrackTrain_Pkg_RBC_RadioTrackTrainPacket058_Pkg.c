/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQI/ */
void RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  /* inIncrementalDistanceAndQualifier/ */
  IterPacket58_T_Packet_Types_Pkg *inIncrementalDistanceAndQualifier,
  outC_RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  kcg_copy_IterPacket58_T_Packet_Types_Pkg(
    &outC->_L7,
    inIncrementalDistanceAndQualifier);
  outC->_L9 = outC->_L7.q_lgtloc;
  outC->_L8 = outC->_L7.d_loc;
  /* _L3=(TM_conversions::CAST_Q_LGTLOC_to_int#1)/ */
  CAST_Q_LGTLOC_to_int_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_Q_LGTLOC_to_int_1);
  outC->_L3 = outC->Context_CAST_Q_LGTLOC_to_int_1.q_lgtloc_int;
  kcg_copy_P058_section_int_T_TM(
    &outC->_L4,
    (P058_section_int_T_TM *) &P058_SECTIONS_DEFAULT);
  kcg_copy_P058_section_int_T_TM(&outC->_L5, &outC->_L4);
  if (kcg_true) {
    outC->_L5.D_LOC = outC->_L8;
  }
  kcg_copy_P058_section_int_T_TM(&outC->_L6, &outC->_L5);
  if (kcg_true) {
    outC->_L6.Q_LGTLOC = outC->_L3;
  }
  kcg_copy_P058_section_int_T_TM(
    &outC->outIncrementalDistanceAndQualifier,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void RTTP058_SIDAQI_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  outC->_L9 = Q_LGTLOC_Min_safe_rear_end;
  outC->_L7.d_loc = kcg_lit_int64(0);
  outC->_L7.q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6.D_LOC = kcg_lit_int64(0);
  outC->_L6.Q_LGTLOC = kcg_lit_int64(0);
  outC->_L5.D_LOC = kcg_lit_int64(0);
  outC->_L5.Q_LGTLOC = kcg_lit_int64(0);
  outC->_L4.D_LOC = kcg_lit_int64(0);
  outC->_L4.Q_LGTLOC = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->outIncrementalDistanceAndQualifier.D_LOC = kcg_lit_int64(0);
  outC->outIncrementalDistanceAndQualifier.Q_LGTLOC = kcg_lit_int64(0);
  /* _L3=(TM_conversions::CAST_Q_LGTLOC_to_int#1)/ */
  CAST_Q_LGTLOC_to_int_init_TM_conversions(
    &outC->Context_CAST_Q_LGTLOC_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RTTP058_SIDAQI_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg(
  outC_RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg *outC)
{
  /* _L3=(TM_conversions::CAST_Q_LGTLOC_to_int#1)/ */
  CAST_Q_LGTLOC_to_int_reset_TM_conversions(
    &outC->Context_CAST_Q_LGTLOC_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RTTP058_SIDAQI_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

