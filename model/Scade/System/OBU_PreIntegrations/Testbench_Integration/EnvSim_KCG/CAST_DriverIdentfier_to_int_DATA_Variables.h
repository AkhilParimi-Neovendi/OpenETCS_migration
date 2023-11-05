/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DriverIdentfier_to_int_DATA_Variables_H_
#define _CAST_DriverIdentfier_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DriverIdentifier_INT_T_DATA /* driverIdentfier_int_array/ */ driverIdentfier_int_array;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* _L8/ */ _L8;
  array_int32_9 /* _L10/ */ _L10;
} outC_CAST_DriverIdentfier_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DriverIdentfier_to_int/ */
extern void CAST_DriverIdentfier_to_int_DATA_Variables(
  /* driverIdentfier_string/ */
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *driverIdentfier_string,
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DriverIdentfier_to_int_reset_DATA_Variables(
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DriverIdentfier_to_int_init_DATA_Variables(
  outC_CAST_DriverIdentfier_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DriverIdentfier_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DriverIdentfier_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

