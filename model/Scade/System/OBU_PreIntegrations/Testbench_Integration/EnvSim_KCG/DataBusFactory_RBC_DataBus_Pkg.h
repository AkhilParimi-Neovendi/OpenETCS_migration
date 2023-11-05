/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _DataBusFactory_RBC_DataBus_Pkg_H_
#define _DataBusFactory_RBC_DataBus_Pkg_H_

#include "kcg_types.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* @1/_/v3/ */ v3_times_1_int32;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Clock__Limit_RBC_Time_Pkg /* _L18=(RBC_Time_Pkg::Clock__Limit#1)/ */ Context_Clock__Limit_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_int32;
  kcg_bool /* @1/_/c/ */ c_times_1_int32;
  kcg_int32 /* @1/_/n/ */ n_times_1_int32;
  kcg_int32 /* @1/_/v4/ */ v4_times_1_int32;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  SessionManagement_T /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  DynamicConfig_T /* _L5/ */ _L5;
  RadioTrackTrainMessageQueue_T /* _L7/ */ _L7;
  Clock_T /* _L6/ */ _L6;
  RBC_Data_T_RBC_DataBus_Pkg /* _L8/ */ _L8;
  DynamicConfig_T /* _L10/ */ _L10;
  _55_array /* _L16/ */ _L16;
  SessionManagement_T /* _L15/ */ _L15;
  DynamicConfig_T /* _L14/ */ _L14;
  RadioTrackTrainMessageQueue_T /* _L13/ */ _L13;
  RBC_Data_T_RBC_DataBus_Pkg /* _L17/ */ _L17;
  Clock_T /* _L18/ */ _L18;
  Clock_T /* _L19/ */ _L19;
  CompressedRadioMessage_TM /* _L21/ */ _L21;
  CompressedRadioMessage_TM /* _L22/ */ _L22;
  SessionManagement_T /* _L23/ */ _L23;
  RadioTrackTrainMessageQueue_T /* _L24/ */ _L24;
  Clock_T /* _L25/ */ _L25;
  CompressedRadioMessage_TM /* _L26/ */ _L26;
  _55_array /* _L28/ */ _L28;
  _55_array /* _L38/ */ _L38;
} outC_DataBusFactory_RBC_DataBus_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_DataBus_Pkg::DataBusFactory/ */
extern void DataBusFactory_RBC_DataBus_Pkg(
  /* initConfig/ */
  DynamicConfig_T *initConfig,
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DataBusFactory_reset_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DataBusFactory_init_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: RBC_DataBus_Pkg::DataBusFactory/
  @1: (times#1)
*/

#endif /* _DataBusFactory_RBC_DataBus_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DataBusFactory_RBC_DataBus_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

