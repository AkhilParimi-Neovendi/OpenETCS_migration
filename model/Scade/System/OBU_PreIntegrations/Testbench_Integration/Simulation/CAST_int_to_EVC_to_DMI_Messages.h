/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_EVC_to_DMI_Messages_H_
#define _CAST_int_to_EVC_to_DMI_Messages_H_

#include "kcg_types.h"
#include "Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"
#include "Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.h"
#include "Write_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* evc_to_dmi_ct/ */ evc_to_dmi_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI /* _L50=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Icons#1)/ */ Context_Write_int_to_DMI_Icons_1;
  outC_Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways /* _L49=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */ Context_Write_int_to_DMI_Adhesion_Factor_Data_1;
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways /* _L48=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */ Context_Write_int_to_DMI_Train_Data_1;
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways /* _L47=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */ Context_Write_int_to_DMI_Train_Running_Number_1;
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways /* _L51=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */ Context_Write_int_to_DMI_Driver_Identifier_1;
  outC_Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI /* _L46=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Radio_Net_Data#1)/ */ Context_Write_int_to_DMI_EVC_Radio_Net_Data_1;
  outC_Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI /* _L45=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Level_Data#1)/ */ Context_Write_int_to_DMI_EVC_Level_Data_1;
  outC_Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI /* _L44=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Display_Control#1)/ */ Context_Write_int_to_DMI_Display_Control_1;
  outC_Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI /* _L43=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_System_Version#1)/ */ Context_Write_int_to_DMI_System_Version_1;
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI /* _L42=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request#1)/ */ Context_Write_int_to_DMI_Identifier_Request_1;
  outC_Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI /* _L41=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description#1)/ */ Context_Write_int_to_DMI_Track_Description_1;
  outC_Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI /* _L40=(DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message#1)/ */ Context_Write_Int_to_DMI_Text_Message_1;
  outC_Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI /* _L39=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Coded_Train_Data#1)/ */ Context_Write_int_to_DMI_EVC_Coded_Train_Data_1;
  outC_Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI /* _L38=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Entry_Request#1)/ */ Context_Write_int_to_DMI_Entry_Request_1;
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI /* _L37=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request#1)/ */ Context_Write_int_to_DMI_Menu_Request_1;
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI /* _L36=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic#1)/ */ Context_Write_int_to_DMI_Dynamic_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* _L29/ */ _L29;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L36/ */ _L36;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L37/ */ _L37;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L38/ */ _L38;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L39/ */ _L39;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L40/ */ _L40;
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L41/ */ _L41;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L42/ */ _L42;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L43/ */ _L43;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg /* _L44/ */ _L44;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L45/ */ _L45;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L46/ */ _L46;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L47/ */ _L47;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L48/ */ _L48;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L49/ */ _L49;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L50/ */ _L50;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L51/ */ _L51;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L55/ */ _L55;
  array_int64_24 /* _L56/ */ _L56;
  array_int64_3 /* _L57/ */ _L57;
  array_int64_3 /* _L58/ */ _L58;
  array_int64_9 /* _L59/ */ _L59;
  DMI_Text_Message_int_array_T_DATA /* _L60/ */ _L60;
  DMI_Track_Description_int_array_T /* _L64/ */ _L64;
  array_int64_261 /* _L65/ */ _L65;
  array_int64_3 /* _L66/ */ _L66;
  array_int64_3 /* _L67/ */ _L67;
  DMI_EVC_Level_Data_int_array_T_DATA /* _L68/ */ _L68;
  array_int64_3 /* _L69/ */ _L69;
  array_int64_11 /* _L70/ */ _L70;
  array_int64_3 /* _L71/ */ _L71;
  array_int64_9 /* _L72/ */ _L72;
  array_int64_3 /* _L73/ */ _L73;
  array_int64_9 /* _L74/ */ _L74;
  kcg_int64 /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_int64 /* _L77/ */ _L77;
} outC_CAST_int_to_EVC_to_DMI_Messages;

/* ===========  node initialization and cycle functions  =========== */
/* Messages::CAST_int_to_EVC_to_DMI/ */
extern void CAST_int_to_EVC_to_DMI_Messages(
  /* evc_to_dmi_int/ */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  outC_CAST_int_to_EVC_to_DMI_Messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_EVC_to_DMI_reset_Messages(
  outC_CAST_int_to_EVC_to_DMI_Messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_EVC_to_DMI_init_Messages(
  outC_CAST_int_to_EVC_to_DMI_Messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_EVC_to_DMI_Messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_EVC_to_DMI_Messages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

