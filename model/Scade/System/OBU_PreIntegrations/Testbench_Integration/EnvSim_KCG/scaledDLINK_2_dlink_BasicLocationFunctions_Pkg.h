/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_
#define _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* distance/ */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L1/ */ _L1;
  D_LINK /* _L2/ */ _L2;
  Q_LOCACC /* _L3/ */ _L3;
  kcg_int64 /* _L7/ */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  Location_T_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  kcg_int64 /* _L25/ */ _L25;
} outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink/ */
extern void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_link/ */
  D_LINK d_link,
  /* q_locacc/ */
  Q_LOCACC q_locacc,
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void scaledDLINK_2_dlink_init_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

