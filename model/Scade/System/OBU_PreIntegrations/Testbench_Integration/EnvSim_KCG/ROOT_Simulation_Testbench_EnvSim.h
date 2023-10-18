/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _ROOT_Simulation_Testbench_EnvSim_H_
#define _ROOT_Simulation_Testbench_EnvSim_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"
#include "EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------   local probes  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* debugTrainPositionNominal/ */ debugTrainPositionNominal;
  kcg_float64 /* debugPermittedSpeed/ */ debugPermittedSpeed;
  kcg_float64 /* debugInterventionSpeed/ */ debugInterventionSpeed;
  M_MODE /* debugCurrentMode/ */ debugCurrentMode;
  M_LEVEL /* debugCurrentLevel/ */ debugCurrentLevel;
  mobileHWStatus_Type_MoRC_Pck /* debugMobileHwStatus/ */ debugMobileHwStatus;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  TIU_Input_msg_API_TIU_Pkg /* EVC_fromTIU/ */ EVC_fromTIU;
  TIU_Output_msg_API_TIU_Pkg /* API_toTIU/ */ API_toTIU;
  RadioManagement_T_API_RadioCommunication_Pkg /* API_toRTM_Management/ */ API_toRTM_Management;
  M_TrainTrack_Message_T_TM_radio_messages /* API_toRBC/ */ API_toRBC;
  GUI_to_EVC_EnvSim /* fromGUI/ */ fromGUI;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  TIU_Output_msg_API_TIU_Pkg /* _L5/ */ _L5;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L4/ */ _L4;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L3/ */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L156/ */ _L156;
  M_MODE /* _L222/ */ _L222;
  M_LEVEL /* _L238/ */ _L238;
  GUI_to_EVC_EnvSim /* _L247/ */ _L247;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC /* _L1=(EVC#1)/ */ Context_EVC_1;
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */ Context_TestEnvironmentSimulation_IncludingRBC_Complete_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* API_fromDMI/ */ API_fromDMI;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* API_toDMI/ */ API_toDMI;
  kcg_bool /* clockEVC/ */ clockEVC;
  kcg_int64 /* timestamp/ */ timestamp;
  kcg_float64 /* trainPositionDeltaMin/ */ trainPositionDeltaMin;
  kcg_float64 /* trainPositionNominal/ */ trainPositionNominal;
  kcg_float64 /* trainPositionDeltaMax/ */ trainPositionDeltaMax;
  mobileHWStatus_Type_MoRC_Pck /* _L26/ */ _L26;
  TIU_Input_msg_API_TIU_Pkg /* _L25/ */ _L25;
  API_TrackSideInput_T_API_Msg_Pkg /* _L24/ */ _L24;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  odometry_T_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L154/ */ _L154;
  kcg_float64 /* _L182/ */ _L182;
  kcg_float64 /* _L183/ */ _L183;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* _L187/ */ _L187;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L196/ */ _L196;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* _L201/ */ _L201;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L228/ */ _L228;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L230/ */ _L230;
  TIU_Output_msg_API_TIU_Pkg /* _L240/ */ _L240;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L241/ */ _L241;
  TIU_Input_msg_API_TIU_Pkg /* _L243/ */ _L243;
  M_TrainTrack_Message_T_TM_radio_messages /* _L245/ */ _L245;
  EVC_to_GUI_EnvSim /* _L246/ */ _L246;
  kcg_bool /* _L248/ */ _L248;
  kcg_float64 /* _L249/ */ _L249;
  kcg_float64 /* _L250/ */ _L250;
  kcg_float64 /* _L251/ */ _L251;
  kcg_float64 /* _L252/ */ _L252;
  kcg_float64 /* _L253/ */ _L253;
  kcg_int64 /* _L254/ */ _L254;
  kcg_int64 /* _L255/ */ _L255;
  kcg_int64 /* _L256/ */ _L256;
  kcg_bool /* _L257/ */ _L257;
  kcg_float64 /* _L262/ */ _L262;
  kcg_int64 /* _L261/ */ _L261;
  kcg_float64 /* _L260/ */ _L260;
  kcg_float64 /* _L259/ */ _L259;
  kcg_float64 /* _L263/ */ _L263;
  TIU_Input_msg_API_TIU_Pkg /* _L264/ */ _L264;
  kcg_bool /* _L265/ */ _L265;
  TIU_Input_msg_API_TIU_Pkg /* _L266/ */ _L266;
  TIU_Input_msg_API_TIU_Pkg /* _L267/ */ _L267;
  GUI_to_EVC_EnvSim /* _L258/ */ _L258;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* _L268/ */ _L268;
  GUI_to_EVC_EnvSim /* _L269/ */ _L269;
} outC_ROOT_Simulation_Testbench_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_EnvSim::ROOT_Simulation/ */
extern void ROOT_Simulation_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ROOT_Simulation_reset_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ROOT_Simulation_init_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ROOT_Simulation_Testbench_EnvSim_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ROOT_Simulation_Testbench_EnvSim.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

