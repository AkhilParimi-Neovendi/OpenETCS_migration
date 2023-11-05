/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _SDMLimitLocations_TargetLimits_Pkg_H_
#define _SDMLimitLocations_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "LowerOrHold_TargetLimits_Pkg.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"
#include "d_P_target_TargetLimits_Pkg.h"
#include "TargetDistance_TargetLimits_Pkg.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"
#include "dV_warning_for_V_SDM_Types_Pkg.h"
#include "TargetSelector_TargetLimits_Pkg.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "v_release_TargetLimits_Pkg.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"
#include "d_RSM_start_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "d_limits_TargetLimits_Pkg.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Speeds_T_SDM_Types_Pkg /* speeds/ */ speeds;
  SDM_Locations_T_SDM_Types_Pkg /* locations/ */ locations;
  Target_T_TargetManagement_types /* MostRestrictiveDisplayedTarget/ */ MostRestrictiveDisplayedTarget;
  kcg_bool /* FLOIisSBI1/ */ FLOIisSBI1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_dV_warning_for_V_SDM_Types_Pkg /* _L907=(SDM_Types_Pkg::dV_warning_for_V#2)/ */ Context_dV_warning_for_V_2;
  outC_dV_warning_for_V_SDM_Types_Pkg /* _L908=(SDM_Types_Pkg::dV_warning_for_V#1)/ */ Context_dV_warning_for_V_1;
  outC_dV_ebi_for_V_SDM_Types_Pkg /* _L911=(SDM_Types_Pkg::dV_ebi_for_V#2)/ */ Context_dV_ebi_for_V_2;
  outC_dV_ebi_for_V_SDM_Types_Pkg /* _L914=(SDM_Types_Pkg::dV_ebi_for_V#1)/ */ Context_dV_ebi_for_V_1;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1017=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */ Context_TransformV_realToV_odo_1;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1033=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */ Context_TransformL_realToL_int_1;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1035=(SDM_Types_Pkg::TransformL_realToL_int#3)/ */ Context_TransformL_realToL_int_3;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1036=(SDM_Types_Pkg::TransformL_realToL_int#4)/ */ Context_TransformL_realToL_int_4;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1037=(SDM_Types_Pkg::TransformL_realToL_int#5)/ */ Context_TransformL_realToL_int_5;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1038=(SDM_Types_Pkg::TransformL_realToL_int#6)/ */ Context_TransformL_realToL_int_6;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1041=(SDM_Types_Pkg::TransformL_realToL_int#9)/ */ Context_TransformL_realToL_int_9;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1042=(SDM_Types_Pkg::TransformL_realToL_int#10)/ */ Context_TransformL_realToL_int_10;
  outC_d_RSM_start_TargetLimits_Pkg /* _L88=(TargetLimits_Pkg::d_RSM_start#1)/ */ Context_d_RSM_start_1;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1043=(SDM_Types_Pkg::TransformL_realToL_int#11)/ */ Context_TransformL_realToL_int_11;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1044=(SDM_Types_Pkg::TransformL_realToL_int#12)/ */ Context_TransformL_realToL_int_12;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1045=(SDM_Types_Pkg::TransformL_realToL_int#13)/ */ Context_TransformL_realToL_int_13;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1047=(SDM_Types_Pkg::TransformL_realToL_int#15)/ */ Context_TransformL_realToL_int_15;
  outC_TargetDistance_TargetLimits_Pkg /* _L983=(TargetLimits_Pkg::TargetDistance#1)/ */ Context_TargetDistance_1;
  outC_d_P_target_TargetLimits_Pkg /* _L343=(TargetLimits_Pkg::d_P_target#1)/ */ Context_d_P_target_1;
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L1048=(SDM_Types_Pkg::TransformL_realToL_int#16)/ */ Context_TransformL_realToL_int_16;
  outC_MRSPPreindicationSelector_TargetLimits_Pkg /* _L189=(TargetLimits_Pkg::MRSPPreindicationSelector#1)/ */ Context_MRSPPreindicationSelector_1;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1031=(SDM_Types_Pkg::TransformV_realToV_odo#15)/ */ Context_TransformV_realToV_odo_15;
  outC_LowerOrHold_TargetLimits_Pkg /* _L1060=(TargetLimits_Pkg::LowerOrHold#3)/ */ Context_LowerOrHold_3;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1029=(SDM_Types_Pkg::TransformV_realToV_odo#13)/ */ Context_TransformV_realToV_odo_13;
  outC_v_release_TargetLimits_Pkg /* _L671=(TargetLimits_Pkg::v_release#1)/ */ Context_v_release_1;
  outC_dV_sbi_for_V_SDM_Types_Pkg /* _L910=(SDM_Types_Pkg::dV_sbi_for_V#1)/ */ Context_dV_sbi_for_V_1;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1064=(SDM_Types_Pkg::TransformV_realToV_odo#18)/ */ Context_TransformV_realToV_odo_18;
  outC_d_limits_TargetLimits_Pkg /* _L24=(TargetLimits_Pkg::d_limits#2)/ */ Context_d_limits_2;
  outC_LowerOrHold_TargetLimits_Pkg /* _L1057=(TargetLimits_Pkg::LowerOrHold#1)/ */ Context_LowerOrHold_1;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1065=(SDM_Types_Pkg::TransformV_realToV_odo#19)/ */ Context_TransformV_realToV_odo_19;
  outC_v_SBI1_TargetLimits_Pkg /* _L642=(TargetLimits_Pkg::v_SBI1#1)/ */ Context_v_SBI1_1;
  outC_LowerOrHold_TargetLimits_Pkg /* _L1058=(TargetLimits_Pkg::LowerOrHold#2)/ */ Context_LowerOrHold_2;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1066=(SDM_Types_Pkg::TransformV_realToV_odo#20)/ */ Context_TransformV_realToV_odo_20;
  outC_v_SBI2_TargetLimits_Pkg /* _L641=(TargetLimits_Pkg::v_SBI2#1)/ */ Context_v_SBI2_1;
  outC_dV_sbi_for_V_SDM_Types_Pkg /* _L909=(SDM_Types_Pkg::dV_sbi_for_V#2)/ */ Context_dV_sbi_for_V_2;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L1067=(SDM_Types_Pkg::TransformV_realToV_odo#21)/ */ Context_TransformV_realToV_odo_21;
  outC_getMRSFromMRSP_SDM_Types_Pkg /* _L995=(SDM_Types_Pkg::getMRSFromMRSP#1)/ */ Context_getMRSFromMRSP_1;
  outC_TargetSelector_TargetLimits_Pkg /* _L863=(TargetLimits_Pkg::TargetSelector#5)/ */ Context_TargetSelector_5;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Mi_Output/ */ Mi_Output_Min_1_int32;
  kcg_int32 /* @1/I2/ */ I2_Min_1_int32;
  kcg_int32 /* @1/I1/ */ I1_Min_1_int32;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_int32;
  kcg_int32 /* @1/_L24/ */ _L24_Min_1_int32;
  kcg_int32 /* @1/_L22/ */ _L22_Min_1_int32;
  kcg_int32 /* @1/_L21/ */ _L21_Min_1_int32;
  kcg_int32 /* @2/Ma_Output/ */ Ma_Output_Max_1_int32;
  kcg_int32 /* @2/I2/ */ I2_Max_1_int32;
  kcg_int32 /* @2/I1/ */ I1_Max_1_int32;
  kcg_int32 /* @2/_L4/ */ _L4_Max_1_int32;
  kcg_bool /* @2/_L3/ */ _L3_Max_1_int32;
  kcg_int32 /* @2/_L2/ */ _L2_Max_1_int32;
  kcg_int32 /* @2/_L1/ */ _L1_Max_1_int32;
  kcg_int32 /* @3/Mi_Output/ */ Mi_Output_Min_2_int32;
  kcg_int32 /* @3/I2/ */ I2_Min_2_int32;
  kcg_int32 /* @3/I1/ */ I1_Min_2_int32;
  kcg_bool /* @3/_L25/ */ _L25_Min_2_int32;
  kcg_int32 /* @3/_L24/ */ _L24_Min_2_int32;
  kcg_int32 /* @3/_L22/ */ _L22_Min_2_int32;
  kcg_int32 /* @3/_L21/ */ _L21_Min_2_int32;
  kcg_int32 /* @4/Ma_Output/ */ Ma_Output_Max_2_int32;
  kcg_int32 /* @4/I2/ */ I2_Max_2_int32;
  kcg_int32 /* @4/I1/ */ I1_Max_2_int32;
  kcg_int32 /* @4/_L4/ */ _L4_Max_2_int32;
  kcg_bool /* @4/_L3/ */ _L3_Max_2_int32;
  kcg_int32 /* @4/_L2/ */ _L2_Max_2_int32;
  kcg_int32 /* @4/_L1/ */ _L1_Max_2_int32;
  V_internal_real_Type_SDM_Types_Pkg /* V_est/ */ V_est;
  bec_t_TargetLimits_Pkg /* bec/ */ bec;
  V_internal_real_Type_SDM_Types_Pkg /* V_target/ */ V_target;
  ParabolaCurve_T_CalcBrakingCurves_types /* SBDcurve/ */ SBDcurve;
  ParabolaCurve_T_CalcBrakingCurves_types /* EBDcurve/ */ EBDcurve;
  T_trac_t_TargetLimits_Pkg /* T/ */ T;
  V_internal_real_Type_SDM_Types_Pkg /* V_release/ */ V_release;
  L_internal_real_Type_SDM_Types_Pkg /* Dpi/ */ Dpi;
  L_internal_real_Type_SDM_Types_Pkg /* D_EOA/ */ D_EOA;
  L_internal_real_Type_SDM_Types_Pkg /* D_SvL/ */ D_SvL;
  L_internal_real_Type_SDM_Types_Pkg /* D_est/ */ D_est;
  L_internal_real_Type_SDM_Types_Pkg /* D_maxsafefront/ */ D_maxsafefront;
  kcg_bool /* GUICurveEnabled/ */ GUICurveEnabled;
  ParabolaCurve_T_CalcBrakingCurves_types /* GUIcurve/ */ GUIcurve;
  kcg_bool /* valid_RSM1_start/ */ valid_RSM1_start;
  kcg_bool /* valid_RSM2_start/ */ valid_RSM2_start;
  V_internal_real_Type_SDM_Types_Pkg /* V_ura/ */ V_ura;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI2/ */ D_SBI2;
  kcg_bool /* valid_D_SBI2/ */ valid_D_SBI2;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_P_MRDT/ */ V_P_MRDT;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_MRSP/ */ V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_SBI_MRDT/ */ V_SBI_MRDT;
  Target_T_TargetManagement_types /* MRDT/ */ MRDT;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_SBI1_lim/ */ V_SBI1_lim;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_SBI2_lim/ */ V_SBI2_lim;
  kcg_bool /* freshMRDT/ */ freshMRDT;
  kcg_bool /* FLOIis1/ */ FLOIis1;
  kcg_bool /* isEoAorSvL/ */ isEoAorSvL;
  SDM_Locations_T_SDM_Types_Pkg /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L24/ */ _L24;
  L_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  L_internal_real_Type_SDM_Types_Pkg /* _L22/ */ _L22;
  L_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  V_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  V_internal_real_Type_SDM_Types_Pkg /* _L26/ */ _L26;
  bec_t_TargetLimits_Pkg /* _L35/ */ _L35;
  V_internal_real_Type_SDM_Types_Pkg /* _L36/ */ _L36;
  V_internal_real_Type_SDM_Types_Pkg /* _L41/ */ _L41;
  V_internal_real_Type_SDM_Types_Pkg /* _L44/ */ _L44;
  V_internal_real_Type_SDM_Types_Pkg /* _L45/ */ _L45;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L51/ */ _L51;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L52/ */ _L52;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L53/ */ _L53;
  T_trac_t_TargetLimits_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L69/ */ _L69;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L70/ */ _L70;
  L_internal_real_Type_SDM_Types_Pkg /* _L88/ */ _L88;
  L_internal_real_Type_SDM_Types_Pkg /* _L87/ */ _L87;
  L_internal_real_Type_SDM_Types_Pkg /* _L86/ */ _L86;
  V_internal_real_Type_SDM_Types_Pkg /* _L96/ */ _L96;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L99/ */ _L99;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L100/ */ _L100;
  MRSP_internal_T_TargetManagement_types /* _L132/ */ _L132;
  kcg_bool /* _L191/ */ _L191;
  L_internal_real_Type_SDM_Types_Pkg /* _L189/ */ _L189;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L200/ */ _L200;
  T_trac_t_TargetLimits_Pkg /* _L205/ */ _L205;
  L_internal_real_Type_SDM_Types_Pkg /* _L341/ */ _L341;
  V_internal_real_Type_SDM_Types_Pkg /* _L346/ */ _L346;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L349/ */ _L349;
  T_trac_t_TargetLimits_Pkg /* _L350/ */ _L350;
  L_internal_real_Type_SDM_Types_Pkg /* _L208/ */ _L208;
  L_internal_real_Type_SDM_Types_Pkg /* _L401/ */ _L401;
  L_internal_real_Type_SDM_Types_Pkg /* _L400/ */ _L400;
  kcg_float32 /* _L448/ */ _L448;
  T_trac_t_TargetLimits_Pkg /* _L447/ */ _L447;
  kcg_float32 /* _L451/ */ _L451;
  V_internal_real_Type_SDM_Types_Pkg /* _L489/ */ _L489;
  L_internal_real_Type_SDM_Types_Pkg /* _L494/ */ _L494;
  L_internal_real_Type_SDM_Types_Pkg /* _L495/ */ _L495;
  L_internal_real_Type_SDM_Types_Pkg /* _L496/ */ _L496;
  L_internal_real_Type_SDM_Types_Pkg /* _L497/ */ _L497;
  L_internal_real_Type_SDM_Types_Pkg /* _L498/ */ _L498;
  L_internal_real_Type_SDM_Types_Pkg /* _L499/ */ _L499;
  V_internal_real_Type_SDM_Types_Pkg /* _L502/ */ _L502;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L508/ */ _L508;
  kcg_bool /* _L509/ */ _L509;
  kcg_bool /* _L594/ */ _L594;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L593/ */ _L593;
  kcg_bool /* _L603/ */ _L603;
  kcg_bool /* _L604/ */ _L604;
  kcg_bool /* _L605/ */ _L605;
  kcg_bool /* _L609/ */ _L609;
  kcg_bool /* _L641/ */ _L641;
  kcg_bool /* _L642/ */ _L642;
  V_internal_real_Type_SDM_Types_Pkg /* _L655/ */ _L655;
  kcg_bool /* _L672/ */ _L672;
  V_internal_real_Type_SDM_Types_Pkg /* _L671/ */ _L671;
  V_internal_real_Type_SDM_Types_Pkg /* _L674/ */ _L674;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L675/ */ _L675;
  L_internal_real_Type_SDM_Types_Pkg /* _L694/ */ _L694;
  V_internal_real_Type_SDM_Types_Pkg /* _L701/ */ _L701;
  MA_section_real_T_TargetManagement_types /* _L702/ */ _L702;
  L_internal_real_Type_SDM_Types_Pkg /* _L812/ */ _L812;
  kcg_bool /* _L813/ */ _L813;
  L_internal_real_Type_SDM_Types_Pkg /* _L814/ */ _L814;
  T_trac_t_TargetLimits_Pkg /* _L821/ */ _L821;
  T_internal_real_Type_SDM_Types_Pkg /* _L822/ */ _L822;
  T_trac_t_TargetLimits_Pkg /* _L823/ */ _L823;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L827/ */ _L827;
  T_trac_t_TargetLimits_Pkg /* _L90/ */ _L90;
  T_trac_t_TargetLimits_Pkg /* _L833/ */ _L833;
  TrainLocations_real_T_SDM_Types_Pkg /* _L834/ */ _L834;
  TargetCollection_T_TargetManagement_types /* _L879/ */ _L879;
  t_Brake_t_SDMModelPkg /* _L878/ */ _L878;
  P3_NationalValues_T_Packet_Types_Pkg /* _L877/ */ _L877;
  odometry_T_Obu_BasicTypes_Pkg /* _L876/ */ _L876;
  Target_T_TargetManagement_types /* _L863/ */ _L863;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L864/ */ _L864;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L865/ */ _L865;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L866/ */ _L866;
  kcg_bool /* _L867/ */ _L867;
  V_internal_real_Type_SDM_Types_Pkg /* _L868/ */ _L868;
  L_internal_real_Type_SDM_Types_Pkg /* _L869/ */ _L869;
  L_internal_real_Type_SDM_Types_Pkg /* _L870/ */ _L870;
  V_internal_real_Type_SDM_Types_Pkg /* _L871/ */ _L871;
  T_trac_t_TargetLimits_Pkg /* _L873/ */ _L873;
  V_internal_real_Type_SDM_Types_Pkg /* _L874/ */ _L874;
  bec_t_TargetLimits_Pkg /* _L875/ */ _L875;
  CurveCollection_T_CalcBrakingCurves_types /* _L862/ */ _L862;
  L_internal_real_Type_SDM_Types_Pkg /* _L881/ */ _L881;
  kcg_bool /* _L882/ */ _L882;
  trainData_internal_t_SDM_Types_Pkg /* _L889/ */ _L889;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L894/ */ _L894;
  kcg_float32 /* _L897/ */ _L897;
  L_internal_real_Type_SDM_Types_Pkg /* _L898/ */ _L898;
  L_internal_real_Type_SDM_Types_Pkg /* _L899/ */ _L899;
  TrainLocations_real_T_SDM_Types_Pkg /* _L900/ */ _L900;
  kcg_bool /* _L901/ */ _L901;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L902/ */ _L902;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L903/ */ _L903;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L914/ */ _L914;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L911/ */ _L911;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L910/ */ _L910;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L909/ */ _L909;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L908/ */ _L908;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L907/ */ _L907;
  Speeds_T_SDM_Types_Pkg /* _L904/ */ _L904;
  V_internal_real_Type_SDM_Types_Pkg /* _L917/ */ _L917;
  V_internal_real_Type_SDM_Types_Pkg /* _L920/ */ _L920;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L922/ */ _L922;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L923/ */ _L923;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L934/ */ _L934;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L933/ */ _L933;
  kcg_int32 /* _L931/ */ _L931;
  kcg_int32 /* _L928/ */ _L928;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L927/ */ _L927;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L937/ */ _L937;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L938/ */ _L938;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L981/ */ _L981;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L982/ */ _L982;
  L_internal_real_Type_SDM_Types_Pkg /* _L983/ */ _L983;
  L_internal_real_Type_SDM_Types_Pkg /* _L985/ */ _L985;
  L_internal_real_Type_SDM_Types_Pkg /* _L984/ */ _L984;
  L_internal_real_Type_SDM_Types_Pkg /* _L987/ */ _L987;
  L_internal_real_Type_SDM_Types_Pkg /* _L986/ */ _L986;
  kcg_bool /* _L992/ */ _L992;
  kcg_bool /* _L991/ */ _L991;
  TargetType_T_TargetManagement_types /* _L990/ */ _L990;
  TargetType_T_TargetManagement_types /* _L989/ */ _L989;
  kcg_bool /* _L988/ */ _L988;
  TargetType_T_TargetManagement_types /* _L994/ */ _L994;
  L_internal_real_Type_SDM_Types_Pkg /* _L344/ */ _L344;
  kcg_bool /* _L343/ */ _L343;
  Target_T_TargetManagement_types /* _L993/ */ _L993;
  V_internal_real_Type_SDM_Types_Pkg /* _L995/ */ _L995;
  MRSP_internal_T_TargetManagement_types /* _L996/ */ _L996;
  L_internal_real_Type_SDM_Types_Pkg /* _L997/ */ _L997;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1014/ */ _L1014;
  kcg_bool /* _L1013/ */ _L1013;
  odometry_T_Obu_BasicTypes_Pkg /* _L1015/ */ _L1015;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L1016/ */ _L1016;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1017/ */ _L1017;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1029/ */ _L1029;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1031/ */ _L1031;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1033/ */ _L1033;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1035/ */ _L1035;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1036/ */ _L1036;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1037/ */ _L1037;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1038/ */ _L1038;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1041/ */ _L1041;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1042/ */ _L1042;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1043/ */ _L1043;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1044/ */ _L1044;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1045/ */ _L1045;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1047/ */ _L1047;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1048/ */ _L1048;
  trainData_internal_t_SDM_Types_Pkg /* _L1049/ */ _L1049;
  L_internal_real_Type_SDM_Types_Pkg /* _L1050/ */ _L1050;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1051/ */ _L1051;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1052/ */ _L1052;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1057/ */ _L1057;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1058/ */ _L1058;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1060/ */ _L1060;
  kcg_bool /* _L1061/ */ _L1061;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1064/ */ _L1064;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1065/ */ _L1065;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1066/ */ _L1066;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1067/ */ _L1067;
  kcg_bool /* _L1068/ */ _L1068;
  kcg_bool /* _L1070/ */ _L1070;
  kcg_bool /* _L1071/ */ _L1071;
  kcg_bool /* _L1072/ */ _L1072;
  kcg_bool /* _L1075/ */ _L1075;
  kcg_bool /* _L1076/ */ _L1076;
  kcg_bool /* _L1078/ */ _L1078;
  kcg_bool /* _L1079/ */ _L1079;
} outC_SDMLimitLocations_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::SDMLimitLocations/ */
extern void SDMLimitLocations_TargetLimits_Pkg(
  /* MRSP_Profile/ */
  MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  /* curveCollection/ */
  CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDMLimitLocations_reset_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDMLimitLocations_init_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_LowerOrHold_TargetLimits_Pkg Context_LowerOrHold_2;
  SV_LowerOrHold_TargetLimits_Pkg Context_LowerOrHold_1;
  SV_LowerOrHold_TargetLimits_Pkg Context_LowerOrHold_3;
} SV_SDMLimitLocations_TargetLimits_Pkg;

extern void kcg_save_SV_SDMLimitLocations_TargetLimits_Pkg(
  SV_SDMLimitLocations_TargetLimits_Pkg *SV,
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);
extern void kcg_load_SV_SDMLimitLocations_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC,
  SV_SDMLimitLocations_TargetLimits_Pkg *SV);

/*
  Expanded instances for: TargetLimits_Pkg::SDMLimitLocations/
  @1: (math::Min#1)
  @2: (math::Max#1)
  @3: (math::Min#2)
  @4: (math::Max#2)
*/

#endif /* _SDMLimitLocations_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDMLimitLocations_TargetLimits_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

