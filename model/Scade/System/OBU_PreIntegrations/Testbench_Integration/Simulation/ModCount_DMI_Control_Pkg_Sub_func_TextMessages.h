/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* rippleclock/ */ rippleclock;
  kcg_float32 /* count/ */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L5/ */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
} outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::ModCount/ */
extern void ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  /* incre/ */
  kcg_bool incre,
  /* Modulo/ */
  kcg_int32 Modulo,
  /* initialValue/ */
  kcg_int32 initialValue,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void ModCount_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ModCount_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L5/ */ Context__L5;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ModCount_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _ModCount_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModCount_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

