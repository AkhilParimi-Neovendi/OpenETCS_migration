/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _scaledDistance_2_distance_InputManagement_H_
#define _scaledDistance_2_distance_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* distance/ */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L7/ */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
} outC_scaledDistance_2_distance_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::scaledDistance_2_distance/ */
extern void scaledDistance_2_distance_InputManagement(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_in/ */
  kcg_int64 d_in,
  outC_scaledDistance_2_distance_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void scaledDistance_2_distance_reset_InputManagement(
  outC_scaledDistance_2_distance_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void scaledDistance_2_distance_init_InputManagement(
  outC_scaledDistance_2_distance_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _scaledDistance_2_distance_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaledDistance_2_distance_InputManagement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

