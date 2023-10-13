/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_DMI_to_EVC_to_int_Messages_H_
#define _CAST_DMI_to_EVC_to_int_Messages_H_

#include "kcg_types.h"
#include "Write_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* dmi_to_evc_int/ */ dmi_to_evc_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC /* _L17=(DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int#1)/ */ Context_Write_DMI_Status_to_int_1;
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC /* _L18=(DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int#1)/ */ Context_Write_DMI_identifier_to_int_1;
  outC_Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC /* _L19=(DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int#1)/ */ Context_Write_DMI_Driver_Reqest_to_int_1;
  outC_Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways /* _L20=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#1)/ */ Context_Write_DMI_Driver_Identifier_to_int_1;
  outC_Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways /* _L21=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#1)/ */ Context_Write_DMI_Train_Running_Number_to_int_1;
  outC_Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC /* _L22=(DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int#1)/ */ Context_Write_DMI_Radio_Net_Data_to_int_1;
  outC_Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC /* _L23=(DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int#1)/ */ Context_Write_DMI_Text_Message_Ack_to_int_1;
  outC_Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC /* _L24=(DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int#1)/ */ Context_Write_DMI_Train_Data_Ack_to_int_1;
  outC_Write_DMI_Train_Data_to_int_DATA_Packets_Bothways /* _L26=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#1)/ */ Context_Write_DMI_Train_Data_to_int_1;
  outC_Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways /* _L25=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#1)/ */ Context_Write_DMI_Adhesion_Factor_Data_to_int_1;
  outC_Write_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC /* _L27=(DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int#1)/ */ Context_Write_DMI_Icon_Ack_to_int_1;
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways /* _L28=(DATA::Packets::Bothways::Write_DMI_Level_Data_to_int#1)/ */ Context_Write_DMI_Level_Data_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L13/ */ _L13;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L12/ */ _L12;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L11/ */ _L11;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L10/ */ _L10;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L9/ */ _L9;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L8/ */ _L8;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L7/ */ _L7;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L6/ */ _L6;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L5/ */ _L5;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L4/ */ _L4;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L3/ */ _L3;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L2/ */ _L2;
  DMI_Status_int_array_T_DATA /* _L17/ */ _L17;
  DMI_Identifier_int_array_T_DATA /* _L18/ */ _L18;
  DMI_Driver_Request_int_array_T_DATA /* _L19/ */ _L19;
  DMI_Driver_Identifier_int_array_T_DATA /* _L20/ */ _L20;
  DMI_Train_Running_Number_int_array_T_DATA /* _L21/ */ _L21;
  DMI_Radio_Net_Data_int_array_T_DATA /* _L22/ */ _L22;
  DMI_Text_Message_Ack_int_array_T_DATA /* _L23/ */ _L23;
  DMI_Train_Data_Ack_int_array_T_DATA /* _L24/ */ _L24;
  DMI_Adhesion_Factor_Data_int_array_T_DATA /* _L25/ */ _L25;
  DMI_Train_Data_int_array_T_DATA /* _L26/ */ _L26;
  DMI_Icon_Ack_int_array_T_DATA /* _L27/ */ _L27;
  DMI_Level_Data_int_array_T_DATA /* _L28/ */ _L28;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L29/ */ _L29;
  kcg_int64 /* _L35/ */ _L35;
  kcg_int64 /* _L34/ */ _L34;
  kcg_int64 /* _L33/ */ _L33;
  P044_other_data_TM_TrainToTrack /* _L32/ */ _L32;
} outC_CAST_DMI_to_EVC_to_int_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::CAST_DMI_to_EVC_to_int/ */
extern void CAST_DMI_to_EVC_to_int_Messages(
  /* dmi_to_evc_ct/ */
  DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  outC_CAST_DMI_to_EVC_to_int_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_to_EVC_to_int_reset_Messages(
  outC_CAST_DMI_to_EVC_to_int_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_to_EVC_to_int_init_Messages(
  outC_CAST_DMI_to_EVC_to_int_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_to_EVC_to_int_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_to_EVC_to_int_Messages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

