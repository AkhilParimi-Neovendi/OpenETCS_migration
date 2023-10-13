/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_
#define _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* lastTime/ */ lastTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  SystemTime_T_ProvidePositionReport_Pkg /* _L29/ */ _L29;
  kcg_int64 /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  T_CYCLOC /* _L33/ */ _L33;
  kcg_int64 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  T_CYCLOC /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_int64 /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L42/ */ _L42;
  kcg_int64 /* _L41/ */ _L41;
  T_CYCLOC /* _L40/ */ _L40;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L43/ */ _L43;
  SystemTime_T_ProvidePositionReport_Pkg /* _L44/ */ _L44;
  SystemTime_T_ProvidePositionReport_Pkg /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
} outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_T_Cycloc/ */
extern void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* present/ */
  kcg_bool present,
  /* tcycloc/ */
  T_CYCLOC tcycloc,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* lastTime/ */ Context_lastTime;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_Supervision_T_Cycloc_ProvidePositionReport_Pkg;

extern void kcg_save_SV_Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  SV_Supervision_T_Cycloc_ProvidePositionReport_Pkg *SV,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC,
  SV_Supervision_T_Cycloc_ProvidePositionReport_Pkg *SV);



#endif /* _Supervision_T_Cycloc_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

