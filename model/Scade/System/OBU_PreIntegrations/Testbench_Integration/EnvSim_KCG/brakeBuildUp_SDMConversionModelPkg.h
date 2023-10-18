/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _brakeBuildUp_SDMConversionModelPkg_H_
#define _brakeBuildUp_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "brakePosition_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  t_Brake_t_SDMModelPkg /* T_b/ */ T_b;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_brakePosition_SDMConversionModelPkg /* _L15=(SDMConversionModelPkg::brakePosition#1)/ */ Context_brakePosition_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P3_NationalValues_T_Packet_Types_Pkg /* _L1/ */ _L1;
  t_BrakeVt_t_SDMModelPkg /* _L10/ */ _L10;
  t_BrakeVt_t_SDMModelPkg /* _L11/ */ _L11;
  t_Brake_t_SDMModelPkg /* _L14/ */ _L14;
  t_Brake_t_SDMModelPkg /* _L15/ */ _L15;
  M_NVKTINT /* _L18/ */ _L18;
  trainData_T_TIU_Types_Pkg /* _L19/ */ _L19;
  t_BrakeVt_t_SDMModelPkg /* _L23/ */ _L23;
  t_BrakeVt_t_SDMModelPkg /* _L22/ */ _L22;
} outC_brakeBuildUp_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::brakeBuildUp/ */
extern void brakeBuildUp_SDMConversionModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_brakeBuildUp_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void brakeBuildUp_reset_SDMConversionModelPkg(
  outC_brakeBuildUp_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void brakeBuildUp_init_SDMConversionModelPkg(
  outC_brakeBuildUp_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _brakeBuildUp_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** brakeBuildUp_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

