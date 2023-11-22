/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _trainDataStorage_trainData_pkg_H_
#define _trainDataStorage_trainData_pkg_H_

#include "kcg_types.h"
#include "storeTIUData_trainData_pkg.h"
#include "storeDriverInput_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* actualTrainData/ */ actualTrainData;
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData/ */ trainData;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_storeTIUData_trainData_pkg /* IfBlock1:then:_L5=(trainData_pkg::storeTIUData#1)/ */ Context_storeTIUData_1;
  outC_storeDriverInput_trainData_pkg /* IfBlock1:else:then:_L13=(trainData_pkg::storeDriverInput#1)/ */ Context_storeDriverInput_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainData_T_TIU_Types_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  kcg_bool /* dataFromTIU/ */ dataFromTIU;
  kcg_bool /* dataFromDMI/ */ dataFromDMI;
  kcg_bool /* systemFailure/ */ systemFailure;
  kcg_bool /* modifyData/ */ modifyData;
  trainData_T_TIU_Types_Pkg /* _L1/ */ _L1;
  trainDataStatus_T_trainData_Types_pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L20/ */ _L20;
  trainDataStatus_T_trainData_Types_pkg /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L21/ */ _L21;
  trainData_Events_T_trainData_Types_pkg /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  trainData_T_TIU_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
} outC_trainDataStorage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainDataStorage/ */
extern void trainDataStorage_trainData_pkg(
  /* reset/ */
  kcg_bool reset,
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainDatafromDriver/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* eventsForTrainData/ */
  trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trainDataStorage_init_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _trainDataStorage_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainDataStorage_trainData_pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

