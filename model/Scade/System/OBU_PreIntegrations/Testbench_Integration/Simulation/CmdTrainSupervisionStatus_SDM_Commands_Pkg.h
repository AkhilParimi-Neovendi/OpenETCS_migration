/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_
#define _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SupervisionStatus_T_SDM_Types_Pkg /* supVisStatus/ */ supVisStatus;
  SDM_Types_T_SDM_Types_Pkg /* sdmType/ */ sdmType;
  SupervisionStatus_T_SDM_Types_Pkg /* revokedSupervisionStatus/ */ revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_Pkg /* triggeredSupervisionStatus/ */ triggeredSupervisionStatus;
  kcg_bool /* revokedSB/ */ revokedSB;
  kcg_bool /* triggeredSB/ */ triggeredSB;
  kcg_bool /* revokedEB/ */ revokedEB;
  kcg_bool /* triggeredEB/ */ triggeredEB;
  kcg_bool /* revokedTCO/ */ revokedTCO;
  kcg_bool /* triggeredTCO/ */ triggeredTCO;
  EB_command_T_SDM_Commands_Pkg /* ebCmd/ */ ebCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool /* modeInterplay:CSM:CSM: */ CSM_reset_nxt_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM: */ CSM_reset_act_CSM_modeInterplay;
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_state_nxt_CSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4: */ SM4_reset_nxt_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4: */ SM4_reset_act_TSM_modeInterplay;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_state_nxt_TSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM: */ RSM_reset_nxt_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM: */ RSM_reset_act_RSM_modeInterplay;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_state_nxt_RSM_modeInterplay;
  SSM_ST_modeInterplay /* modeInterplay: */ modeInterplay_state_nxt;
  kcg_bool /* modeInterplay: */ modeInterplay_reset_act;
  kcg_bool /* modeInterplay: */ modeInterplay_reset_nxt;
  SupervisionStatus_T_SDM_Types_Pkg /* status/ */ status;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg /* modeInterplay:TSM:_L2=(SDM_Commands_Pkg::CalcTriggerCondForTSM#1)/ */ Context_CalcTriggerCondForTSM_1;
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg /* modeInterplay:TSM:_L1=(SDM_Commands_Pkg::CalcRevokationCondForTSM#1)/ */ Context_CalcRevokationCondForTSM_1;
  outC_CalcRSMandPreindicationLocation_SDM_Commands_Pkg /* _L22=(SDM_Commands_Pkg::CalcRSMandPreindicationLocation#1)/ */ Context_CalcRSMandPreindicationLocation_1;
  outC_CommandTripBraking_SDM_Commands_Pkg /* _L24=(SDM_Commands_Pkg::CommandTripBraking#1)/ */ Context_CommandTripBraking_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_clock_CSM_modeInterplay;
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ _3_CSM_clock_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:InterventionStatus:<2> */ tr_2_clock_InterventionStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:InterventionStatus:<1> */ tr_1_clock_InterventionStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:WarningStatus:<2> */ tr_2_clock_WarningStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:WarningStatus:<1> */ tr_1_clock_WarningStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:OverspeedStatus:<2> */ tr_2_clock_OverspeedStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:OverspeedStatus:<3> */ tr_3_clock_OverspeedStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:OverspeedStatus:<1> */ tr_1_clock_OverspeedStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:<2> */ tr_2_clock_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:<3> */ tr_3_clock_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:<1> */ tr_1_clock_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<2> */ tr_2_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<4> */ tr_4_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<6> */ tr_6_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<7> */ tr_7_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<5> */ tr_5_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<3> */ tr_3_clock_Init_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:Init:<1> */ tr_1_clock_Init_CSM_CSM_modeInterplay;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_clock_TSM_modeInterplay;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ _4_SM4_clock_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:<2> */ tr_2_clock_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:<3> */ tr_3_clock_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:<1> */ tr_1_clock_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Warning:<2> */ tr_2_clock_Warning_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Warning:<4> */ tr_4_clock_Warning_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Warning:<3> */ tr_3_clock_Warning_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Warning:<1> */ tr_1_clock_Warning_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Overspeed:<2> */ tr_2_clock_Overspeed_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Overspeed:<4> */ tr_4_clock_Overspeed_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Overspeed:<5> */ tr_5_clock_Overspeed_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Overspeed:<3> */ tr_3_clock_Overspeed_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Overspeed:<1> */ tr_1_clock_Overspeed_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:<2> */ tr_2_clock_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:<4> */ tr_4_clock_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:<5> */ tr_5_clock_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:<3> */ tr_3_clock_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:<1> */ tr_1_clock_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:<2> */ tr_2_clock_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:<4> */ tr_4_clock_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:<5> */ tr_5_clock_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:<3> */ tr_3_clock_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:<1> */ tr_1_clock_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<2> */ tr_2_clock_init_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<4> */ tr_4_clock_init_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<6> */ tr_6_clock_init_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<5> */ tr_5_clock_init_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<3> */ tr_3_clock_init_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:init:<1> */ tr_1_clock_init_SM4_TSM_modeInterplay;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_clock_RSM_modeInterplay;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ _5_RSM_clock_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:InterventionStatus:<1> */ tr_1_clock_InterventionStatus_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:IndicationStatus:<1> */ tr_1_clock_IndicationStatus_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:Init:<2> */ tr_2_clock_Init_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:Init:<4> */ tr_4_clock_Init_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:Init:<5> */ tr_5_clock_Init_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:Init:<3> */ tr_3_clock_Init_RSM_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:RSM:Init:<1> */ tr_1_clock_Init_RSM_RSM_modeInterplay;
  SSM_ST_modeInterplay /* modeInterplay: */ modeInterplay_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* modeInterplay:CSM:_L145/ */ _L145_CSM_modeInterplay;
  kcg_int32 /* modeInterplay:CSM:_L144/ */ _L144_CSM_modeInterplay;
  kcg_int32 /* modeInterplay:CSM:_L143/ */ _L143_CSM_modeInterplay;
  kcg_int32 /* modeInterplay:CSM:_L142/ */ _L142_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L67/ */ _L67_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L41/ */ _L41_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L45/ */ _L45_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L44/ */ _L44_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L46/ */ _L46_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L42/ */ _L42_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L40/ */ _L40_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L27/ */ _L27_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L26/ */ _L26_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L25/ */ _L25_CSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:CSM:_L24/ */ _L24_CSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:CSM:_L23/ */ _L23_CSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:CSM:_L22/ */ _L22_CSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:CSM:_L21/ */ _L21_CSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:CSM:_L20/ */ _L20_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L19/ */ _L19_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L16/ */ _L16_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L114/ */ _L114_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L111/ */ _L111_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L110/ */ _L110_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L106/ */ _L106_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L105/ */ _L105_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L104/ */ _L104_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L103/ */ _L103_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L102/ */ _L102_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L98/ */ _L98_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L97/ */ _L97_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L96/ */ _L96_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L93/ */ _L93_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L92/ */ _L92_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L91/ */ _L91_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L86/ */ _L86_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L85/ */ _L85_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L84/ */ _L84_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L83/ */ _L83_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L78/ */ _L78_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L77/ */ _L77_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L76/ */ _L76_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L75/ */ _L75_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L72/ */ _L72_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L71/ */ _L71_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L70/ */ _L70_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L63/ */ _L63_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L62/ */ _L62_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L60/ */ _L60_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L59/ */ _L59_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L58/ */ _L58_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L52/ */ _L52_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L51/ */ _L51_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L107/ */ _L107_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L101/ */ _L101_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L100/ */ _L100_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L99/ */ _L99_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L90/ */ _L90_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L89/ */ _L89_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L88/ */ _L88_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L87/ */ _L87_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L82/ */ _L82_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L81/ */ _L81_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L80/ */ _L80_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L79/ */ _L79_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L68/ */ _L68_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L66/ */ _L66_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L65/ */ _L65_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L64/ */ _L64_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L57/ */ _L57_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L56/ */ _L56_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L55/ */ _L55_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L54/ */ _L54_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L53/ */ _L53_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L47/ */ _L47_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:_L43/ */ _L43_CSM_modeInterplay;
  Speeds_T_SDM_Types_Pkg /* modeInterplay:CSM:_L2/ */ _L2_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:_L1/ */ _L1_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:c2/ */ c2_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:r0/ */ r0_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:c5/ */ c5_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:c4/ */ c4_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:c3/ */ c3_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:c1/ */ c1_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:r1/ */ r1_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:t5/ */ t5_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:t4/ */ t4_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:t3/ */ t3_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:t2/ */ t2_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:t1/ */ t1_CSM_modeInterplay;
  SSM_TR_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_fired_CSM_modeInterplay;
  SSM_TR_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_fired_strong_CSM_modeInterplay;
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_state_act_CSM_modeInterplay;
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ CSM_state_sel_CSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:InterventionStatus:_L3/ */ _L3_InterventionStatus_CSM_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:InterventionStatus:_L2/ */ _L2_InterventionStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:InterventionStatus:_L4/ */ _L4_InterventionStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:InterventionStatus:_L7/ */ _L7_InterventionStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:InterventionStatus:_L8/ */ _L8_InterventionStatus_CSM_CSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:WarningStatus:_L3/ */ _L3_WarningStatus_CSM_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:WarningStatus:_L2/ */ _L2_WarningStatus_CSM_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:OverspeedStatus:_L13/ */ _L13_OverspeedStatus_CSM_CSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:OverspeedStatus:_L12/ */ _L12_OverspeedStatus_CSM_CSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:NormalStatus:_L4/ */ _L4_NormalStatus_CSM_CSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:CSM:CSM:NormalStatus:_L9/ */ _L9_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:_L10/ */ _L10_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:_L12/ */ _L12_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:_L15/ */ _L15_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:CSM:CSM:NormalStatus:_L16/ */ _L16_NormalStatus_CSM_CSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L48/ */ _L48_TSM_modeInterplay;
  trainPosition_T_TrainPosition_Types_Pck /* modeInterplay:TSM:_L47/ */ _L47_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L46/ */ _L46_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L45/ */ _L45_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L44/ */ _L44_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L30/ */ _L30_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L31/ */ _L31_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L32/ */ _L32_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L33/ */ _L33_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L34/ */ _L34_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L35/ */ _L35_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L36/ */ _L36_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L37/ */ _L37_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L38/ */ _L38_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L39/ */ _L39_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L40/ */ _L40_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L41/ */ _L41_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L42/ */ _L42_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L43/ */ _L43_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L26/ */ _L26_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L27/ */ _L27_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L28/ */ _L28_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:_L29/ */ _L29_TSM_modeInterplay;
  Target_T_TargetManagement_types /* modeInterplay:TSM:_L6/ */ _L6_TSM_modeInterplay;
  SDM_Locations_T_SDM_Types_Pkg /* modeInterplay:TSM:_L5/ */ _L5_TSM_modeInterplay;
  Speeds_T_SDM_Types_Pkg /* modeInterplay:TSM:_L4/ */ _L4_TSM_modeInterplay;
  TSM_triggerCond_T_SDM_Commands_Pkg /* modeInterplay:TSM:_L2/ */ _L2_TSM_modeInterplay;
  TSM_revokeCond_T_SDM_Commands_Pkg /* modeInterplay:TSM:_L1/ */ _L1_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t13/ */ t13_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t14/ */ t14_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t10_12/ */ t10_12_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t7_9/ */ t7_9_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t4_6/ */ t4_6_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t3/ */ t3_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t2/ */ t2_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:t1/ */ t1_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:r3/ */ r3_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:r2/ */ r2_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:r1/ */ r1_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:r0/ */ r0_TSM_modeInterplay;
  SSM_TR_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_fired_TSM_modeInterplay;
  SSM_TR_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_fired_strong_TSM_modeInterplay;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_state_act_TSM_modeInterplay;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ SM4_state_sel_TSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Intervention:_L2/ */ _L2_Intervention_SM4_TSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Intervention:_L1/ */ _L1_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:_L3/ */ _L3_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:_L4/ */ _L4_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:_L5/ */ _L5_Intervention_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Intervention:_L6/ */ _L6_Intervention_SM4_TSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Warning:_L2/ */ _L2_Warning_SM4_TSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Warning:_L1/ */ _L1_Warning_SM4_TSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Overspeed:_L4/ */ _L4_Overspeed_SM4_TSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Overspeed:_L3/ */ _L3_Overspeed_SM4_TSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Indication:_L2/ */ _L2_Indication_SM4_TSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Indication:_L1/ */ _L1_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:_L3/ */ _L3_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:_L4/ */ _L4_Indication_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Indication:_L5/ */ _L5_Indication_SM4_TSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Normal:_L2/ */ _L2_Normal_SM4_TSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:TSM:SM4:Normal:_L3/ */ _L3_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L4/ */ _L4_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L5/ */ _L5_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L6/ */ _L6_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L7/ */ _L7_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L8/ */ _L8_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:TSM:SM4:Normal:_L9/ */ _L9_Normal_SM4_TSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L57/ */ _L57_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L52/ */ _L52_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L51/ */ _L51_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L39/ */ _L39_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L37/ */ _L37_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L35/ */ _L35_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L31/ */ _L31_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L27/ */ _L27_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L26/ */ _L26_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L21/ */ _L21_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L22/ */ _L22_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L23/ */ _L23_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L24/ */ _L24_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L25/ */ _L25_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L16/ */ _L16_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L15/ */ _L15_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L14/ */ _L14_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L13/ */ _L13_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L12/ */ _L12_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L11/ */ _L11_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L10/ */ _L10_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:_L8/ */ _L8_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L7/ */ _L7_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L5/ */ _L5_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:_L4/ */ _L4_RSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:RSM:_L3/ */ _L3_RSM_modeInterplay;
  V_odometry_Type_Obu_BasicTypes_Pkg /* modeInterplay:RSM:_L2/ */ _L2_RSM_modeInterplay;
  Speeds_T_SDM_Types_Pkg /* modeInterplay:RSM:_L1/ */ _L1_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:WS_OS2IS/ */ WS_OS2IS_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:US_NS2IS/ */ US_NS2IS_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:notInt2Int/ */ notInt2Int_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:r1/ */ r1_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:r0/ */ r0_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:t2/ */ t2_RSM_modeInterplay;
  kcg_bool /* modeInterplay:RSM:t1/ */ t1_RSM_modeInterplay;
  SSM_TR_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_fired_RSM_modeInterplay;
  SSM_TR_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_fired_strong_RSM_modeInterplay;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_state_act_RSM_modeInterplay;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ RSM_state_sel_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:RSM:InterventionStatus:_L1/ */ _L1_InterventionStatus_RSM_RSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:RSM:RSM:InterventionStatus:_L2/ */ _L2_InterventionStatus_RSM_RSM_modeInterplay;
  SupervisionStatus_T_SDM_Types_Pkg /* modeInterplay:RSM:RSM:IndicationStatus:_L2/ */ _L2_IndicationStatus_RSM_RSM_modeInterplay;
  SDM_Types_T_SDM_Types_Pkg /* modeInterplay:RSM:RSM:IndicationStatus:_L3/ */ _L3_IndicationStatus_RSM_RSM_modeInterplay;
  SSM_ST_modeInterplay /* modeInterplay: */ modeInterplay_state_sel;
  SSM_TR_modeInterplay /* modeInterplay: */ modeInterplay_fired_strong;
  SSM_TR_modeInterplay /* modeInterplay: */ modeInterplay_fired;
  kcg_bool /* isRSMLocation/ */ isRSMLocation;
  kcg_bool /* isPreIndicationLocation/ */ isPreIndicationLocation;
  SDM_Locations_T_SDM_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  trainPosition_T_TrainPosition_Types_Pck /* _L26/ */ _L26;
  EB_command_T_SDM_Commands_Pkg /* _L24/ */ _L24;
  SupervisionStatus_T_SDM_Types_Pkg /* _L30/ */ _L30;
  trainData_internal_t_SDM_Types_Pkg /* _L31/ */ _L31;
} outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus/ */
extern void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
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
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* triggeredTCO/ */ Context_triggeredTCO;
  kcg_bool /* revokedTCO/ */ Context_revokedTCO;
  kcg_bool /* triggeredEB/ */ Context_triggeredEB;
  kcg_bool /* revokedEB/ */ Context_revokedEB;
  kcg_bool /* triggeredSB/ */ Context_triggeredSB;
  kcg_bool /* revokedSB/ */ Context_revokedSB;
  SupervisionStatus_T_SDM_Types_Pkg /* triggeredSupervisionStatus/ */ Context_triggeredSupervisionStatus;
  SDM_Types_T_SDM_Types_Pkg /* sdmType/ */ Context_sdmType;
  /* ----------------------- local memories  ------------------------- */
  SupervisionStatus_T_SDM_Types_Pkg /* status/ */ Context_status;
  kcg_bool /* modeInterplay: */ Context_modeInterplay_reset_nxt;
  kcg_bool /* modeInterplay: */ Context_modeInterplay_reset_act;
  SSM_ST_modeInterplay /* modeInterplay: */ Context_modeInterplay_state_nxt;
  SSM_ST_RSM_RSM_modeInterplay /* modeInterplay:RSM:RSM: */ Context_RSM_state_nxt;
  kcg_bool /* modeInterplay:RSM:RSM: */ Context_RSM_reset_act;
  kcg_bool /* modeInterplay:RSM:RSM: */ Context_RSM_reset_nxt;
  SSM_ST_SM4_TSM_modeInterplay /* modeInterplay:TSM:SM4: */ Context_SM4_state_nxt;
  kcg_bool /* modeInterplay:TSM:SM4: */ Context_SM4_reset_act;
  kcg_bool /* modeInterplay:TSM:SM4: */ Context_SM4_reset_nxt;
  SSM_ST_CSM_CSM_modeInterplay /* modeInterplay:CSM:CSM: */ Context_CSM_state_nxt;
  kcg_bool /* modeInterplay:CSM:CSM: */ Context_CSM_reset_act;
  kcg_bool /* modeInterplay:CSM:CSM: */ Context_CSM_reset_nxt;
  kcg_bool _2_Context_init;
  kcg_bool _1_Context_init;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg;

extern void kcg_save_SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg *SV,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
extern void kcg_load_SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC,
  SV_CmdTrainSupervisionStatus_SDM_Commands_Pkg *SV);



#endif /* _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

