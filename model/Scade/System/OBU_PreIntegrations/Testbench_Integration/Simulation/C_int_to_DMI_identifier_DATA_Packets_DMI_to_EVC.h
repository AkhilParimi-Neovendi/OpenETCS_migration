/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_
#define _C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"
#include "CAST_int_to_DMI_Cabin_identifier_DATA_Variables.h"
#include "CAST_int_to_DMI_DMI_identifier_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_identifier_ct_out/ */ dmi_identifier_ct_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_DMI_identifier_DATA_Variables /* _L10=(DATA::Variables::CAST_int_to_DMI_DMI_identifier#1)/ */ Context_CAST_int_to_DMI_DMI_identifier_1;
  outC_CAST_int_to_DMI_Cabin_identifier_DATA_Variables /* _L11=(DATA::Variables::CAST_int_to_DMI_Cabin_identifier#1)/ */ Context_CAST_int_to_DMI_Cabin_identifier_1;
  outC_CAST_int_to_DMI_TEXT_DATA_Variables /* _L12=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */ Context_CAST_int_to_DMI_TEXT_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* _L13=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */ Context_CAST_Int_to_M_VERSION_1;
  outC_Int_to_Bool_Utilities /* _L14=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_int_array_T_DATA /* _L1/ */ _L1;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L2/ */ _L2;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* _L10/ */ _L10;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg /* _L11/ */ _L11;
  DMI_TEXT_DMI_Types_Pkg /* _L12/ */ _L12;
  M_VERSION /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  DMI_TEXT_INT_Array_T_DATA /* _L270/ */ _L270;
  kcg_int64 /* _L271/ */ _L271;
  kcg_int64 /* _L272/ */ _L272;
  kcg_int64 /* _L273/ */ _L273;
  kcg_int64 /* _L274/ */ _L274;
  kcg_int64 /* _L275/ */ _L275;
  kcg_int64 /* _L276/ */ _L276;
} outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier/ */
extern void C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_int_in/ */
  DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

