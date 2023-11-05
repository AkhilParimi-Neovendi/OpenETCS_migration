/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_
#define _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_

#include "kcg_types.h"
#include "SimpleValidityCheck_SDM_Input_Wrappers.h"
#include "addGradient_SDMModelPkg.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"
#include "ABrakeFactory_SDMModelPkg.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"
#include "TargetManagement_TargetManagement_pkg.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* sdmToDMI/ */ sdmToDMI;
  Target_T_TargetManagement_types /* target/ */ target;
  SDM_Commands_T_SDM_Types_Pkg /* sdmCommands/ */ sdmCommands;
  Brake_command_T_TIU_Types_Pkg /* brakeCmd/ */ brakeCmd;
  kcg_bool /* EOA_overpassed/ */ EOA_overpassed;
  kcg_bool /* Target_Speed_Reached/ */ Target_Speed_Reached;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SDM_Commands_SDM_Commands_Pkg /* _L3=(SDM_Commands_Pkg::SDM_Commands#1)/ */ Context_SDM_Commands_1;
  outC_SimpleValidityCheck_SDM_Input_Wrappers /* _L240=(SDM_Input_Wrappers::SimpleValidityCheck#1)/ */ Context_SimpleValidityCheck_1;
  outC_SDMLimitLocations_TargetLimits_Pkg /* _L111=(TargetLimits_Pkg::SDMLimitLocations#4)/ */ Context_SDMLimitLocations_4;
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg /* _L43=(CalcBrakingCurves_Pkg::CalcBrakingCurves_integration#1)/ */ Context_CalcBrakingCurves_integration_1;
  outC_addGradient_SDMModelPkg /* _L206=(SDMModelPkg::addGradient#1)/ */ Context_addGradient_1;
  outC_addGradient_SDMModelPkg /* _L208=(SDMModelPkg::addGradient#3)/ */ Context_addGradient_3;
  outC_AGradient_SDM_GradientAcceleration_Pkg /* _L190=(SDM_GradientAcceleration_Pkg::AGradient#1)/ */ Context_AGradient_1;
  outC_ABrakeFactory_SDMModelPkg /* _L139=(SDMModelPkg::ABrakeFactory#1)/ */ Context_ABrakeFactory_1;
  outC_TargetManagement_TargetManagement_pkg /* _L81=(TargetManagement_pkg::TargetManagement#2)/ */ Context_TargetManagement_2;
  outC_SDM_InputWrapper_SDM_Input_Wrappers /* _L54=(SDM_Input_Wrappers::SDM_InputWrapper#1)/ */ Context_SDM_InputWrapper_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TargetCollection_T_TargetManagement_types /* targetCollection/ */ targetCollection;
  TrainLocations_real_T_SDM_Types_Pkg /* Trainlocations_internal/ */ Trainlocations_internal;
  MRSP_internal_T_TargetManagement_types /* MRSP_internal/ */ MRSP_internal;
  MA_section_real_T_TargetManagement_types /* MA_internal/ */ MA_internal;
  trainData_internal_t_SDM_Types_Pkg /* trainData_extras/ */ trainData_extras;
  t_Brake_t_SDMModelPkg /* T_b/ */ T_b;
  Target_T_TargetManagement_types /* MRDT/ */ MRDT;
  CurveCollection_T_CalcBrakingCurves_types /* CurveCollection/ */ CurveCollection;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* sdmToDMILocal/ */ sdmToDMILocal;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L3/ */ _L3;
  P3_NationalValues_T_Packet_Types_Pkg /* _L21/ */ _L21;
  trainPosition_T_TrainPosition_Types_Pck /* _L22/ */ _L22;
  odometry_T_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  trainProperties_T_TrainPosition_Types_Pck /* _L34/ */ _L34;
  CurveCollection_T_CalcBrakingCurves_types /* _L43/ */ _L43;
  TrainLocations_real_T_SDM_Types_Pkg /* _L48/ */ _L48;
  MRSP_internal_T_TargetManagement_types /* _L54/ */ _L54;
  MA_section_real_T_TargetManagement_types /* _L55/ */ _L55;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L66/ */ _L66;
  SDM_Commands_T_SDM_Types_Pkg /* _L65/ */ _L65;
  TargetCollection_T_TargetManagement_types /* _L81/ */ _L81;
  TrainLocations_real_T_SDM_Types_Pkg /* _L86/ */ _L86;
  kcg_int32 /* _L94/ */ _L94;
  TrainLocations_real_T_SDM_Types_Pkg /* _L96/ */ _L96;
  TargetCollection_T_TargetManagement_types /* _L97/ */ _L97;
  MRSP_internal_T_TargetManagement_types /* _L98/ */ _L98;
  TargetCollection_T_TargetManagement_types /* _L102/ */ _L102;
  kcg_bool /* _L114/ */ _L114;
  Target_T_TargetManagement_types /* _L113/ */ _L113;
  SDM_Locations_T_SDM_Types_Pkg /* _L112/ */ _L112;
  Speeds_T_SDM_Types_Pkg /* _L111/ */ _L111;
  t_Brake_t_SDMModelPkg /* _L139/ */ _L139;
  P3_NationalValues_T_Packet_Types_Pkg /* _L141/ */ _L141;
  trainData_T_TIU_Types_Pkg /* _L143/ */ _L143;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L162/ */ _L162;
  kcg_bool /* _L163/ */ _L163;
  trainData_internal_t_SDM_Types_Pkg /* _L185/ */ _L185;
  ASafe_T_CalcBrakingCurves_types /* _L187/ */ _L187;
  ASafe_T_CalcBrakingCurves_types /* _L186/ */ _L186;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L189/ */ _L189;
  trainData_T_TIU_Types_Pkg /* _L193/ */ _L193;
  A_gradient_t_SDM_GradientAcceleration_types /* _L190/ */ _L190;
  TargetCollection_T_TargetManagement_types /* _L196/ */ _L196;
  ASafe_T_CalcBrakingCurves_types /* _L206/ */ _L206;
  ASafe_T_CalcBrakingCurves_types /* _L208/ */ _L208;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L211/ */ _L211;
  kcg_bool /* _L212/ */ _L212;
  Brake_command_T_TIU_Types_Pkg /* _L214/ */ _L214;
  P3_NationalValues_T_Packet_Types_Pkg /* _L215/ */ _L215;
  MA_section_real_T_TargetManagement_types /* _L216/ */ _L216;
  trainData_internal_t_SDM_Types_Pkg /* _L222/ */ _L222;
  trainData_internal_t_SDM_Types_Pkg /* _L223/ */ _L223;
  t_Brake_t_SDMModelPkg /* _L225/ */ _L225;
  kcg_bool /* _L226/ */ _L226;
  Q_NVSBFBPERM /* _L227/ */ _L227;
  P3_NationalValues_T_Packet_Types_Pkg /* _L228/ */ _L228;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L230/ */ _L230;
  kcg_bool /* _L232/ */ _L232;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L233/ */ _L233;
  trainPosition_T_TrainPosition_Types_Pck /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  P3_NationalValues_T_Packet_Types_Pkg /* _L241/ */ _L241;
  odometry_T_Obu_BasicTypes_Pkg /* _L242/ */ _L242;
  trainPosition_T_TrainPosition_Types_Pck /* _L243/ */ _L243;
  trainData_T_TIU_Types_Pkg /* _L244/ */ _L244;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L246/ */ _L246;
  kcg_bool /* _L247/ */ _L247;
  Target_T_TargetManagement_types /* _L250/ */ _L250;
  Target_T_TargetManagement_types /* _L256/ */ _L256;
  TargetCollection_T_TargetManagement_types /* _L255/ */ _L255;
  CurveCollection_T_CalcBrakingCurves_types /* _L254/ */ _L254;
  kcg_int32 /* _L275/ */ _L275;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L276/ */ _L276;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* _L277/ */ _L277;
} outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration/ */
extern void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* Service_brake_requested_by_modes_and_levels/ */
  kcg_bool Service_brake_requested_by_modes_and_levels,
  /* Emergency_brake_requested_by_modes_and_levels/ */
  kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

