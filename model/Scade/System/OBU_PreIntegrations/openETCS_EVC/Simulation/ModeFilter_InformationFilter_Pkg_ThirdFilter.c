/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ModeFilter/ */
void ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* inOperationModus/ */
  M_MODE inOperationModus,
  /* inPacketId/ */
  kcg_int32 inPacketId,
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  outC->_L268 = inPacketId;
  /* _L261=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_InformationFilter_Pkg(
    outC->_L268,
    &outC->Context_MapPacketIdToRow_1);
  outC->_L261 = outC->Context_MapPacketIdToRow_1.outRow;
  outC->_L259 = inOperationModus;
  /* _L262=(InformationFilter_Pkg::MapModeToColumn#1)/ */
  MapModeToColumn_InformationFilter_Pkg(
    outC->_L259,
    &outC->Context_MapModeToColumn_1);
  outC->_L262 = outC->Context_MapModeToColumn_1.outColumn;
  kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(
    &outC->_L249,
    (ModeDecisionTableType_DataDictionary_Pkg *)
      &ModeDecisionTable_DataDictionary_Pkg);
  if ((kcg_lit_int32(0) <= outC->_L261) & (outC->_L261 < kcg_lit_int32(256)) &
    ((kcg_lit_int32(0) <= outC->_L262) & (outC->_L262 < kcg_lit_int32(17)))) {
    outC->_L256 = outC->_L249[outC->_L261][outC->_L262];
  }
  else {
    outC->_L256 = MD_NotRelevant_DataDictionary_Pkg;
  }
  /* _L263=(InformationFilter_Pkg::CheckModeExceptions#1)/ */
  CheckModeExceptions_InformationFilter_Pkg(
    outC->_L256,
    &outC->Context_CheckModeExceptions_1);
  outC->_L263 = outC->Context_CheckModeExceptions_1.outAccept;
  outC->outPacketAccept = outC->_L263;
}

#ifndef KCG_USER_DEFINED_INIT
void ModeFilter_init_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L268 = kcg_lit_int32(0);
  outC->_L263 = kcg_true;
  outC->_L262 = kcg_lit_int32(0);
  outC->_L261 = kcg_lit_int32(0);
  outC->_L259 = M_MODE_Full_Supervision;
  outC->_L256 = MD_Invalid_DataDictionary_Pkg;
  for (idx1 = 0; idx1 < 256; idx1++) {
    for (idx = 0; idx < 17; idx++) {
      outC->_L249[idx1][idx] = MD_Invalid_DataDictionary_Pkg;
    }
  }
  outC->outPacketAccept = kcg_true;
  /* _L263=(InformationFilter_Pkg::CheckModeExceptions#1)/ */
  CheckModeExceptions_init_InformationFilter_Pkg(
    &outC->Context_CheckModeExceptions_1);
  /* _L262=(InformationFilter_Pkg::MapModeToColumn#1)/ */
  MapModeToColumn_init_InformationFilter_Pkg(&outC->Context_MapModeToColumn_1);
  /* _L261=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_init_InformationFilter_Pkg(
    &outC->Context_MapPacketIdToRow_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  /* _L263=(InformationFilter_Pkg::CheckModeExceptions#1)/ */
  CheckModeExceptions_reset_InformationFilter_Pkg(
    &outC->Context_CheckModeExceptions_1);
  /* _L262=(InformationFilter_Pkg::MapModeToColumn#1)/ */
  MapModeToColumn_reset_InformationFilter_Pkg(&outC->Context_MapModeToColumn_1);
  /* _L261=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */
  MapPacketIdToRow_reset_InformationFilter_Pkg(
    &outC->Context_MapPacketIdToRow_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

