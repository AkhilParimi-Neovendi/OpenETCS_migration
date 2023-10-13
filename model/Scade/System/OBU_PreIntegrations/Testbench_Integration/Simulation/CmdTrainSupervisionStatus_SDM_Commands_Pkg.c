/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/ */
void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  /* SupervisedTargetsListUpdated/ */
  kcg_bool SupervisedTargetsListUpdated,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg sdmType_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool triggeredSB_partial;
  /* revokedEB/ */
  static kcg_bool revokedEB_partial;
  /* triggeredEB/ */
  static kcg_bool triggeredEB_partial;
  /* revokedTCO/ */
  static kcg_bool revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool triggeredTCO_partial;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg status_partial;
  /* modeInterplay: */
  static SSM_ST_modeInterplay modeInterplay_state_nxt_partial;
  /* modeInterplay: */
  static kcg_bool modeInterplay_reset_nxt_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay modeInterplay_fired_partial;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool CSM_reset_prv_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool CSM_reset_sel_CSM_modeInterplay;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _1_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _2_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _3_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _4_revokedSB_partial;
  /* revokedSB/ */
  static kcg_bool _5_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _6_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _7_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _8_revokedSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM:InterventionStatus:<1> */
  static kcg_bool tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:InterventionStatus:<2> */
  static kcg_bool tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay CSM_fired_strong_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool CSM_reset_act_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay CSM_state_act_partial_CSM_modeInterplay;
  /* triggeredSB/ */
  static kcg_bool _9_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _10_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _11_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _12_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _13_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _14_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _15_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _16_triggeredSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _17_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _18_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _19_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _20_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _21_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _22_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _23_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _24_revokedSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM:WarningStatus:<1> */
  static kcg_bool tr_1_guard_WarningStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:WarningStatus:<2> */
  static kcg_bool tr_2_guard_WarningStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _25_CSM_fired_strong_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _26_CSM_reset_act_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _27_CSM_state_act_partial_CSM_modeInterplay;
  /* triggeredSB/ */
  static kcg_bool _28_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _29_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _30_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _31_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _32_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _33_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _34_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _35_triggeredSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _36_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _37_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _38_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _39_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _40_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _41_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _42_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _43_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _44_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _45_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _46_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _47_revokedSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM:OverspeedStatus:<1> */
  static kcg_bool tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:OverspeedStatus:<2> */
  static kcg_bool tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:OverspeedStatus:<3> */
  static kcg_bool tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _48_CSM_fired_strong_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _49_CSM_reset_act_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _50_CSM_state_act_partial_CSM_modeInterplay;
  /* triggeredSB/ */
  static kcg_bool _51_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _52_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _53_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _54_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _55_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _56_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _57_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _58_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _59_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _60_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _61_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _62_triggeredSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM:NormalStatus:<1> */
  static kcg_bool tr_1_guard_NormalStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:NormalStatus:<2> */
  static kcg_bool tr_2_guard_NormalStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:NormalStatus:<3> */
  static kcg_bool tr_3_guard_NormalStatus_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _63_CSM_fired_strong_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _64_CSM_reset_act_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _65_CSM_state_act_partial_CSM_modeInterplay;
  /* triggeredSB/ */
  static kcg_bool _66_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _67_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _68_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _69_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _70_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _71_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _72_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _73_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _74_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _75_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _76_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _77_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _78_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _79_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _80_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _81_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _82_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _83_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _84_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _85_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _86_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _87_triggeredSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM:Init:<1> */
  static kcg_bool tr_1_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<2> */
  static kcg_bool tr_2_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<3> */
  static kcg_bool tr_3_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<4> */
  static kcg_bool tr_4_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<5> */
  static kcg_bool tr_5_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<6> */
  static kcg_bool tr_6_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<7> */
  static kcg_bool tr_7_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<8> */
  static kcg_bool tr_8_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM:Init:<9> */
  static kcg_bool tr_9_guard_Init_CSM_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _88_CSM_fired_strong_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _89_CSM_reset_act_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _90_CSM_state_act_partial_CSM_modeInterplay;
  /* triggeredSB/ */
  static kcg_bool _91_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _92_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _93_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _94_revokedSupervisionStatus_partial;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay CSM_fired_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool CSM_reset_nxt_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay CSM_state_nxt_partial_CSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _95_status_partial;
  /* triggeredEB/ */
  static kcg_bool _96_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _97_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _98_sdmType_partial;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _99_CSM_fired_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _100_CSM_reset_nxt_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _101_CSM_state_nxt_partial_CSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _102_status_partial;
  /* triggeredEB/ */
  static kcg_bool _103_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _104_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _105_sdmType_partial;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _106_CSM_fired_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _107_CSM_reset_nxt_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _108_CSM_state_nxt_partial_CSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _109_status_partial;
  /* triggeredEB/ */
  static kcg_bool _110_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _111_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _112_sdmType_partial;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _113_CSM_fired_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _114_CSM_reset_nxt_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _115_CSM_state_nxt_partial_CSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _116_status_partial;
  /* triggeredEB/ */
  static kcg_bool _117_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _118_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _119_sdmType_partial;
  /* modeInterplay:CSM:CSM: */
  static SSM_TR_CSM_CSM_modeInterplay _120_CSM_fired_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static kcg_bool _121_CSM_reset_nxt_partial_CSM_modeInterplay;
  /* modeInterplay:CSM:CSM: */
  static SSM_ST_CSM_CSM_modeInterplay _122_CSM_state_nxt_partial_CSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _123_status_partial;
  /* triggeredEB/ */
  static kcg_bool _124_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _125_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _126_sdmType_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _127_sdmType_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _128_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _129_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _130_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _131_triggeredSB_partial;
  /* revokedEB/ */
  static kcg_bool _132_revokedEB_partial;
  /* triggeredEB/ */
  static kcg_bool _133_triggeredEB_partial;
  /* revokedTCO/ */
  static kcg_bool _134_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _135_triggeredTCO_partial;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _136_status_partial;
  /* modeInterplay: */
  static SSM_ST_modeInterplay _137_modeInterplay_state_nxt_partial;
  /* modeInterplay: */
  static kcg_bool _138_modeInterplay_reset_nxt_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay _139_modeInterplay_fired_partial;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool SM4_reset_prv_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool SM4_reset_sel_TSM_modeInterplay;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _140_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _141_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _142_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _143_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _144_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _145_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _146_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _147_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _148_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _149_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _150_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _151_revokedTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _152_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _153_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _154_revokedSupervisionStatus_partial;
  /* revokedTCO/ */
  static kcg_bool _155_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _156_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _157_revokedSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:Intervention:<1> */
  static kcg_bool tr_1_guard_Intervention_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Intervention:<2> */
  static kcg_bool tr_2_guard_Intervention_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Intervention:<3> */
  static kcg_bool tr_3_guard_Intervention_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _158_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _159_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _160_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _161_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _162_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _163_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _164_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _165_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _166_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _167_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _168_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _169_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _170_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _171_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _172_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _173_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _174_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _175_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _176_revokedTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _177_revokedSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _178_revokedSB_partial;
  /* revokedTCO/ */
  static kcg_bool _179_revokedTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _180_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _181_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _182_revokedSupervisionStatus_partial;
  /* revokedTCO/ */
  static kcg_bool _183_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _184_revokedSB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _185_revokedSupervisionStatus_partial;
  /* revokedTCO/ */
  static kcg_bool _186_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _187_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _188_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _189_revokedSupervisionStatus_partial;
  /* revokedTCO/ */
  static kcg_bool _190_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _191_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _192_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _193_revokedSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:Warning:<1> */
  static kcg_bool tr_1_guard_Warning_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Warning:<2> */
  static kcg_bool tr_2_guard_Warning_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Warning:<3> */
  static kcg_bool tr_3_guard_Warning_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Warning:<4> */
  static kcg_bool tr_4_guard_Warning_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _194_SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _195_SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _196_SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _197_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _198_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _199_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _200_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _201_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _202_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _203_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _204_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _205_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _206_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _207_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _208_triggeredTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _209_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _210_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _211_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _212_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _213_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _214_triggeredTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _215_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _216_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _217_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _218_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _219_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _220_triggeredTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _221_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _222_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _223_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _224_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _225_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _226_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _227_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _228_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _229_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _230_triggeredTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _231_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _232_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _233_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _234_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _235_revokedSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _236_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _237_revokedTCO_partial;
  /* revokedSB/ */
  static kcg_bool _238_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _239_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _240_revokedSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _241_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _242_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _243_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _244_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _245_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _246_revokedSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _247_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _248_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _249_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _250_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _251_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _252_revokedSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:Overspeed:<1> */
  static kcg_bool tr_1_guard_Overspeed_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Overspeed:<2> */
  static kcg_bool tr_2_guard_Overspeed_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Overspeed:<3> */
  static kcg_bool tr_3_guard_Overspeed_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Overspeed:<4> */
  static kcg_bool tr_4_guard_Overspeed_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Overspeed:<5> */
  static kcg_bool tr_5_guard_Overspeed_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _253_SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _254_SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _255_SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _256_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _257_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _258_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _259_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _260_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _261_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _262_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _263_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _264_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _265_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _266_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _267_triggeredTCO_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _268_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _269_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _270_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _271_triggeredSB_partial;
  /* revokedTCO/ */
  static kcg_bool _272_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _273_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _274_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _275_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _276_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _277_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _278_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _279_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _280_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _281_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _282_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _283_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _284_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _285_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _286_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _287_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _288_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _289_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _290_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _291_triggeredSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:Indication:<1> */
  static kcg_bool tr_1_guard_Indication_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Indication:<2> */
  static kcg_bool tr_2_guard_Indication_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Indication:<3> */
  static kcg_bool tr_3_guard_Indication_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Indication:<4> */
  static kcg_bool tr_4_guard_Indication_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Indication:<5> */
  static kcg_bool tr_5_guard_Indication_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _292_SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _293_SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _294_SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _295_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _296_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _297_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _298_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _299_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _300_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _301_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _302_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _303_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _304_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _305_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _306_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _307_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _308_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _309_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _310_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _311_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _312_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _313_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _314_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _315_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _316_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _317_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _318_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _319_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _320_triggeredSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:Normal:<1> */
  static kcg_bool tr_1_guard_Normal_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Normal:<2> */
  static kcg_bool tr_2_guard_Normal_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Normal:<3> */
  static kcg_bool tr_3_guard_Normal_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Normal:<4> */
  static kcg_bool tr_4_guard_Normal_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:Normal:<5> */
  static kcg_bool tr_5_guard_Normal_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _321_SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _322_SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _323_SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _324_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _325_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _326_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _327_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _328_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _329_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _330_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _331_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _332_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _333_triggeredSupervisionStatus_partial;
  /* triggeredSB/ */
  static kcg_bool _334_triggeredSB_partial;
  /* triggeredTCO/ */
  static kcg_bool _335_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _336_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _337_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _338_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _339_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _340_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _341_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _342_triggeredSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _343_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _344_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _345_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _346_triggeredTCO_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _347_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _348_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _349_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _350_triggeredSupervisionStatus_partial;
  /* triggeredTCO/ */
  static kcg_bool _351_triggeredTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _352_triggeredSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _353_triggeredSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4:init:<1> */
  static kcg_bool tr_1_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:init:<2> */
  static kcg_bool tr_2_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:init:<3> */
  static kcg_bool tr_3_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:init:<4> */
  static kcg_bool tr_4_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:init:<5> */
  static kcg_bool tr_5_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4:init:<6> */
  static kcg_bool tr_6_guard_init_SM4_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _354_SM4_fired_strong_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _355_SM4_reset_act_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _356_SM4_state_act_partial_TSM_modeInterplay;
  /* triggeredTCO/ */
  static kcg_bool _357_triggeredTCO_partial;
  /* revokedTCO/ */
  static kcg_bool _358_revokedTCO_partial;
  /* triggeredSB/ */
  static kcg_bool _359_triggeredSB_partial;
  /* revokedSB/ */
  static kcg_bool _360_revokedSB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _361_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _362_revokedSupervisionStatus_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _363_status_partial;
  /* triggeredEB/ */
  static kcg_bool _364_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _365_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _366_sdmType_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _367_SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _368_SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _369_SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _370_status_partial;
  /* triggeredEB/ */
  static kcg_bool _371_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _372_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _373_sdmType_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _374_SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _375_SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _376_SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _377_status_partial;
  /* triggeredEB/ */
  static kcg_bool _378_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _379_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _380_sdmType_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _381_SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _382_SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _383_SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _384_status_partial;
  /* triggeredEB/ */
  static kcg_bool _385_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _386_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _387_sdmType_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _388_SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _389_SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _390_SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _391_status_partial;
  /* triggeredEB/ */
  static kcg_bool _392_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _393_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _394_sdmType_partial;
  /* modeInterplay:TSM:SM4: */
  static SSM_TR_SM4_TSM_modeInterplay _395_SM4_fired_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static kcg_bool _396_SM4_reset_nxt_partial_TSM_modeInterplay;
  /* modeInterplay:TSM:SM4: */
  static SSM_ST_SM4_TSM_modeInterplay _397_SM4_state_nxt_partial_TSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _398_status_partial;
  /* triggeredEB/ */
  static kcg_bool _399_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _400_revokedEB_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _401_sdmType_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _402_sdmType_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _403_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _404_triggeredSupervisionStatus_partial;
  /* revokedSB/ */
  static kcg_bool _405_revokedSB_partial;
  /* triggeredSB/ */
  static kcg_bool _406_triggeredSB_partial;
  /* revokedEB/ */
  static kcg_bool _407_revokedEB_partial;
  /* triggeredEB/ */
  static kcg_bool _408_triggeredEB_partial;
  /* revokedTCO/ */
  static kcg_bool _409_revokedTCO_partial;
  /* triggeredTCO/ */
  static kcg_bool _410_triggeredTCO_partial;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _411_status_partial;
  /* modeInterplay: */
  static SSM_ST_modeInterplay _412_modeInterplay_state_nxt_partial;
  /* modeInterplay: */
  static kcg_bool _413_modeInterplay_reset_nxt_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay _414_modeInterplay_fired_partial;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool RSM_reset_prv_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool RSM_reset_sel_RSM_modeInterplay;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _415_revokedSupervisionStatus_partial;
  /* revokedEB/ */
  static kcg_bool _416_revokedEB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _417_revokedSupervisionStatus_partial;
  /* revokedEB/ */
  static kcg_bool _418_revokedEB_partial;
  /* modeInterplay:RSM:RSM:InterventionStatus:<1> */
  static kcg_bool tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay RSM_fired_strong_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool RSM_reset_act_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay RSM_state_act_partial_RSM_modeInterplay;
  /* triggeredEB/ */
  static kcg_bool _419_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _420_revokedEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _421_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _422_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _423_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _424_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _425_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _426_triggeredEB_partial;
  /* modeInterplay:RSM:RSM:IndicationStatus:<1> */
  static kcg_bool tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay _427_RSM_fired_strong_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool _428_RSM_reset_act_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay _429_RSM_state_act_partial_RSM_modeInterplay;
  /* triggeredEB/ */
  static kcg_bool _430_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _431_revokedEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _432_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _433_revokedSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _434_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _435_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _436_triggeredEB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _437_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _438_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _439_triggeredEB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _440_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _441_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _442_triggeredEB_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _443_revokedSupervisionStatus_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _444_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _445_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _446_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _447_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _448_triggeredSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _449_triggeredEB_partial;
  /* triggeredEB/ */
  static kcg_bool _450_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _451_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _452_revokedSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _453_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _454_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _455_revokedSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _456_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _457_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _458_revokedSupervisionStatus_partial;
  /* triggeredEB/ */
  static kcg_bool _459_triggeredEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _460_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _461_revokedSupervisionStatus_partial;
  /* modeInterplay:RSM:RSM:Init:<1> */
  static kcg_bool tr_1_guard_Init_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM:Init:<2> */
  static kcg_bool tr_2_guard_Init_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM:Init:<3> */
  static kcg_bool tr_3_guard_Init_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM:Init:<4> */
  static kcg_bool tr_4_guard_Init_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM:Init:<5> */
  static kcg_bool tr_5_guard_Init_RSM_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay _462_RSM_fired_strong_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool _463_RSM_reset_act_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay _464_RSM_state_act_partial_RSM_modeInterplay;
  /* triggeredEB/ */
  static kcg_bool _465_triggeredEB_partial;
  /* revokedEB/ */
  static kcg_bool _466_revokedEB_partial;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _467_triggeredSupervisionStatus_partial;
  /* revokedSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg _468_revokedSupervisionStatus_partial;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay RSM_fired_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool RSM_reset_nxt_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay RSM_state_nxt_partial_RSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _469_status_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _470_sdmType_partial;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay _471_RSM_fired_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool _472_RSM_reset_nxt_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay _473_RSM_state_nxt_partial_RSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _474_status_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _475_sdmType_partial;
  /* modeInterplay:RSM:RSM: */
  static SSM_TR_RSM_RSM_modeInterplay _476_RSM_fired_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static kcg_bool _477_RSM_reset_nxt_partial_RSM_modeInterplay;
  /* modeInterplay:RSM:RSM: */
  static SSM_ST_RSM_RSM_modeInterplay _478_RSM_state_nxt_partial_RSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg _479_status_partial;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg _480_sdmType_partial;
  /* modeInterplay: */
  static SSM_ST_modeInterplay modeInterplay_state_act_partial;
  /* modeInterplay: */
  static kcg_bool modeInterplay_reset_act_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay modeInterplay_fired_strong_partial;
  /* modeInterplay:CSM:<2> */
  static kcg_bool tr_2_guard_CSM_modeInterplay;
  /* modeInterplay:CSM:<1> */
  static kcg_bool tr_1_guard_CSM_modeInterplay;
  /* modeInterplay: */
  static SSM_ST_modeInterplay _481_modeInterplay_state_act_partial;
  /* modeInterplay: */
  static kcg_bool _482_modeInterplay_reset_act_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay _483_modeInterplay_fired_strong_partial;
  /* modeInterplay:TSM:<2> */
  static kcg_bool tr_2_guard_TSM_modeInterplay;
  /* modeInterplay:TSM:<1> */
  static kcg_bool tr_1_guard_TSM_modeInterplay;
  /* modeInterplay: */
  static SSM_ST_modeInterplay _484_modeInterplay_state_act_partial;
  /* modeInterplay: */
  static kcg_bool _485_modeInterplay_reset_act_partial;
  /* modeInterplay: */
  static SSM_TR_modeInterplay _486_modeInterplay_fired_strong_partial;
  /* modeInterplay:RSM:<2> */
  static kcg_bool tr_2_guard_RSM_modeInterplay;
  /* modeInterplay:RSM:<1> */
  static kcg_bool tr_1_guard_RSM_modeInterplay;
  /* status/ */
  static SupervisionStatus_T_SDM_Types_Pkg last_status;
  /* triggeredTCO/ */
  static kcg_bool last_triggeredTCO;
  /* revokedTCO/ */
  static kcg_bool last_revokedTCO;
  /* triggeredEB/ */
  static kcg_bool last_triggeredEB;
  /* revokedEB/ */
  static kcg_bool last_revokedEB;
  /* triggeredSB/ */
  static kcg_bool last_triggeredSB;
  /* revokedSB/ */
  static kcg_bool last_revokedSB;
  /* triggeredSupervisionStatus/ */
  static SupervisionStatus_T_SDM_Types_Pkg last_triggeredSupervisionStatus;
  /* sdmType/ */
  static SDM_Types_T_SDM_Types_Pkg last_sdmType;
  /* modeInterplay: */
  static kcg_bool modeInterplay_reset_sel;
  /* modeInterplay: */
  static kcg_bool modeInterplay_reset_prv;

  last_status = outC->status;
  last_triggeredTCO = outC->triggeredTCO;
  last_revokedTCO = outC->revokedTCO;
  last_triggeredEB = outC->triggeredEB;
  last_revokedEB = outC->revokedEB;
  last_triggeredSB = outC->triggeredSB;
  last_revokedSB = outC->revokedSB;
  last_triggeredSupervisionStatus = outC->triggeredSupervisionStatus;
  last_sdmType = outC->sdmType;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L31, TrainData_int);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L26, trainLocations);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L14, locations);
  /* _L24=(SDM_Commands_Pkg::CommandTripBraking#1)/ */
  CommandTripBraking_SDM_Commands_Pkg(
    &outC->_L26,
    &outC->_L14,
    &outC->_L31,
    &outC->Context_CommandTripBraking_1);
  outC->_L24 = outC->Context_CommandTripBraking_1.eb;
  outC->ebCmd = outC->_L24;
  outC->modeInterplay_state_sel = outC->modeInterplay_state_nxt;
  /* _L22=(SDM_Commands_Pkg::CalcRSMandPreindicationLocation#1)/ */
  CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
    &outC->_L14,
    &outC->_L26,
    &outC->Context_CalcRSMandPreindicationLocation_1);
  outC->_L22 =
    outC->Context_CalcRSMandPreindicationLocation_1.isPreIndicationLocation;
  outC->_L23 = outC->Context_CalcRSMandPreindicationLocation_1.isRSMLocation;
  outC->isRSMLocation = outC->_L23;
  outC->isPreIndicationLocation = outC->_L22;
  /* modeInterplay: */
  switch (outC->modeInterplay_state_sel) {
    case SSM_st_RSM_modeInterplay :
      tr_2_guard_RSM_modeInterplay = SupervisedTargetsListUpdated &
        outC->isPreIndicationLocation & (!outC->isRSMLocation);
      tr_1_guard_RSM_modeInterplay = SupervisedTargetsListUpdated &
        (!outC->isPreIndicationLocation);
      if (tr_1_guard_RSM_modeInterplay) {
        _484_modeInterplay_state_act_partial = SSM_st_CSM_modeInterplay;
      }
      else if (tr_2_guard_RSM_modeInterplay) {
        _484_modeInterplay_state_act_partial = SSM_st_TSM_modeInterplay;
      }
      else {
        _484_modeInterplay_state_act_partial = SSM_st_RSM_modeInterplay;
      }
      outC->modeInterplay_state_act = _484_modeInterplay_state_act_partial;
      break;
    case SSM_st_TSM_modeInterplay :
      tr_2_guard_TSM_modeInterplay = SupervisedTargetsListUpdated &
        (!outC->isPreIndicationLocation);
      tr_1_guard_TSM_modeInterplay = outC->isRSMLocation;
      if (tr_1_guard_TSM_modeInterplay) {
        _481_modeInterplay_state_act_partial = SSM_st_RSM_modeInterplay;
      }
      else if (tr_2_guard_TSM_modeInterplay) {
        _481_modeInterplay_state_act_partial = SSM_st_CSM_modeInterplay;
      }
      else {
        _481_modeInterplay_state_act_partial = SSM_st_TSM_modeInterplay;
      }
      outC->modeInterplay_state_act = _481_modeInterplay_state_act_partial;
      break;
    case SSM_st_CSM_modeInterplay :
      tr_2_guard_CSM_modeInterplay = SupervisedTargetsListUpdated &
        outC->isRSMLocation;
      tr_1_guard_CSM_modeInterplay = outC->isPreIndicationLocation;
      if (tr_1_guard_CSM_modeInterplay) {
        modeInterplay_state_act_partial = SSM_st_TSM_modeInterplay;
      }
      else if (tr_2_guard_CSM_modeInterplay) {
        modeInterplay_state_act_partial = SSM_st_RSM_modeInterplay;
      }
      else {
        modeInterplay_state_act_partial = SSM_st_CSM_modeInterplay;
      }
      outC->modeInterplay_state_act = modeInterplay_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  modeInterplay_reset_prv = outC->modeInterplay_reset_act;
  /* modeInterplay: */
  switch (outC->modeInterplay_state_sel) {
    case SSM_st_RSM_modeInterplay :
      if (tr_1_guard_RSM_modeInterplay) {
        _485_modeInterplay_reset_act_partial = kcg_true;
      }
      else {
        _485_modeInterplay_reset_act_partial = tr_2_guard_RSM_modeInterplay;
      }
      outC->modeInterplay_reset_act = _485_modeInterplay_reset_act_partial;
      break;
    case SSM_st_TSM_modeInterplay :
      if (tr_1_guard_TSM_modeInterplay) {
        _482_modeInterplay_reset_act_partial = kcg_true;
      }
      else {
        _482_modeInterplay_reset_act_partial = tr_2_guard_TSM_modeInterplay;
      }
      outC->modeInterplay_reset_act = _482_modeInterplay_reset_act_partial;
      break;
    case SSM_st_CSM_modeInterplay :
      if (tr_1_guard_CSM_modeInterplay) {
        modeInterplay_reset_act_partial = kcg_true;
      }
      else {
        modeInterplay_reset_act_partial = tr_2_guard_CSM_modeInterplay;
      }
      outC->modeInterplay_reset_act = modeInterplay_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* modeInterplay: */
  switch (outC->modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init = kcg_true;
      }
      /* modeInterplay:RSM:RSM: */
      if (outC->init) {
        outC->RSM_state_sel_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
      }
      else {
        outC->RSM_state_sel_RSM_modeInterplay = outC->RSM_state_nxt_RSM_modeInterplay;
      }
      outC->RSM_clock_RSM_modeInterplay = outC->RSM_state_sel_RSM_modeInterplay;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L1_RSM_modeInterplay, speeds);
      outC->_L57_RSM_modeInterplay = outC->_L1_RSM_modeInterplay.OdoStandStill;
      outC->r0_RSM_modeInterplay = outC->_L57_RSM_modeInterplay;
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay =
            outC->r0_RSM_modeInterplay;
          if (tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay) {
            RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          }
          else {
            RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_InterventionStatus_RSM_RSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L3_RSM_modeInterplay = outC->_L1_RSM_modeInterplay.V_release;
      outC->_L2_RSM_modeInterplay = outC->_L1_RSM_modeInterplay.V_est;
      outC->_L4_RSM_modeInterplay = outC->_L2_RSM_modeInterplay <=
        outC->_L3_RSM_modeInterplay;
      outC->_L5_RSM_modeInterplay = !outC->_L4_RSM_modeInterplay;
      outC->t2_RSM_modeInterplay = outC->_L5_RSM_modeInterplay;
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay = outC->t2_RSM_modeInterplay;
          if (tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay) {
            _429_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_InterventionStatus_RSM_RSM_modeInterplay;
          }
          else {
            _429_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L35_RSM_modeInterplay = Intervention_Supervision_SDM_Types_Pkg;
      outC->_L8_RSM_modeInterplay = last_status;
      outC->_L51_RSM_modeInterplay = outC->_L8_RSM_modeInterplay !=
        outC->_L35_RSM_modeInterplay;
      outC->_L39_RSM_modeInterplay = outC->t2_RSM_modeInterplay;
      outC->_L31_RSM_modeInterplay = Indication_Supervision_SDM_Types_Pkg;
      outC->_L52_RSM_modeInterplay = outC->_L8_RSM_modeInterplay !=
        outC->_L31_RSM_modeInterplay;
      outC->_L37_RSM_modeInterplay = outC->_L52_RSM_modeInterplay &
        outC->_L39_RSM_modeInterplay & outC->_L51_RSM_modeInterplay;
      outC->notInt2Int_RSM_modeInterplay = outC->_L37_RSM_modeInterplay;
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_Init_RSM_RSM_modeInterplay :
          tr_5_guard_Init_RSM_RSM_modeInterplay = outC->notInt2Int_RSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->t1_RSM_modeInterplay = outC->_L4_RSM_modeInterplay;
      outC->_L7_RSM_modeInterplay = outC->t1_RSM_modeInterplay;
      outC->r1_RSM_modeInterplay = outC->_L7_RSM_modeInterplay;
      outC->_L26_RSM_modeInterplay = outC->r1_RSM_modeInterplay;
      outC->_L21_RSM_modeInterplay = Overspeed_Supervision_SDM_Types_Pkg;
      outC->_L24_RSM_modeInterplay = outC->_L8_RSM_modeInterplay ==
        outC->_L21_RSM_modeInterplay;
      outC->_L22_RSM_modeInterplay = Warning_Supervision_SDM_Types_Pkg;
      outC->_L25_RSM_modeInterplay = outC->_L22_RSM_modeInterplay ==
        outC->_L8_RSM_modeInterplay;
      outC->_L23_RSM_modeInterplay = outC->_L25_RSM_modeInterplay |
        outC->_L24_RSM_modeInterplay;
      outC->_L27_RSM_modeInterplay = outC->_L23_RSM_modeInterplay &
        outC->_L26_RSM_modeInterplay;
      outC->WS_OS2IS_RSM_modeInterplay = outC->_L27_RSM_modeInterplay;
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_Init_RSM_RSM_modeInterplay :
          tr_4_guard_Init_RSM_RSM_modeInterplay = outC->WS_OS2IS_RSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L15_RSM_modeInterplay = outC->t1_RSM_modeInterplay;
      outC->_L13_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
      outC->_L11_RSM_modeInterplay = outC->_L8_RSM_modeInterplay ==
        outC->_L13_RSM_modeInterplay;
      outC->_L12_RSM_modeInterplay = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L10_RSM_modeInterplay = outC->_L12_RSM_modeInterplay ==
        outC->_L8_RSM_modeInterplay;
      outC->_L14_RSM_modeInterplay = outC->_L10_RSM_modeInterplay |
        outC->_L11_RSM_modeInterplay;
      outC->_L16_RSM_modeInterplay = outC->_L14_RSM_modeInterplay &
        outC->_L15_RSM_modeInterplay;
      outC->US_NS2IS_RSM_modeInterplay = outC->_L16_RSM_modeInterplay;
      /* modeInterplay:RSM:RSM: */
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          outC->RSM_state_act_RSM_modeInterplay = RSM_state_act_partial_RSM_modeInterplay;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          outC->RSM_state_act_RSM_modeInterplay =
            _429_RSM_state_act_partial_RSM_modeInterplay;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          tr_3_guard_Init_RSM_RSM_modeInterplay = outC->US_NS2IS_RSM_modeInterplay;
          tr_2_guard_Init_RSM_RSM_modeInterplay = last_status ==
            Intervention_Supervision_SDM_Types_Pkg;
          tr_1_guard_Init_RSM_RSM_modeInterplay = last_status ==
            Indication_Supervision_SDM_Types_Pkg;
          if (tr_1_guard_Init_RSM_RSM_modeInterplay) {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          }
          else if (tr_2_guard_Init_RSM_RSM_modeInterplay) {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_InterventionStatus_RSM_RSM_modeInterplay;
          }
          else if (tr_3_guard_Init_RSM_RSM_modeInterplay) {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          }
          else if (tr_4_guard_Init_RSM_RSM_modeInterplay) {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          }
          else if (tr_5_guard_Init_RSM_RSM_modeInterplay) {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_InterventionStatus_RSM_RSM_modeInterplay;
          }
          else {
            _464_RSM_state_act_partial_RSM_modeInterplay =
              SSM_st_Init_RSM_RSM_modeInterplay;
          }
          outC->RSM_state_act_RSM_modeInterplay =
            _464_RSM_state_act_partial_RSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_5_RSM_clock_RSM_modeInterplay = outC->RSM_state_act_RSM_modeInterplay;
      /* modeInterplay:RSM:RSM: */
      switch (outC->_5_RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          outC->_L1_InterventionStatus_RSM_RSM_modeInterplay =
            Intervention_Supervision_SDM_Types_Pkg;
          _469_status_partial = outC->_L1_InterventionStatus_RSM_RSM_modeInterplay;
          _411_status_partial = _469_status_partial;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          outC->_L2_IndicationStatus_RSM_RSM_modeInterplay =
            Indication_Supervision_SDM_Types_Pkg;
          _474_status_partial = outC->_L2_IndicationStatus_RSM_RSM_modeInterplay;
          _411_status_partial = _474_status_partial;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          _479_status_partial = cSupervisionStatus_SDM_Commands_Pkg;
          _411_status_partial = _479_status_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->status = _411_status_partial;
      break;
    case SSM_st_TSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init1 = kcg_true;
      }
      /* modeInterplay:TSM:SM4: */
      if (outC->init1) {
        outC->SM4_state_sel_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
      }
      else {
        outC->SM4_state_sel_TSM_modeInterplay = outC->SM4_state_nxt_TSM_modeInterplay;
      }
      outC->SM4_clock_TSM_modeInterplay = outC->SM4_state_sel_TSM_modeInterplay;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L4_TSM_modeInterplay, speeds);
      kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L5_TSM_modeInterplay, locations);
      kcg_copy_Target_T_TargetManagement_types(&outC->_L6_TSM_modeInterplay, mrdt);
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &outC->_L47_TSM_modeInterplay,
        trainLocations);
      outC->_L48_TSM_modeInterplay = floiIsSB1;
      /* modeInterplay:TSM:_L1=(SDM_Commands_Pkg::CalcRevokationCondForTSM#1)/ */
      CalcRevokationCondForTSM_SDM_Commands_Pkg(
        &outC->_L4_TSM_modeInterplay,
        &outC->_L5_TSM_modeInterplay,
        &outC->_L6_TSM_modeInterplay,
        &outC->_L47_TSM_modeInterplay,
        outC->_L48_TSM_modeInterplay,
        &outC->Context_CalcRevokationCondForTSM_1);
      kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(
        &outC->_L1_TSM_modeInterplay,
        &outC->Context_CalcRevokationCondForTSM_1.revokationConds);
      outC->_L29_TSM_modeInterplay = outC->_L1_TSM_modeInterplay.r3;
      outC->r3_TSM_modeInterplay = outC->_L29_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          tr_3_guard_Intervention_SM4_TSM_modeInterplay = outC->r3_TSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L26_TSM_modeInterplay = outC->_L1_TSM_modeInterplay.r0;
      outC->r0_TSM_modeInterplay = outC->_L26_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          tr_2_guard_Intervention_SM4_TSM_modeInterplay = outC->r0_TSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L28_TSM_modeInterplay = outC->_L1_TSM_modeInterplay.r2;
      outC->r2_TSM_modeInterplay = outC->_L28_TSM_modeInterplay;
      outC->_L27_TSM_modeInterplay = outC->_L1_TSM_modeInterplay.r1;
      outC->r1_TSM_modeInterplay = outC->_L27_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          tr_1_guard_Intervention_SM4_TSM_modeInterplay =
            outC->r1_TSM_modeInterplay | outC->r2_TSM_modeInterplay;
          if (tr_1_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_state_act_partial_TSM_modeInterplay = SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_state_act_partial_TSM_modeInterplay = SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          else {
            SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          tr_4_guard_Warning_SM4_TSM_modeInterplay = outC->r3_TSM_modeInterplay;
          tr_3_guard_Warning_SM4_TSM_modeInterplay =
            outC->r1_TSM_modeInterplay | outC->r2_TSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* modeInterplay:TSM:_L2=(SDM_Commands_Pkg::CalcTriggerCondForTSM#1)/ */
      CalcTriggerCondForTSM_SDM_Commands_Pkg(
        &outC->_L4_TSM_modeInterplay,
        &outC->_L5_TSM_modeInterplay,
        &outC->_L6_TSM_modeInterplay,
        &outC->_L47_TSM_modeInterplay,
        outC->_L48_TSM_modeInterplay,
        &outC->Context_CalcTriggerCondForTSM_1);
      kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(
        &outC->_L2_TSM_modeInterplay,
        &outC->Context_CalcTriggerCondForTSM_1.triggerConds);
      outC->_L43_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t14;
      outC->t14_TSM_modeInterplay = outC->_L43_TSM_modeInterplay;
      outC->_L42_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t13;
      outC->t13_TSM_modeInterplay = outC->_L42_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          tr_2_guard_Warning_SM4_TSM_modeInterplay =
            outC->t13_TSM_modeInterplay | outC->t14_TSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L41_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t12;
      outC->_L40_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t11;
      outC->_L39_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t10;
      outC->_L44_TSM_modeInterplay = outC->_L39_TSM_modeInterplay |
        outC->_L40_TSM_modeInterplay | outC->_L41_TSM_modeInterplay;
      outC->t10_12_TSM_modeInterplay = outC->_L44_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          tr_1_guard_Warning_SM4_TSM_modeInterplay = outC->t10_12_TSM_modeInterplay;
          if (tr_1_guard_Warning_SM4_TSM_modeInterplay) {
            _196_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Warning_SM4_TSM_modeInterplay) {
            _196_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Warning_SM4_TSM_modeInterplay) {
            _196_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Warning_SM4_TSM_modeInterplay) {
            _196_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          else {
            _196_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Warning_SM4_TSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L38_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t9;
      outC->_L37_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t8;
      outC->_L36_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t7;
      outC->_L45_TSM_modeInterplay = outC->_L36_TSM_modeInterplay |
        outC->_L37_TSM_modeInterplay | outC->_L38_TSM_modeInterplay;
      outC->t7_9_TSM_modeInterplay = outC->_L45_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          tr_5_guard_Overspeed_SM4_TSM_modeInterplay = outC->t7_9_TSM_modeInterplay;
          tr_4_guard_Overspeed_SM4_TSM_modeInterplay = outC->r3_TSM_modeInterplay;
          tr_3_guard_Overspeed_SM4_TSM_modeInterplay = outC->t10_12_TSM_modeInterplay;
          tr_2_guard_Overspeed_SM4_TSM_modeInterplay =
            outC->t13_TSM_modeInterplay | outC->t14_TSM_modeInterplay;
          tr_1_guard_Overspeed_SM4_TSM_modeInterplay =
            outC->r1_TSM_modeInterplay | outC->r2_TSM_modeInterplay;
          if (tr_1_guard_Overspeed_SM4_TSM_modeInterplay) {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Overspeed_SM4_TSM_modeInterplay) {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Overspeed_SM4_TSM_modeInterplay) {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Overspeed_SM4_TSM_modeInterplay) {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Overspeed_SM4_TSM_modeInterplay) {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Warning_SM4_TSM_modeInterplay;
          }
          else {
            _255_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Overspeed_SM4_TSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L35_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t6;
      outC->_L34_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t5;
      outC->_L33_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t4;
      outC->_L46_TSM_modeInterplay = outC->_L33_TSM_modeInterplay |
        outC->_L34_TSM_modeInterplay | outC->_L35_TSM_modeInterplay;
      outC->t4_6_TSM_modeInterplay = outC->_L46_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          tr_5_guard_Indication_SM4_TSM_modeInterplay = outC->t4_6_TSM_modeInterplay;
          tr_4_guard_Indication_SM4_TSM_modeInterplay = outC->t7_9_TSM_modeInterplay;
          tr_3_guard_Indication_SM4_TSM_modeInterplay = outC->t10_12_TSM_modeInterplay;
          tr_2_guard_Indication_SM4_TSM_modeInterplay =
            outC->t13_TSM_modeInterplay | outC->t14_TSM_modeInterplay;
          tr_1_guard_Indication_SM4_TSM_modeInterplay =
            outC->r1_TSM_modeInterplay | outC->r2_TSM_modeInterplay;
          if (tr_1_guard_Indication_SM4_TSM_modeInterplay) {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Indication_SM4_TSM_modeInterplay) {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Indication_SM4_TSM_modeInterplay) {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Indication_SM4_TSM_modeInterplay) {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Indication_SM4_TSM_modeInterplay) {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Overspeed_SM4_TSM_modeInterplay;
          }
          else {
            _294_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L32_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t3;
      outC->t3_TSM_modeInterplay = outC->_L32_TSM_modeInterplay;
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          tr_5_guard_Normal_SM4_TSM_modeInterplay = outC->t3_TSM_modeInterplay;
          tr_4_guard_Normal_SM4_TSM_modeInterplay = outC->t4_6_TSM_modeInterplay;
          tr_3_guard_Normal_SM4_TSM_modeInterplay = outC->t7_9_TSM_modeInterplay;
          tr_2_guard_Normal_SM4_TSM_modeInterplay = outC->t10_12_TSM_modeInterplay;
          tr_1_guard_Normal_SM4_TSM_modeInterplay =
            outC->t13_TSM_modeInterplay | outC->t14_TSM_modeInterplay;
          if (tr_1_guard_Normal_SM4_TSM_modeInterplay) {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Normal_SM4_TSM_modeInterplay) {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Normal_SM4_TSM_modeInterplay) {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Normal_SM4_TSM_modeInterplay) {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Normal_SM4_TSM_modeInterplay) {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          else {
            _323_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          tr_6_guard_init_SM4_TSM_modeInterplay = outC->t3_TSM_modeInterplay;
          tr_5_guard_init_SM4_TSM_modeInterplay = outC->t4_6_TSM_modeInterplay;
          tr_4_guard_init_SM4_TSM_modeInterplay = outC->t7_9_TSM_modeInterplay;
          tr_3_guard_init_SM4_TSM_modeInterplay = outC->t13_TSM_modeInterplay |
            outC->t14_TSM_modeInterplay;
          tr_2_guard_init_SM4_TSM_modeInterplay = outC->t10_12_TSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L31_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t2;
      outC->t2_TSM_modeInterplay = outC->_L31_TSM_modeInterplay;
      outC->_L30_TSM_modeInterplay = outC->_L2_TSM_modeInterplay.t1;
      outC->t1_TSM_modeInterplay = outC->_L30_TSM_modeInterplay;
      /* modeInterplay:TSM:SM4: */
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          outC->SM4_state_act_TSM_modeInterplay = SM4_state_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          outC->SM4_state_act_TSM_modeInterplay =
            _196_SM4_state_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          outC->SM4_state_act_TSM_modeInterplay =
            _255_SM4_state_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          outC->SM4_state_act_TSM_modeInterplay =
            _294_SM4_state_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          outC->SM4_state_act_TSM_modeInterplay =
            _323_SM4_state_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          tr_1_guard_init_SM4_TSM_modeInterplay = outC->t1_TSM_modeInterplay |
            outC->t2_TSM_modeInterplay;
          if (tr_1_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_6_guard_init_SM4_TSM_modeInterplay) {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_Indication_SM4_TSM_modeInterplay;
          }
          else {
            _356_SM4_state_act_partial_TSM_modeInterplay =
              SSM_st_init_SM4_TSM_modeInterplay;
          }
          outC->SM4_state_act_TSM_modeInterplay =
            _356_SM4_state_act_partial_TSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_4_SM4_clock_TSM_modeInterplay = outC->SM4_state_act_TSM_modeInterplay;
      /* modeInterplay:TSM:SM4: */
      switch (outC->_4_SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          outC->_L1_Intervention_SM4_TSM_modeInterplay =
            Intervention_Supervision_SDM_Types_Pkg;
          _363_status_partial = outC->_L1_Intervention_SM4_TSM_modeInterplay;
          _136_status_partial = _363_status_partial;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          outC->_L1_Warning_SM4_TSM_modeInterplay = Warning_Supervision_SDM_Types_Pkg;
          _370_status_partial = outC->_L1_Warning_SM4_TSM_modeInterplay;
          _136_status_partial = _370_status_partial;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          outC->_L4_Overspeed_SM4_TSM_modeInterplay = Overspeed_Supervision_SDM_Types_Pkg;
          _377_status_partial = outC->_L4_Overspeed_SM4_TSM_modeInterplay;
          _136_status_partial = _377_status_partial;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          outC->_L1_Indication_SM4_TSM_modeInterplay =
            Indication_Supervision_SDM_Types_Pkg;
          _384_status_partial = outC->_L1_Indication_SM4_TSM_modeInterplay;
          _136_status_partial = _384_status_partial;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          outC->_L3_Normal_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
          _391_status_partial = outC->_L3_Normal_SM4_TSM_modeInterplay;
          _136_status_partial = _391_status_partial;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          _398_status_partial = cSupervisionStatus_SDM_Commands_Pkg;
          _136_status_partial = _398_status_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->status = _136_status_partial;
      break;
    case SSM_st_CSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init2 = kcg_true;
      }
      /* modeInterplay:CSM:CSM: */
      if (outC->init2) {
        outC->CSM_state_sel_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
      }
      else {
        outC->CSM_state_sel_CSM_modeInterplay = outC->CSM_state_nxt_CSM_modeInterplay;
      }
      outC->CSM_clock_CSM_modeInterplay = outC->CSM_state_sel_CSM_modeInterplay;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L2_CSM_modeInterplay, speeds);
      outC->_L21_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.V_MRSP;
      outC->_L20_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.V_est;
      outC->_L16_CSM_modeInterplay = outC->_L20_CSM_modeInterplay <=
        outC->_L21_CSM_modeInterplay;
      outC->r1_CSM_modeInterplay = outC->_L16_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay =
            outC->r1_CSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L145_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.OdoStandStill;
      outC->r0_CSM_modeInterplay = outC->_L145_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay =
            outC->r0_CSM_modeInterplay;
          if (tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay) {
            CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay) {
            CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else {
            CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          tr_2_guard_WarningStatus_CSM_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L22_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.dV_ebi_V_MRSP;
      outC->_L142_CSM_modeInterplay = outC->_L22_CSM_modeInterplay +
        outC->_L21_CSM_modeInterplay;
      outC->_L25_CSM_modeInterplay = outC->_L20_CSM_modeInterplay >
        outC->_L142_CSM_modeInterplay;
      outC->t5_CSM_modeInterplay = outC->_L25_CSM_modeInterplay;
      outC->_L23_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.dV_sbi_V_MRSP;
      outC->_L143_CSM_modeInterplay = outC->_L23_CSM_modeInterplay +
        outC->_L21_CSM_modeInterplay;
      outC->_L26_CSM_modeInterplay = outC->_L20_CSM_modeInterplay >
        outC->_L143_CSM_modeInterplay;
      outC->t4_CSM_modeInterplay = outC->_L26_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          tr_1_guard_WarningStatus_CSM_CSM_modeInterplay =
            outC->t4_CSM_modeInterplay | outC->t5_CSM_modeInterplay;
          if (tr_1_guard_WarningStatus_CSM_CSM_modeInterplay) {
            _27_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_WarningStatus_CSM_CSM_modeInterplay) {
            _27_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else {
            _27_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L24_CSM_modeInterplay = outC->_L2_CSM_modeInterplay.dV_warning_V_MRSP;
      outC->_L144_CSM_modeInterplay = outC->_L24_CSM_modeInterplay +
        outC->_L21_CSM_modeInterplay;
      outC->_L27_CSM_modeInterplay = outC->_L20_CSM_modeInterplay >
        outC->_L144_CSM_modeInterplay;
      outC->t3_CSM_modeInterplay = outC->_L27_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
          tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
          tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay =
            outC->t4_CSM_modeInterplay | outC->t5_CSM_modeInterplay;
          if (tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _50_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _50_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _50_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          }
          else {
            _50_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L19_CSM_modeInterplay = !outC->_L16_CSM_modeInterplay;
      outC->t2_CSM_modeInterplay = outC->_L19_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          tr_3_guard_NormalStatus_CSM_CSM_modeInterplay = outC->t2_CSM_modeInterplay;
          tr_2_guard_NormalStatus_CSM_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
          tr_1_guard_NormalStatus_CSM_CSM_modeInterplay =
            outC->t4_CSM_modeInterplay | outC->t5_CSM_modeInterplay;
          if (tr_1_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _65_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _65_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _65_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else {
            _65_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_9_guard_Init_CSM_CSM_modeInterplay = last_status ==
            Intervention_Supervision_SDM_Types_Pkg;
          tr_8_guard_Init_CSM_CSM_modeInterplay = last_status ==
            Warning_Supervision_SDM_Types_Pkg;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L68_CSM_modeInterplay = outC->t2_CSM_modeInterplay;
      outC->_L67_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
      outC->_L66_CSM_modeInterplay = outC->t4_CSM_modeInterplay;
      outC->_L65_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
      outC->_L64_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
      outC->_L72_CSM_modeInterplay = outC->_L64_CSM_modeInterplay |
        outC->_L65_CSM_modeInterplay | outC->_L66_CSM_modeInterplay |
        outC->_L67_CSM_modeInterplay;
      outC->_L70_CSM_modeInterplay = !outC->_L72_CSM_modeInterplay;
      outC->_L1_CSM_modeInterplay = last_status;
      outC->_L63_CSM_modeInterplay = Indication_Supervision_SDM_Types_Pkg;
      outC->_L62_CSM_modeInterplay = outC->_L63_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L71_CSM_modeInterplay = outC->_L62_CSM_modeInterplay &
        outC->_L70_CSM_modeInterplay & outC->_L68_CSM_modeInterplay;
      outC->_L54_CSM_modeInterplay = outC->t2_CSM_modeInterplay;
      outC->_L57_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
      outC->_L56_CSM_modeInterplay = outC->t4_CSM_modeInterplay;
      outC->_L55_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
      outC->t1_CSM_modeInterplay = outC->_L16_CSM_modeInterplay;
      outC->_L53_CSM_modeInterplay = outC->t1_CSM_modeInterplay;
      outC->_L58_CSM_modeInterplay = outC->_L53_CSM_modeInterplay |
        outC->_L55_CSM_modeInterplay | outC->_L56_CSM_modeInterplay |
        outC->_L57_CSM_modeInterplay;
      outC->_L59_CSM_modeInterplay = !outC->_L58_CSM_modeInterplay;
      outC->_L52_CSM_modeInterplay = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L51_CSM_modeInterplay = outC->_L52_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L60_CSM_modeInterplay = outC->_L51_CSM_modeInterplay &
        outC->_L59_CSM_modeInterplay & outC->_L54_CSM_modeInterplay;
      outC->_L75_CSM_modeInterplay = outC->_L60_CSM_modeInterplay |
        outC->_L71_CSM_modeInterplay;
      outC->c3_CSM_modeInterplay = outC->_L75_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_7_guard_Init_CSM_CSM_modeInterplay = outC->c3_CSM_modeInterplay;
          tr_6_guard_Init_CSM_CSM_modeInterplay = last_status ==
            Normal_Supervision_SDM_Types_Pkg;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L43_CSM_modeInterplay = outC->t1_CSM_modeInterplay;
      outC->_L41_CSM_modeInterplay = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L40_CSM_modeInterplay = outC->_L41_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L42_CSM_modeInterplay = outC->_L40_CSM_modeInterplay &
        outC->_L43_CSM_modeInterplay;
      outC->c1_CSM_modeInterplay = outC->_L42_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_5_guard_Init_CSM_CSM_modeInterplay = outC->c1_CSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L107_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
      outC->_L110_CSM_modeInterplay = !outC->_L107_CSM_modeInterplay;
      outC->_L106_CSM_modeInterplay = Indication_Supervision_SDM_Types_Pkg;
      outC->_L105_CSM_modeInterplay = outC->_L106_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L101_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
      outC->_L100_CSM_modeInterplay = outC->t4_CSM_modeInterplay;
      outC->_L102_CSM_modeInterplay = outC->_L100_CSM_modeInterplay |
        outC->_L101_CSM_modeInterplay;
      outC->_L111_CSM_modeInterplay = outC->_L102_CSM_modeInterplay &
        outC->_L105_CSM_modeInterplay & outC->_L110_CSM_modeInterplay;
      outC->_L99_CSM_modeInterplay = outC->t1_CSM_modeInterplay;
      outC->_L103_CSM_modeInterplay = !outC->_L99_CSM_modeInterplay;
      outC->_L98_CSM_modeInterplay = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L97_CSM_modeInterplay = outC->_L98_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L104_CSM_modeInterplay = outC->_L97_CSM_modeInterplay &
        outC->_L102_CSM_modeInterplay & outC->_L103_CSM_modeInterplay;
      outC->_L114_CSM_modeInterplay = outC->_L104_CSM_modeInterplay |
        outC->_L111_CSM_modeInterplay;
      outC->c5_CSM_modeInterplay = outC->_L114_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_4_guard_Init_CSM_CSM_modeInterplay = outC->c5_CSM_modeInterplay;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L88_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
      outC->_L90_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
      outC->_L89_CSM_modeInterplay = outC->t4_CSM_modeInterplay;
      outC->_L87_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
      outC->_L91_CSM_modeInterplay = outC->_L87_CSM_modeInterplay |
        outC->_L89_CSM_modeInterplay | outC->_L90_CSM_modeInterplay;
      outC->_L92_CSM_modeInterplay = !outC->_L91_CSM_modeInterplay;
      outC->_L86_CSM_modeInterplay = Indication_Supervision_SDM_Types_Pkg;
      outC->_L85_CSM_modeInterplay = outC->_L86_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L93_CSM_modeInterplay = outC->_L85_CSM_modeInterplay &
        outC->_L92_CSM_modeInterplay & outC->_L88_CSM_modeInterplay;
      outC->_L80_CSM_modeInterplay = outC->t3_CSM_modeInterplay;
      outC->_L82_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
      outC->_L81_CSM_modeInterplay = outC->t4_CSM_modeInterplay;
      outC->_L79_CSM_modeInterplay = outC->t1_CSM_modeInterplay;
      outC->_L78_CSM_modeInterplay = outC->_L79_CSM_modeInterplay |
        outC->_L81_CSM_modeInterplay | outC->_L82_CSM_modeInterplay;
      outC->_L83_CSM_modeInterplay = !outC->_L78_CSM_modeInterplay;
      outC->_L77_CSM_modeInterplay = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L76_CSM_modeInterplay = outC->_L77_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L84_CSM_modeInterplay = outC->_L76_CSM_modeInterplay &
        outC->_L83_CSM_modeInterplay & outC->_L80_CSM_modeInterplay;
      outC->_L96_CSM_modeInterplay = outC->_L84_CSM_modeInterplay |
        outC->_L93_CSM_modeInterplay;
      outC->c4_CSM_modeInterplay = outC->_L96_CSM_modeInterplay;
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_3_guard_Init_CSM_CSM_modeInterplay = outC->c4_CSM_modeInterplay;
          tr_2_guard_Init_CSM_CSM_modeInterplay = last_status ==
            Overspeed_Supervision_SDM_Types_Pkg;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->_L47_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
      outC->_L45_CSM_modeInterplay = Indication_Supervision_SDM_Types_Pkg;
      outC->_L44_CSM_modeInterplay = outC->_L45_CSM_modeInterplay ==
        outC->_L1_CSM_modeInterplay;
      outC->_L46_CSM_modeInterplay = outC->_L44_CSM_modeInterplay &
        outC->_L47_CSM_modeInterplay;
      outC->c2_CSM_modeInterplay = outC->_L46_CSM_modeInterplay;
      /* modeInterplay:CSM:CSM: */
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          outC->CSM_state_act_CSM_modeInterplay = CSM_state_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          outC->CSM_state_act_CSM_modeInterplay =
            _27_CSM_state_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          outC->CSM_state_act_CSM_modeInterplay =
            _50_CSM_state_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          outC->CSM_state_act_CSM_modeInterplay =
            _65_CSM_state_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          tr_1_guard_Init_CSM_CSM_modeInterplay = outC->c2_CSM_modeInterplay;
          if (tr_1_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_4_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_5_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_6_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_7_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_8_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_9_guard_Init_CSM_CSM_modeInterplay) {
            _90_CSM_state_act_partial_CSM_modeInterplay =
              SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else {
            _90_CSM_state_act_partial_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
          }
          outC->CSM_state_act_CSM_modeInterplay =
            _90_CSM_state_act_partial_CSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_3_CSM_clock_CSM_modeInterplay = outC->CSM_state_act_CSM_modeInterplay;
      /* modeInterplay:CSM:CSM: */
      switch (outC->_3_CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          outC->_L2_InterventionStatus_CSM_CSM_modeInterplay =
            Intervention_Supervision_SDM_Types_Pkg;
          _95_status_partial = outC->_L2_InterventionStatus_CSM_CSM_modeInterplay;
          status_partial = _95_status_partial;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          outC->_L2_WarningStatus_CSM_CSM_modeInterplay =
            Warning_Supervision_SDM_Types_Pkg;
          _102_status_partial = outC->_L2_WarningStatus_CSM_CSM_modeInterplay;
          status_partial = _102_status_partial;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          outC->_L13_OverspeedStatus_CSM_CSM_modeInterplay =
            Overspeed_Supervision_SDM_Types_Pkg;
          _109_status_partial = outC->_L13_OverspeedStatus_CSM_CSM_modeInterplay;
          status_partial = _109_status_partial;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          outC->_L4_NormalStatus_CSM_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
          _116_status_partial = outC->_L4_NormalStatus_CSM_CSM_modeInterplay;
          status_partial = _116_status_partial;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          _123_status_partial = cSupervisionStatus_SDM_Commands_Pkg;
          status_partial = _123_status_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->status = status_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L30 = outC->status;
  outC->supVisStatus = outC->_L30;
  switch (outC->modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      _410_triggeredTCO_partial = kcg_false;
      _409_revokedTCO_partial = kcg_false;
      _406_triggeredSB_partial = kcg_false;
      _405_revokedSB_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* modeInterplay: */
  switch (outC->modeInterplay_state_sel) {
    case SSM_st_RSM_modeInterplay :
      if (tr_1_guard_RSM_modeInterplay) {
        _486_modeInterplay_fired_strong_partial = SSM_TR_RSM_CSM_1_RSM_modeInterplay;
      }
      else if (tr_2_guard_RSM_modeInterplay) {
        _486_modeInterplay_fired_strong_partial = SSM_TR_RSM_TSM_2_RSM_modeInterplay;
      }
      else {
        _486_modeInterplay_fired_strong_partial = SSM_TR_no_trans_modeInterplay;
      }
      outC->modeInterplay_fired_strong = _486_modeInterplay_fired_strong_partial;
      break;
    case SSM_st_TSM_modeInterplay :
      if (tr_1_guard_TSM_modeInterplay) {
        _483_modeInterplay_fired_strong_partial = SSM_TR_TSM_RSM_1_TSM_modeInterplay;
      }
      else if (tr_2_guard_TSM_modeInterplay) {
        _483_modeInterplay_fired_strong_partial = SSM_TR_TSM_CSM_2_TSM_modeInterplay;
      }
      else {
        _483_modeInterplay_fired_strong_partial = SSM_TR_no_trans_modeInterplay;
      }
      outC->modeInterplay_fired_strong = _483_modeInterplay_fired_strong_partial;
      break;
    case SSM_st_CSM_modeInterplay :
      if (tr_1_guard_CSM_modeInterplay) {
        modeInterplay_fired_strong_partial = SSM_TR_CSM_TSM_1_CSM_modeInterplay;
      }
      else if (tr_2_guard_CSM_modeInterplay) {
        modeInterplay_fired_strong_partial = SSM_TR_CSM_RSM_2_CSM_modeInterplay;
      }
      else {
        modeInterplay_fired_strong_partial = SSM_TR_no_trans_modeInterplay;
      }
      outC->modeInterplay_fired_strong = modeInterplay_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* modeInterplay: */
  switch (outC->modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      _414_modeInterplay_fired_partial = outC->modeInterplay_fired_strong;
      _413_modeInterplay_reset_nxt_partial = kcg_false;
      _412_modeInterplay_state_nxt_partial = SSM_st_RSM_modeInterplay;
      /* modeInterplay:RSM:RSM: */
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          if (tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay) {
            RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_InterventionStatus_IndicationStatus_1_InterventionStatus_RSM_RSM_modeInterplay;
          }
          else {
            RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_no_trans_RSM_RSM_modeInterplay;
          }
          outC->RSM_fired_strong_RSM_modeInterplay =
            RSM_fired_strong_partial_RSM_modeInterplay;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          if (tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay) {
            _427_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_IndicationStatus_InterventionStatus_1_IndicationStatus_RSM_RSM_modeInterplay;
          }
          else {
            _427_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_no_trans_RSM_RSM_modeInterplay;
          }
          outC->RSM_fired_strong_RSM_modeInterplay =
            _427_RSM_fired_strong_partial_RSM_modeInterplay;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          if (tr_1_guard_Init_RSM_RSM_modeInterplay) {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_Init_IndicationStatus_1_Init_RSM_RSM_modeInterplay;
          }
          else if (tr_2_guard_Init_RSM_RSM_modeInterplay) {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_Init_InterventionStatus_2_Init_RSM_RSM_modeInterplay;
          }
          else if (tr_3_guard_Init_RSM_RSM_modeInterplay) {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_Init_IndicationStatus_3_Init_RSM_RSM_modeInterplay;
          }
          else if (tr_4_guard_Init_RSM_RSM_modeInterplay) {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_Init_IndicationStatus_4_Init_RSM_RSM_modeInterplay;
          }
          else if (tr_5_guard_Init_RSM_RSM_modeInterplay) {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_Init_InterventionStatus_5_Init_RSM_RSM_modeInterplay;
          }
          else {
            _462_RSM_fired_strong_partial_RSM_modeInterplay =
              SSM_TR_no_trans_RSM_RSM_modeInterplay;
          }
          outC->RSM_fired_strong_RSM_modeInterplay =
            _462_RSM_fired_strong_partial_RSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:RSM:RSM: */
      switch (outC->_5_RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          RSM_fired_partial_RSM_modeInterplay = outC->RSM_fired_strong_RSM_modeInterplay;
          RSM_reset_nxt_partial_RSM_modeInterplay = kcg_false;
          RSM_state_nxt_partial_RSM_modeInterplay =
            SSM_st_InterventionStatus_RSM_RSM_modeInterplay;
          outC->_L2_InterventionStatus_RSM_RSM_modeInterplay = RSM_SDM_Types_Pkg;
          _470_sdmType_partial = outC->_L2_InterventionStatus_RSM_RSM_modeInterplay;
          _402_sdmType_partial = _470_sdmType_partial;
          outC->RSM_state_nxt_RSM_modeInterplay = RSM_state_nxt_partial_RSM_modeInterplay;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          _471_RSM_fired_partial_RSM_modeInterplay =
            outC->RSM_fired_strong_RSM_modeInterplay;
          _472_RSM_reset_nxt_partial_RSM_modeInterplay = kcg_false;
          _473_RSM_state_nxt_partial_RSM_modeInterplay =
            SSM_st_IndicationStatus_RSM_RSM_modeInterplay;
          outC->_L3_IndicationStatus_RSM_RSM_modeInterplay = RSM_SDM_Types_Pkg;
          _475_sdmType_partial = outC->_L3_IndicationStatus_RSM_RSM_modeInterplay;
          _402_sdmType_partial = _475_sdmType_partial;
          outC->RSM_state_nxt_RSM_modeInterplay =
            _473_RSM_state_nxt_partial_RSM_modeInterplay;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          _480_sdmType_partial = last_sdmType;
          _476_RSM_fired_partial_RSM_modeInterplay =
            outC->RSM_fired_strong_RSM_modeInterplay;
          _477_RSM_reset_nxt_partial_RSM_modeInterplay = kcg_false;
          _478_RSM_state_nxt_partial_RSM_modeInterplay =
            SSM_st_Init_RSM_RSM_modeInterplay;
          _402_sdmType_partial = _480_sdmType_partial;
          outC->RSM_state_nxt_RSM_modeInterplay =
            _478_RSM_state_nxt_partial_RSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:RSM:RSM: */
      if (outC->init) {
        RSM_reset_sel_RSM_modeInterplay = kcg_false;
      }
      else {
        RSM_reset_sel_RSM_modeInterplay = outC->RSM_reset_nxt_RSM_modeInterplay;
      }
      /* modeInterplay:RSM:RSM: */
      switch (outC->_5_RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          outC->RSM_reset_nxt_RSM_modeInterplay = RSM_reset_nxt_partial_RSM_modeInterplay;
          outC->RSM_fired_RSM_modeInterplay = RSM_fired_partial_RSM_modeInterplay;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          outC->RSM_reset_nxt_RSM_modeInterplay =
            _472_RSM_reset_nxt_partial_RSM_modeInterplay;
          outC->RSM_fired_RSM_modeInterplay = _471_RSM_fired_partial_RSM_modeInterplay;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          outC->RSM_reset_nxt_RSM_modeInterplay =
            _477_RSM_reset_nxt_partial_RSM_modeInterplay;
          outC->RSM_fired_RSM_modeInterplay = _476_RSM_fired_partial_RSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:RSM:RSM: */
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          _419_triggeredEB_partial = kcg_false;
          _421_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          RSM_reset_act_partial_RSM_modeInterplay =
            tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay;
          outC->tr_1_clock_InterventionStatus_RSM_RSM_modeInterplay =
            tr_1_guard_InterventionStatus_RSM_RSM_modeInterplay;
          /* modeInterplay:RSM:RSM:InterventionStatus:<1> */
          if (outC->tr_1_clock_InterventionStatus_RSM_RSM_modeInterplay) {
            _415_revokedSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _416_revokedEB_partial = kcg_true;
            _422_revokedSupervisionStatus_partial = _415_revokedSupervisionStatus_partial;
            _420_revokedEB_partial = _416_revokedEB_partial;
          }
          else {
            _418_revokedEB_partial = kcg_false;
            _417_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _422_revokedSupervisionStatus_partial = _417_revokedSupervisionStatus_partial;
            _420_revokedEB_partial = _418_revokedEB_partial;
          }
          _403_revokedSupervisionStatus_partial = _422_revokedSupervisionStatus_partial;
          _404_triggeredSupervisionStatus_partial =
            _421_triggeredSupervisionStatus_partial;
          _407_revokedEB_partial = _420_revokedEB_partial;
          _408_triggeredEB_partial = _419_triggeredEB_partial;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          _431_revokedEB_partial = kcg_false;
          _433_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          _428_RSM_reset_act_partial_RSM_modeInterplay =
            tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay;
          outC->tr_1_clock_IndicationStatus_RSM_RSM_modeInterplay =
            tr_1_guard_IndicationStatus_RSM_RSM_modeInterplay;
          /* modeInterplay:RSM:RSM:IndicationStatus:<1> */
          if (outC->tr_1_clock_IndicationStatus_RSM_RSM_modeInterplay) {
            _423_triggeredSupervisionStatus_partial =
              Intervention_Supervision_SDM_Types_Pkg;
            _424_triggeredEB_partial = kcg_true;
            _432_triggeredSupervisionStatus_partial =
              _423_triggeredSupervisionStatus_partial;
            _430_triggeredEB_partial = _424_triggeredEB_partial;
          }
          else {
            _426_triggeredEB_partial = kcg_false;
            _425_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _432_triggeredSupervisionStatus_partial =
              _425_triggeredSupervisionStatus_partial;
            _430_triggeredEB_partial = _426_triggeredEB_partial;
          }
          _403_revokedSupervisionStatus_partial = _433_revokedSupervisionStatus_partial;
          _404_triggeredSupervisionStatus_partial =
            _432_triggeredSupervisionStatus_partial;
          _407_revokedEB_partial = _431_revokedEB_partial;
          _408_triggeredEB_partial = _430_triggeredEB_partial;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          _466_revokedEB_partial = kcg_false;
          if (tr_1_guard_Init_RSM_RSM_modeInterplay) {
            _463_RSM_reset_act_partial_RSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Init_RSM_RSM_modeInterplay) {
            _463_RSM_reset_act_partial_RSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Init_RSM_RSM_modeInterplay) {
            _463_RSM_reset_act_partial_RSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_Init_RSM_RSM_modeInterplay) {
            _463_RSM_reset_act_partial_RSM_modeInterplay = kcg_true;
          }
          else {
            _463_RSM_reset_act_partial_RSM_modeInterplay =
              tr_5_guard_Init_RSM_RSM_modeInterplay;
          }
          outC->tr_1_clock_Init_RSM_RSM_modeInterplay =
            tr_1_guard_Init_RSM_RSM_modeInterplay;
          /* modeInterplay:RSM:RSM:Init:<1> */
          if (outC->tr_1_clock_Init_RSM_RSM_modeInterplay) {
            _436_triggeredEB_partial = kcg_false;
            _435_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _434_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _468_revokedSupervisionStatus_partial = _434_revokedSupervisionStatus_partial;
            _467_triggeredSupervisionStatus_partial =
              _435_triggeredSupervisionStatus_partial;
            _465_triggeredEB_partial = _436_triggeredEB_partial;
          }
          else {
            outC->tr_2_clock_Init_RSM_RSM_modeInterplay =
              tr_2_guard_Init_RSM_RSM_modeInterplay;
            /* modeInterplay:RSM:RSM:Init:<2> */
            if (outC->tr_2_clock_Init_RSM_RSM_modeInterplay) {
              _459_triggeredEB_partial = kcg_false;
              _460_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _461_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _437_revokedSupervisionStatus_partial = _461_revokedSupervisionStatus_partial;
              _438_triggeredSupervisionStatus_partial =
                _460_triggeredSupervisionStatus_partial;
              _439_triggeredEB_partial = _459_triggeredEB_partial;
            }
            else {
              outC->tr_3_clock_Init_RSM_RSM_modeInterplay =
                tr_3_guard_Init_RSM_RSM_modeInterplay;
              /* modeInterplay:RSM:RSM:Init:<3> */
              if (outC->tr_3_clock_Init_RSM_RSM_modeInterplay) {
                _442_triggeredEB_partial = kcg_false;
                _440_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                _441_triggeredSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
                _458_revokedSupervisionStatus_partial = _440_revokedSupervisionStatus_partial;
                _457_triggeredSupervisionStatus_partial =
                  _441_triggeredSupervisionStatus_partial;
                _456_triggeredEB_partial = _442_triggeredEB_partial;
              }
              else {
                outC->tr_4_clock_Init_RSM_RSM_modeInterplay =
                  tr_4_guard_Init_RSM_RSM_modeInterplay;
                /* modeInterplay:RSM:RSM:Init:<4> */
                if (outC->tr_4_clock_Init_RSM_RSM_modeInterplay) {
                  _453_triggeredEB_partial = kcg_false;
                  _454_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                  _455_revokedSupervisionStatus_partial = last_status;
                  _443_revokedSupervisionStatus_partial = _455_revokedSupervisionStatus_partial;
                  _444_triggeredSupervisionStatus_partial =
                    _454_triggeredSupervisionStatus_partial;
                  _445_triggeredEB_partial = _453_triggeredEB_partial;
                }
                else {
                  _452_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                  outC->tr_5_clock_Init_RSM_RSM_modeInterplay =
                    tr_5_guard_Init_RSM_RSM_modeInterplay;
                  /* modeInterplay:RSM:RSM:Init:<5> */
                  if (outC->tr_5_clock_Init_RSM_RSM_modeInterplay) {
                    _446_triggeredSupervisionStatus_partial =
                      Intervention_Supervision_SDM_Types_Pkg;
                    _447_triggeredEB_partial = kcg_true;
                    _451_triggeredSupervisionStatus_partial =
                      _446_triggeredSupervisionStatus_partial;
                    _450_triggeredEB_partial = _447_triggeredEB_partial;
                  }
                  else {
                    _449_triggeredEB_partial = kcg_false;
                    _448_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                    _451_triggeredSupervisionStatus_partial =
                      _448_triggeredSupervisionStatus_partial;
                    _450_triggeredEB_partial = _449_triggeredEB_partial;
                  }
                  _443_revokedSupervisionStatus_partial = _452_revokedSupervisionStatus_partial;
                  _444_triggeredSupervisionStatus_partial =
                    _451_triggeredSupervisionStatus_partial;
                  _445_triggeredEB_partial = _450_triggeredEB_partial;
                }
                _458_revokedSupervisionStatus_partial = _443_revokedSupervisionStatus_partial;
                _457_triggeredSupervisionStatus_partial =
                  _444_triggeredSupervisionStatus_partial;
                _456_triggeredEB_partial = _445_triggeredEB_partial;
              }
              _437_revokedSupervisionStatus_partial = _458_revokedSupervisionStatus_partial;
              _438_triggeredSupervisionStatus_partial =
                _457_triggeredSupervisionStatus_partial;
              _439_triggeredEB_partial = _456_triggeredEB_partial;
            }
            _468_revokedSupervisionStatus_partial = _437_revokedSupervisionStatus_partial;
            _467_triggeredSupervisionStatus_partial =
              _438_triggeredSupervisionStatus_partial;
            _465_triggeredEB_partial = _439_triggeredEB_partial;
          }
          _403_revokedSupervisionStatus_partial = _468_revokedSupervisionStatus_partial;
          _404_triggeredSupervisionStatus_partial =
            _467_triggeredSupervisionStatus_partial;
          _407_revokedEB_partial = _466_revokedEB_partial;
          _408_triggeredEB_partial = _465_triggeredEB_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:RSM:RSM: */
      if (outC->init) {
        RSM_reset_prv_RSM_modeInterplay = kcg_false;
      }
      else {
        RSM_reset_prv_RSM_modeInterplay = outC->RSM_reset_act_RSM_modeInterplay;
      }
      /* modeInterplay:RSM:RSM: */
      switch (outC->RSM_clock_RSM_modeInterplay) {
        case SSM_st_InterventionStatus_RSM_RSM_modeInterplay :
          outC->RSM_reset_act_RSM_modeInterplay = RSM_reset_act_partial_RSM_modeInterplay;
          break;
        case SSM_st_IndicationStatus_RSM_RSM_modeInterplay :
          outC->RSM_reset_act_RSM_modeInterplay =
            _428_RSM_reset_act_partial_RSM_modeInterplay;
          break;
        case SSM_st_Init_RSM_RSM_modeInterplay :
          outC->RSM_reset_act_RSM_modeInterplay =
            _463_RSM_reset_act_partial_RSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->sdmType = _402_sdmType_partial;
      outC->revokedSupervisionStatus = _403_revokedSupervisionStatus_partial;
      outC->triggeredSupervisionStatus = _404_triggeredSupervisionStatus_partial;
      outC->revokedSB = _405_revokedSB_partial;
      outC->triggeredSB = _406_triggeredSB_partial;
      outC->revokedEB = _407_revokedEB_partial;
      outC->triggeredEB = _408_triggeredEB_partial;
      outC->revokedTCO = _409_revokedTCO_partial;
      outC->triggeredTCO = _410_triggeredTCO_partial;
      outC->modeInterplay_state_nxt = _412_modeInterplay_state_nxt_partial;
      break;
    case SSM_st_TSM_modeInterplay :
      _139_modeInterplay_fired_partial = outC->modeInterplay_fired_strong;
      _138_modeInterplay_reset_nxt_partial = kcg_false;
      _137_modeInterplay_state_nxt_partial = SSM_st_TSM_modeInterplay;
      switch (outC->_4_SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          _365_revokedEB_partial = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* modeInterplay:TSM:SM4: */
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          if (tr_1_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Intervention_Normal_1_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Intervention_Normal_2_Intervention_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Intervention_Indication_3_Intervention_SM4_TSM_modeInterplay;
          }
          else {
            SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          if (tr_1_guard_Warning_SM4_TSM_modeInterplay) {
            _194_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Warning_Intervention_1_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Warning_SM4_TSM_modeInterplay) {
            _194_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Warning_Intervention_2_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Warning_SM4_TSM_modeInterplay) {
            _194_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Warning_Normal_3_Warning_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Warning_SM4_TSM_modeInterplay) {
            _194_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Warning_Indication_4_Warning_SM4_TSM_modeInterplay;
          }
          else {
            _194_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            _194_SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          if (tr_1_guard_Overspeed_SM4_TSM_modeInterplay) {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Overspeed_Normal_1_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Overspeed_SM4_TSM_modeInterplay) {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Overspeed_Intervention_2_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Overspeed_SM4_TSM_modeInterplay) {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Overspeed_Intervention_3_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Overspeed_SM4_TSM_modeInterplay) {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Overspeed_Indication_4_Overspeed_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Overspeed_SM4_TSM_modeInterplay) {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Overspeed_Warning_5_Overspeed_SM4_TSM_modeInterplay;
          }
          else {
            _253_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            _253_SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          if (tr_1_guard_Indication_SM4_TSM_modeInterplay) {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Indication_Normal_1_Indication_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Indication_SM4_TSM_modeInterplay) {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Indication_Intervention_2_Indication_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Indication_SM4_TSM_modeInterplay) {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Indication_Intervention_3_Indication_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Indication_SM4_TSM_modeInterplay) {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Indication_Warning_4_Indication_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Indication_SM4_TSM_modeInterplay) {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Indication_Overspeed_5_Indication_SM4_TSM_modeInterplay;
          }
          else {
            _292_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            _292_SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          if (tr_1_guard_Normal_SM4_TSM_modeInterplay) {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Normal_Intervention_1_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_Normal_SM4_TSM_modeInterplay) {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Normal_Intervention_2_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_Normal_SM4_TSM_modeInterplay) {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Normal_Warning_3_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_Normal_SM4_TSM_modeInterplay) {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Normal_Overspeed_4_Normal_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_Normal_SM4_TSM_modeInterplay) {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_Normal_Indication_5_Normal_SM4_TSM_modeInterplay;
          }
          else {
            _321_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            _321_SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          if (tr_1_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Normal_1_init_SM4_TSM_modeInterplay;
          }
          else if (tr_2_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Intervention_2_init_SM4_TSM_modeInterplay;
          }
          else if (tr_3_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Intervention_3_init_SM4_TSM_modeInterplay;
          }
          else if (tr_4_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Warning_4_init_SM4_TSM_modeInterplay;
          }
          else if (tr_5_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Overspeed_5_init_SM4_TSM_modeInterplay;
          }
          else if (tr_6_guard_init_SM4_TSM_modeInterplay) {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_init_Indication_6_init_SM4_TSM_modeInterplay;
          }
          else {
            _354_SM4_fired_strong_partial_TSM_modeInterplay =
              SSM_TR_no_trans_SM4_TSM_modeInterplay;
          }
          outC->SM4_fired_strong_TSM_modeInterplay =
            _354_SM4_fired_strong_partial_TSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:TSM:SM4: */
      switch (outC->_4_SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          SM4_fired_partial_TSM_modeInterplay = outC->SM4_fired_strong_TSM_modeInterplay;
          SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_Intervention_SM4_TSM_modeInterplay;
          outC->_L6_Intervention_SM4_TSM_modeInterplay = last_triggeredEB;
          outC->_L5_Intervention_SM4_TSM_modeInterplay = outC->t14_TSM_modeInterplay;
          outC->_L4_Intervention_SM4_TSM_modeInterplay = outC->t13_TSM_modeInterplay;
          outC->_L3_Intervention_SM4_TSM_modeInterplay =
            outC->_L4_Intervention_SM4_TSM_modeInterplay |
            outC->_L5_Intervention_SM4_TSM_modeInterplay |
            outC->_L6_Intervention_SM4_TSM_modeInterplay;
          _364_triggeredEB_partial = outC->_L3_Intervention_SM4_TSM_modeInterplay;
          outC->_L2_Intervention_SM4_TSM_modeInterplay = TSM_SDM_Types_Pkg;
          _366_sdmType_partial = outC->_L2_Intervention_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _366_sdmType_partial;
          _132_revokedEB_partial = _365_revokedEB_partial;
          _133_triggeredEB_partial = _364_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay = SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          _371_triggeredEB_partial = kcg_false;
          _372_revokedEB_partial = kcg_false;
          _367_SM4_fired_partial_TSM_modeInterplay =
            outC->SM4_fired_strong_TSM_modeInterplay;
          _368_SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          _369_SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_Warning_SM4_TSM_modeInterplay;
          outC->_L2_Warning_SM4_TSM_modeInterplay = TSM_SDM_Types_Pkg;
          _373_sdmType_partial = outC->_L2_Warning_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _373_sdmType_partial;
          _132_revokedEB_partial = _372_revokedEB_partial;
          _133_triggeredEB_partial = _371_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay =
            _369_SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          _378_triggeredEB_partial = kcg_false;
          _379_revokedEB_partial = kcg_false;
          _374_SM4_fired_partial_TSM_modeInterplay =
            outC->SM4_fired_strong_TSM_modeInterplay;
          _375_SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          _376_SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_Overspeed_SM4_TSM_modeInterplay;
          outC->_L3_Overspeed_SM4_TSM_modeInterplay = TSM_SDM_Types_Pkg;
          _380_sdmType_partial = outC->_L3_Overspeed_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _380_sdmType_partial;
          _132_revokedEB_partial = _379_revokedEB_partial;
          _133_triggeredEB_partial = _378_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay =
            _376_SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          _385_triggeredEB_partial = kcg_false;
          _381_SM4_fired_partial_TSM_modeInterplay =
            outC->SM4_fired_strong_TSM_modeInterplay;
          _382_SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          _383_SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_Indication_SM4_TSM_modeInterplay;
          outC->_L4_Indication_SM4_TSM_modeInterplay = last_revokedEB;
          outC->_L3_Indication_SM4_TSM_modeInterplay = outC->r3_TSM_modeInterplay;
          outC->_L5_Indication_SM4_TSM_modeInterplay =
            outC->_L3_Indication_SM4_TSM_modeInterplay |
            outC->_L4_Indication_SM4_TSM_modeInterplay;
          _386_revokedEB_partial = outC->_L5_Indication_SM4_TSM_modeInterplay;
          outC->_L2_Indication_SM4_TSM_modeInterplay = TSM_SDM_Types_Pkg;
          _387_sdmType_partial = outC->_L2_Indication_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _387_sdmType_partial;
          _132_revokedEB_partial = _386_revokedEB_partial;
          _133_triggeredEB_partial = _385_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay =
            _383_SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          _392_triggeredEB_partial = kcg_false;
          _388_SM4_fired_partial_TSM_modeInterplay =
            outC->SM4_fired_strong_TSM_modeInterplay;
          _389_SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          _390_SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_Normal_SM4_TSM_modeInterplay;
          outC->_L8_Normal_SM4_TSM_modeInterplay = last_revokedEB;
          outC->_L7_Normal_SM4_TSM_modeInterplay = outC->r3_TSM_modeInterplay;
          outC->_L6_Normal_SM4_TSM_modeInterplay = outC->r2_TSM_modeInterplay;
          outC->_L5_Normal_SM4_TSM_modeInterplay = outC->r1_TSM_modeInterplay;
          outC->_L4_Normal_SM4_TSM_modeInterplay = outC->r0_TSM_modeInterplay;
          outC->_L9_Normal_SM4_TSM_modeInterplay =
            outC->_L4_Normal_SM4_TSM_modeInterplay |
            outC->_L5_Normal_SM4_TSM_modeInterplay |
            outC->_L6_Normal_SM4_TSM_modeInterplay |
            outC->_L7_Normal_SM4_TSM_modeInterplay |
            outC->_L8_Normal_SM4_TSM_modeInterplay;
          _393_revokedEB_partial = outC->_L9_Normal_SM4_TSM_modeInterplay;
          outC->_L2_Normal_SM4_TSM_modeInterplay = TSM_SDM_Types_Pkg;
          _394_sdmType_partial = outC->_L2_Normal_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _394_sdmType_partial;
          _132_revokedEB_partial = _393_revokedEB_partial;
          _133_triggeredEB_partial = _392_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay =
            _390_SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          _399_triggeredEB_partial = kcg_false;
          _400_revokedEB_partial = kcg_false;
          _401_sdmType_partial = last_sdmType;
          _395_SM4_fired_partial_TSM_modeInterplay =
            outC->SM4_fired_strong_TSM_modeInterplay;
          _396_SM4_reset_nxt_partial_TSM_modeInterplay = kcg_false;
          _397_SM4_state_nxt_partial_TSM_modeInterplay =
            SSM_st_init_SM4_TSM_modeInterplay;
          _127_sdmType_partial = _401_sdmType_partial;
          _132_revokedEB_partial = _400_revokedEB_partial;
          _133_triggeredEB_partial = _399_triggeredEB_partial;
          outC->SM4_state_nxt_TSM_modeInterplay =
            _397_SM4_state_nxt_partial_TSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:TSM:SM4: */
      if (outC->init1) {
        SM4_reset_sel_TSM_modeInterplay = kcg_false;
      }
      else {
        SM4_reset_sel_TSM_modeInterplay = outC->SM4_reset_nxt_TSM_modeInterplay;
      }
      /* modeInterplay:TSM:SM4: */
      switch (outC->_4_SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay = SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = SM4_fired_partial_TSM_modeInterplay;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay =
            _368_SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = _367_SM4_fired_partial_TSM_modeInterplay;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay =
            _375_SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = _374_SM4_fired_partial_TSM_modeInterplay;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay =
            _382_SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = _381_SM4_fired_partial_TSM_modeInterplay;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay =
            _389_SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = _388_SM4_fired_partial_TSM_modeInterplay;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          outC->SM4_reset_nxt_TSM_modeInterplay =
            _396_SM4_reset_nxt_partial_TSM_modeInterplay;
          outC->SM4_fired_TSM_modeInterplay = _395_SM4_fired_partial_TSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:TSM:SM4: */
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          _158_triggeredTCO_partial = kcg_false;
          _160_triggeredSB_partial = kcg_false;
          _162_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          if (tr_1_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Intervention_SM4_TSM_modeInterplay) {
            SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            SM4_reset_act_partial_TSM_modeInterplay =
              tr_3_guard_Intervention_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_Intervention_SM4_TSM_modeInterplay =
            tr_1_guard_Intervention_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:Intervention:<1> */
          if (outC->tr_1_clock_Intervention_SM4_TSM_modeInterplay) {
            _141_revokedSB_partial = kcg_true;
            _142_revokedTCO_partial = kcg_true;
            _140_revokedSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _163_revokedSupervisionStatus_partial = _140_revokedSupervisionStatus_partial;
            _161_revokedSB_partial = _141_revokedSB_partial;
            _159_revokedTCO_partial = _142_revokedTCO_partial;
          }
          else {
            outC->tr_2_clock_Intervention_SM4_TSM_modeInterplay =
              tr_2_guard_Intervention_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:Intervention:<2> */
            if (outC->tr_2_clock_Intervention_SM4_TSM_modeInterplay) {
              _155_revokedTCO_partial = kcg_false;
              _156_revokedSB_partial = kcg_false;
              _157_revokedSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
              _143_revokedSupervisionStatus_partial = _157_revokedSupervisionStatus_partial;
              _144_revokedSB_partial = _156_revokedSB_partial;
              _145_revokedTCO_partial = _155_revokedTCO_partial;
            }
            else {
              outC->tr_3_clock_Intervention_SM4_TSM_modeInterplay =
                tr_3_guard_Intervention_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:Intervention:<3> */
              if (outC->tr_3_clock_Intervention_SM4_TSM_modeInterplay) {
                _147_revokedSB_partial = kcg_true;
                _148_revokedTCO_partial = kcg_true;
                _146_revokedSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
                _154_revokedSupervisionStatus_partial = _146_revokedSupervisionStatus_partial;
                _153_revokedSB_partial = _147_revokedSB_partial;
                _152_revokedTCO_partial = _148_revokedTCO_partial;
              }
              else {
                _151_revokedTCO_partial = kcg_false;
                _150_revokedSB_partial = kcg_false;
                _149_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                _154_revokedSupervisionStatus_partial = _149_revokedSupervisionStatus_partial;
                _153_revokedSB_partial = _150_revokedSB_partial;
                _152_revokedTCO_partial = _151_revokedTCO_partial;
              }
              _143_revokedSupervisionStatus_partial = _154_revokedSupervisionStatus_partial;
              _144_revokedSB_partial = _153_revokedSB_partial;
              _145_revokedTCO_partial = _152_revokedTCO_partial;
            }
            _163_revokedSupervisionStatus_partial = _143_revokedSupervisionStatus_partial;
            _161_revokedSB_partial = _144_revokedSB_partial;
            _159_revokedTCO_partial = _145_revokedTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _163_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _162_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _161_revokedSB_partial;
          _131_triggeredSB_partial = _160_triggeredSB_partial;
          _134_revokedTCO_partial = _159_revokedTCO_partial;
          _135_triggeredTCO_partial = _158_triggeredTCO_partial;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          _197_triggeredTCO_partial = kcg_false;
          if (tr_1_guard_Warning_SM4_TSM_modeInterplay) {
            _195_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Warning_SM4_TSM_modeInterplay) {
            _195_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Warning_SM4_TSM_modeInterplay) {
            _195_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            _195_SM4_reset_act_partial_TSM_modeInterplay =
              tr_4_guard_Warning_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_Warning_SM4_TSM_modeInterplay =
            tr_1_guard_Warning_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:Warning:<1> */
          if (outC->tr_1_clock_Warning_SM4_TSM_modeInterplay) {
            _168_revokedTCO_partial = kcg_false;
            _166_revokedSB_partial = kcg_false;
            _164_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _167_triggeredSB_partial = kcg_true;
            _165_triggeredSupervisionStatus_partial =
              Intervention_Supervision_SDM_Types_Pkg;
            _202_revokedSupervisionStatus_partial = _164_revokedSupervisionStatus_partial;
            _201_triggeredSupervisionStatus_partial =
              _165_triggeredSupervisionStatus_partial;
            _200_revokedSB_partial = _166_revokedSB_partial;
            _199_triggeredSB_partial = _167_triggeredSB_partial;
            _198_revokedTCO_partial = _168_revokedTCO_partial;
          }
          else {
            _172_triggeredSB_partial = kcg_false;
            outC->tr_2_clock_Warning_SM4_TSM_modeInterplay =
              tr_2_guard_Warning_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:Warning:<2> */
            if (outC->tr_2_clock_Warning_SM4_TSM_modeInterplay) {
              _190_revokedTCO_partial = kcg_false;
              _191_revokedSB_partial = kcg_false;
              _193_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _192_triggeredSupervisionStatus_partial =
                Intervention_Supervision_SDM_Types_Pkg;
              _169_revokedSupervisionStatus_partial = _193_revokedSupervisionStatus_partial;
              _170_triggeredSupervisionStatus_partial =
                _192_triggeredSupervisionStatus_partial;
              _171_revokedSB_partial = _191_revokedSB_partial;
              _173_revokedTCO_partial = _190_revokedTCO_partial;
            }
            else {
              _188_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              outC->tr_3_clock_Warning_SM4_TSM_modeInterplay =
                tr_3_guard_Warning_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:Warning:<3> */
              if (outC->tr_3_clock_Warning_SM4_TSM_modeInterplay) {
                _175_revokedSB_partial = kcg_true;
                _176_revokedTCO_partial = kcg_true;
                _174_revokedSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                _189_revokedSupervisionStatus_partial = _174_revokedSupervisionStatus_partial;
                _187_revokedSB_partial = _175_revokedSB_partial;
                _186_revokedTCO_partial = _176_revokedTCO_partial;
              }
              else {
                outC->tr_4_clock_Warning_SM4_TSM_modeInterplay =
                  tr_4_guard_Warning_SM4_TSM_modeInterplay;
                /* modeInterplay:TSM:SM4:Warning:<4> */
                if (outC->tr_4_clock_Warning_SM4_TSM_modeInterplay) {
                  _184_revokedSB_partial = kcg_true;
                  _183_revokedTCO_partial = kcg_true;
                  _185_revokedSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                  _177_revokedSupervisionStatus_partial = _185_revokedSupervisionStatus_partial;
                  _178_revokedSB_partial = _184_revokedSB_partial;
                  _179_revokedTCO_partial = _183_revokedTCO_partial;
                }
                else {
                  _180_revokedTCO_partial = kcg_false;
                  _181_revokedSB_partial = kcg_false;
                  _182_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                  _177_revokedSupervisionStatus_partial = _182_revokedSupervisionStatus_partial;
                  _178_revokedSB_partial = _181_revokedSB_partial;
                  _179_revokedTCO_partial = _180_revokedTCO_partial;
                }
                _189_revokedSupervisionStatus_partial = _177_revokedSupervisionStatus_partial;
                _187_revokedSB_partial = _178_revokedSB_partial;
                _186_revokedTCO_partial = _179_revokedTCO_partial;
              }
              _169_revokedSupervisionStatus_partial = _189_revokedSupervisionStatus_partial;
              _170_triggeredSupervisionStatus_partial =
                _188_triggeredSupervisionStatus_partial;
              _171_revokedSB_partial = _187_revokedSB_partial;
              _173_revokedTCO_partial = _186_revokedTCO_partial;
            }
            _202_revokedSupervisionStatus_partial = _169_revokedSupervisionStatus_partial;
            _201_triggeredSupervisionStatus_partial =
              _170_triggeredSupervisionStatus_partial;
            _200_revokedSB_partial = _171_revokedSB_partial;
            _199_triggeredSB_partial = _172_triggeredSB_partial;
            _198_revokedTCO_partial = _173_revokedTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _202_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _201_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _200_revokedSB_partial;
          _131_triggeredSB_partial = _199_triggeredSB_partial;
          _134_revokedTCO_partial = _198_revokedTCO_partial;
          _135_triggeredTCO_partial = _197_triggeredTCO_partial;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          if (tr_1_guard_Overspeed_SM4_TSM_modeInterplay) {
            _254_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Overspeed_SM4_TSM_modeInterplay) {
            _254_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Overspeed_SM4_TSM_modeInterplay) {
            _254_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_Overspeed_SM4_TSM_modeInterplay) {
            _254_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            _254_SM4_reset_act_partial_TSM_modeInterplay =
              tr_5_guard_Overspeed_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_Overspeed_SM4_TSM_modeInterplay =
            tr_1_guard_Overspeed_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:Overspeed:<1> */
          if (outC->tr_1_clock_Overspeed_SM4_TSM_modeInterplay) {
            _208_triggeredTCO_partial = kcg_false;
            _206_triggeredSB_partial = kcg_false;
            _204_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _205_revokedSB_partial = kcg_true;
            _207_revokedTCO_partial = kcg_true;
            _203_revokedSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
            _261_revokedSupervisionStatus_partial = _203_revokedSupervisionStatus_partial;
            _260_triggeredSupervisionStatus_partial =
              _204_triggeredSupervisionStatus_partial;
            _259_revokedSB_partial = _205_revokedSB_partial;
            _258_triggeredSB_partial = _206_triggeredSB_partial;
            _257_revokedTCO_partial = _207_revokedTCO_partial;
            _256_triggeredTCO_partial = _208_triggeredTCO_partial;
          }
          else {
            outC->tr_2_clock_Overspeed_SM4_TSM_modeInterplay =
              tr_2_guard_Overspeed_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:Overspeed:<2> */
            if (outC->tr_2_clock_Overspeed_SM4_TSM_modeInterplay) {
              _247_triggeredTCO_partial = kcg_false;
              _248_revokedTCO_partial = kcg_false;
              _249_triggeredSB_partial = kcg_false;
              _250_revokedSB_partial = kcg_false;
              _252_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _251_triggeredSupervisionStatus_partial =
                Intervention_Supervision_SDM_Types_Pkg;
              _209_revokedSupervisionStatus_partial = _252_revokedSupervisionStatus_partial;
              _210_triggeredSupervisionStatus_partial =
                _251_triggeredSupervisionStatus_partial;
              _211_revokedSB_partial = _250_revokedSB_partial;
              _212_triggeredSB_partial = _249_triggeredSB_partial;
              _213_revokedTCO_partial = _248_revokedTCO_partial;
              _214_triggeredTCO_partial = _247_triggeredTCO_partial;
            }
            else {
              outC->tr_3_clock_Overspeed_SM4_TSM_modeInterplay =
                tr_3_guard_Overspeed_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:Overspeed:<3> */
              if (outC->tr_3_clock_Overspeed_SM4_TSM_modeInterplay) {
                _220_triggeredTCO_partial = kcg_false;
                _219_revokedTCO_partial = kcg_false;
                _217_revokedSB_partial = kcg_false;
                _215_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                _218_triggeredSB_partial = kcg_true;
                _216_triggeredSupervisionStatus_partial =
                  Intervention_Supervision_SDM_Types_Pkg;
                _246_revokedSupervisionStatus_partial = _215_revokedSupervisionStatus_partial;
                _245_triggeredSupervisionStatus_partial =
                  _216_triggeredSupervisionStatus_partial;
                _244_revokedSB_partial = _217_revokedSB_partial;
                _243_triggeredSB_partial = _218_triggeredSB_partial;
                _242_revokedTCO_partial = _219_revokedTCO_partial;
                _241_triggeredTCO_partial = _220_triggeredTCO_partial;
              }
              else {
                _224_triggeredSB_partial = kcg_false;
                outC->tr_4_clock_Overspeed_SM4_TSM_modeInterplay =
                  tr_4_guard_Overspeed_SM4_TSM_modeInterplay;
                /* modeInterplay:TSM:SM4:Overspeed:<4> */
                if (outC->tr_4_clock_Overspeed_SM4_TSM_modeInterplay) {
                  _236_triggeredTCO_partial = kcg_false;
                  _239_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                  _238_revokedSB_partial = kcg_true;
                  _237_revokedTCO_partial = kcg_true;
                  _240_revokedSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                  _221_revokedSupervisionStatus_partial = _240_revokedSupervisionStatus_partial;
                  _222_triggeredSupervisionStatus_partial =
                    _239_triggeredSupervisionStatus_partial;
                  _223_revokedSB_partial = _238_revokedSB_partial;
                  _225_revokedTCO_partial = _237_revokedTCO_partial;
                  _226_triggeredTCO_partial = _236_triggeredTCO_partial;
                }
                else {
                  _232_revokedTCO_partial = kcg_false;
                  _233_revokedSB_partial = kcg_false;
                  _235_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                  outC->tr_5_clock_Overspeed_SM4_TSM_modeInterplay =
                    tr_5_guard_Overspeed_SM4_TSM_modeInterplay;
                  /* modeInterplay:TSM:SM4:Overspeed:<5> */
                  if (outC->tr_5_clock_Overspeed_SM4_TSM_modeInterplay) {
                    _228_triggeredTCO_partial = kcg_true;
                    _227_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                    _234_triggeredSupervisionStatus_partial =
                      _227_triggeredSupervisionStatus_partial;
                    _231_triggeredTCO_partial = _228_triggeredTCO_partial;
                  }
                  else {
                    _230_triggeredTCO_partial = kcg_false;
                    _229_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                    _234_triggeredSupervisionStatus_partial =
                      _229_triggeredSupervisionStatus_partial;
                    _231_triggeredTCO_partial = _230_triggeredTCO_partial;
                  }
                  _221_revokedSupervisionStatus_partial = _235_revokedSupervisionStatus_partial;
                  _222_triggeredSupervisionStatus_partial =
                    _234_triggeredSupervisionStatus_partial;
                  _223_revokedSB_partial = _233_revokedSB_partial;
                  _225_revokedTCO_partial = _232_revokedTCO_partial;
                  _226_triggeredTCO_partial = _231_triggeredTCO_partial;
                }
                _246_revokedSupervisionStatus_partial = _221_revokedSupervisionStatus_partial;
                _245_triggeredSupervisionStatus_partial =
                  _222_triggeredSupervisionStatus_partial;
                _244_revokedSB_partial = _223_revokedSB_partial;
                _243_triggeredSB_partial = _224_triggeredSB_partial;
                _242_revokedTCO_partial = _225_revokedTCO_partial;
                _241_triggeredTCO_partial = _226_triggeredTCO_partial;
              }
              _209_revokedSupervisionStatus_partial = _246_revokedSupervisionStatus_partial;
              _210_triggeredSupervisionStatus_partial =
                _245_triggeredSupervisionStatus_partial;
              _211_revokedSB_partial = _244_revokedSB_partial;
              _212_triggeredSB_partial = _243_triggeredSB_partial;
              _213_revokedTCO_partial = _242_revokedTCO_partial;
              _214_triggeredTCO_partial = _241_triggeredTCO_partial;
            }
            _261_revokedSupervisionStatus_partial = _209_revokedSupervisionStatus_partial;
            _260_triggeredSupervisionStatus_partial =
              _210_triggeredSupervisionStatus_partial;
            _259_revokedSB_partial = _211_revokedSB_partial;
            _258_triggeredSB_partial = _212_triggeredSB_partial;
            _257_revokedTCO_partial = _213_revokedTCO_partial;
            _256_triggeredTCO_partial = _214_triggeredTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _261_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _260_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _259_revokedSB_partial;
          _131_triggeredSB_partial = _258_triggeredSB_partial;
          _134_revokedTCO_partial = _257_revokedTCO_partial;
          _135_triggeredTCO_partial = _256_triggeredTCO_partial;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          if (tr_1_guard_Indication_SM4_TSM_modeInterplay) {
            _293_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Indication_SM4_TSM_modeInterplay) {
            _293_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Indication_SM4_TSM_modeInterplay) {
            _293_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_Indication_SM4_TSM_modeInterplay) {
            _293_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            _293_SM4_reset_act_partial_TSM_modeInterplay =
              tr_5_guard_Indication_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_Indication_SM4_TSM_modeInterplay =
            tr_1_guard_Indication_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:Indication:<1> */
          if (outC->tr_1_clock_Indication_SM4_TSM_modeInterplay) {
            _267_triggeredTCO_partial = kcg_false;
            _265_triggeredSB_partial = kcg_false;
            _263_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _264_revokedSB_partial = kcg_true;
            _266_revokedTCO_partial = kcg_true;
            _262_revokedSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
            _300_revokedSupervisionStatus_partial = _262_revokedSupervisionStatus_partial;
            _299_triggeredSupervisionStatus_partial =
              _263_triggeredSupervisionStatus_partial;
            _298_revokedSB_partial = _264_revokedSB_partial;
            _297_triggeredSB_partial = _265_triggeredSB_partial;
            _296_revokedTCO_partial = _266_revokedTCO_partial;
            _295_triggeredTCO_partial = _267_triggeredTCO_partial;
          }
          else {
            _272_revokedTCO_partial = kcg_false;
            _270_revokedSB_partial = kcg_false;
            _268_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            outC->tr_2_clock_Indication_SM4_TSM_modeInterplay =
              tr_2_guard_Indication_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:Indication:<2> */
            if (outC->tr_2_clock_Indication_SM4_TSM_modeInterplay) {
              _289_triggeredTCO_partial = kcg_false;
              _290_triggeredSB_partial = kcg_false;
              _291_triggeredSupervisionStatus_partial =
                Intervention_Supervision_SDM_Types_Pkg;
              _269_triggeredSupervisionStatus_partial =
                _291_triggeredSupervisionStatus_partial;
              _271_triggeredSB_partial = _290_triggeredSB_partial;
              _273_triggeredTCO_partial = _289_triggeredTCO_partial;
            }
            else {
              outC->tr_3_clock_Indication_SM4_TSM_modeInterplay =
                tr_3_guard_Indication_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:Indication:<3> */
              if (outC->tr_3_clock_Indication_SM4_TSM_modeInterplay) {
                _276_triggeredTCO_partial = kcg_false;
                _275_triggeredSB_partial = kcg_true;
                _274_triggeredSupervisionStatus_partial =
                  Intervention_Supervision_SDM_Types_Pkg;
                _288_triggeredSupervisionStatus_partial =
                  _274_triggeredSupervisionStatus_partial;
                _287_triggeredSB_partial = _275_triggeredSB_partial;
                _286_triggeredTCO_partial = _276_triggeredTCO_partial;
              }
              else {
                _278_triggeredSB_partial = kcg_false;
                outC->tr_4_clock_Indication_SM4_TSM_modeInterplay =
                  tr_4_guard_Indication_SM4_TSM_modeInterplay;
                /* modeInterplay:TSM:SM4:Indication:<4> */
                if (outC->tr_4_clock_Indication_SM4_TSM_modeInterplay) {
                  _284_triggeredTCO_partial = kcg_true;
                  _285_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                  _277_triggeredSupervisionStatus_partial =
                    _285_triggeredSupervisionStatus_partial;
                  _279_triggeredTCO_partial = _284_triggeredTCO_partial;
                }
                else {
                  _282_triggeredTCO_partial = kcg_false;
                  outC->tr_5_clock_Indication_SM4_TSM_modeInterplay =
                    tr_5_guard_Indication_SM4_TSM_modeInterplay;
                  /* modeInterplay:TSM:SM4:Indication:<5> */
                  if (outC->tr_5_clock_Indication_SM4_TSM_modeInterplay) {
                    _280_triggeredSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                    _283_triggeredSupervisionStatus_partial =
                      _280_triggeredSupervisionStatus_partial;
                  }
                  else {
                    _281_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                    _283_triggeredSupervisionStatus_partial =
                      _281_triggeredSupervisionStatus_partial;
                  }
                  _277_triggeredSupervisionStatus_partial =
                    _283_triggeredSupervisionStatus_partial;
                  _279_triggeredTCO_partial = _282_triggeredTCO_partial;
                }
                _288_triggeredSupervisionStatus_partial =
                  _277_triggeredSupervisionStatus_partial;
                _287_triggeredSB_partial = _278_triggeredSB_partial;
                _286_triggeredTCO_partial = _279_triggeredTCO_partial;
              }
              _269_triggeredSupervisionStatus_partial =
                _288_triggeredSupervisionStatus_partial;
              _271_triggeredSB_partial = _287_triggeredSB_partial;
              _273_triggeredTCO_partial = _286_triggeredTCO_partial;
            }
            _300_revokedSupervisionStatus_partial = _268_revokedSupervisionStatus_partial;
            _299_triggeredSupervisionStatus_partial =
              _269_triggeredSupervisionStatus_partial;
            _298_revokedSB_partial = _270_revokedSB_partial;
            _297_triggeredSB_partial = _271_triggeredSB_partial;
            _296_revokedTCO_partial = _272_revokedTCO_partial;
            _295_triggeredTCO_partial = _273_triggeredTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _300_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _299_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _298_revokedSB_partial;
          _131_triggeredSB_partial = _297_triggeredSB_partial;
          _134_revokedTCO_partial = _296_revokedTCO_partial;
          _135_triggeredTCO_partial = _295_triggeredTCO_partial;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          _325_revokedTCO_partial = kcg_false;
          _327_revokedSB_partial = kcg_false;
          _329_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          if (tr_1_guard_Normal_SM4_TSM_modeInterplay) {
            _322_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Normal_SM4_TSM_modeInterplay) {
            _322_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Normal_SM4_TSM_modeInterplay) {
            _322_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_Normal_SM4_TSM_modeInterplay) {
            _322_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            _322_SM4_reset_act_partial_TSM_modeInterplay =
              tr_5_guard_Normal_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_Normal_SM4_TSM_modeInterplay =
            tr_1_guard_Normal_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:Normal:<1> */
          if (outC->tr_1_clock_Normal_SM4_TSM_modeInterplay) {
            _303_triggeredTCO_partial = kcg_false;
            _302_triggeredSB_partial = kcg_false;
            _301_triggeredSupervisionStatus_partial =
              Intervention_Supervision_SDM_Types_Pkg;
            _328_triggeredSupervisionStatus_partial =
              _301_triggeredSupervisionStatus_partial;
            _326_triggeredSB_partial = _302_triggeredSB_partial;
            _324_triggeredTCO_partial = _303_triggeredTCO_partial;
          }
          else {
            outC->tr_2_clock_Normal_SM4_TSM_modeInterplay =
              tr_2_guard_Normal_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:Normal:<2> */
            if (outC->tr_2_clock_Normal_SM4_TSM_modeInterplay) {
              _318_triggeredTCO_partial = kcg_false;
              _319_triggeredSB_partial = kcg_true;
              _320_triggeredSupervisionStatus_partial =
                Intervention_Supervision_SDM_Types_Pkg;
              _304_triggeredSupervisionStatus_partial =
                _320_triggeredSupervisionStatus_partial;
              _305_triggeredSB_partial = _319_triggeredSB_partial;
              _306_triggeredTCO_partial = _318_triggeredTCO_partial;
            }
            else {
              _316_triggeredSB_partial = kcg_false;
              outC->tr_3_clock_Normal_SM4_TSM_modeInterplay =
                tr_3_guard_Normal_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:Normal:<3> */
              if (outC->tr_3_clock_Normal_SM4_TSM_modeInterplay) {
                _308_triggeredTCO_partial = kcg_true;
                _307_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                _317_triggeredSupervisionStatus_partial =
                  _307_triggeredSupervisionStatus_partial;
                _315_triggeredTCO_partial = _308_triggeredTCO_partial;
              }
              else {
                _310_triggeredTCO_partial = kcg_false;
                outC->tr_4_clock_Normal_SM4_TSM_modeInterplay =
                  tr_4_guard_Normal_SM4_TSM_modeInterplay;
                /* modeInterplay:TSM:SM4:Normal:<4> */
                if (outC->tr_4_clock_Normal_SM4_TSM_modeInterplay) {
                  _314_triggeredSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                  _309_triggeredSupervisionStatus_partial =
                    _314_triggeredSupervisionStatus_partial;
                }
                else {
                  outC->tr_5_clock_Normal_SM4_TSM_modeInterplay =
                    tr_5_guard_Normal_SM4_TSM_modeInterplay;
                  /* modeInterplay:TSM:SM4:Normal:<5> */
                  if (outC->tr_5_clock_Normal_SM4_TSM_modeInterplay) {
                    _311_triggeredSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
                    _313_triggeredSupervisionStatus_partial =
                      _311_triggeredSupervisionStatus_partial;
                  }
                  else {
                    _312_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                    _313_triggeredSupervisionStatus_partial =
                      _312_triggeredSupervisionStatus_partial;
                  }
                  _309_triggeredSupervisionStatus_partial =
                    _313_triggeredSupervisionStatus_partial;
                }
                _317_triggeredSupervisionStatus_partial =
                  _309_triggeredSupervisionStatus_partial;
                _315_triggeredTCO_partial = _310_triggeredTCO_partial;
              }
              _304_triggeredSupervisionStatus_partial =
                _317_triggeredSupervisionStatus_partial;
              _305_triggeredSB_partial = _316_triggeredSB_partial;
              _306_triggeredTCO_partial = _315_triggeredTCO_partial;
            }
            _328_triggeredSupervisionStatus_partial =
              _304_triggeredSupervisionStatus_partial;
            _326_triggeredSB_partial = _305_triggeredSB_partial;
            _324_triggeredTCO_partial = _306_triggeredTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _329_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _328_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _327_revokedSB_partial;
          _131_triggeredSB_partial = _326_triggeredSB_partial;
          _134_revokedTCO_partial = _325_revokedTCO_partial;
          _135_triggeredTCO_partial = _324_triggeredTCO_partial;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          _358_revokedTCO_partial = kcg_false;
          _360_revokedSB_partial = kcg_false;
          _362_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          if (tr_1_guard_init_SM4_TSM_modeInterplay) {
            _355_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_init_SM4_TSM_modeInterplay) {
            _355_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_init_SM4_TSM_modeInterplay) {
            _355_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_init_SM4_TSM_modeInterplay) {
            _355_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else if (tr_5_guard_init_SM4_TSM_modeInterplay) {
            _355_SM4_reset_act_partial_TSM_modeInterplay = kcg_true;
          }
          else {
            _355_SM4_reset_act_partial_TSM_modeInterplay =
              tr_6_guard_init_SM4_TSM_modeInterplay;
          }
          outC->tr_1_clock_init_SM4_TSM_modeInterplay =
            tr_1_guard_init_SM4_TSM_modeInterplay;
          /* modeInterplay:TSM:SM4:init:<1> */
          if (outC->tr_1_clock_init_SM4_TSM_modeInterplay) {
            _332_triggeredTCO_partial = kcg_false;
            _331_triggeredSB_partial = kcg_false;
            _330_triggeredSupervisionStatus_partial = Normal_Supervision_SDM_Types_Pkg;
            _361_triggeredSupervisionStatus_partial =
              _330_triggeredSupervisionStatus_partial;
            _359_triggeredSB_partial = _331_triggeredSB_partial;
            _357_triggeredTCO_partial = _332_triggeredTCO_partial;
          }
          else {
            outC->tr_2_clock_init_SM4_TSM_modeInterplay =
              tr_2_guard_init_SM4_TSM_modeInterplay;
            /* modeInterplay:TSM:SM4:init:<2> */
            if (outC->tr_2_clock_init_SM4_TSM_modeInterplay) {
              _351_triggeredTCO_partial = kcg_false;
              _352_triggeredSB_partial = kcg_true;
              _353_triggeredSupervisionStatus_partial =
                Intervention_Supervision_SDM_Types_Pkg;
              _333_triggeredSupervisionStatus_partial =
                _353_triggeredSupervisionStatus_partial;
              _334_triggeredSB_partial = _352_triggeredSB_partial;
              _335_triggeredTCO_partial = _351_triggeredTCO_partial;
            }
            else {
              _349_triggeredSB_partial = kcg_false;
              outC->tr_3_clock_init_SM4_TSM_modeInterplay =
                tr_3_guard_init_SM4_TSM_modeInterplay;
              /* modeInterplay:TSM:SM4:init:<3> */
              if (outC->tr_3_clock_init_SM4_TSM_modeInterplay) {
                _337_triggeredTCO_partial = kcg_false;
                _336_triggeredSupervisionStatus_partial =
                  Intervention_Supervision_SDM_Types_Pkg;
                _350_triggeredSupervisionStatus_partial =
                  _336_triggeredSupervisionStatus_partial;
                _348_triggeredTCO_partial = _337_triggeredTCO_partial;
              }
              else {
                outC->tr_4_clock_init_SM4_TSM_modeInterplay =
                  tr_4_guard_init_SM4_TSM_modeInterplay;
                /* modeInterplay:TSM:SM4:init:<4> */
                if (outC->tr_4_clock_init_SM4_TSM_modeInterplay) {
                  _346_triggeredTCO_partial = kcg_true;
                  _347_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                  _338_triggeredSupervisionStatus_partial =
                    _347_triggeredSupervisionStatus_partial;
                  _339_triggeredTCO_partial = _346_triggeredTCO_partial;
                }
                else {
                  _344_triggeredTCO_partial = kcg_false;
                  outC->tr_5_clock_init_SM4_TSM_modeInterplay =
                    tr_5_guard_init_SM4_TSM_modeInterplay;
                  /* modeInterplay:TSM:SM4:init:<5> */
                  if (outC->tr_5_clock_init_SM4_TSM_modeInterplay) {
                    _340_triggeredSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                    _345_triggeredSupervisionStatus_partial =
                      _340_triggeredSupervisionStatus_partial;
                  }
                  else {
                    outC->tr_6_clock_init_SM4_TSM_modeInterplay =
                      tr_6_guard_init_SM4_TSM_modeInterplay;
                    /* modeInterplay:TSM:SM4:init:<6> */
                    if (outC->tr_6_clock_init_SM4_TSM_modeInterplay) {
                      _343_triggeredSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
                      _341_triggeredSupervisionStatus_partial =
                        _343_triggeredSupervisionStatus_partial;
                    }
                    else {
                      _342_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                      _341_triggeredSupervisionStatus_partial =
                        _342_triggeredSupervisionStatus_partial;
                    }
                    _345_triggeredSupervisionStatus_partial =
                      _341_triggeredSupervisionStatus_partial;
                  }
                  _338_triggeredSupervisionStatus_partial =
                    _345_triggeredSupervisionStatus_partial;
                  _339_triggeredTCO_partial = _344_triggeredTCO_partial;
                }
                _350_triggeredSupervisionStatus_partial =
                  _338_triggeredSupervisionStatus_partial;
                _348_triggeredTCO_partial = _339_triggeredTCO_partial;
              }
              _333_triggeredSupervisionStatus_partial =
                _350_triggeredSupervisionStatus_partial;
              _334_triggeredSB_partial = _349_triggeredSB_partial;
              _335_triggeredTCO_partial = _348_triggeredTCO_partial;
            }
            _361_triggeredSupervisionStatus_partial =
              _333_triggeredSupervisionStatus_partial;
            _359_triggeredSB_partial = _334_triggeredSB_partial;
            _357_triggeredTCO_partial = _335_triggeredTCO_partial;
          }
          _128_revokedSupervisionStatus_partial = _362_revokedSupervisionStatus_partial;
          _129_triggeredSupervisionStatus_partial =
            _361_triggeredSupervisionStatus_partial;
          _130_revokedSB_partial = _360_revokedSB_partial;
          _131_triggeredSB_partial = _359_triggeredSB_partial;
          _134_revokedTCO_partial = _358_revokedTCO_partial;
          _135_triggeredTCO_partial = _357_triggeredTCO_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:TSM:SM4: */
      if (outC->init1) {
        SM4_reset_prv_TSM_modeInterplay = kcg_false;
      }
      else {
        SM4_reset_prv_TSM_modeInterplay = outC->SM4_reset_act_TSM_modeInterplay;
      }
      /* modeInterplay:TSM:SM4: */
      switch (outC->SM4_clock_TSM_modeInterplay) {
        case SSM_st_Intervention_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay = SM4_reset_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Warning_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay =
            _195_SM4_reset_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Overspeed_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay =
            _254_SM4_reset_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Indication_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay =
            _293_SM4_reset_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_Normal_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay =
            _322_SM4_reset_act_partial_TSM_modeInterplay;
          break;
        case SSM_st_init_SM4_TSM_modeInterplay :
          outC->SM4_reset_act_TSM_modeInterplay =
            _355_SM4_reset_act_partial_TSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->sdmType = _127_sdmType_partial;
      outC->revokedSupervisionStatus = _128_revokedSupervisionStatus_partial;
      outC->triggeredSupervisionStatus = _129_triggeredSupervisionStatus_partial;
      outC->revokedSB = _130_revokedSB_partial;
      outC->triggeredSB = _131_triggeredSB_partial;
      outC->revokedEB = _132_revokedEB_partial;
      outC->triggeredEB = _133_triggeredEB_partial;
      outC->revokedTCO = _134_revokedTCO_partial;
      outC->triggeredTCO = _135_triggeredTCO_partial;
      outC->modeInterplay_state_nxt = _137_modeInterplay_state_nxt_partial;
      break;
    case SSM_st_CSM_modeInterplay :
      triggeredTCO_partial = kcg_false;
      revokedTCO_partial = kcg_false;
      modeInterplay_fired_partial = outC->modeInterplay_fired_strong;
      modeInterplay_reset_nxt_partial = kcg_false;
      modeInterplay_state_nxt_partial = SSM_st_CSM_modeInterplay;
      switch (outC->_3_CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          _97_revokedEB_partial = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* modeInterplay:CSM:CSM: */
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay) {
            CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_InterventionStatus_NormalStatus_1_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay) {
            CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_InterventionStatus_NormalStatus_2_InterventionStatus_CSM_CSM_modeInterplay;
          }
          else {
            CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_no_trans_CSM_CSM_modeInterplay;
          }
          outC->CSM_fired_strong_CSM_modeInterplay =
            CSM_fired_strong_partial_CSM_modeInterplay;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_WarningStatus_CSM_CSM_modeInterplay) {
            _25_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_WarningStatus_InterventionStatus_1_WarningStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_WarningStatus_CSM_CSM_modeInterplay) {
            _25_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_WarningStatus_NormalStatus_2_WarningStatus_CSM_CSM_modeInterplay;
          }
          else {
            _25_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_no_trans_CSM_CSM_modeInterplay;
          }
          outC->CSM_fired_strong_CSM_modeInterplay =
            _25_CSM_fired_strong_partial_CSM_modeInterplay;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _48_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_OverspeedStatus_InterventionStatus_1_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _48_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_OverspeedStatus_NormalStatus_2_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _48_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_OverspeedStatus_WarningStatus_3_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          else {
            _48_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_no_trans_CSM_CSM_modeInterplay;
          }
          outC->CSM_fired_strong_CSM_modeInterplay =
            _48_CSM_fired_strong_partial_CSM_modeInterplay;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _63_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_NormalStatus_InterventionStatus_1_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _63_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_NormalStatus_WarningStatus_2_NormalStatus_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _63_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_NormalStatus_OverspeedStatus_3_NormalStatus_CSM_CSM_modeInterplay;
          }
          else {
            _63_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_no_trans_CSM_CSM_modeInterplay;
          }
          outC->CSM_fired_strong_CSM_modeInterplay =
            _63_CSM_fired_strong_partial_CSM_modeInterplay;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          if (tr_1_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_NormalStatus_1_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_2_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_OverspeedStatus_2_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_3_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_WarningStatus_3_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_4_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_InterventionStatus_4_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_5_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_NormalStatus_5_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_6_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_NormalStatus_6_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_7_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_OverspeedStatus_7_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_8_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_WarningStatus_8_Init_CSM_CSM_modeInterplay;
          }
          else if (tr_9_guard_Init_CSM_CSM_modeInterplay) {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_Init_InterventionStatus_9_Init_CSM_CSM_modeInterplay;
          }
          else {
            _88_CSM_fired_strong_partial_CSM_modeInterplay =
              SSM_TR_no_trans_CSM_CSM_modeInterplay;
          }
          outC->CSM_fired_strong_CSM_modeInterplay =
            _88_CSM_fired_strong_partial_CSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:CSM:CSM: */
      switch (outC->_3_CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          CSM_fired_partial_CSM_modeInterplay = outC->CSM_fired_strong_CSM_modeInterplay;
          CSM_reset_nxt_partial_CSM_modeInterplay = kcg_false;
          CSM_state_nxt_partial_CSM_modeInterplay =
            SSM_st_InterventionStatus_CSM_CSM_modeInterplay;
          outC->_L7_InterventionStatus_CSM_CSM_modeInterplay = last_triggeredEB;
          outC->_L4_InterventionStatus_CSM_CSM_modeInterplay = outC->t5_CSM_modeInterplay;
          outC->_L8_InterventionStatus_CSM_CSM_modeInterplay =
            outC->_L4_InterventionStatus_CSM_CSM_modeInterplay |
            outC->_L7_InterventionStatus_CSM_CSM_modeInterplay;
          _96_triggeredEB_partial = outC->_L8_InterventionStatus_CSM_CSM_modeInterplay;
          outC->_L3_InterventionStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
          _98_sdmType_partial = outC->_L3_InterventionStatus_CSM_CSM_modeInterplay;
          sdmType_partial = _98_sdmType_partial;
          revokedEB_partial = _97_revokedEB_partial;
          triggeredEB_partial = _96_triggeredEB_partial;
          outC->CSM_state_nxt_CSM_modeInterplay = CSM_state_nxt_partial_CSM_modeInterplay;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          _103_triggeredEB_partial = kcg_false;
          _104_revokedEB_partial = kcg_false;
          _99_CSM_fired_partial_CSM_modeInterplay =
            outC->CSM_fired_strong_CSM_modeInterplay;
          _100_CSM_reset_nxt_partial_CSM_modeInterplay = kcg_false;
          _101_CSM_state_nxt_partial_CSM_modeInterplay =
            SSM_st_WarningStatus_CSM_CSM_modeInterplay;
          outC->_L3_WarningStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
          _105_sdmType_partial = outC->_L3_WarningStatus_CSM_CSM_modeInterplay;
          sdmType_partial = _105_sdmType_partial;
          revokedEB_partial = _104_revokedEB_partial;
          triggeredEB_partial = _103_triggeredEB_partial;
          outC->CSM_state_nxt_CSM_modeInterplay =
            _101_CSM_state_nxt_partial_CSM_modeInterplay;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          _110_triggeredEB_partial = kcg_false;
          _111_revokedEB_partial = kcg_false;
          _106_CSM_fired_partial_CSM_modeInterplay =
            outC->CSM_fired_strong_CSM_modeInterplay;
          _107_CSM_reset_nxt_partial_CSM_modeInterplay = kcg_false;
          _108_CSM_state_nxt_partial_CSM_modeInterplay =
            SSM_st_OverspeedStatus_CSM_CSM_modeInterplay;
          outC->_L12_OverspeedStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
          _112_sdmType_partial = outC->_L12_OverspeedStatus_CSM_CSM_modeInterplay;
          sdmType_partial = _112_sdmType_partial;
          revokedEB_partial = _111_revokedEB_partial;
          triggeredEB_partial = _110_triggeredEB_partial;
          outC->CSM_state_nxt_CSM_modeInterplay =
            _108_CSM_state_nxt_partial_CSM_modeInterplay;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          _117_triggeredEB_partial = kcg_false;
          _113_CSM_fired_partial_CSM_modeInterplay =
            outC->CSM_fired_strong_CSM_modeInterplay;
          _114_CSM_reset_nxt_partial_CSM_modeInterplay = kcg_false;
          _115_CSM_state_nxt_partial_CSM_modeInterplay =
            SSM_st_NormalStatus_CSM_CSM_modeInterplay;
          outC->_L12_NormalStatus_CSM_CSM_modeInterplay = last_revokedEB;
          outC->_L10_NormalStatus_CSM_CSM_modeInterplay = outC->r0_CSM_modeInterplay;
          outC->_L15_NormalStatus_CSM_CSM_modeInterplay = outC->r1_CSM_modeInterplay;
          outC->_L16_NormalStatus_CSM_CSM_modeInterplay =
            outC->_L15_NormalStatus_CSM_CSM_modeInterplay |
            outC->_L10_NormalStatus_CSM_CSM_modeInterplay |
            outC->_L12_NormalStatus_CSM_CSM_modeInterplay;
          _118_revokedEB_partial = outC->_L16_NormalStatus_CSM_CSM_modeInterplay;
          outC->_L9_NormalStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
          _119_sdmType_partial = outC->_L9_NormalStatus_CSM_CSM_modeInterplay;
          sdmType_partial = _119_sdmType_partial;
          revokedEB_partial = _118_revokedEB_partial;
          triggeredEB_partial = _117_triggeredEB_partial;
          outC->CSM_state_nxt_CSM_modeInterplay =
            _115_CSM_state_nxt_partial_CSM_modeInterplay;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          _124_triggeredEB_partial = kcg_false;
          _125_revokedEB_partial = kcg_false;
          _126_sdmType_partial = last_sdmType;
          _120_CSM_fired_partial_CSM_modeInterplay =
            outC->CSM_fired_strong_CSM_modeInterplay;
          _121_CSM_reset_nxt_partial_CSM_modeInterplay = kcg_false;
          _122_CSM_state_nxt_partial_CSM_modeInterplay =
            SSM_st_Init_CSM_CSM_modeInterplay;
          sdmType_partial = _126_sdmType_partial;
          revokedEB_partial = _125_revokedEB_partial;
          triggeredEB_partial = _124_triggeredEB_partial;
          outC->CSM_state_nxt_CSM_modeInterplay =
            _122_CSM_state_nxt_partial_CSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:CSM:CSM: */
      if (outC->init2) {
        CSM_reset_sel_CSM_modeInterplay = kcg_false;
      }
      else {
        CSM_reset_sel_CSM_modeInterplay = outC->CSM_reset_nxt_CSM_modeInterplay;
      }
      /* modeInterplay:CSM:CSM: */
      switch (outC->_3_CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_nxt_CSM_modeInterplay = CSM_reset_nxt_partial_CSM_modeInterplay;
          outC->CSM_fired_CSM_modeInterplay = CSM_fired_partial_CSM_modeInterplay;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_nxt_CSM_modeInterplay =
            _100_CSM_reset_nxt_partial_CSM_modeInterplay;
          outC->CSM_fired_CSM_modeInterplay = _99_CSM_fired_partial_CSM_modeInterplay;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_nxt_CSM_modeInterplay =
            _107_CSM_reset_nxt_partial_CSM_modeInterplay;
          outC->CSM_fired_CSM_modeInterplay = _106_CSM_fired_partial_CSM_modeInterplay;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_nxt_CSM_modeInterplay =
            _114_CSM_reset_nxt_partial_CSM_modeInterplay;
          outC->CSM_fired_CSM_modeInterplay = _113_CSM_fired_partial_CSM_modeInterplay;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          outC->CSM_reset_nxt_CSM_modeInterplay =
            _121_CSM_reset_nxt_partial_CSM_modeInterplay;
          outC->CSM_fired_CSM_modeInterplay = _120_CSM_fired_partial_CSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:CSM:CSM: */
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          _9_triggeredSB_partial = kcg_false;
          _11_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          if (tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay) {
            CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else {
            CSM_reset_act_partial_CSM_modeInterplay =
              tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay;
          }
          outC->tr_1_clock_InterventionStatus_CSM_CSM_modeInterplay =
            tr_1_guard_InterventionStatus_CSM_CSM_modeInterplay;
          /* modeInterplay:CSM:CSM:InterventionStatus:<1> */
          if (outC->tr_1_clock_InterventionStatus_CSM_CSM_modeInterplay) {
            _2_revokedSB_partial = kcg_false;
            _1_revokedSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _12_revokedSupervisionStatus_partial = _1_revokedSupervisionStatus_partial;
            _10_revokedSB_partial = _2_revokedSB_partial;
          }
          else {
            outC->tr_2_clock_InterventionStatus_CSM_CSM_modeInterplay =
              tr_2_guard_InterventionStatus_CSM_CSM_modeInterplay;
            /* modeInterplay:CSM:CSM:InterventionStatus:<2> */
            if (outC->tr_2_clock_InterventionStatus_CSM_CSM_modeInterplay) {
              _7_revokedSB_partial = kcg_true;
              _8_revokedSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
              _3_revokedSupervisionStatus_partial = _8_revokedSupervisionStatus_partial;
              _4_revokedSB_partial = _7_revokedSB_partial;
            }
            else {
              _5_revokedSB_partial = kcg_false;
              _6_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _3_revokedSupervisionStatus_partial = _6_revokedSupervisionStatus_partial;
              _4_revokedSB_partial = _5_revokedSB_partial;
            }
            _12_revokedSupervisionStatus_partial = _3_revokedSupervisionStatus_partial;
            _10_revokedSB_partial = _4_revokedSB_partial;
          }
          revokedSupervisionStatus_partial = _12_revokedSupervisionStatus_partial;
          triggeredSupervisionStatus_partial = _11_triggeredSupervisionStatus_partial;
          revokedSB_partial = _10_revokedSB_partial;
          triggeredSB_partial = _9_triggeredSB_partial;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_WarningStatus_CSM_CSM_modeInterplay) {
            _26_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else {
            _26_CSM_reset_act_partial_CSM_modeInterplay =
              tr_2_guard_WarningStatus_CSM_CSM_modeInterplay;
          }
          outC->tr_1_clock_WarningStatus_CSM_CSM_modeInterplay =
            tr_1_guard_WarningStatus_CSM_CSM_modeInterplay;
          /* modeInterplay:CSM:CSM:WarningStatus:<1> */
          if (outC->tr_1_clock_WarningStatus_CSM_CSM_modeInterplay) {
            _15_revokedSB_partial = kcg_false;
            _13_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _16_triggeredSB_partial = outC->t4_CSM_modeInterplay;
            _14_triggeredSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _31_revokedSupervisionStatus_partial = _13_revokedSupervisionStatus_partial;
            _30_triggeredSupervisionStatus_partial = _14_triggeredSupervisionStatus_partial;
            _29_revokedSB_partial = _15_revokedSB_partial;
            _28_triggeredSB_partial = _16_triggeredSB_partial;
          }
          else {
            _20_triggeredSB_partial = kcg_false;
            _18_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            outC->tr_2_clock_WarningStatus_CSM_CSM_modeInterplay =
              tr_2_guard_WarningStatus_CSM_CSM_modeInterplay;
            /* modeInterplay:CSM:CSM:WarningStatus:<2> */
            if (outC->tr_2_clock_WarningStatus_CSM_CSM_modeInterplay) {
              _23_revokedSB_partial = kcg_true;
              _24_revokedSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
              _17_revokedSupervisionStatus_partial = _24_revokedSupervisionStatus_partial;
              _19_revokedSB_partial = _23_revokedSB_partial;
            }
            else {
              _21_revokedSB_partial = kcg_false;
              _22_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _17_revokedSupervisionStatus_partial = _22_revokedSupervisionStatus_partial;
              _19_revokedSB_partial = _21_revokedSB_partial;
            }
            _31_revokedSupervisionStatus_partial = _17_revokedSupervisionStatus_partial;
            _30_triggeredSupervisionStatus_partial = _18_triggeredSupervisionStatus_partial;
            _29_revokedSB_partial = _19_revokedSB_partial;
            _28_triggeredSB_partial = _20_triggeredSB_partial;
          }
          revokedSupervisionStatus_partial = _31_revokedSupervisionStatus_partial;
          triggeredSupervisionStatus_partial = _30_triggeredSupervisionStatus_partial;
          revokedSB_partial = _29_revokedSB_partial;
          triggeredSB_partial = _28_triggeredSB_partial;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          if (tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _49_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay) {
            _49_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else {
            _49_CSM_reset_act_partial_CSM_modeInterplay =
              tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay;
          }
          outC->tr_1_clock_OverspeedStatus_CSM_CSM_modeInterplay =
            tr_1_guard_OverspeedStatus_CSM_CSM_modeInterplay;
          /* modeInterplay:CSM:CSM:OverspeedStatus:<1> */
          if (outC->tr_1_clock_OverspeedStatus_CSM_CSM_modeInterplay) {
            _34_revokedSB_partial = kcg_false;
            _32_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _35_triggeredSB_partial = outC->t4_CSM_modeInterplay;
            _33_triggeredSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _54_revokedSupervisionStatus_partial = _32_revokedSupervisionStatus_partial;
            _53_triggeredSupervisionStatus_partial = _33_triggeredSupervisionStatus_partial;
            _52_revokedSB_partial = _34_revokedSB_partial;
            _51_triggeredSB_partial = _35_triggeredSB_partial;
          }
          else {
            _39_triggeredSB_partial = kcg_false;
            outC->tr_2_clock_OverspeedStatus_CSM_CSM_modeInterplay =
              tr_2_guard_OverspeedStatus_CSM_CSM_modeInterplay;
            /* modeInterplay:CSM:CSM:OverspeedStatus:<2> */
            if (outC->tr_2_clock_OverspeedStatus_CSM_CSM_modeInterplay) {
              _46_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _45_revokedSB_partial = kcg_true;
              _47_revokedSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
              _36_revokedSupervisionStatus_partial = _47_revokedSupervisionStatus_partial;
              _37_triggeredSupervisionStatus_partial = _46_triggeredSupervisionStatus_partial;
              _38_revokedSB_partial = _45_revokedSB_partial;
            }
            else {
              _42_revokedSB_partial = kcg_false;
              _44_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              outC->tr_3_clock_OverspeedStatus_CSM_CSM_modeInterplay =
                tr_3_guard_OverspeedStatus_CSM_CSM_modeInterplay;
              /* modeInterplay:CSM:CSM:OverspeedStatus:<3> */
              if (outC->tr_3_clock_OverspeedStatus_CSM_CSM_modeInterplay) {
                _40_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                _43_triggeredSupervisionStatus_partial = _40_triggeredSupervisionStatus_partial;
              }
              else {
                _41_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                _43_triggeredSupervisionStatus_partial = _41_triggeredSupervisionStatus_partial;
              }
              _36_revokedSupervisionStatus_partial = _44_revokedSupervisionStatus_partial;
              _37_triggeredSupervisionStatus_partial = _43_triggeredSupervisionStatus_partial;
              _38_revokedSB_partial = _42_revokedSB_partial;
            }
            _54_revokedSupervisionStatus_partial = _36_revokedSupervisionStatus_partial;
            _53_triggeredSupervisionStatus_partial = _37_triggeredSupervisionStatus_partial;
            _52_revokedSB_partial = _38_revokedSB_partial;
            _51_triggeredSB_partial = _39_triggeredSB_partial;
          }
          revokedSupervisionStatus_partial = _54_revokedSupervisionStatus_partial;
          triggeredSupervisionStatus_partial = _53_triggeredSupervisionStatus_partial;
          revokedSB_partial = _52_revokedSB_partial;
          triggeredSB_partial = _51_triggeredSB_partial;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          _67_revokedSB_partial = kcg_false;
          _69_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
          if (tr_1_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _64_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_NormalStatus_CSM_CSM_modeInterplay) {
            _64_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else {
            _64_CSM_reset_act_partial_CSM_modeInterplay =
              tr_3_guard_NormalStatus_CSM_CSM_modeInterplay;
          }
          outC->tr_1_clock_NormalStatus_CSM_CSM_modeInterplay =
            tr_1_guard_NormalStatus_CSM_CSM_modeInterplay;
          /* modeInterplay:CSM:CSM:NormalStatus:<1> */
          if (outC->tr_1_clock_NormalStatus_CSM_CSM_modeInterplay) {
            _56_triggeredSB_partial = outC->t4_CSM_modeInterplay;
            _55_triggeredSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
            _68_triggeredSupervisionStatus_partial = _55_triggeredSupervisionStatus_partial;
            _66_triggeredSB_partial = _56_triggeredSB_partial;
          }
          else {
            _58_triggeredSB_partial = kcg_false;
            outC->tr_2_clock_NormalStatus_CSM_CSM_modeInterplay =
              tr_2_guard_NormalStatus_CSM_CSM_modeInterplay;
            /* modeInterplay:CSM:CSM:NormalStatus:<2> */
            if (outC->tr_2_clock_NormalStatus_CSM_CSM_modeInterplay) {
              _62_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
              _57_triggeredSupervisionStatus_partial = _62_triggeredSupervisionStatus_partial;
            }
            else {
              outC->tr_3_clock_NormalStatus_CSM_CSM_modeInterplay =
                tr_3_guard_NormalStatus_CSM_CSM_modeInterplay;
              /* modeInterplay:CSM:CSM:NormalStatus:<3> */
              if (outC->tr_3_clock_NormalStatus_CSM_CSM_modeInterplay) {
                _59_triggeredSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                _61_triggeredSupervisionStatus_partial = _59_triggeredSupervisionStatus_partial;
              }
              else {
                _60_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                _61_triggeredSupervisionStatus_partial = _60_triggeredSupervisionStatus_partial;
              }
              _57_triggeredSupervisionStatus_partial = _61_triggeredSupervisionStatus_partial;
            }
            _68_triggeredSupervisionStatus_partial = _57_triggeredSupervisionStatus_partial;
            _66_triggeredSB_partial = _58_triggeredSB_partial;
          }
          revokedSupervisionStatus_partial = _69_revokedSupervisionStatus_partial;
          triggeredSupervisionStatus_partial = _68_triggeredSupervisionStatus_partial;
          revokedSB_partial = _67_revokedSB_partial;
          triggeredSB_partial = _66_triggeredSB_partial;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          _91_triggeredSB_partial = kcg_false;
          if (tr_1_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_2_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_3_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_4_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_5_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_6_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_7_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else if (tr_8_guard_Init_CSM_CSM_modeInterplay) {
            _89_CSM_reset_act_partial_CSM_modeInterplay = kcg_true;
          }
          else {
            _89_CSM_reset_act_partial_CSM_modeInterplay =
              tr_9_guard_Init_CSM_CSM_modeInterplay;
          }
          outC->tr_1_clock_Init_CSM_CSM_modeInterplay =
            tr_1_guard_Init_CSM_CSM_modeInterplay;
          /* modeInterplay:CSM:CSM:Init:<1> */
          if (outC->tr_1_clock_Init_CSM_CSM_modeInterplay) {
            _71_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            _72_revokedSB_partial = kcg_true;
            _70_revokedSupervisionStatus_partial = Indication_Supervision_SDM_Types_Pkg;
            _94_revokedSupervisionStatus_partial = _70_revokedSupervisionStatus_partial;
            _93_triggeredSupervisionStatus_partial = _71_triggeredSupervisionStatus_partial;
            _92_revokedSB_partial = _72_revokedSB_partial;
          }
          else {
            _75_revokedSB_partial = kcg_false;
            _73_revokedSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
            outC->tr_2_clock_Init_CSM_CSM_modeInterplay =
              tr_2_guard_Init_CSM_CSM_modeInterplay;
            /* modeInterplay:CSM:CSM:Init:<2> */
            if (outC->tr_2_clock_Init_CSM_CSM_modeInterplay) {
              _87_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
              _74_triggeredSupervisionStatus_partial = _87_triggeredSupervisionStatus_partial;
            }
            else {
              outC->tr_3_clock_Init_CSM_CSM_modeInterplay =
                tr_3_guard_Init_CSM_CSM_modeInterplay;
              /* modeInterplay:CSM:CSM:Init:<3> */
              if (outC->tr_3_clock_Init_CSM_CSM_modeInterplay) {
                _76_triggeredSupervisionStatus_partial = Warning_Supervision_SDM_Types_Pkg;
                _86_triggeredSupervisionStatus_partial = _76_triggeredSupervisionStatus_partial;
              }
              else {
                outC->tr_4_clock_Init_CSM_CSM_modeInterplay =
                  tr_4_guard_Init_CSM_CSM_modeInterplay;
                /* modeInterplay:CSM:CSM:Init:<4> */
                if (outC->tr_4_clock_Init_CSM_CSM_modeInterplay) {
                  _85_triggeredSupervisionStatus_partial = Intervention_Supervision_SDM_Types_Pkg;
                  _77_triggeredSupervisionStatus_partial = _85_triggeredSupervisionStatus_partial;
                }
                else {
                  outC->tr_5_clock_Init_CSM_CSM_modeInterplay =
                    tr_5_guard_Init_CSM_CSM_modeInterplay;
                  /* modeInterplay:CSM:CSM:Init:<5> */
                  if (outC->tr_5_clock_Init_CSM_CSM_modeInterplay) {
                    _78_triggeredSupervisionStatus_partial = Normal_Supervision_SDM_Types_Pkg;
                    _84_triggeredSupervisionStatus_partial = _78_triggeredSupervisionStatus_partial;
                  }
                  else {
                    outC->tr_6_clock_Init_CSM_CSM_modeInterplay =
                      tr_6_guard_Init_CSM_CSM_modeInterplay;
                    /* modeInterplay:CSM:CSM:Init:<6> */
                    if (outC->tr_6_clock_Init_CSM_CSM_modeInterplay) {
                      _83_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                      _79_triggeredSupervisionStatus_partial = _83_triggeredSupervisionStatus_partial;
                    }
                    else {
                      outC->tr_7_clock_Init_CSM_CSM_modeInterplay =
                        tr_7_guard_Init_CSM_CSM_modeInterplay;
                      /* modeInterplay:CSM:CSM:Init:<7> */
                      if (outC->tr_7_clock_Init_CSM_CSM_modeInterplay) {
                        _80_triggeredSupervisionStatus_partial = Overspeed_Supervision_SDM_Types_Pkg;
                        _82_triggeredSupervisionStatus_partial = _80_triggeredSupervisionStatus_partial;
                      }
                      else {
                        _81_triggeredSupervisionStatus_partial = cSupervisionStatus_SDM_Commands_Pkg;
                        _82_triggeredSupervisionStatus_partial = _81_triggeredSupervisionStatus_partial;
                      }
                      _79_triggeredSupervisionStatus_partial = _82_triggeredSupervisionStatus_partial;
                    }
                    _84_triggeredSupervisionStatus_partial = _79_triggeredSupervisionStatus_partial;
                  }
                  _77_triggeredSupervisionStatus_partial = _84_triggeredSupervisionStatus_partial;
                }
                _86_triggeredSupervisionStatus_partial = _77_triggeredSupervisionStatus_partial;
              }
              _74_triggeredSupervisionStatus_partial = _86_triggeredSupervisionStatus_partial;
            }
            _94_revokedSupervisionStatus_partial = _73_revokedSupervisionStatus_partial;
            _93_triggeredSupervisionStatus_partial = _74_triggeredSupervisionStatus_partial;
            _92_revokedSB_partial = _75_revokedSB_partial;
          }
          revokedSupervisionStatus_partial = _94_revokedSupervisionStatus_partial;
          triggeredSupervisionStatus_partial = _93_triggeredSupervisionStatus_partial;
          revokedSB_partial = _92_revokedSB_partial;
          triggeredSB_partial = _91_triggeredSB_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* modeInterplay:CSM:CSM: */
      if (outC->init2) {
        CSM_reset_prv_CSM_modeInterplay = kcg_false;
      }
      else {
        CSM_reset_prv_CSM_modeInterplay = outC->CSM_reset_act_CSM_modeInterplay;
      }
      /* modeInterplay:CSM:CSM: */
      switch (outC->CSM_clock_CSM_modeInterplay) {
        case SSM_st_InterventionStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_act_CSM_modeInterplay = CSM_reset_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_WarningStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_act_CSM_modeInterplay =
            _26_CSM_reset_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_OverspeedStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_act_CSM_modeInterplay =
            _49_CSM_reset_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_NormalStatus_CSM_CSM_modeInterplay :
          outC->CSM_reset_act_CSM_modeInterplay =
            _64_CSM_reset_act_partial_CSM_modeInterplay;
          break;
        case SSM_st_Init_CSM_CSM_modeInterplay :
          outC->CSM_reset_act_CSM_modeInterplay =
            _89_CSM_reset_act_partial_CSM_modeInterplay;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->sdmType = sdmType_partial;
      outC->revokedSupervisionStatus = revokedSupervisionStatus_partial;
      outC->triggeredSupervisionStatus = triggeredSupervisionStatus_partial;
      outC->revokedSB = revokedSB_partial;
      outC->triggeredSB = triggeredSB_partial;
      outC->revokedEB = revokedEB_partial;
      outC->triggeredEB = triggeredEB_partial;
      outC->revokedTCO = revokedTCO_partial;
      outC->triggeredTCO = triggeredTCO_partial;
      outC->modeInterplay_state_nxt = modeInterplay_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  modeInterplay_reset_sel = outC->modeInterplay_reset_nxt;
  /* modeInterplay: */
  switch (outC->modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      outC->modeInterplay_reset_nxt = _413_modeInterplay_reset_nxt_partial;
      outC->modeInterplay_fired = _414_modeInterplay_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_TSM_modeInterplay :
      outC->modeInterplay_reset_nxt = _138_modeInterplay_reset_nxt_partial;
      outC->modeInterplay_fired = _139_modeInterplay_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_CSM_modeInterplay :
      outC->modeInterplay_reset_nxt = modeInterplay_reset_nxt_partial;
      outC->modeInterplay_fired = modeInterplay_fired_partial;
      outC->init2 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L31.isSB_FBAvailable = kcg_true;
  outC->_L31.isSB_CmdAvailable = kcg_true;
  outC->_L31.isTCOAvailable = kcg_true;
  outC->_L31.T_traction_cut_off = kcg_lit_int64(0);
  outC->_L31.offsetAntennaL1 = kcg_lit_int64(0);
  outC->_L31.T_b_limit = kcg_lit_int64(0);
  outC->_L30 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L24 = kcg_true;
  outC->_L26.valid = kcg_true;
  outC->_L26.timestamp = kcg_lit_int64(0);
  outC->_L26.trainPositionIsUnknown = kcg_true;
  outC->_L26.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L26.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L26.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L26.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L26.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L26.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L26.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L26.LRBG.valid = kcg_true;
  outC->_L26.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L26.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L26.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L26.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L26.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L26.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L26.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L26.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L26.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L26.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L26.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L26.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L26.LRBG.missed = kcg_true;
  outC->_L26.prvLRBG.valid = kcg_true;
  outC->_L26.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L26.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L26.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L26.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L26.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L26.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L26.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L26.prvLRBG.missed = kcg_true;
  outC->_L26.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L26.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L26.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L26.linkingIsUsedOnboard = kcg_true;
  outC->_L26.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L26.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L26.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L14.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L14.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L14.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L14.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L14.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L14.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L14.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L14.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L14.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L14.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L14.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L14.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L14.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L14.d_target = kcg_lit_int64(0);
  outC->_L14.d_eoa = kcg_lit_int64(0);
  outC->_L14.d_svl = kcg_lit_int64(0);
  outC->_L14.Preindication_EBD_location_valid = kcg_true;
  outC->_L14.Preindication_SBD_location_valid = kcg_true;
  outC->_L14.RSM_start_location_EBD_valid = kcg_true;
  outC->_L14.RSM_start_location_SBD_valid = kcg_true;
  outC->isPreIndicationLocation = kcg_true;
  outC->isRSMLocation = kcg_true;
  outC->modeInterplay_fired = SSM_TR_no_trans_modeInterplay;
  outC->modeInterplay_fired_strong = SSM_TR_no_trans_modeInterplay;
  outC->modeInterplay_state_act = SSM_st_CSM_modeInterplay;
  outC->modeInterplay_state_sel = SSM_st_CSM_modeInterplay;
  outC->_L3_IndicationStatus_RSM_RSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L2_IndicationStatus_RSM_RSM_modeInterplay =
    Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_InterventionStatus_RSM_RSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L1_InterventionStatus_RSM_RSM_modeInterplay =
    Normal_Supervision_SDM_Types_Pkg;
  outC->tr_1_clock_Init_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Init_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_5_clock_Init_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Init_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Init_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_1_clock_IndicationStatus_RSM_RSM_modeInterplay = kcg_true;
  outC->tr_1_clock_InterventionStatus_RSM_RSM_modeInterplay = kcg_true;
  outC->_5_RSM_clock_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
  outC->RSM_clock_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
  outC->RSM_state_sel_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
  outC->RSM_state_act_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
  outC->RSM_fired_strong_RSM_modeInterplay =
    SSM_TR_no_trans_RSM_RSM_modeInterplay;
  outC->RSM_fired_RSM_modeInterplay = SSM_TR_no_trans_RSM_RSM_modeInterplay;
  outC->t1_RSM_modeInterplay = kcg_true;
  outC->t2_RSM_modeInterplay = kcg_true;
  outC->r0_RSM_modeInterplay = kcg_true;
  outC->r1_RSM_modeInterplay = kcg_true;
  outC->notInt2Int_RSM_modeInterplay = kcg_true;
  outC->US_NS2IS_RSM_modeInterplay = kcg_true;
  outC->WS_OS2IS_RSM_modeInterplay = kcg_true;
  outC->_L1_RSM_modeInterplay.V_est = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.V_MRSP = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.V_release = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.V_target = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.v_p_mrdt = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.v_p_dmi = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L1_RSM_modeInterplay.OdoStandStill = kcg_true;
  outC->_L2_RSM_modeInterplay = kcg_lit_int64(0);
  outC->_L3_RSM_modeInterplay = kcg_lit_int64(0);
  outC->_L4_RSM_modeInterplay = kcg_true;
  outC->_L5_RSM_modeInterplay = kcg_true;
  outC->_L7_RSM_modeInterplay = kcg_true;
  outC->_L8_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L10_RSM_modeInterplay = kcg_true;
  outC->_L11_RSM_modeInterplay = kcg_true;
  outC->_L12_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L13_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L14_RSM_modeInterplay = kcg_true;
  outC->_L15_RSM_modeInterplay = kcg_true;
  outC->_L16_RSM_modeInterplay = kcg_true;
  outC->_L25_RSM_modeInterplay = kcg_true;
  outC->_L24_RSM_modeInterplay = kcg_true;
  outC->_L23_RSM_modeInterplay = kcg_true;
  outC->_L22_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L21_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L26_RSM_modeInterplay = kcg_true;
  outC->_L27_RSM_modeInterplay = kcg_true;
  outC->_L31_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L35_RSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L37_RSM_modeInterplay = kcg_true;
  outC->_L39_RSM_modeInterplay = kcg_true;
  outC->_L51_RSM_modeInterplay = kcg_true;
  outC->_L52_RSM_modeInterplay = kcg_true;
  outC->_L57_RSM_modeInterplay = kcg_true;
  outC->_L9_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L8_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L7_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L6_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L5_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L4_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->_L3_Normal_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_Normal_SM4_TSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L5_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->_L4_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->_L3_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->_L1_Indication_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_Indication_SM4_TSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L3_Overspeed_SM4_TSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L4_Overspeed_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L1_Warning_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_Warning_SM4_TSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L6_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->_L5_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->_L4_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->_L3_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->_L1_Intervention_SM4_TSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_Intervention_SM4_TSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->tr_1_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_5_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_6_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_4_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_init_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_1_clock_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_5_clock_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Normal_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_1_clock_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_5_clock_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Indication_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_1_clock_Overspeed_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Overspeed_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_5_clock_Overspeed_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Overspeed_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Overspeed_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_1_clock_Warning_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Warning_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Warning_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Warning_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_1_clock_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Intervention_SM4_TSM_modeInterplay = kcg_true;
  outC->_4_SM4_clock_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
  outC->SM4_clock_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
  outC->SM4_state_sel_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
  outC->SM4_state_act_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
  outC->SM4_fired_strong_TSM_modeInterplay =
    SSM_TR_no_trans_SM4_TSM_modeInterplay;
  outC->SM4_fired_TSM_modeInterplay = SSM_TR_no_trans_SM4_TSM_modeInterplay;
  outC->r0_TSM_modeInterplay = kcg_true;
  outC->r1_TSM_modeInterplay = kcg_true;
  outC->r2_TSM_modeInterplay = kcg_true;
  outC->r3_TSM_modeInterplay = kcg_true;
  outC->t1_TSM_modeInterplay = kcg_true;
  outC->t2_TSM_modeInterplay = kcg_true;
  outC->t3_TSM_modeInterplay = kcg_true;
  outC->t4_6_TSM_modeInterplay = kcg_true;
  outC->t7_9_TSM_modeInterplay = kcg_true;
  outC->t10_12_TSM_modeInterplay = kcg_true;
  outC->t14_TSM_modeInterplay = kcg_true;
  outC->t13_TSM_modeInterplay = kcg_true;
  outC->_L1_TSM_modeInterplay.r0 = kcg_true;
  outC->_L1_TSM_modeInterplay.r1 = kcg_true;
  outC->_L1_TSM_modeInterplay.r2 = kcg_true;
  outC->_L1_TSM_modeInterplay.r3 = kcg_true;
  outC->_L2_TSM_modeInterplay.t1 = kcg_true;
  outC->_L2_TSM_modeInterplay.t2 = kcg_true;
  outC->_L2_TSM_modeInterplay.t3 = kcg_true;
  outC->_L2_TSM_modeInterplay.t4 = kcg_true;
  outC->_L2_TSM_modeInterplay.t5 = kcg_true;
  outC->_L2_TSM_modeInterplay.t6 = kcg_true;
  outC->_L2_TSM_modeInterplay.t7 = kcg_true;
  outC->_L2_TSM_modeInterplay.t8 = kcg_true;
  outC->_L2_TSM_modeInterplay.t9 = kcg_true;
  outC->_L2_TSM_modeInterplay.t10 = kcg_true;
  outC->_L2_TSM_modeInterplay.t11 = kcg_true;
  outC->_L2_TSM_modeInterplay.t12 = kcg_true;
  outC->_L2_TSM_modeInterplay.t13 = kcg_true;
  outC->_L2_TSM_modeInterplay.t14 = kcg_true;
  outC->_L4_TSM_modeInterplay.V_est = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.V_MRSP = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.V_release = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.V_target = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.v_p_mrdt = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.v_p_dmi = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L4_TSM_modeInterplay.OdoStandStill = kcg_true;
  outC->_L5_TSM_modeInterplay.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_target = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_eoa = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.d_svl = kcg_lit_int64(0);
  outC->_L5_TSM_modeInterplay.Preindication_EBD_location_valid = kcg_true;
  outC->_L5_TSM_modeInterplay.Preindication_SBD_location_valid = kcg_true;
  outC->_L5_TSM_modeInterplay.RSM_start_location_EBD_valid = kcg_true;
  outC->_L5_TSM_modeInterplay.RSM_start_location_SBD_valid = kcg_true;
  outC->_L6_TSM_modeInterplay.targetType = EoA_TargetManagement_types;
  outC->_L6_TSM_modeInterplay.distance = kcg_lit_int64(0);
  outC->_L6_TSM_modeInterplay.speed = kcg_lit_int64(0);
  outC->_L6_TSM_modeInterplay.valid = kcg_true;
  outC->_L29_TSM_modeInterplay = kcg_true;
  outC->_L28_TSM_modeInterplay = kcg_true;
  outC->_L27_TSM_modeInterplay = kcg_true;
  outC->_L26_TSM_modeInterplay = kcg_true;
  outC->_L43_TSM_modeInterplay = kcg_true;
  outC->_L42_TSM_modeInterplay = kcg_true;
  outC->_L41_TSM_modeInterplay = kcg_true;
  outC->_L40_TSM_modeInterplay = kcg_true;
  outC->_L39_TSM_modeInterplay = kcg_true;
  outC->_L38_TSM_modeInterplay = kcg_true;
  outC->_L37_TSM_modeInterplay = kcg_true;
  outC->_L36_TSM_modeInterplay = kcg_true;
  outC->_L35_TSM_modeInterplay = kcg_true;
  outC->_L34_TSM_modeInterplay = kcg_true;
  outC->_L33_TSM_modeInterplay = kcg_true;
  outC->_L32_TSM_modeInterplay = kcg_true;
  outC->_L31_TSM_modeInterplay = kcg_true;
  outC->_L30_TSM_modeInterplay = kcg_true;
  outC->_L44_TSM_modeInterplay = kcg_true;
  outC->_L45_TSM_modeInterplay = kcg_true;
  outC->_L46_TSM_modeInterplay = kcg_true;
  outC->_L47_TSM_modeInterplay.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.timestamp = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.trainPositionIsUnknown = kcg_true;
  outC->_L47_TSM_modeInterplay.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L47_TSM_modeInterplay.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L47_TSM_modeInterplay.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].valid =
      kcg_true;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L47_TSM_modeInterplay.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L47_TSM_modeInterplay.LRBG.missed = kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L47_TSM_modeInterplay.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].valid =
      kcg_true;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int64(0);
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L47_TSM_modeInterplay.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L47_TSM_modeInterplay.prvLRBG.missed = kcg_true;
  outC->_L47_TSM_modeInterplay.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L47_TSM_modeInterplay.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L47_TSM_modeInterplay.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L47_TSM_modeInterplay.linkingIsUsedOnboard = kcg_true;
  outC->_L47_TSM_modeInterplay.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L47_TSM_modeInterplay.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L48_TSM_modeInterplay = kcg_true;
  outC->_L16_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L15_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L12_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L10_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L9_NormalStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L4_NormalStatus_CSM_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L12_OverspeedStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L13_OverspeedStatus_CSM_CSM_modeInterplay =
    Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_WarningStatus_CSM_CSM_modeInterplay =
    Normal_Supervision_SDM_Types_Pkg;
  outC->_L3_WarningStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->_L8_InterventionStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L7_InterventionStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L4_InterventionStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_L2_InterventionStatus_CSM_CSM_modeInterplay =
    Normal_Supervision_SDM_Types_Pkg;
  outC->_L3_InterventionStatus_CSM_CSM_modeInterplay = CSM_SDM_Types_Pkg;
  outC->tr_1_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_3_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_5_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_7_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_6_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_4_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_2_clock_Init_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_1_clock_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_3_clock_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_2_clock_NormalStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_1_clock_OverspeedStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_3_clock_OverspeedStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_2_clock_OverspeedStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_1_clock_WarningStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_2_clock_WarningStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_1_clock_InterventionStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->tr_2_clock_InterventionStatus_CSM_CSM_modeInterplay = kcg_true;
  outC->_3_CSM_clock_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
  outC->CSM_clock_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
  outC->CSM_state_sel_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
  outC->CSM_state_act_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
  outC->CSM_fired_strong_CSM_modeInterplay =
    SSM_TR_no_trans_CSM_CSM_modeInterplay;
  outC->CSM_fired_CSM_modeInterplay = SSM_TR_no_trans_CSM_CSM_modeInterplay;
  outC->t1_CSM_modeInterplay = kcg_true;
  outC->t2_CSM_modeInterplay = kcg_true;
  outC->t3_CSM_modeInterplay = kcg_true;
  outC->t4_CSM_modeInterplay = kcg_true;
  outC->t5_CSM_modeInterplay = kcg_true;
  outC->r1_CSM_modeInterplay = kcg_true;
  outC->c1_CSM_modeInterplay = kcg_true;
  outC->c3_CSM_modeInterplay = kcg_true;
  outC->c4_CSM_modeInterplay = kcg_true;
  outC->c5_CSM_modeInterplay = kcg_true;
  outC->r0_CSM_modeInterplay = kcg_true;
  outC->c2_CSM_modeInterplay = kcg_true;
  outC->_L1_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L2_CSM_modeInterplay.V_est = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.V_MRSP = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.V_release = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.V_target = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.v_p_mrdt = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.v_p_dmi = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L2_CSM_modeInterplay.OdoStandStill = kcg_true;
  outC->_L43_CSM_modeInterplay = kcg_true;
  outC->_L47_CSM_modeInterplay = kcg_true;
  outC->_L53_CSM_modeInterplay = kcg_true;
  outC->_L54_CSM_modeInterplay = kcg_true;
  outC->_L55_CSM_modeInterplay = kcg_true;
  outC->_L56_CSM_modeInterplay = kcg_true;
  outC->_L57_CSM_modeInterplay = kcg_true;
  outC->_L64_CSM_modeInterplay = kcg_true;
  outC->_L65_CSM_modeInterplay = kcg_true;
  outC->_L66_CSM_modeInterplay = kcg_true;
  outC->_L68_CSM_modeInterplay = kcg_true;
  outC->_L79_CSM_modeInterplay = kcg_true;
  outC->_L80_CSM_modeInterplay = kcg_true;
  outC->_L81_CSM_modeInterplay = kcg_true;
  outC->_L82_CSM_modeInterplay = kcg_true;
  outC->_L87_CSM_modeInterplay = kcg_true;
  outC->_L88_CSM_modeInterplay = kcg_true;
  outC->_L89_CSM_modeInterplay = kcg_true;
  outC->_L90_CSM_modeInterplay = kcg_true;
  outC->_L99_CSM_modeInterplay = kcg_true;
  outC->_L100_CSM_modeInterplay = kcg_true;
  outC->_L101_CSM_modeInterplay = kcg_true;
  outC->_L107_CSM_modeInterplay = kcg_true;
  outC->_L51_CSM_modeInterplay = kcg_true;
  outC->_L52_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L58_CSM_modeInterplay = kcg_true;
  outC->_L59_CSM_modeInterplay = kcg_true;
  outC->_L60_CSM_modeInterplay = kcg_true;
  outC->_L62_CSM_modeInterplay = kcg_true;
  outC->_L63_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L70_CSM_modeInterplay = kcg_true;
  outC->_L71_CSM_modeInterplay = kcg_true;
  outC->_L72_CSM_modeInterplay = kcg_true;
  outC->_L75_CSM_modeInterplay = kcg_true;
  outC->_L76_CSM_modeInterplay = kcg_true;
  outC->_L77_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L78_CSM_modeInterplay = kcg_true;
  outC->_L83_CSM_modeInterplay = kcg_true;
  outC->_L84_CSM_modeInterplay = kcg_true;
  outC->_L85_CSM_modeInterplay = kcg_true;
  outC->_L86_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L91_CSM_modeInterplay = kcg_true;
  outC->_L92_CSM_modeInterplay = kcg_true;
  outC->_L93_CSM_modeInterplay = kcg_true;
  outC->_L96_CSM_modeInterplay = kcg_true;
  outC->_L97_CSM_modeInterplay = kcg_true;
  outC->_L98_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L102_CSM_modeInterplay = kcg_true;
  outC->_L103_CSM_modeInterplay = kcg_true;
  outC->_L104_CSM_modeInterplay = kcg_true;
  outC->_L105_CSM_modeInterplay = kcg_true;
  outC->_L106_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L110_CSM_modeInterplay = kcg_true;
  outC->_L111_CSM_modeInterplay = kcg_true;
  outC->_L114_CSM_modeInterplay = kcg_true;
  outC->_L16_CSM_modeInterplay = kcg_true;
  outC->_L19_CSM_modeInterplay = kcg_true;
  outC->_L20_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L21_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L22_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L23_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L24_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L25_CSM_modeInterplay = kcg_true;
  outC->_L26_CSM_modeInterplay = kcg_true;
  outC->_L27_CSM_modeInterplay = kcg_true;
  outC->_L40_CSM_modeInterplay = kcg_true;
  outC->_L42_CSM_modeInterplay = kcg_true;
  outC->_L46_CSM_modeInterplay = kcg_true;
  outC->_L44_CSM_modeInterplay = kcg_true;
  outC->_L45_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L41_CSM_modeInterplay = Normal_Supervision_SDM_Types_Pkg;
  outC->_L67_CSM_modeInterplay = kcg_true;
  outC->_L142_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L143_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L144_CSM_modeInterplay = kcg_lit_int64(0);
  outC->_L145_CSM_modeInterplay = kcg_true;
  outC->RSM_state_nxt_RSM_modeInterplay = SSM_st_Init_RSM_RSM_modeInterplay;
  outC->RSM_reset_act_RSM_modeInterplay = kcg_true;
  outC->RSM_reset_nxt_RSM_modeInterplay = kcg_true;
  outC->SM4_state_nxt_TSM_modeInterplay = SSM_st_init_SM4_TSM_modeInterplay;
  outC->SM4_reset_act_TSM_modeInterplay = kcg_true;
  outC->SM4_reset_nxt_TSM_modeInterplay = kcg_true;
  outC->CSM_state_nxt_CSM_modeInterplay = SSM_st_Init_CSM_CSM_modeInterplay;
  outC->CSM_reset_act_CSM_modeInterplay = kcg_true;
  outC->CSM_reset_nxt_CSM_modeInterplay = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->ebCmd = kcg_true;
  outC->revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->supVisStatus = Normal_Supervision_SDM_Types_Pkg;
  /* modeInterplay:TSM:_L2=(SDM_Commands_Pkg::CalcTriggerCondForTSM#1)/ */
  CalcTriggerCondForTSM_init_SDM_Commands_Pkg(
    &outC->Context_CalcTriggerCondForTSM_1);
  /* modeInterplay:TSM:_L1=(SDM_Commands_Pkg::CalcRevokationCondForTSM#1)/ */
  CalcRevokationCondForTSM_init_SDM_Commands_Pkg(
    &outC->Context_CalcRevokationCondForTSM_1);
  /* _L22=(SDM_Commands_Pkg::CalcRSMandPreindicationLocation#1)/ */
  CalcRSMandPreindicationLocation_init_SDM_Commands_Pkg(
    &outC->Context_CalcRSMandPreindicationLocation_1);
  /* _L24=(SDM_Commands_Pkg::CommandTripBraking#1)/ */
  CommandTripBraking_init_SDM_Commands_Pkg(&outC->Context_CommandTripBraking_1);
  outC->modeInterplay_reset_nxt = kcg_false;
  outC->modeInterplay_reset_act = kcg_false;
  outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
  outC->sdmType = cSDM_Types_SDM_Commands_Pkg;
  outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
  outC->revokedSB = kcg_false;
  outC->triggeredSB = kcg_false;
  outC->revokedEB = kcg_false;
  outC->triggeredEB = kcg_false;
  outC->revokedTCO = kcg_false;
  outC->triggeredTCO = kcg_false;
  outC->status = cSupervisionStatus_SDM_Commands_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* modeInterplay:TSM:_L2=(SDM_Commands_Pkg::CalcTriggerCondForTSM#1)/ */
  CalcTriggerCondForTSM_reset_SDM_Commands_Pkg(
    &outC->Context_CalcTriggerCondForTSM_1);
  /* modeInterplay:TSM:_L1=(SDM_Commands_Pkg::CalcRevokationCondForTSM#1)/ */
  CalcRevokationCondForTSM_reset_SDM_Commands_Pkg(
    &outC->Context_CalcRevokationCondForTSM_1);
  /* _L22=(SDM_Commands_Pkg::CalcRSMandPreindicationLocation#1)/ */
  CalcRSMandPreindicationLocation_reset_SDM_Commands_Pkg(
    &outC->Context_CalcRSMandPreindicationLocation_1);
  /* _L24=(SDM_Commands_Pkg::CommandTripBraking#1)/ */
  CommandTripBraking_reset_SDM_Commands_Pkg(
    &outC->Context_CommandTripBraking_1);
  outC->modeInterplay_reset_nxt = kcg_false;
  outC->modeInterplay_reset_act = kcg_false;
  outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
  outC->sdmType = cSDM_Types_SDM_Commands_Pkg;
  outC->triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
  outC->revokedSB = kcg_false;
  outC->triggeredSB = kcg_false;
  outC->revokedEB = kcg_false;
  outC->triggeredEB = kcg_false;
  outC->revokedTCO = kcg_false;
  outC->triggeredTCO = kcg_false;
  outC->status = cSupervisionStatus_SDM_Commands_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg *SV,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  SV->Context_triggeredTCO = outC->triggeredTCO;
  SV->Context_revokedTCO = outC->revokedTCO;
  SV->Context_triggeredEB = outC->triggeredEB;
  SV->Context_revokedEB = outC->revokedEB;
  SV->Context_triggeredSB = outC->triggeredSB;
  SV->Context_revokedSB = outC->revokedSB;
  SV->Context_triggeredSupervisionStatus = outC->triggeredSupervisionStatus;
  SV->Context_sdmType = outC->sdmType;
  SV->Context_status = outC->status;
  SV->Context_modeInterplay_reset_nxt = outC->modeInterplay_reset_nxt;
  SV->Context_modeInterplay_reset_act = outC->modeInterplay_reset_act;
  SV->Context_modeInterplay_state_nxt = outC->modeInterplay_state_nxt;
  SV->Context_RSM_state_nxt = outC->RSM_state_nxt_RSM_modeInterplay;
  SV->Context_RSM_reset_act = outC->RSM_reset_act_RSM_modeInterplay;
  SV->Context_RSM_reset_nxt = outC->RSM_reset_nxt_RSM_modeInterplay;
  SV->Context_SM4_state_nxt = outC->SM4_state_nxt_TSM_modeInterplay;
  SV->Context_SM4_reset_act = outC->SM4_reset_act_TSM_modeInterplay;
  SV->Context_SM4_reset_nxt = outC->SM4_reset_nxt_TSM_modeInterplay;
  SV->Context_CSM_state_nxt = outC->CSM_state_nxt_CSM_modeInterplay;
  SV->Context_CSM_reset_act = outC->CSM_reset_act_CSM_modeInterplay;
  SV->Context_CSM_reset_nxt = outC->CSM_reset_nxt_CSM_modeInterplay;
  SV->_2_Context_init = outC->init2;
  SV->_1_Context_init = outC->init1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC,
  SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg *SV)
{
  outC->triggeredTCO = SV->Context_triggeredTCO;
  outC->revokedTCO = SV->Context_revokedTCO;
  outC->triggeredEB = SV->Context_triggeredEB;
  outC->revokedEB = SV->Context_revokedEB;
  outC->triggeredSB = SV->Context_triggeredSB;
  outC->revokedSB = SV->Context_revokedSB;
  outC->triggeredSupervisionStatus = SV->Context_triggeredSupervisionStatus;
  outC->sdmType = SV->Context_sdmType;
  outC->status = SV->Context_status;
  outC->modeInterplay_reset_nxt = SV->Context_modeInterplay_reset_nxt;
  outC->modeInterplay_reset_act = SV->Context_modeInterplay_reset_act;
  outC->modeInterplay_state_nxt = SV->Context_modeInterplay_state_nxt;
  outC->RSM_state_nxt_RSM_modeInterplay = SV->Context_RSM_state_nxt;
  outC->RSM_reset_act_RSM_modeInterplay = SV->Context_RSM_reset_act;
  outC->RSM_reset_nxt_RSM_modeInterplay = SV->Context_RSM_reset_nxt;
  outC->SM4_state_nxt_TSM_modeInterplay = SV->Context_SM4_state_nxt;
  outC->SM4_reset_act_TSM_modeInterplay = SV->Context_SM4_reset_act;
  outC->SM4_reset_nxt_TSM_modeInterplay = SV->Context_SM4_reset_nxt;
  outC->CSM_state_nxt_CSM_modeInterplay = SV->Context_CSM_state_nxt;
  outC->CSM_reset_act_CSM_modeInterplay = SV->Context_CSM_reset_act;
  outC->CSM_reset_nxt_CSM_modeInterplay = SV->Context_CSM_reset_nxt;
  outC->init2 = SV->_2_Context_init;
  outC->init1 = SV->_1_Context_init;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

