/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _MergeMLRequests_SDM_Commands_Pkg_H_
#define _MergeMLRequests_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* revoked/ */ revoked;
  kcg_bool /* triggered/ */ triggered;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* req/ */ mem_req;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
} outC_MergeMLRequests_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::MergeMLRequests/ */
extern void MergeMLRequests_SDM_Commands_Pkg(
  /* revokedCmd/ */
  kcg_bool revokedCmd,
  /* req/ */
  kcg_bool req,
  /* triggeredCmd/ */
  kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMLRequests_init_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* triggered/ */ Context_triggered;
  kcg_bool /* revoked/ */ Context_revoked;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* req/ */ Context_mem_req;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_MergeMLRequests_SDM_Commands_Pkg;

extern void kcg_save_SV_MergeMLRequests_SDM_Commands_Pkg(
  SV_MergeMLRequests_SDM_Commands_Pkg *SV,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);
extern void kcg_load_SV_MergeMLRequests_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC,
  SV_MergeMLRequests_SDM_Commands_Pkg *SV);



#endif /* _MergeMLRequests_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMLRequests_SDM_Commands_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

