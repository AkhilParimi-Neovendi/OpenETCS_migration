/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _packet_11_trainData_pkg_H_
#define _packet_11_trainData_pkg_H_

#include "kcg_types.h"
#include "vIntern2Extern_RadioSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_TM_TrainToTrack /* p11/ */ p11;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_vIntern2Extern_RadioSupport_Pkg /* _L61=(RadioSupport_Pkg::vIntern2Extern#1)/ */ Context_vIntern2Extern_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_TM_TrainToTrack /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  trainData_T_TIU_Types_Pkg /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  M_LOADINGGAUGE /* _L20/ */ _L20;
  M_AXLELOADCAT /* _L21/ */ _L21;
  M_AIRTIGHT /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  aTractionIdentity_T_Packet_TrainTypes_Pkg /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  aNID_NTC_T_Packet_TrainTypes_Pkg /* _L27/ */ _L27;
  NC_CDTRAIN /* _L40/ */ _L40;
  NC_TRAIN /* _L41/ */ _L41;
  kcg_int64 /* _L42/ */ _L42;
  kcg_int64 /* _L43/ */ _L43;
  kcg_int64 /* _L44/ */ _L44;
  kcg_int64 /* _L50/ */ _L50;
  kcg_int64 /* _L49/ */ _L49;
  kcg_int64 /* _L57/ */ _L57;
  kcg_int64 /* _L58/ */ _L58;
  kcg_int64 /* _L59/ */ _L59;
  kcg_int64 /* _L60/ */ _L60;
  V_TRAIN /* _L61/ */ _L61;
} outC_packet_11_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::packet_11/ */
extern void packet_11_trainData_pkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_packet_11_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void packet_11_reset_trainData_pkg(outC_packet_11_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void packet_11_init_trainData_pkg(outC_packet_11_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _packet_11_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** packet_11_trainData_pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

