/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI_H_
#define _Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_text_message_ct/ */ dmi_text_message_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_DMI_Text_Message1_DATA_Packets_EVC_to_DMI /* _L36=(DATA::Packets::EVC_to_DMI::CAST_Int_to_DMI_Text_Message1#1)/ */ Context_CAST_Int_to_DMI_Text_Message1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_int_array_T_DATA /* _L20/ */ _L20;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L36/ */ _L36;
  kcg_int64 /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  kcg_int64 /* _L37/ */ _L37;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L40/ */ _L40;
} outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message/ */
extern void Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
  /* dmi_text_message_int/ */
  DMI_Text_Message_int_array_T_DATA *dmi_text_message_int,
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_Int_to_DMI_Text_Message_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_Int_to_DMI_Text_Message_init_DATA_Packets_EVC_to_DMI(
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

