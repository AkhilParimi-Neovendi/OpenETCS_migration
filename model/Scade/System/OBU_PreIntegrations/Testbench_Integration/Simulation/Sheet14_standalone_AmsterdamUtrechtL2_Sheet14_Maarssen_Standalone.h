/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "TrackDiscontinuity_InfraLib.h"
#include "TrackInit_InfraLib.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "TrackClose_InfraLib.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"
#include "Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Packets/ */ Packets;
  TelegramHeader_T_BG_Types_Pkg /* Header/ */ Header;
  CompressedBaliseMessage_TM /* CompressedBaliseMessage/ */ CompressedBaliseMessage;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* RadioTrackTrainHeader_out/ */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* Compressed_Packets_out/ */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* Compressed_Radio_Message_out/ */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CASTLIB_BaliseHeaders_TM_conversions /* _L5=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */ Context_CASTLIB_BaliseHeaders_1;
  outC_TrackClose_InfraLib /* _L6=(InfraLib::TrackClose#1)/ */ Context_TrackClose_1;
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises#1)/ */ Context_Sheet14_Maarssen_balises_1;
  outC_C_TrackTrainMessage_to_Int_TM_conversions /* _L7=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */ Context_C_TrackTrainMessage_to_Int_1;
  outC_compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* _L9=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */ Context_compressed_to_Radio_Track_Train_H_1;
  outC_RBC_close_RadioLib /* _L10=(RadioLib::RBC_close#1)/ */ Context_RBC_close_1;
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen#1)/ */ Context_RBC_Sheet14_Maarssen_1;
  outC_TrackDiscontinuity_InfraLib /* _L14=(InfraLib::TrackDiscontinuity#1)/ */ Context_TrackDiscontinuity_1;
  outC_Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L26=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init#1)/ */ Context_Sheet14_Balises_init_1;
  outC_Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init#1)/ */ Context_Sheet14_Radio_init_1;
  outC_RBC_init_RadioLib /* _L12=(RadioLib::RBC_init#1)/ */ Context_RBC_init_1;
  outC_TrackDiscontinuity_InfraLib /* _L28=(InfraLib::TrackDiscontinuity#2)/ */ Context_TrackDiscontinuity_2;
  outC_TrackInit_InfraLib /* _L13=(InfraLib::TrackInit#1)/ */ Context_TrackInit_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* R_data_local/ */ R_data_local;
  TrackSectionData_T_InfraLib /* B_data_local/ */ B_data_local;
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L2/ */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* _L5/ */ _L5;
  BaliseTelegramHeader_int_T_TM /* _L3/ */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* _L4/ */ _L4;
  CompressedBaliseMessage_TM /* _L6/ */ _L6;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L9/ */ _L9;
  CompressedRadioMessage_TM /* _L8/ */ _L8;
  Radio_TrackTrain_Header_T_TM /* _L7/ */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* _L11/ */ _L11;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L10/ */ _L10;
  R_data_internal_T_InfraLib /* _L12/ */ _L12;
  TrackSectionData_T_InfraLib /* _L13/ */ _L13;
  TrackSectionData_T_InfraLib /* _L14/ */ _L14;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L17/ */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  TrackSectionData_T_InfraLib /* _L23/ */ _L23;
  R_data_internal_T_InfraLib /* _L24/ */ _L24;
  kcg_float64 /* _L25/ */ _L25;
  TrackSectionData_T_InfraLib /* _L26/ */ _L26;
  R_data_internal_T_InfraLib /* _L27/ */ _L27;
  TrackSectionData_T_InfraLib /* _L28/ */ _L28;
} outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone/ */
extern void Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* TrainPos_in/ */
  kcg_float64 TrainPos_in,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet14_standalone_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet14_standalone_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

