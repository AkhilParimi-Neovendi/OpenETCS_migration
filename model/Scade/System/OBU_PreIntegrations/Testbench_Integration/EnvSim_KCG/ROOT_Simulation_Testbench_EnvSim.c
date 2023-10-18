/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_Simulation_Testbench_EnvSim.h"

/* Testbench_EnvSim::ROOT_Simulation/ */
void ROOT_Simulation_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC)
{
  static kcg_int64 tmp;
  static kcg_int64 tmp1;
  static kcg_int64 tmp2;
  static M_TrainTrack_Message_T_TM_radio_messages tmp3;
  static RadioManagement_T_API_RadioCommunication_Pkg tmp4;
  static TIU_Output_msg_API_TIU_Pkg tmp5;
  static kcg_bool tmp6;
  static M_LEVEL tmp7;
  static M_MODE tmp8;
  static kcg_float64 tmp9;
  static kcg_float64 tmp10;
  static kcg_bool tmp11;
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp12;
  static M_LEVEL op_call;
  static M_MODE _13_op_call;
  static kcg_float64 _14_op_call;
  static kcg_float64 _15_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _16_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _17_op_call;
  static L_internal_Type_Obu_BasicTypes_Pkg _18_op_call;
  static kcg_bool _19_op_call;
  static TIU_Output_msg_API_TIU_Pkg _20_op_call;
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _21_op_call;
  static RadioManagement_T_API_RadioCommunication_Pkg _22_op_call;
  static M_TrainTrack_Message_T_TM_radio_messages _23_op_call;
  static kcg_bool _24_op_call;
  static kcg_bool noname;
  static kcg_bool _25_noname;
  static TIU_Input_msg_API_TIU_Pkg _26_noname;
  /* fromGUI/ */
  static GUI_to_EVC_EnvSim last_fromGUI;
  /* API_toRBC/ */
  static M_TrainTrack_Message_T_TM_radio_messages last_API_toRBC;
  /* API_toRTM_Management/ */
  static RadioManagement_T_API_RadioCommunication_Pkg last_API_toRTM_Management;
  /* API_toTIU/ */
  static TIU_Output_msg_API_TIU_Pkg last_API_toTIU;
  /* EVC_fromTIU/ */
  static TIU_Input_msg_API_TIU_Pkg last_EVC_fromTIU;

  kcg_copy_GUI_to_EVC_EnvSim(&last_fromGUI, &outC->fromGUI);
  /* _L269= */
  if (outC->init) {
    kcg_copy_GUI_to_EVC_EnvSim(
      &outC->_L269,
      (GUI_to_EVC_EnvSim *) &cinitGUItoEVC_Testbench_EnvSim);
  }
  else {
    kcg_copy_GUI_to_EVC_EnvSim(&outC->_L269, &outC->_L247);
  }
  kcg_copy_GUI_to_EVC_EnvSim(&outC->fromGUI, &outC->_L269);
  kcg_copy_GUI_to_EVC_EnvSim(&outC->_L258, &outC->fromGUI);
  outC->_L248 = outC->_L258.reset;
  outC->_L249 = outC->_L258.targetSpeed;
  outC->_L250 = outC->_L258.traction;
  outC->_L251 = outC->_L258.brake;
  outC->_L252 = outC->_L258.initialPosition;
  outC->_L253 = outC->_L258.initialVelocity;
  outC->_L254 = outC->_L258.mode;
  outC->_L255 = outC->_L258.level;
  outC->_L256 = outC->_L258.mobileHWStatus;
  outC->_L257 = outC->_L258.openDesk;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &last_API_toRTM_Management,
    &outC->API_toRTM_Management);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L241,
    &last_API_toRTM_Management);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&last_API_toTIU, &outC->API_toTIU);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->_L240, &last_API_toTIU);
  outC->_L196 = cDeltaSimulationTime_Toolbox;
  outC->_L229 = kcg_false;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &last_API_toRBC,
    &outC->API_toRBC);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L245,
    &last_API_toRBC);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
    outC->_L248,
    outC->_L249,
    outC->_L250,
    outC->_L251,
    outC->_L252,
    outC->_L253,
    outC->_L254,
    outC->_L255,
    outC->_L256,
    outC->_L257,
    &outC->_L241,
    &outC->_L240,
    outC->_L196,
    outC->_L229,
    outC->_L229,
    &outC->_L245,
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  outC->_L21 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_reset;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L22,
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_Odometry);
  outC->_L23 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_SystemTime;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L24,
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_fromTrack);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->_L25,
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_fromTIU);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->_L26,
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_mobileHWStatus);
  outC->_L27 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_emergencyBrake;
  outC->_L28 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_serviceBrake;
  outC->_L29 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_TractionCutOff;
  outC->_L30 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentPositionInCm;
  outC->_L31 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentPositionInM;
  outC->_L32 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_currentVelocityInKmH;
  outC->_L227 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.EVC_cycleEVC;
  outC->_L230 =
    outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1.GUI_AFBActive;
  outC->clockEVC = outC->_L227;
  outC->_L228 = outC->clockEVC;
  outC->every = outC->_L228;
  /* _L187= */
  if (outC->init) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &outC->_L187,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cEmptyEVC2DMIBusMessage_Testbench_EnvSim);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L187, &outC->_L156);
  }
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->_L268,
    (DMI_to_EVC_Message_int_T_API_DMI_Pkg *) &outC->_L187[1]);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->API_fromDMI, &outC->_L268);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L154, &outC->API_fromDMI);
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &outC->_L201,
    (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
      &cDataStorage_ForInit1_Testbench_EnvSim);
  if (outC->every) {
    /* _L1=(EVC#1)/ */
    EVC(
      outC->_L21,
      &outC->_L22,
      outC->_L23,
      &outC->_L24,
      &outC->_L154,
      &outC->_L25,
      &outC->_L26,
      &outC->_L201,
      &outC->Context_EVC_1);
    _24_op_call = outC->Context_EVC_1.resetOut;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_23_op_call,
      &outC->Context_EVC_1.API_toRBC);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &_22_op_call,
      &outC->Context_EVC_1.API_RTM_management);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &_21_op_call,
      &outC->Context_EVC_1.API_toDMI);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &_20_op_call,
      &outC->Context_EVC_1.API_toTIU);
    _19_op_call = outC->Context_EVC_1.EVC_ready;
    _18_op_call = outC->Context_EVC_1.debugTrainPositionNominal;
    _17_op_call = outC->Context_EVC_1.debugTrainPositionDeltaMax;
    _16_op_call = outC->Context_EVC_1.debugTrainPositionDeltaMin;
    _15_op_call = outC->Context_EVC_1.debugPermittedSpeed;
    _14_op_call = outC->Context_EVC_1.debugIinterventionSpeed;
    _13_op_call = outC->Context_EVC_1.debugCurrentMode;
    op_call = outC->Context_EVC_1.debugCurrentLevel;
  }
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&last_EVC_fromTIU, &outC->EVC_fromTIU);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->_L267,
    (TIU_Input_msg_API_TIU_Pkg *) &cInit_API_fromTIU_Testbench_EnvSim);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->EVC_fromTIU, &outC->_L25);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L264, &outC->EVC_fromTIU);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L243, &last_EVC_fromTIU);
  outC->_L265 = !kcg_comp_TIU_Input_msg_API_TIU_Pkg(&outC->_L243, &outC->_L264);
  /* _L266= */
  if (outC->_L265) {
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L266, &outC->_L264);
  }
  else {
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L266, &outC->_L267);
  }
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_26_noname, &outC->_L266);
  if (outC->every) {
    outC->_L7 = _18_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp = kcg_lit_int64(0);
    }
    else {
      tmp = outC->_L7;
    }
    outC->_L7 = tmp;
  }
  outC->_L263 = /* _L263= */(kcg_float64) outC->_L7;
  outC->trainPositionNominal = outC->_L263;
  if (outC->every) {
    outC->_L9 = _16_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp1 = kcg_lit_int64(0);
    }
    else {
      tmp1 = outC->_L9;
    }
    outC->_L9 = tmp1;
  }
  outC->_L183 = /* _L183= */(kcg_float64) outC->_L9;
  outC->trainPositionDeltaMin = outC->_L183;
  if (outC->every) {
    outC->_L8 = _17_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp2 = kcg_lit_int64(0);
    }
    else {
      tmp2 = outC->_L8;
    }
    outC->_L8 = tmp2;
  }
  outC->_L182 = /* _L182= */(kcg_float64) outC->_L8;
  outC->trainPositionDeltaMax = outC->_L182;
  outC->timestamp = outC->_L23;
  outC->_L262 = outC->trainPositionDeltaMax;
  outC->_L261 = outC->timestamp;
  outC->_L260 = outC->trainPositionDeltaMin;
  outC->_L259 = outC->trainPositionNominal;
  outC->_L246.emergencyBrake = outC->_L27;
  outC->_L246.serviceBrake = outC->_L28;
  outC->_L246.tractionCutOff = outC->_L29;
  outC->_L246.currentPositionInCm = outC->_L30;
  outC->_L246.currentPositionInM = outC->_L31;
  outC->_L246.currentVelocityInKmH = outC->_L32;
  outC->_L246.afbActive = outC->_L230;
  outC->_L246.trainPositionDeltaMax = outC->_L262;
  outC->_L246.trainPositionNominal = outC->_L259;
  outC->_L246.trainPositionDeltaMin = outC->_L260;
  outC->_L246.timestamp = outC->_L261;
  /* _L247=(EnvSim::RemoteGUI#1)/ */ RemoteGUI_EnvSim(&outC->_L246, &outC->_L247);
  if (outC->every) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L2, &_23_op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &tmp3,
        (M_TrainTrack_Message_T_TM_radio_messages *) &cInit_toRTM_Testbench_EnvSim);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&tmp3, &outC->_L2);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L2, &tmp3);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->API_toRBC, &outC->_L2);
  if (outC->every) {
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(&outC->_L3, &_22_op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
        &tmp4,
        (RadioManagement_T_API_RadioCommunication_Pkg *)
          &cInitRTMManagement_Testbench_EnvSim);
    }
    else {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(&tmp4, &outC->_L3);
    }
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(&outC->_L3, &tmp4);
  }
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_toRTM_Management,
    &outC->_L3);
  if (outC->every) {
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->_L5, &_20_op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(
        &tmp5,
        (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU_Testbench_EnvSim);
    }
    else {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(&tmp5, &outC->_L5);
    }
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->_L5, &tmp5);
  }
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->API_toTIU, &outC->_L5);
  if (outC->every) {
    outC->_L6 = _19_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp6 = kcg_true;
    }
    else {
      tmp6 = outC->_L6;
    }
    outC->_L6 = tmp6;
  }
  _25_noname = outC->_L6;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->debugMobileHwStatus, &outC->_L26);
  if (outC->every) {
    outC->_L238 = op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp7 = cInit_M_LEVEL1_Testbench_EnvSim;
    }
    else {
      tmp7 = outC->_L238;
    }
    outC->_L238 = tmp7;
  }
  outC->debugCurrentLevel = outC->_L238;
  if (outC->every) {
    outC->_L222 = _13_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp8 = cInit_M_MODE1_Testbench_EnvSim;
    }
    else {
      tmp8 = outC->_L222;
    }
    outC->_L222 = tmp8;
  }
  outC->debugCurrentMode = outC->_L222;
  if (outC->every) {
    outC->_L11 = _14_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp9 = kcg_lit_float64(0.0);
    }
    else {
      tmp9 = outC->_L11;
    }
    outC->_L11 = tmp9;
  }
  outC->debugInterventionSpeed = outC->_L11;
  if (outC->every) {
    outC->_L10 = _15_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp10 = kcg_lit_float64(0.0);
    }
    else {
      tmp10 = outC->_L10;
    }
    outC->_L10 = tmp10;
  }
  outC->debugPermittedSpeed = outC->_L10;
  outC->debugTrainPositionNominal = outC->_L7;
  if (outC->every) {
    outC->_L1 = _24_op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp11 = kcg_false;
    }
    else {
      tmp11 = outC->_L1;
    }
    outC->_L1 = tmp11;
  }
  noname = outC->_L1;
  if (outC->every) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L4, &_21_op_call);
  }
  else {
    /* _L1= */
    if (outC->init) {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &tmp12,
        (EVC_to_DMI_Message_int_T_API_DMI_Pkg *) &cInit_API_toDMI_Testbench_EnvSim);
    }
    else {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&tmp12, &outC->_L4);
    }
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L4, &tmp12);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->API_toDMI, &outC->_L4);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L156, &outC->API_toDMI);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ROOT_Simulation_init_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;

  outC->_L269.reset = kcg_true;
  outC->_L269.targetSpeed = kcg_lit_float64(0.0);
  outC->_L269.traction = kcg_lit_float64(0.0);
  outC->_L269.brake = kcg_lit_float64(0.0);
  outC->_L269.initialPosition = kcg_lit_float64(0.0);
  outC->_L269.initialVelocity = kcg_lit_float64(0.0);
  outC->_L269.mode = kcg_lit_int64(0);
  outC->_L269.level = kcg_lit_int64(0);
  outC->_L269.mobileHWStatus = kcg_lit_int64(0);
  outC->_L269.openDesk = kcg_true;
  for (idx = 0; idx < 311; idx++) {
    outC->_L268[idx] = kcg_lit_int64(0);
  }
  outC->_L258.reset = kcg_true;
  outC->_L258.targetSpeed = kcg_lit_float64(0.0);
  outC->_L258.traction = kcg_lit_float64(0.0);
  outC->_L258.brake = kcg_lit_float64(0.0);
  outC->_L258.initialPosition = kcg_lit_float64(0.0);
  outC->_L258.initialVelocity = kcg_lit_float64(0.0);
  outC->_L258.mode = kcg_lit_int64(0);
  outC->_L258.level = kcg_lit_int64(0);
  outC->_L258.mobileHWStatus = kcg_lit_int64(0);
  outC->_L258.openDesk = kcg_true;
  outC->_L267.valid = kcg_true;
  outC->_L267.info.train_status.valid = kcg_true;
  outC->_L267.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L267.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L267.info.brake_status.valid = kcg_true;
  outC->_L267.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L267.info.brake_pressure.valid = kcg_true;
  outC->_L267.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L267.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L267.info.train_data_info.valid = kcg_true;
  outC->_L267.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L267.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L267.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L267.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L267.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L267.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L267.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L267.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L267.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L267.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L267.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L267.info.train_data_info.nationSystems[idx1] = kcg_lit_int64(0);
  }
  outC->_L267.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L267.info.train_data_info.tractionSystem[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L267.info.train_data_info.tractionSystem[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L267.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L267.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L267.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L267.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L267.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L267.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L267.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L267.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L266.valid = kcg_true;
  outC->_L266.info.train_status.valid = kcg_true;
  outC->_L266.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L266.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L266.info.brake_status.valid = kcg_true;
  outC->_L266.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L266.info.brake_pressure.valid = kcg_true;
  outC->_L266.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L266.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L266.info.train_data_info.valid = kcg_true;
  outC->_L266.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L266.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L266.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L266.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L266.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L266.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L266.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L266.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L266.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L266.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L266.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L266.info.train_data_info.nationSystems[idx3] = kcg_lit_int64(0);
  }
  outC->_L266.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L266.info.train_data_info.tractionSystem[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L266.info.train_data_info.tractionSystem[idx4].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L266.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L266.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L266.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L266.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L266.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L266.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L266.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L266.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L265 = kcg_true;
  outC->_L264.valid = kcg_true;
  outC->_L264.info.train_status.valid = kcg_true;
  outC->_L264.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L264.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L264.info.brake_status.valid = kcg_true;
  outC->_L264.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L264.info.brake_pressure.valid = kcg_true;
  outC->_L264.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L264.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L264.info.train_data_info.valid = kcg_true;
  outC->_L264.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L264.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L264.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L264.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L264.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L264.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L264.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L264.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L264.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L264.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L264.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L264.info.train_data_info.nationSystems[idx5] = kcg_lit_int64(0);
  }
  outC->_L264.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L264.info.train_data_info.tractionSystem[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L264.info.train_data_info.tractionSystem[idx6].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L264.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L264.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L264.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L264.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L264.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L264.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L264.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L264.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L263 = kcg_lit_float64(0.0);
  outC->_L259 = kcg_lit_float64(0.0);
  outC->_L260 = kcg_lit_float64(0.0);
  outC->_L261 = kcg_lit_int64(0);
  outC->_L262 = kcg_lit_float64(0.0);
  outC->_L257 = kcg_true;
  outC->_L256 = kcg_lit_int64(0);
  outC->_L255 = kcg_lit_int64(0);
  outC->_L254 = kcg_lit_int64(0);
  outC->_L253 = kcg_lit_float64(0.0);
  outC->_L252 = kcg_lit_float64(0.0);
  outC->_L251 = kcg_lit_float64(0.0);
  outC->_L250 = kcg_lit_float64(0.0);
  outC->_L249 = kcg_lit_float64(0.0);
  outC->_L248 = kcg_true;
  outC->_L246.emergencyBrake = kcg_true;
  outC->_L246.serviceBrake = kcg_true;
  outC->_L246.tractionCutOff = kcg_true;
  outC->_L246.currentPositionInCm = kcg_lit_int64(0);
  outC->_L246.currentPositionInM = kcg_lit_float64(0.0);
  outC->_L246.currentVelocityInKmH = kcg_lit_float64(0.0);
  outC->_L246.afbActive = kcg_true;
  outC->_L246.trainPositionDeltaMax = kcg_lit_float64(0.0);
  outC->_L246.trainPositionNominal = kcg_lit_float64(0.0);
  outC->_L246.trainPositionDeltaMin = kcg_lit_float64(0.0);
  outC->_L246.timestamp = kcg_lit_int64(0);
  outC->_L245.Message.valid = kcg_true;
  outC->_L245.Message.nid_message = kcg_lit_int64(0);
  outC->_L245.Message.l_message = kcg_lit_int64(0);
  outC->_L245.Message.t_train = kcg_lit_int64(0);
  outC->_L245.Message.nid_engine = kcg_lit_int64(0);
  outC->_L245.Message.field1 = kcg_lit_int64(0);
  outC->_L245.Message.field2 = kcg_lit_int64(0);
  outC->_L245.Message.field3 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L245.OptionalPackets[idx7] = kcg_lit_int64(0);
  }
  outC->_L243.valid = kcg_true;
  outC->_L243.info.train_status.valid = kcg_true;
  outC->_L243.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L243.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L243.info.brake_status.valid = kcg_true;
  outC->_L243.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L243.info.brake_pressure.valid = kcg_true;
  outC->_L243.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L243.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L243.info.train_data_info.valid = kcg_true;
  outC->_L243.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L243.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L243.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L243.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L243.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L243.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L243.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L243.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L243.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L243.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L243.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L243.info.train_data_info.nationSystems[idx8] = kcg_lit_int64(0);
  }
  outC->_L243.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L243.info.train_data_info.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L243.info.train_data_info.tractionSystem[idx9].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L243.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L243.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L243.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L243.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L243.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L243.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L243.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L243.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L241.valid = kcg_true;
  outC->_L241.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L241.networkID = kcg_lit_int64(0);
  outC->_L240.valid = kcg_true;
  outC->_L240.info.isolation_status.valid = kcg_true;
  outC->_L240.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L240.info.brake_command.valid = kcg_true;
  outC->_L240.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L240.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L240.info.brake_inhibition.valid = kcg_true;
  outC->_L240.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L240.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L240.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L240.info.type_I_train_commands.valid = kcg_true;
  outC->_L240.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L240.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L240.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L240.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L240.info.change_traction_system.valid = kcg_true;
  outC->_L240.info.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L240.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->_L240.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L240.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  outC->_L240.info.passenger_door_control_info.valid = kcg_true;
  outC->_L240.info.passenger_door_control_info.door_control_info =
    kcg_lit_int64(0);
  outC->_L240.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L240.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L240.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L240.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L240.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L230 = kcg_true;
  outC->_L229 = kcg_true;
  outC->_L228 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L201.valid = kcg_true;
  outC->_L201.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L201.lastActiveNTC = kcg_lit_int64(0);
  outC->_L201.availableLevelsList.number = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L201.availableLevelsList.levelList[idx10].level = M_LEVEL_Level_0;
    outC->_L201.availableLevelsList.levelList[idx10].nid_stm = kcg_lit_int64(0);
  }
  outC->_L196 = kcg_lit_int64(0);
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  for (idx11 = 0; idx11 < 999; idx11++) {
    outC->_L187[idx11] = kcg_lit_int64(0);
  }
  outC->_L183 = kcg_lit_float64(0.0);
  outC->_L182 = kcg_lit_float64(0.0);
  for (idx12 = 0; idx12 < 311; idx12++) {
    outC->_L154[idx12] = kcg_lit_int64(0);
  }
  outC->_L21 = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.timestamp = kcg_lit_int64(0);
  outC->_L22.odo.o_nominal = kcg_lit_int64(0);
  outC->_L22.odo.o_min = kcg_lit_int64(0);
  outC->_L22.odo.o_max = kcg_lit_int64(0);
  outC->_L22.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L22.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L22.speed.v_lower = kcg_lit_int64(0);
  outC->_L22.speed.v_upper = kcg_lit_int64(0);
  outC->_L22.acceleration = kcg_lit_int64(0);
  outC->_L22.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L24.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L24.btm_msg.present = kcg_true;
  outC->_L24.btm_msg.checkResult = kcg_true;
  outC->_L24.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L24.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L24.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L24.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L24.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L24.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L24.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L24.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L24.rtm_msg.present = kcg_true;
  outC->_L24.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L24.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L24.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L24.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L24.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L24.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L24.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L24.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L24.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L24.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L24.packets.PacketHeaders[idx13].nid_packet = kcg_lit_int64(0);
    outC->_L24.packets.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L24.packets.PacketHeaders[idx13].valid = kcg_true;
    outC->_L24.packets.PacketHeaders[idx13].startAddress = kcg_lit_int64(0);
    outC->_L24.packets.PacketHeaders[idx13].endAddress = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L24.packets.PacketData[idx14] = kcg_lit_int64(0);
  }
  outC->_L25.valid = kcg_true;
  outC->_L25.info.train_status.valid = kcg_true;
  outC->_L25.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L25.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L25.info.brake_status.valid = kcg_true;
  outC->_L25.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L25.info.brake_pressure.valid = kcg_true;
  outC->_L25.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L25.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L25.info.train_data_info.valid = kcg_true;
  outC->_L25.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L25.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L25.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L25.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L25.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L25.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L25.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L25.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L25.info.train_data_info.nationSystems[idx15] = kcg_lit_int64(0);
  }
  outC->_L25.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 4; idx16++) {
    outC->_L25.info.train_data_info.tractionSystem[idx16].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25.info.train_data_info.tractionSystem[idx16].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L25.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L26.settingUpConnectionHasFailed = kcg_true;
  outC->_L26.connectionLost = kcg_true;
  outC->trainPositionDeltaMax = kcg_lit_float64(0.0);
  outC->trainPositionNominal = kcg_lit_float64(0.0);
  outC->trainPositionDeltaMin = kcg_lit_float64(0.0);
  outC->timestamp = kcg_lit_int64(0);
  outC->clockEVC = kcg_true;
  outC->debugMobileHwStatus.valid = kcg_true;
  outC->debugMobileHwStatus.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->debugMobileHwStatus.settingUpConnectionHasFailed = kcg_true;
  outC->debugMobileHwStatus.connectionLost = kcg_true;
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugInterventionSpeed = kcg_lit_float64(0.0);
  outC->debugPermittedSpeed = kcg_lit_float64(0.0);
  outC->debugTrainPositionNominal = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 999; idx17++) {
    outC->API_toDMI[idx17] = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 311; idx18++) {
    outC->API_fromDMI[idx18] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->_L247.reset = kcg_true;
  outC->_L247.targetSpeed = kcg_lit_float64(0.0);
  outC->_L247.traction = kcg_lit_float64(0.0);
  outC->_L247.brake = kcg_lit_float64(0.0);
  outC->_L247.initialPosition = kcg_lit_float64(0.0);
  outC->_L247.initialVelocity = kcg_lit_float64(0.0);
  outC->_L247.mode = kcg_lit_int64(0);
  outC->_L247.level = kcg_lit_int64(0);
  outC->_L247.mobileHWStatus = kcg_lit_int64(0);
  outC->_L247.openDesk = kcg_true;
  outC->_L238 = M_LEVEL_Level_0;
  outC->_L222 = M_MODE_Full_Supervision;
  for (idx19 = 0; idx19 < 999; idx19++) {
    outC->_L156[idx19] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.Message.valid = kcg_true;
  outC->_L2.Message.nid_message = kcg_lit_int64(0);
  outC->_L2.Message.l_message = kcg_lit_int64(0);
  outC->_L2.Message.t_train = kcg_lit_int64(0);
  outC->_L2.Message.nid_engine = kcg_lit_int64(0);
  outC->_L2.Message.field1 = kcg_lit_int64(0);
  outC->_L2.Message.field2 = kcg_lit_int64(0);
  outC->_L2.Message.field3 = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 50; idx20++) {
    outC->_L2.OptionalPackets[idx20] = kcg_lit_int64(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L3.networkID = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 999; idx21++) {
    outC->_L4[idx21] = kcg_lit_int64(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.info.isolation_status.valid = kcg_true;
  outC->_L5.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L5.info.brake_command.valid = kcg_true;
  outC->_L5.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L5.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L5.info.brake_inhibition.valid = kcg_true;
  outC->_L5.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L5.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L5.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L5.info.type_I_train_commands.valid = kcg_true;
  outC->_L5.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L5.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L5.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L5.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L5.info.change_traction_system.valid = kcg_true;
  outC->_L5.info.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L5.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->_L5.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L5.info.change_traction_system.m_voltage.NID_ctraction = kcg_lit_int64(
      0);
  outC->_L5.info.passenger_door_control_info.valid = kcg_true;
  outC->_L5.info.passenger_door_control_info.door_control_info = kcg_lit_int64(0);
  outC->_L5.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L5.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L5.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L5.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L5.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  /* _L1=(EVC#1)/ */ EVC_init(&outC->Context_EVC_1);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_init_Toolbox(
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->EVC_fromTIU,
    (TIU_Input_msg_API_TIU_Pkg *) &cInit_API_fromTIU_Testbench_EnvSim);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cInit_toRTM_Testbench_EnvSim);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU_Testbench_EnvSim);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_toRTM_Management,
    (RadioManagement_T_API_RadioCommunication_Pkg *)
      &cInitRTMManagement_Testbench_EnvSim);
  kcg_copy_GUI_to_EVC_EnvSim(
    &outC->fromGUI,
    (GUI_to_EVC_EnvSim *) &cEMPTY_GUI2EVC_EnvSim_Internal);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ROOT_Simulation_reset_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC)
{
  outC->init = kcg_true;
  /* _L1=(EVC#1)/ */ EVC_reset(&outC->Context_EVC_1);
  /* _L21=(Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete#1)/ */
  TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
    &outC->Context_TestEnvironmentSimulation_IncludingRBC_Complete_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->EVC_fromTIU,
    (TIU_Input_msg_API_TIU_Pkg *) &cInit_API_fromTIU_Testbench_EnvSim);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    (M_TrainTrack_Message_T_TM_radio_messages *) &cInit_toRTM_Testbench_EnvSim);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU_Testbench_EnvSim);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_toRTM_Management,
    (RadioManagement_T_API_RadioCommunication_Pkg *)
      &cInitRTMManagement_Testbench_EnvSim);
  kcg_copy_GUI_to_EVC_EnvSim(
    &outC->fromGUI,
    (GUI_to_EVC_EnvSim *) &cEMPTY_GUI2EVC_EnvSim_Internal);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ROOT_Simulation_Testbench_EnvSim.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

