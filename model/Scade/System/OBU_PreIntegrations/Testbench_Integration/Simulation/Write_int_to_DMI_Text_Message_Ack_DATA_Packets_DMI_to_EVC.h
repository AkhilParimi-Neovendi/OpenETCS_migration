/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_text_message_ack_ct/ */ dmi_text_message_ack_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC /* _L12=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack#1)/ */ Context_C_int_to_DMI_Text_Message_Ack_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_Ack_int_array_T_DATA /* _L8/ */ _L8;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L15/ */ _L15;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L13/ */ _L13;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L16/ */ _L16;
} outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack/ */
extern void Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_text_message_ack_int/ */
  DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

