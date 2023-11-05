/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SimpleValidityCheck_SDM_Input_Wrappers_H_
#define _SimpleValidityCheck_SDM_Input_Wrappers_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* exception/ */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P3_NationalValues_T_Packet_Types_Pkg /* _L1/ */ _L1;
  odometry_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  trainPosition_T_TrainPosition_Types_Pck /* _L3/ */ _L3;
  trainData_T_TIU_Types_Pkg /* _L4/ */ _L4;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  odometry_T_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
} outC_SimpleValidityCheck_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::SimpleValidityCheck/ */
extern void SimpleValidityCheck_SDM_Input_Wrappers(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SimpleValidityCheck_reset_SDM_Input_Wrappers(
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SimpleValidityCheck_init_SDM_Input_Wrappers(
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SimpleValidityCheck_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SimpleValidityCheck_SDM_Input_Wrappers.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

