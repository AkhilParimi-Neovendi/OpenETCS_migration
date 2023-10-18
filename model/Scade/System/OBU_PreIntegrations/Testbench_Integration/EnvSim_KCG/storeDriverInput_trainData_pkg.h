/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _storeDriverInput_trainData_pkg_H_
#define _storeDriverInput_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainDataForEVC/ */ trainDataForEVC;
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  M_LOADINGGAUGE /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  M_AIRTIGHT /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  M_AXLELOADCAT /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  NC_CDTRAIN /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  NC_TRAIN /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  aTractionIdentity_T_Packet_TrainTypes_Pkg /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  V_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  aNID_NTC_T_Packet_TrainTypes_Pkg /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  M_BRAKEPERCT_DMI_Types_Pkg /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* updateTrainData/ */ updateTrainData;
  kcg_bool /* newState/ */ newState;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  trainData_T_TIU_Types_Pkg /* _L74/ */ _L74;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L81/ */ _L81;
  trainDataStatus_T_trainData_Types_pkg /* _L80/ */ _L80;
  trainDataStatus_T_trainData_Types_pkg /* _L82/ */ _L82;
} outC_storeDriverInput_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::storeDriverInput/ */
extern void storeDriverInput_trainData_pkg(
  /* fromDMI_TrainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* originalTrainData/ */
  trainData_T_TIU_Types_Pkg *originalTrainData,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  outC_storeDriverInput_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void storeDriverInput_reset_trainData_pkg(
  outC_storeDriverInput_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void storeDriverInput_init_trainData_pkg(
  outC_storeDriverInput_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _storeDriverInput_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** storeDriverInput_trainData_pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

