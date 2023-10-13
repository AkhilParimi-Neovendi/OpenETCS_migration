/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _TIU_Toolbox_TrainModules_H_
#define _TIU_Toolbox_TrainModules_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Input_msg_API_TIU_Pkg /* output_To_EVC/ */ output_To_EVC;
  kcg_bool /* serviceBrakeActivated_To_Environment/ */ serviceBrakeActivated_To_Environment;
  kcg_bool /* emergencyBrakeActivated_To_Environment/ */ emergencyBrakeActivated_To_Environment;
  kcg_bool /* tractionCutOff_To_Environment/ */ tractionCutOff_To_Environment;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_brake_signal_command_T_TIU_Types_Pkg /* serviceBrakeCommandTmp/ */ serviceBrakeCommandTmp;
  M_brake_signal_command_T_TIU_Types_Pkg /* emergencyBrakeCommandTmp/ */ emergencyBrakeCommandTmp;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* cutoffCommand/ */ cutoffCommand;
  kcg_bool /* powerOn/ */ powerOn;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L14/ */ _L14;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg /* _L15/ */ _L15;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L28/ */ _L28;
  TIU_Input_msg_API_TIU_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L33/ */ _L33;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L32/ */ _L32;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L31/ */ _L31;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L51/ */ _L51;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L52/ */ _L52;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L54/ */ _L54;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L55/ */ _L55;
  Brake_command_T_TIU_Types_Pkg /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  TIU_Output_msg_API_TIU_Pkg /* _L58/ */ _L58;
  M_train_data_entry_type_T_TIU_Types_Pkg /* _L59/ */ _L59;
  Mode_control_and_train_status_T_TIU_Types_Pkg /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  M_sleeping_signal_status_T_TIU_Types_Pkg /* _L64/ */ _L64;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg /* _L65/ */ _L65;
  M_nonleading_signal_status_T_TIU_Types_Pkg /* _L66/ */ _L66;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L67/ */ _L67;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* _L68/ */ _L68;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg /* _L69/ */ _L69;
  M_traction_signal_status_T_TIU_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  M_traction_signal_status_T_TIU_Types_Pkg /* _L72/ */ _L72;
  M_traction_signal_status_T_TIU_Types_Pkg /* _L73/ */ _L73;
  Brake_status_T_TIU_Types_Pkg /* _L74/ */ _L74;
  Brake_pressure_value_T_TIU_Types_Pkg /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_int64 /* _L77/ */ _L77;
  kcg_int64 /* _L78/ */ _L78;
  kcg_int64 /* _L79/ */ _L79;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L83/ */ _L83;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L84/ */ _L84;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L87/ */ _L87;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L92/ */ _L92;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  trainData_T_TIU_Types_Pkg /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L100/ */ _L100;
  kcg_bool /* _L101/ */ _L101;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L102/ */ _L102;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L106/ */ _L106;
  kcg_bool /* _L109/ */ _L109;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L108/ */ _L108;
  M_cab_signal_status_T_TIU_Types_Pkg /* _L107/ */ _L107;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L112/ */ _L112;
} outC_TIU_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::TIU/ */
extern void TIU_Toolbox_TrainModules(
  /* Input_TIU_From_API/ */
  TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* cabStatus/ */
  M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* directionController/ */
  M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* tractionSwitchedOn/ */
  kcg_bool tractionSwitchedOn,
  /* brakeAccelerationPercentage/ */
  kcg_int64 brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TIU_init_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* powerOn/ */ Context_powerOn;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* cutoffCommand/ */ Context_cutoffCommand;
  M_brake_signal_command_T_TIU_Types_Pkg /* emergencyBrakeCommandTmp/ */ Context_emergencyBrakeCommandTmp;
  M_brake_signal_command_T_TIU_Types_Pkg /* serviceBrakeCommandTmp/ */ Context_serviceBrakeCommandTmp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_TIU_Toolbox_TrainModules;

extern void kcg_save_SV_TIU_Toolbox_TrainModules(
  SV_TIU_Toolbox_TrainModules *SV,
  outC_TIU_Toolbox_TrainModules *outC);
extern void kcg_load_SV_TIU_Toolbox_TrainModules(
  outC_TIU_Toolbox_TrainModules *outC,
  SV_TIU_Toolbox_TrainModules *SV);



#endif /* _TIU_Toolbox_TrainModules_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TIU_Toolbox_TrainModules.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

