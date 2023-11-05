/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DMI_status_DMI_Control_Pkg_Sub_func_H_
#define _DMI_status_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "SendTime_Utilities.h"
#include "Counter_pwlinear_int32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* StatusOutput/ */ StatusOutput;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int32 /* _L25=(pwlinear::Counter#1)/ */ Context_Counter_1;
  outC_SendTime_Utilities /* _L36=(Utilities::SendTime#1)/ */ Context_SendTime_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TimeIsOver/ */ TimeIsOver;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  DMI_StatusSet_T_DMI_Types_Pkg /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L37/ */ _L37;
  kcg_int32 /* _L36/ */ _L36;
  kcg_bool /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
} outC_DMI_status_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_status/ */
extern void DMI_status_DMI_Control_Pkg_Sub_func(
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

extern void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_status_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_SendTime_Utilities Context_SendTime_1;
  SV_Counter_pwlinear_int32 Context_Counter_1;
} SV_DMI_status_DMI_Control_Pkg_Sub_func;

extern void kcg_save_SV_DMI_status_DMI_Control_Pkg_Sub_func(
  SV_DMI_status_DMI_Control_Pkg_Sub_func *SV,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);
extern void kcg_load_SV_DMI_status_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC,
  SV_DMI_status_DMI_Control_Pkg_Sub_func *SV);



#endif /* _DMI_status_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_status_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

