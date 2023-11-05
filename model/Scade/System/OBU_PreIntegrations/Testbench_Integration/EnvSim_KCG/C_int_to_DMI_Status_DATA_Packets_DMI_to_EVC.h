/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_
#define _C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "Int_to_Bool_Utilities.h"
#include "CAST_int_to_DMI_StatusSet_DATA_Variables.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* dim_status_ct/ */ dim_status_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_StatusSet_DATA_Variables /* _L12=(DATA::Variables::CAST_int_to_DMI_StatusSet#1)/ */ Context_CAST_int_to_DMI_StatusSet_1;
  outC_Int_to_Bool_Utilities /* _L13=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L1/ */ _L1;
  DMI_Status_int_array_T_DATA /* _L2/ */ _L2;
  DMI_StatusSet_T_DMI_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
} outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status/ */
extern void C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* dmi_status_int/ */
  DMI_Status_int_array_T_DATA *dmi_status_int,
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

