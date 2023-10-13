/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CAST_int_to_DMI_to_EVC_Messages_H_
#define _CAST_int_to_DMI_to_EVC_Messages_H_

#include "kcg_types.h"
#include "Write_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"
#include "Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* dmi_to_evc_ct/ */ dmi_to_evc_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways /* _L28=(DATA::Packets::Bothways::Write_int_to_DMI_Level_Data#1)/ */ Context_Write_int_to_DMI_Level_Data_1;
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC /* _L27=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack#1)/ */ Context_Write_int_to_DMI_Icon_Ack_1;
  outC_Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways /* _L25=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */ Context_Write_int_to_DMI_Adhesion_Factor_Data_1;
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways /* _L26=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */ Context_Write_int_to_DMI_Train_Data_1;
  outC_Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC /* _L24=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack#1)/ */ Context_Write_int_to_DMI_Train_Data_Ack_1;
  outC_Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC /* _L23=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack#1)/ */ Context_Write_int_to_DMI_Text_Message_Ack_1;
  outC_Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC /* _L22=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data#1)/ */ Context_Write_int_to_DMI_Radio_Net_Data_1;
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways /* _L21=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */ Context_Write_int_to_DMI_Train_Running_Number_1;
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways /* _L20=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */ Context_Write_int_to_DMI_Driver_Identifier_1;
  outC_Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC /* _L19=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest#1)/ */ Context_Write_int_to_DMI_Driver_Reqest_1;
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC /* _L18=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier#1)/ */ Context_Write_int_to_DMI_identifier_1;
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC /* _L17=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status#1)/ */ Context_Write_int_to_DMI_Status_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L17/ */ _L17;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L18/ */ _L18;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L19/ */ _L19;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L20/ */ _L20;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L21/ */ _L21;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L22/ */ _L22;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L23/ */ _L23;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L24/ */ _L24;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L25/ */ _L25;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L26/ */ _L26;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L27/ */ _L27;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L28/ */ _L28;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* _L29/ */ _L29;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L31/ */ _L31;
  array_int64_4 /* _L33/ */ _L33;
  array_int64_261 /* _L34/ */ _L34;
  array_int64_3 /* _L36/ */ _L36;
  array_int64_11 /* _L37/ */ _L37;
  array_int64_3 /* _L38/ */ _L38;
  array_int64_2 /* _L39/ */ _L39;
  array_int64_4 /* _L40/ */ _L40;
  array_int64_3 /* _L41/ */ _L41;
  array_int64_9 /* _L42/ */ _L42;
  array_int64_3 /* _L43/ */ _L43;
  array_int64_3 /* _L44/ */ _L44;
  array_int64_4 /* _L45/ */ _L45;
  kcg_int64 /* _L49/ */ _L49;
  kcg_bool /* _L48/ */ _L48;
  kcg_int64 /* _L47/ */ _L47;
} outC_CAST_int_to_DMI_to_EVC_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::CAST_int_to_DMI_to_EVC/ */
extern void CAST_int_to_DMI_to_EVC_Messages(
  /* dmi_to_evc_int/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  outC_CAST_int_to_DMI_to_EVC_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_to_EVC_reset_Messages(
  outC_CAST_int_to_DMI_to_EVC_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_to_EVC_init_Messages(
  outC_CAST_int_to_DMI_to_EVC_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_to_EVC_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_to_EVC_Messages.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

