/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_int_to_DriverIdentfier_DATA_Variables_H_
#define _CAST_int_to_DriverIdentfier_DATA_Variables_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* driverIdentfier_string/ */ driverIdentfier_string;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* _L1/ */ _L1;
  DriverIdentifier_INT_T_DATA /* _L10/ */ _L10;
} outC_CAST_int_to_DriverIdentfier_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DriverIdentfier/ */
extern void CAST_int_to_DriverIdentfier_DATA_Variables(
  /* driverIdentfier_int_array/ */
  DriverIdentifier_INT_T_DATA *driverIdentfier_int_array,
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DriverIdentfier_reset_DATA_Variables(
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DriverIdentfier_init_DATA_Variables(
  outC_CAST_int_to_DriverIdentfier_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DriverIdentfier_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DriverIdentfier_DATA_Variables.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

