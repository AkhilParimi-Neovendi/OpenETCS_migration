/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TargetManagement_TargetManagement_pkg_H_
#define _TargetManagement_TargetManagement_pkg_H_

#include "kcg_types.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TargetCollection_T_TargetManagement_types /* targetCollection/ */ targetCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  Target_list_MRSP_real_T_TargetManagement_types /* MRSPTargetList/ */ MRSPTargetList;
  Target_real_T_TargetManagement_types /* _L12/ */ _L12;
  Target_real_T_TargetManagement_types /* _L93/ */ _L93;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators /* _L87=(TargetManagement_pkg::internalOperators::removeOverpassedMRSP#1)/ */ Context_removeOverpassedMRSP_1;
  outC_calcMATargets_TargetManagement_pkg_internalOperators /* _L12=(TargetManagement_pkg::internalOperators::calcMATargets#1)/ */ Context_calcMATargets_1;
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators /* _L2=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSP#1)/ */ Context_extractTargetsFromMRSP_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_internal_T_TargetManagement_types /* _L1/ */ _L1;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L19/ */ _L19;
  TargetCollection_T_TargetManagement_types /* _L79/ */ _L79;
  kcg_bool /* _L88/ */ _L88;
  Target_list_MRSP_real_T_TargetManagement_types /* _L87/ */ _L87;
  L_internal_real_Type_SDM_Types_Pkg /* _L90/ */ _L90;
  TrainLocations_real_T_SDM_Types_Pkg /* _L89/ */ _L89;
  MA_section_real_T_TargetManagement_types /* _L97/ */ _L97;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L98/ */ _L98;
  kcg_int64 /* _L99/ */ _L99;
  Target_list_MRSP_real_T_TargetManagement_types /* _L107/ */ _L107;
  Target_list_MRSP_real_T_TargetManagement_types /* _L121/ */ _L121;
  Target_real_T_TargetManagement_types /* _L14/ */ _L14;
} outC_TargetManagement_TargetManagement_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::TargetManagement/ */
extern void TargetManagement_TargetManagement_pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* MRSP_updated/ */
  kcg_bool MRSP_updated,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* MA_updated/ */
  kcg_bool MA_updated,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TargetManagement_TargetManagement_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetManagement_TargetManagement_pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

