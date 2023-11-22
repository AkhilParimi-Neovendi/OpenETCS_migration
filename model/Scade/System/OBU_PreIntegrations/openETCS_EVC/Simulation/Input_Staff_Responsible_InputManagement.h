/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Input_Staff_Responsible_InputManagement_H_
#define _Input_Staff_Responsible_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* List_BG_Related_SR_Empty/ */ List_BG_Related_SR_Empty;
  kcg_bool /* Stop_if_In_SR/ */ Stop_if_In_SR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* _L12/ */ _L12;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L5/ */ _L5;
  Q_DIR /* _L6/ */ _L6;
  Q_NEWCOUNTRY /* _L7/ */ _L7;
  NID_C /* _L8/ */ _L8;
  NID_BG /* _L9/ */ _L9;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L1/ */ _L1;
  Q_DIR /* _L2/ */ _L2;
  Q_SRSTOP /* _L3/ */ _L3;
} outC_Input_Staff_Responsible_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_Staff_Responsible/ */
extern void Input_Staff_Responsible_InputManagement(
  /* P_63/ */
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *P_63,
  /* P_137/ */
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P_137,
  outC_Input_Staff_Responsible_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Staff_Responsible_reset_InputManagement(
  outC_Input_Staff_Responsible_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Staff_Responsible_init_InputManagement(
  outC_Input_Staff_Responsible_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_Staff_Responsible_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Staff_Responsible_InputManagement.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

