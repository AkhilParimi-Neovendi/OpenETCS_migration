/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _InputTIUManagement_Interfaces_H_
#define _InputTIUManagement_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Train_Permitted_NL/ */ Train_Permitted_NL;
  kcg_bool /* Train_Permitted_PS/ */ Train_Permitted_PS;
  kcg_bool /* Train_Req_SL/ */ Train_Req_SL;
  kcg_bool /* All_Desks_Closed/ */ All_Desks_Closed;
  kcg_bool /* Desk_Open/ */ Desk_Open;
  kcg_bool /* OnBoard_Powered/ */ OnBoard_Powered;
  kcg_bool /* Valid_Train_Data_Stored/ */ Valid_Train_Data_Stored;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_sleeping_signal_status_T_TIU_Types_Pkg /* Loc_Sleeping_ST/ */ Loc_Sleeping_ST;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg /* Loc_PS_ST/ */ Loc_PS_ST;
  M_nonleading_signal_status_T_TIU_Types_Pkg /* Loc_NL_ST/ */ Loc_NL_ST;
  M_cab_signal_status_T_TIU_Types_Pkg /* Loc_Cab_ST/ */ Loc_Cab_ST;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L36/ */ _L36;
  M_sleeping_signal_status_T_TIU_Types_Pkg /* _L35/ */ _L35;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg /* _L34/ */ _L34;
  M_nonleading_signal_status_T_TIU_Types_Pkg /* _L33/ */ _L33;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L32/ */ _L32;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L31/ */ _L31;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg /* _L30/ */ _L30;
  M_traction_signal_status_T_TIU_Types_Pkg /* _L29/ */ _L29;
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L37/ */ _L37;
  M_nonleading_signal_status_T_TIU_Types_Pkg /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L57/ */ _L57;
  M_sleeping_signal_status_T_TIU_Types_Pkg /* _L62/ */ _L62;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L63/ */ _L63;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L83/ */ _L83;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L84/ */ _L84;
  trainData_T_TIU_Types_Pkg /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L100/ */ _L100;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
} outC_InputTIUManagement_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputTIUManagement/ */
extern void InputTIUManagement_Interfaces(
  /* Data_from_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_from_TIU,
  /* Cab/ */
  cab_ID_T_TIU_Types_Pkg Cab,
  outC_InputTIUManagement_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputTIUManagement_reset_Interfaces(
  outC_InputTIUManagement_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputTIUManagement_init_Interfaces(
  outC_InputTIUManagement_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputTIUManagement_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTIUManagement_Interfaces.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

