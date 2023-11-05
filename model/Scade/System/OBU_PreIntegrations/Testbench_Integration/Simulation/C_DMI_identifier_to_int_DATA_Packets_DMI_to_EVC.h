/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_
#define _C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "CAST_DMI_Cabin_identifier_to_int_DATA_Variables.h"
#include "CAST_DMI_DMI_identifier_to_int_DATA_Variables.h"
#include "CAST_M_VERSION_to_int_TM_conversions.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_int_array_T_DATA /* dmi_identifier_int/ */ dmi_identifier_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_Cabin_identifier_to_int_DATA_Variables /* _L24=(DATA::Variables::CAST_DMI_Cabin_identifier_to_int#1)/ */ Context_CAST_DMI_Cabin_identifier_to_int_1;
  outC_CAST_DMI_DMI_identifier_to_int_DATA_Variables /* _L22=(DATA::Variables::CAST_DMI_DMI_identifier_to_int#1)/ */ Context_CAST_DMI_DMI_identifier_to_int_1;
  outC_Bool_to_Int_Utilities /* _L36=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  outC_CAST_DMI_TEXT_to_int_DATA_Variables /* _L23=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */ Context_CAST_DMI_TEXT_to_int_1;
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L13=(TM_conversions::CAST_M_VERSION_to_int#1)/ */ Context_CAST_M_VERSION_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L9/ */ _L9;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* _L7/ */ _L7;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg /* _L6/ */ _L6;
  L_TEXT /* _L5/ */ _L5;
  DMI_TEXT_DMI_Types_Pkg /* _L4/ */ _L4;
  M_VERSION /* _L3/ */ _L3;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L22/ */ _L22;
  DMI_TEXT_INT_Array_T_DATA /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  P044_other_data_TM_TrainToTrack /* _L28/ */ _L28;
  array_int32_5 /* _L32/ */ _L32;
  kcg_int32 /* _L36/ */ _L36;
  array_int32_261 /* _L39/ */ _L39;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L40/ */ _L40;
} outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int/ */
extern void C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_ct/ */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

