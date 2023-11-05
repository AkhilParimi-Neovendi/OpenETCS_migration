/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways_H_
#define _C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_DriverIdentfier_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Identifier_int_array_T_DATA /* dmi_driver_identifier_int/ */ dmi_driver_identifier_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DriverIdentfier_to_int_DATA_Variables /* _L15=(DATA::Variables::CAST_DriverIdentfier_to_int#1)/ */ Context_CAST_DriverIdentfier_to_int_1;
  outC_Bool_to_Int_Utilities /* _L20=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_2 /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* _L3/ */ _L3;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L13/ */ _L13;
  DriverIdentifier_INT_T_DATA /* _L15/ */ _L15;
  array_int32_11 /* _L16/ */ _L16;
  kcg_int32 /* _L20/ */ _L20;
} outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int/ */
extern void C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* dmi_driver_identifier_ct/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

