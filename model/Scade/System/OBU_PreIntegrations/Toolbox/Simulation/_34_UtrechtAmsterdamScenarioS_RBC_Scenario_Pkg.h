/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_
#define __34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_

#include "kcg_types.h"
#include "DECODE_NID_LRBG_TM_conversions.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "_33_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h"
#include "LRBGDistanceToMeterConver_RBC_Converter_Pkg.h"
#include "PosData__Get_Q_SCALE_RBC_Session_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "PosData__Get_D_LRBG_RBC_Session_Pkg.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* outTriggerId/ */ outTriggerId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__33_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg /* _L13=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages#1)/ */ Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_1;
  outC_Clock__GetSeconds_RBC_Time_Pkg /* _L14=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */ Context_Clock__GetSeconds_1;
  outC_LRBGDistanceToMeterConver_RBC_Converter_Pkg /* _L12=(RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert#1)/ */ Context_LRBGDistanceToMeterConverter__Convert_1;
  outC_PosData__Get_Q_SCALE_RBC_Session_Pkg /* _L11=(RBC_Session_Pkg::PosData__Get_Q_SCALE#1)/ */ Context_PosData__Get_Q_SCALE_1;
  outC_PosData__Get_D_LRBG_RBC_Session_Pkg /* _L9=(RBC_Session_Pkg::PosData__Get_D_LRBG#1)/ */ Context_PosData__Get_D_LRBG_1;
  outC_DECODE_NID_LRBG_TM_conversions /* _L15=(TM_conversions::DECODE_NID_LRBG#1)/ */ Context_DECODE_NID_LRBG_1;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* _L10=(RBC_Session_Pkg::PosData__Get_NID_LRBG#1)/ */ Context_PosData__Get_NID_LRBG_1;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* _L8=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */ Context_SessionManagement__GetPosData_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SessionManagement_T /* _L1/ */ _L1;
  Clock_T /* _L7/ */ _L7;
  PosData_T /* _L8/ */ _L8;
  D_LRBG /* _L9/ */ _L9;
  NID_LRBG /* _L10/ */ _L10;
  Q_SCALE /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  T_TRAIN /* _L14/ */ _L14;
  NID_BG /* _L16/ */ _L16;
  NID_C /* _L15/ */ _L15;
} outC__34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper/ */
extern void _34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  /* inClock/ */
  Clock_T *inClock,
  outC__34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _34_UtrechtAmsterdamScenarioS_reset_RBC_Scenario_Pkg(
  outC__34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _34_UtrechtAmsterdamScenarioS_init_RBC_Scenario_Pkg(
  outC__34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _34_UtrechtAmsterdamScenarioS_RBC_Scenario_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

