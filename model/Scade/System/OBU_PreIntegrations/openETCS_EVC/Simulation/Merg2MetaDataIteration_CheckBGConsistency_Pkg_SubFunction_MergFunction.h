/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* mergedMetaData/ */ mergedMetaData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction /* _L11=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData#1)/ */ Context_Merg2MetaData_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* _L11/ */ _L11;
  Metadata_T_Common_Types_Pkg /* _L12/ */ _L12;
  _148_array /* _L17/ */ _L17;
  Telegram_T_BG_Types_Pkg /* _L18/ */ _L18;
  Metadata_T_Common_Types_Pkg /* _L19/ */ _L19;
} outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration/ */
extern void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metaData/ */
  Metadata_T_Common_Types_Pkg *metaData,
  /* telegram/ */
  Telegram_T_BG_Types_Pkg *telegram,
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merg2MetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

