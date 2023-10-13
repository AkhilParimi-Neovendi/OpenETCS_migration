/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_TEXTCONFIRM_TM_conversions.h"
#include "CAST_Int_to_Q_TEXTCLASS_TM_conversions.h"
#include "CAST_int_to_DMI_Q_TEXT_DATA_Variables.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_text_message_ct/ */ dmi_text_message_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L27=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_int_to_DMI_Q_TEXT_DATA_Variables /* _L29=(DATA::Variables::CAST_int_to_DMI_Q_TEXT#1)/ */ Context_CAST_int_to_DMI_Q_TEXT_1;
  outC_CAST_Int_to_Q_TEXTCLASS_TM_conversions /* _L33=(TM_conversions::CAST_Int_to_Q_TEXTCLASS#1)/ */ Context_CAST_Int_to_Q_TEXTCLASS_1;
  outC_CAST_Int_to_Q_TEXTCONFIRM_TM_conversions /* _L34=(TM_conversions::CAST_Int_to_Q_TEXTCONFIRM#1)/ */ Context_CAST_Int_to_Q_TEXTCONFIRM_1;
  outC_CAST_int_to_DMI_TEXT_DATA_Variables /* _L35=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */ Context_CAST_int_to_DMI_TEXT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L19/ */ _L19;
  DMI_Text_Message_int_array_T_DATA /* _L20/ */ _L20;
  array_int64_5 /* _L21/ */ _L21;
  kcg_int64 /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  DMI_Q_TEXT_DMI_Types_Pkg /* _L29/ */ _L29;
  DMI_TEXT_INT_Array_T_DATA /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
  kcg_int64 /* _L32/ */ _L32;
  Q_TEXTCLASS /* _L33/ */ _L33;
  Q_TEXTCONFIRM /* _L34/ */ _L34;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  DMI_TEXT_DMI_Types_Pkg /* _L35/ */ _L35;
} outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1/ */
extern void CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_int/ */
  DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_Int_to_DMI_Text_Message1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_Int_to_DMI_Text_Message1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

