/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::LevelFilter/ */
void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* inPendingL1Transition/ */
  kcg_bool inPendingL1Transition,
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  /* inPendingAckOfTrainData/ */
  kcg_bool inPendingAckOfTrainData,
  /* inEmergencyStopAccepted/ */
  kcg_bool inEmergencyStopAccepted,
  /* inLastAckTextMessageId/ */
  kcg_int32 inLastAckTextMessageId,
  /* inPendingNTCTransition/ */
  kcg_bool inPendingNTCTransition,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* inMACoverNotFullLength/ */
  kcg_bool inMACoverNotFullLength,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inPacketOrigin/ */
  MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* inPacketId/ */
  kcg_int32 inPacketId,
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  outC->_L36 = inMACoverNotFullLength;
  outC->_L35 = inSPPAndGradientOnBoard;
  outC->_L18 = inPacketId;
  /* _L17=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_InformationFilter_Pkg(
    outC->_L18,
    &outC->Context_MapPacketIdToRow_1);
  outC->_L17 = outC->Context_MapPacketIdToRow_1.outRow;
  outC->row = outC->_L17;
  outC->_L20 = outC->row;
  outC->_L2 = inLevel;
  /* _L22=(InformationFilter_Pkg::MapLevelToColumn#1)/ */
  MapLevelToColumn_InformationFilter_Pkg(
    outC->_L2,
    &outC->Context_MapLevelToColumn_1);
  outC->_L22 = outC->Context_MapLevelToColumn_1.outColumn;
  outC->column = outC->_L22;
  outC->_L23 = outC->column;
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &outC->_L4,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromBalise_DataDictionary_Pkg);
  if ((kcg_lit_int32(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int32(256)) &
    ((kcg_lit_int32(0) <= outC->_L23) & (outC->_L23 < kcg_lit_int32(5)))) {
    outC->_L3 = outC->_L4[outC->_L20][outC->_L23];
  }
  else {
    outC->_L3 = LD_Invalid_DataDictionary_Pkg;
  }
  outC->_L21 = outC->row;
  outC->_L24 = outC->column;
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &outC->_L5,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromRBC_DataDictionary_Pkg);
  if ((kcg_lit_int32(0) <= outC->_L21) & (outC->_L21 < kcg_lit_int32(256)) &
    ((kcg_lit_int32(0) <= outC->_L24) & (outC->_L24 < kcg_lit_int32(5)))) {
    outC->_L6 = outC->_L5[outC->_L21][outC->_L24];
  }
  else {
    outC->_L6 = LD_Invalid_DataDictionary_Pkg;
  }
  outC->_L14 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L25 = inPacketOrigin;
  outC->_L11 = outC->_L25 == outC->_L14;
  /* _L10= */
  if (outC->_L11) {
    outC->_L10 = outC->_L6;
  }
  else {
    outC->_L10 = outC->_L3;
  }
  outC->_L29 = inPendingL1Transition;
  outC->_L30 = inPendingL2L3Transition;
  outC->_L31 = inPendingAckOfTrainData;
  outC->_L32 = inEmergencyStopAccepted;
  outC->_L33 = inLastAckTextMessageId;
  outC->_L34 = inPendingNTCTransition;
  /* _L16=(InformationFilter_Pkg::FirstFilter::CheckLevelExceptions#1)/ */
  CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
    outC->_L10,
    outC->_L29,
    outC->_L30,
    outC->_L31,
    outC->_L32,
    outC->_L33,
    outC->_L34,
    outC->_L35,
    outC->_L36,
    &outC->Context_CheckLevelExceptions_1);
  outC->_L16 = outC->Context_CheckLevelExceptions_1.outAccept;
  outC->_L28 = outC->Context_CheckLevelExceptions_1.outStoreInTransitionBuffer;
  outC->outStoreInTransitionBuffer = outC->_L28;
  outC->outPacketAccept = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void LevelFilter_init_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L25 = msrc_undefined_Common_Types_Pkg;
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L14 = msrc_undefined_Common_Types_Pkg;
  outC->_L10 = LD_Invalid_DataDictionary_Pkg;
  outC->_L6 = LD_Invalid_DataDictionary_Pkg;
  for (idx1 = 0; idx1 < 256; idx1++) {
    for (idx = 0; idx < 5; idx++) {
      outC->_L5[idx1][idx] = LD_Invalid_DataDictionary_Pkg;
    }
  }
  for (idx3 = 0; idx3 < 256; idx3++) {
    for (idx2 = 0; idx2 < 5; idx2++) {
      outC->_L4[idx3][idx2] = LD_Invalid_DataDictionary_Pkg;
    }
  }
  outC->_L3 = LD_Invalid_DataDictionary_Pkg;
  outC->_L2 = M_LEVEL_Level_0;
  outC->column = kcg_lit_int32(0);
  outC->row = kcg_lit_int32(0);
  outC->outPacketAccept = kcg_true;
  outC->outStoreInTransitionBuffer = kcg_true;
  /* _L16=(InformationFilter_Pkg::FirstFilter::CheckLevelExceptions#1)/ */
  CheckLevelExceptions_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_CheckLevelExceptions_1);
  /* _L22=(InformationFilter_Pkg::MapLevelToColumn#1)/ */
  MapLevelToColumn_init_InformationFilter_Pkg(
    &outC->Context_MapLevelToColumn_1);
  /* _L17=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_init_InformationFilter_Pkg(
    &outC->Context_MapPacketIdToRow_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  /* _L16=(InformationFilter_Pkg::FirstFilter::CheckLevelExceptions#1)/ */
  CheckLevelExceptions_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_CheckLevelExceptions_1);
  /* _L22=(InformationFilter_Pkg::MapLevelToColumn#1)/ */
  MapLevelToColumn_reset_InformationFilter_Pkg(
    &outC->Context_MapLevelToColumn_1);
  /* _L17=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_reset_InformationFilter_Pkg(
    &outC->Context_MapPacketIdToRow_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

