/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables_H_
#define _CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "Real_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_m_icon_flashing_freq_INT_T_DATA /* dmi_m_icon_flashing_freq_int/ */ dmi_m_icon_flashing_freq_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Real_to_Int_Utilities /* _L2=(Utilities::Real_to_Int#1)/ */ Context_Real_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
} outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int/ */
extern void CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(
  /* dmi_m_icon_flashing_freq_ct/ */
  kcg_float32 dmi_m_icon_flashing_freq_ct,
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_m_icon_flashing_freq_to_int_reset_DATA_Variables(
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_m_icon_flashing_freq_to_int_init_DATA_Variables(
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

