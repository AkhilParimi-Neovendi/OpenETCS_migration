/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_
#define _C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_text_message_ack_ct/ */ dmi_text_message_ack_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L9=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_Int_to_Bool_Utilities /* _L11=(Utilities::Int_to_Bool#2)/ */ Context_Int_to_Bool_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  DMI_Text_Message_Ack_int_array_T_DATA /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
} outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack/ */
extern void C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_int/ */
  DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

