/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _brakePercentToABrake_SDMConversionModelPkg_H_
#define _brakePercentToABrake_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "brakePercentLookUp_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  a_Brake_t_SDMConversionModelPkg /* aBrake/ */ aBrake;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_brakePercentLookUp_SDMConversionModelPkg /* _L1=(SDMConversionModelPkg::brakePercentLookUp#1)/ */ Context_brakePercentLookUp_1;
  outC_brakePercentLookUp_SDMConversionModelPkg /* _L3=(SDMConversionModelPkg::brakePercentLookUp#2)/ */ Context_brakePercentLookUp_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  av_Map_t_SDMConversionModelPkg /* _L1/ */ _L1;
  av_Map_t_SDMConversionModelPkg /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  a_Brake_t_SDMConversionModelPkg /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  trainData_T_TIU_Types_Pkg /* _L9/ */ _L9;
} outC_brakePercentToABrake_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::brakePercentToABrake/ */
extern void brakePercentToABrake_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  outC_brakePercentToABrake_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void brakePercentToABrake_reset_SDMConversionModelPkg(
  outC_brakePercentToABrake_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void brakePercentToABrake_init_SDMConversionModelPkg(
  outC_brakePercentToABrake_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _brakePercentToABrake_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakePercentToABrake_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

