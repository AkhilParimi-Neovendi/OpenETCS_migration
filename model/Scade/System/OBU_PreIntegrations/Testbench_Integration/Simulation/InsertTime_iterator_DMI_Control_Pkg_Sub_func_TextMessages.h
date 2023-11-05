/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_float32 /* hh/ */ hh;
  kcg_float32 /* mm/ */ mm;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L15/ */ _L15;
  kcg_bool /* _L5/ */ _L5;
  kcg_float32 /* _L17/ */ _L17;
  kcg_float32 /* _L16/ */ _L16;
  kcg_float32 /* _L18/ */ _L18;
} outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator/ */
extern void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* Position/ */
  kcg_int32 Position,
  /* new_hh/ */
  kcg_float32 new_hh,
  /* new_mm/ */
  kcg_float32 new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_float32 /* mm/ */ Context_mm;
  kcg_float32 /* hh/ */ Context_hh;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

extern void kcg_save_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
extern void kcg_load_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *SV);



#endif /* _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

