/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Input_Messages_InputManagement_H_
#define _Input_Messages_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Emergency_Stop_Message_Received/ */ Emergency_Stop_Message_Received;
  kcg_bool /* Shunting_Granted_By_RBC/ */ Shunting_Granted_By_RBC;
  kcg_bool /* RCB_Ack_And_EB_Revocked/ */ RCB_Ack_And_EB_Revocked;
  kcg_bool /* RBC_Authorized_SR/ */ RBC_Authorized_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_Mess_2/ */ Loc_Mess_2;
  kcg_bool /* Loc_Mess_6/ */ Loc_Mess_6;
  kcg_bool /* Loc_Mess_28/ */ Loc_Mess_28;
  kcg_bool /* Loc_Mess_27/ */ Loc_Mess_27;
  kcg_bool /* Loc_Mess_16/ */ Loc_Mess_16;
  kcg_bool /* Loc_Mess_15/ */ Loc_Mess_15;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
} outC_Input_Messages_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_Messages/ */
extern void Input_Messages_InputManagement(
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  outC_Input_Messages_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Messages_reset_InputManagement(
  outC_Input_Messages_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Messages_init_InputManagement(
  outC_Input_Messages_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_Messages_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Messages_InputManagement.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

