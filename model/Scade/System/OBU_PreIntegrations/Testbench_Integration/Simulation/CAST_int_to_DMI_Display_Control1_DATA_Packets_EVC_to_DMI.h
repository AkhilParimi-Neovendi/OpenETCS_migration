/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_display_control_ct/ */ dmi_display_control_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L13=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_Int_to_Bool_Utilities /* _L14=(Utilities::Int_to_Bool#2)/ */ Context_Int_to_Bool_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L9/ */ _L9;
  DMI_Display_Control_int_array_T_DATA /* _L15/ */ _L15;
} outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control1/ */
extern void CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI(
  /* dmi_display_control_int/ */
  DMI_Display_Control_int_array_T_DATA *dmi_display_control_int,
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_Display_Control1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_Display_Control1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

