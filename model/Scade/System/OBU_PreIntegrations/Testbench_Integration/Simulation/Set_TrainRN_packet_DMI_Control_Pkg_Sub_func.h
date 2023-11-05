/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_
#define _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* DMI_train_running_number_id/ */ DMI_train_running_number_id;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils /* _L22=(DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer)/ */ Context_ArrayOfASCII_to_Integer;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_9 /* _L1/ */ _L1;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L22/ */ _L22;
} outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet/ */
extern void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* valid/ */
  kcg_bool valid,
  /* TrainRunningNumber/ */
  array_int32_9 *TrainRunningNumber,
  /* SystemTime/ */
  kcg_int32 SystemTime,
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_TrainRN_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_TrainRN_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Set_TrainRN_packet_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

