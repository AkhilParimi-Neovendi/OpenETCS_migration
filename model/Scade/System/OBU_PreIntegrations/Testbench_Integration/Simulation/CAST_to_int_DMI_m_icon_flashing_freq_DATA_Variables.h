/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables_H_
#define _CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables_H_

#include "kcg_types.h"
#include "Int_to_Real_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* dmi_m_icon_flashing_freq_ct/ */ dmi_m_icon_flashing_freq_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Real_Utilities /* _L2=(Utilities::Int_to_Real#1)/ */ Context_Int_to_Real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  DMI_m_icon_flashing_freq_INT_T_DATA /* _L8/ */ _L8;
} outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq/ */
extern void CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(
  /* dmi_m_icon_flashing_freq_int/ */
  DMI_m_icon_flashing_freq_INT_T_DATA dmi_m_icon_flashing_freq_int,
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_to_int_DMI_m_icon_flashing_freq_reset_DATA_Variables(
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_to_int_DMI_m_icon_flashing_freq_init_DATA_Variables(
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
