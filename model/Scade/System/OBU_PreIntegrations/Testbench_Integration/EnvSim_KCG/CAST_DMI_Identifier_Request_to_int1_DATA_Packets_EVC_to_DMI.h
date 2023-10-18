/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_L_TEXT_to_int_TM_conversions.h"
#include "CAST_M_VERSION_to_int_TM_conversions.h"
#include "CAST_DMI_TEXT_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_int_array_T_DATA /* dmi_id_int/ */ dmi_id_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_L_TEXT_to_int_TM_conversions /* _L13=(TM_conversions::CAST_L_TEXT_to_int#1)/ */ Context_CAST_L_TEXT_to_int_1;
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L12=(TM_conversions::CAST_M_VERSION_to_int#2)/ */ Context_CAST_M_VERSION_to_int_2;
  outC_CAST_M_VERSION_to_int_TM_conversions /* _L11=(TM_conversions::CAST_M_VERSION_to_int#1)/ */ Context_CAST_M_VERSION_to_int_1;
  outC_Bool_to_Int_Utilities /* _L10=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  outC_CAST_DMI_TEXT_to_int_DATA_Variables /* _L15=(DATA::Variables::CAST_DMI_TEXT_to_int#1)/ */ Context_CAST_DMI_TEXT_to_int_1;
  outC_CAST_L_TEXT_to_int_TM_conversions /* _L14=(TM_conversions::CAST_L_TEXT_to_int#2)/ */ Context_CAST_L_TEXT_to_int_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L8/ */ _L8;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  M_VERSION /* _L6/ */ _L6;
  M_VERSION /* _L5/ */ _L5;
  L_TEXT /* _L4/ */ _L4;
  DMI_TEXT_DMI_Types_Pkg /* _L3/ */ _L3;
  L_TEXT /* _L2/ */ _L2;
  array_int64_5 /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  DMI_TEXT_INT_Array_T_DATA /* _L15/ */ _L15;
  P044_other_data_TM_TrainToTrack /* _L16/ */ _L16;
  array_int64_261 /* _L17/ */ _L17;
} outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_DMI_Identifier_Request_to_int1/ */
extern void CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_id_ct/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_id_ct,
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_Identifier_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_Identifier_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Identifier_Request_to_int1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

