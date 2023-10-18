/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_EVC_to_DMI_to_int_Messages_H_
#define _CAST_EVC_to_DMI_to_int_Messages_H_

#include "kcg_types.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Train_Data_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways.h"
#include "Write_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_System_Version_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.h"
#include "Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* evc_to_dmi_int/ */ evc_to_dmi_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI /* _L36=(DATA::Packets::EVC_to_DMI::Write_DMI_Dynamic_to_int#1)/ */ Context_Write_DMI_Dynamic_to_int_1;
  outC_Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI /* _L37=(DATA::Packets::EVC_to_DMI::Write_DMI_Menu_Request_to_int#1)/ */ Context_Write_DMI_Menu_Request_to_int_1;
  outC_Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI /* _L38=(DATA::Packets::EVC_to_DMI::Write_DMI_Entry_Request_to_int#1)/ */ Context_Write_DMI_Entry_Request_to_int_1;
  outC_Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI /* _L39=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Coded_Train_Data_to_int#1)/ */ Context_Write_DMI_EVC_Coded_Train_Data_to_int_1;
  outC_Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI /* _L40=(DATA::Packets::EVC_to_DMI::Write_DMI_Text_Message_to_int#1)/ */ Context_Write_DMI_Text_Message_to_int_1;
  outC_Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI /* _L41=(DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int#1)/ */ Context_Write_DMI_Track_Description_to_int_1;
  outC_Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI /* _L42=(DATA::Packets::EVC_to_DMI::Write_DMI_Identifier_Request_to_int#1)/ */ Context_Write_DMI_Identifier_Request_to_int_1;
  outC_Write_DMI_System_Version_to_int_DATA_Packets_EVC_to_DMI /* _L43=(DATA::Packets::EVC_to_DMI::Write_DMI_System_Version_to_int#1)/ */ Context_Write_DMI_System_Version_to_int_1;
  outC_Write_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI /* _L44=(DATA::Packets::EVC_to_DMI::Write_DMI_Display_Control_to_int#1)/ */ Context_Write_DMI_Display_Control_to_int_1;
  outC_Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI /* _L45=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Level_Data_to_int#1)/ */ Context_Write_DMI_EVC_Level_Data_to_int_1;
  outC_Write_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI /* _L46=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Radio_Net_Data_to_int#1)/ */ Context_Write_DMI_EVC_Radio_Net_Data_to_int_1;
  outC_Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways /* _L47=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#2)/ */ Context_Write_DMI_Train_Running_Number_to_int_2;
  outC_Write_DMI_Train_Data_to_int_DATA_Packets_Bothways /* _L48=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#2)/ */ Context_Write_DMI_Train_Data_to_int_2;
  outC_Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways /* _L49=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#2)/ */ Context_Write_DMI_Adhesion_Factor_Data_to_int_2;
  outC_Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI /* _L50=(DATA::Packets::EVC_to_DMI::Write_DMI_Icons_to_int#1)/ */ Context_Write_DMI_Icons_to_int_1;
  outC_Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways /* _L51=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#2)/ */ Context_Write_DMI_Driver_Identifier_to_int_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L13/ */ _L13;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L12/ */ _L12;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L10/ */ _L10;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L9/ */ _L9;
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L8/ */ _L8;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L7/ */ _L7;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L6/ */ _L6;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L5/ */ _L5;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L3/ */ _L3;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L2/ */ _L2;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L29/ */ _L29;
  P044_other_data_TM_TrainToTrack /* _L16/ */ _L16;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L35/ */ _L35;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L34/ */ _L34;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L33/ */ _L33;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L32/ */ _L32;
  DMI_Dynamic_int_array_T_DATA /* _L36/ */ _L36;
  DMI_Menu_Request_int_array_T_DATA /* _L37/ */ _L37;
  DMI_Entry_Request_int_array_T_DATA /* _L38/ */ _L38;
  DMI_EVC_Coded_Train_Data_int_array_T_DATA /* _L39/ */ _L39;
  DMI_Text_Message_int_array_T_DATA /* _L40/ */ _L40;
  DMI_Track_Description_int_array_T /* _L41/ */ _L41;
  DMI_Identifier_Request_int_array_T_DATA /* _L42/ */ _L42;
  DMI_System_Version_int_array_T_DATA /* _L43/ */ _L43;
  DMI_Display_Control_int_array_T_DATA /* _L44/ */ _L44;
  DMI_EVC_Level_Data_int_array_T_DATA /* _L45/ */ _L45;
  DMI_EVC_Radio_Net_Data_int_array_T_DATA /* _L46/ */ _L46;
  DMI_Train_Running_Number_int_array_T_DATA /* _L47/ */ _L47;
  DMI_Train_Data_int_array_T_DATA /* _L48/ */ _L48;
  DMI_Adhesion_Factor_Data_int_array_T_DATA /* _L49/ */ _L49;
  DMI_Icons_int_array_T_DATA /* _L50/ */ _L50;
  DMI_Driver_Identifier_int_array_T_DATA /* _L51/ */ _L51;
  kcg_int64 /* _L53/ */ _L53;
  kcg_int64 /* _L54/ */ _L54;
  kcg_int64 /* _L55/ */ _L55;
} outC_CAST_EVC_to_DMI_to_int_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::CAST_EVC_to_DMI_to_int/ */
extern void CAST_EVC_to_DMI_to_int_Messages(
  /* evc_to_dmi_ct/ */
  EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  outC_CAST_EVC_to_DMI_to_int_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_EVC_to_DMI_to_int_reset_Messages(
  outC_CAST_EVC_to_DMI_to_int_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_EVC_to_DMI_to_int_init_Messages(
  outC_CAST_EVC_to_DMI_to_int_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_EVC_to_DMI_to_int_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_EVC_to_DMI_to_int_Messages.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

