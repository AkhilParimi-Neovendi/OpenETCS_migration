/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_
#define _C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_int_to_DriverIdentfier_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* dmi_driver_identifier_ct/ */ dmi_driver_identifier_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DriverIdentfier_DATA_Variables /* _L6=(DATA::Variables::CAST_int_to_DriverIdentfier#1)/ */ Context_CAST_int_to_DriverIdentfier_1;
  outC_Int_to_Bool_Utilities /* _L10=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L2/ */ _L2;
  DMI_Driver_Identifier_int_array_T_DATA /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* _L6/ */ _L6;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  array_int64_9 /* _L21/ */ _L21;
} outC_C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier/ */
extern void C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* dmi_driver_identifier_int/ */
  DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  outC_C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

