/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _InputTrackManagement_Interfaces_H_
#define _InputTrackManagement_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_SSP_Gradient_Available/ */ MA_SSP_Gradient_Available;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* Mode_Profile_On_Board/ */ Mode_Profile_On_Board;
  kcg_bool /* Shunting_Granted_By_RBC/ */ Shunting_Granted_By_RBC;
  kcg_bool /* Trip_Order_Given_By_Balise/ */ Trip_Order_Given_By_Balise;
  kcg_bool /* List_BG_Related_To_SR_Empty/ */ List_BG_Related_To_SR_Empty;
  kcg_bool /* Stop_If_In_Shunting/ */ Stop_If_In_Shunting;
  kcg_bool /* Stop_If_In_SR/ */ Stop_If_In_SR;
  kcg_bool /* RCB_Ack_And_EB_Revocked/ */ RCB_Ack_And_EB_Revocked;
  kcg_bool /* RBC_Authorized_SR/ */ RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* Reversing_Data/ */ Reversing_Data;
  kcg_bool /* Emergency_Stop_Message_Received/ */ Emergency_Stop_Message_Received;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L38/ */ _L38;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L39/ */ _L39;
} outC_InputTrackManagement_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputTrackManagement/ */
extern void InputTrackManagement_Interfaces(
  /* Data_From_Track/ */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  outC_InputTrackManagement_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputTrackManagement_reset_Interfaces(
  outC_InputTrackManagement_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputTrackManagement_init_Interfaces(
  outC_InputTrackManagement_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputTrackManagement_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTrackManagement_Interfaces.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

