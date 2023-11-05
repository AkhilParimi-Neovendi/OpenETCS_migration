/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* metadata_out/ */ metadata_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction /* IfBlock1:else:_L26=(CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress#1)/ */ Context_ShiftAddress_1;
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* IfBlock1:else:_L15=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#3)/ */ Context_FindIndexOfMetaDataIteration_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:else:_L26/ */ _L26_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L20/ */ _L20_else_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:else:_L11/ */ _L11_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:_L12/ */ _L12_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L15/ */ _L15_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:_L16/ */ _L16_else_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
  Metadata_T_Common_Types_Pkg /* IfBlock1:else:_L19/ */ _L19_else_IfBlock1;
  kcg_bool /* dup/ */ dup;
  NID_PACKET /* _L11/ */ _L11;
  Metadata_T_Common_Types_Pkg /* _L12/ */ _L12;
  Metadata_T_Common_Types_Pkg /* _L14/ */ _L14;
  NID_PACKET /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  Metadata_T_Common_Types_Pkg /* _L22/ */ _L22;
  Q_DIR /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  Q_DIR /* _L19/ */ _L19;
  Metadata_T_Common_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L23/ */ _L23;
} outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData/ */
extern void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* ind/ */
  kcg_int32 ind,
  /* acc/ */
  Metadata_T_Common_Types_Pkg *acc,
  /* metadata_in/ */
  Metadata_T_Common_Types_Pkg *metadata_in,
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merg2MetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

