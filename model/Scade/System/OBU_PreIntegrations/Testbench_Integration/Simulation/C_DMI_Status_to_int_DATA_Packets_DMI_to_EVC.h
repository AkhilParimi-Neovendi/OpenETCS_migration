/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC_H_
#define _C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "CAST_DMI_StatusSet_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Status_int_array_T_DATA /* dmi_status_int/ */ dmi_status_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_StatusSet_to_int_DATA_Variables /* _L19=(DATA::Variables::CAST_DMI_StatusSet_to_int#1)/ */ Context_CAST_DMI_StatusSet_to_int_1;
  outC_Bool_to_Int_Utilities /* _L23=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_4 /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  DMI_StatusSet_T_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L17/ */ _L17;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L23/ */ _L23;
} outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int/ */
extern void C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* dim_status_ct/ */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Status_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Status_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

