/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcBrakeCmd/ */
void CalcBrakeCmd_SDM_Commands_Pkg(
  /* in_sdmCmd/ */
  SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  /* trigSB/ */
  static kcg_bool last_trigSB;
  /* trigEB/ */
  static kcg_bool last_trigEB;

  last_trigSB = outC->trigSB;
  last_trigEB = outC->trigEB;
  outC->_L82 = release_brake_TIU_Types_Pkg;
  outC->_L78 = brake_signal_command_not_defined_TIU_Types_Pkg;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L9, speeds);
  outC->_L10 = outC->_L9.OdoStandStill;
  outC->_L19 =
    Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L8, NationalValues);
  outC->_L14 = outC->_L8.q_nvemrrls;
  outC->_L16 = outC->_L14 == outC->_L19;
  outC->RevokeEBBeforeStandStill = outC->_L16;
  outC->_L22 = outC->RevokeEBBeforeStandStill;
  outC->_L23 = outC->_L22 | outC->_L10;
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->_L1, in_sdmCmd);
  outC->_L6 = outC->_L1.revokedSB;
  outC->_L29 = TSM_SDM_Types_Pkg;
  outC->_L7 = outC->_L1.sdmType;
  outC->_L28 = outC->_L7 == outC->_L29;
  outC->TSM = outC->_L28;
  outC->_L32 = outC->TSM;
  outC->_L20 = Q_NVSBTSMPERM_No;
  outC->_L17 = outC->_L8.q_nvsbtsmperm;
  outC->_L18 = outC->_L17 == outC->_L20;
  outC->NoSBinTSM = outC->_L18;
  outC->_L31 = outC->NoSBinTSM;
  outC->_L33 = outC->_L31 & outC->_L32;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L15, TrainData_int);
  outC->_L52 = outC->_L15.isSB_CmdAvailable;
  outC->_L34 = !outC->_L52;
  outC->_L30 = outC->_L34 | outC->_L33;
  outC->SB2EB = outC->_L30;
  outC->_L48 = outC->SB2EB;
  outC->_L47 = outC->_L48 & outC->_L6;
  outC->_L4 = outC->_L1.revokedEB;
  outC->_L51 = outC->_L4 | outC->_L47;
  outC->_L27 = outC->_L51 & outC->_L23;
  outC->revEB = outC->_L27;
  outC->_L69 = outC->revEB;
  /* _L81= */
  if (outC->_L69) {
    outC->_L81 = outC->_L82;
  }
  else {
    outC->_L81 = outC->_L78;
  }
  outC->_L79 = apply_brake_TIU_Types_Pkg;
  outC->_L55 = !outC->_L69;
  outC->_L64 = last_trigEB;
  outC->_L65 = outC->_L64 & outC->_L55;
  outC->_L5 = outC->_L1.triggeredSB;
  outC->_L45 = outC->SB2EB;
  outC->_L44 = outC->_L45 & outC->_L5;
  outC->_L3 = outC->_L1.ebCmd;
  outC->_L2 = outC->_L1.triggeredEB;
  outC->_L21 = outC->_L2 | outC->_L3;
  outC->_L50 = outC->_L21 | outC->_L44;
  outC->_L54 = outC->_L50 | outC->_L65;
  /* _L80= */
  if (outC->_L54) {
    outC->_L80 = outC->_L79;
  }
  else {
    outC->_L80 = outC->_L81;
  }
  outC->_L77 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L75 = release_brake_TIU_Types_Pkg;
  outC->_L35 = outC->TSM;
  outC->_L36 = !outC->_L35;
  outC->_L37 = outC->NoSBinTSM;
  outC->_L38 = !outC->_L37;
  outC->_L39 = outC->_L38 & outC->_L35;
  outC->_L40 = outC->_L39 | outC->_L36;
  outC->_L41 = outC->_L40 & outC->_L52;
  outC->SB2SB = outC->_L41;
  outC->_L49 = outC->SB2SB;
  outC->_L46 = outC->_L6 & outC->_L49;
  outC->revSB = outC->_L46;
  outC->_L70 = outC->revSB;
  /* _L74= */
  if (outC->_L70) {
    outC->_L74 = outC->_L75;
  }
  else {
    outC->_L74 = outC->_L77;
  }
  outC->_L73 = apply_brake_TIU_Types_Pkg;
  outC->_L56 = !outC->_L70;
  outC->_L66 = last_trigSB;
  outC->_L57 = outC->_L66 & outC->_L56;
  outC->_L43 = outC->SB2SB;
  outC->_L42 = outC->_L5 & outC->_L43;
  outC->_L61 = outC->_L42 | outC->_L57;
  /* _L71= */
  if (outC->_L61) {
    outC->_L71 = outC->_L73;
  }
  else {
    outC->_L71 = outC->_L74;
  }
  outC->trigSB = outC->_L61;
  outC->_L53 = kcg_true;
  outC->_L63.valid = outC->_L53;
  outC->_L63.m_servicebrake_cm = outC->_L71;
  outC->_L63.m_emergencybrake_cm = outC->_L80;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &outC->_L63);
  outC->trigEB = outC->_L54;
}

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakeCmd_init_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L78 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L79 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L80 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L81 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L82 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L77 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L75 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L74 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L73 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L71 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L63.valid = kcg_true;
  outC->_L63.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L63.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L64 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = CSM_SDM_Types_Pkg;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = Q_NVSBTSMPERM_No;
  outC->_L19 = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L18 = kcg_true;
  outC->_L17 = Q_NVSBTSMPERM_No;
  outC->_L16 = kcg_true;
  outC->_L15.isSB_FBAvailable = kcg_true;
  outC->_L15.isSB_CmdAvailable = kcg_true;
  outC->_L15.isTCOAvailable = kcg_true;
  outC->_L15.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L15.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L15.T_b_limit = kcg_lit_int32(0);
  outC->_L14 = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L10 = kcg_true;
  outC->_L9.V_est = kcg_lit_int32(0);
  outC->_L9.V_MRSP = kcg_lit_int32(0);
  outC->_L9.V_release = kcg_lit_int32(0);
  outC->_L9.V_target = kcg_lit_int32(0);
  outC->_L9.v_p_mrdt = kcg_lit_int32(0);
  outC->_L9.v_p_dmi = kcg_lit_int32(0);
  outC->_L9.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L9.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L9.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L9.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L9.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L9.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L9.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L9.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L9.OdoStandStill = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.d_validnv = kcg_lit_int32(0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L8.nid_cArray[idx].valid = kcg_true;
    outC->_L8.nid_cArray[idx].nid_c = kcg_lit_int32(0);
  }
  outC->_L8.v_nvshunt = kcg_lit_int32(0);
  outC->_L8.v_nvstff = kcg_lit_int32(0);
  outC->_L8.v_nvonsight = kcg_lit_int32(0);
  outC->_L8.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L8.v_nvunfit = kcg_lit_int32(0);
  outC->_L8.v_nvrel = kcg_lit_int32(0);
  outC->_L8.d_nvroll = kcg_lit_int32(0);
  outC->_L8.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L8.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L8.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L8.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L8.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L8.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L8.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L8.d_nvovtrp = kcg_lit_int32(0);
  outC->_L8.t_nvovtrp = kcg_lit_int32(0);
  outC->_L8.d_nvpotrp = kcg_lit_int32(0);
  outC->_L8.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L8.t_nvcontact = kcg_lit_int32(0);
  outC->_L8.m_nvderun = M_NVDERUN_No;
  outC->_L8.d_nvstff = kcg_lit_int32(0);
  outC->_L8.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L8.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L8.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L8.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L8.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L8.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L8.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L8.nvkvintsetArray[idx2].valid = kcg_true;
    outC->_L8.nvkvintsetArray[idx2].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L8.nvkvintsetArray[idx2].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L8.nvkvintsetArray[idx2].a_nvp23 = kcg_lit_float32(0.0);
    for (idx1 = 0; idx1 < 7; idx1++) {
      outC->_L8.nvkvintsetArray[idx2].nvkintArray[idx1].valid = kcg_true;
      outC->_L8.nvkvintsetArray[idx2].nvkintArray[idx1].v_nvkvint = kcg_lit_int32(0);
      outC->_L8.nvkvintsetArray[idx2].nvkintArray[idx1].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L8.nvkvintsetArray[idx2].nvkintArray[idx1].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L8.nvkrintArray[idx3].valid = kcg_true;
    outC->_L8.nvkrintArray[idx3].l_nvkrint = L_NVKRINT_0m;
    outC->_L8.nvkrintArray[idx3].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L8.m_nvktint = kcg_lit_float32(0.0);
  outC->_L7 = CSM_SDM_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.estimatedSpeed = kcg_lit_int32(0);
  outC->_L1.valid_v_est = kcg_true;
  outC->_L1.permittedSpeed = kcg_lit_int32(0);
  outC->_L1.valid_v_permitted = kcg_true;
  outC->_L1.releaseSpeed = kcg_lit_int32(0);
  outC->_L1.valid_v_release = kcg_true;
  outC->_L1.mrdtSpeed = kcg_lit_int32(0);
  outC->_L1.valid_v_mrdt = kcg_true;
  outC->_L1.sbiSpeed = kcg_lit_int32(0);
  outC->_L1.valid_v_sbi = kcg_true;
  outC->_L1.targetDistance = kcg_lit_int32(0);
  outC->_L1.valid_targetDistance = kcg_true;
  outC->_L1.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.sdmType = CSM_SDM_Types_Pkg;
  outC->_L1.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1.revokedSB = kcg_true;
  outC->_L1.triggeredSB = kcg_true;
  outC->_L1.revokedEB = kcg_true;
  outC->_L1.triggeredEB = kcg_true;
  outC->_L1.revokedTCO = kcg_true;
  outC->_L1.triggeredTCO = kcg_true;
  outC->_L1.ebCmd = kcg_true;
  outC->revEB = kcg_true;
  outC->revSB = kcg_true;
  outC->SB2SB = kcg_true;
  outC->SB2EB = kcg_true;
  outC->TSM = kcg_true;
  outC->RevokeEBBeforeStandStill = kcg_true;
  outC->NoSBinTSM = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->trigEB = kcg_false;
  outC->trigSB = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->trigEB = kcg_false;
  outC->trigSB = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcBrakeCmd_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

