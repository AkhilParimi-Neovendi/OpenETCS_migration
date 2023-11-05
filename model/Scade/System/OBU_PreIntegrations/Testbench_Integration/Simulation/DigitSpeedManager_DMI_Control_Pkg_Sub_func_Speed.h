/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_
#define _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_

#include "kcg_types.h"
#include "SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* SpeedDigitOne/ */ SpeedDigitOne;
  kcg_float32 /* SpeedDigitTwo/ */ SpeedDigitTwo;
  kcg_float32 /* SpeedDigitThree/ */ SpeedDigitThree;
  kcg_float32 /* TrainSpeed/ */ TrainSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed /* _L8=(DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit#1)/ */ Context_SpeedToDigit_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_float32 /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L14/ */ _L14;
  kcg_float32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
} outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager/ */
extern void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DigitSpeedManager_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DigitSpeedManager_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

