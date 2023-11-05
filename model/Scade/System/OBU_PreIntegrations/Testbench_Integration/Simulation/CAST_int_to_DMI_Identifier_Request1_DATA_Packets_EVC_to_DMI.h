/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_Int_to_L_TEXT_TM_conversions.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_id_ct/ */ dmi_id_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L22=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */ Context_CAST_Int_to_M_VERSION_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* _L30=(TM_conversions::CAST_Int_to_M_VERSION#2)/ */ Context_CAST_Int_to_M_VERSION_2;
  outC_CAST_Int_to_L_TEXT_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_L_TEXT#1)/ */ Context_CAST_Int_to_L_TEXT_1;
  outC_CAST_int_to_DMI_TEXT_DATA_Variables /* _L33=(DATA::Variables::CAST_int_to_DMI_TEXT#1)/ */ Context_CAST_int_to_DMI_TEXT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L19/ */ _L19;
  DMI_Identifier_Request_int_array_T_DATA /* _L20/ */ _L20;
  array_int32_5 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  M_VERSION /* _L29/ */ _L29;
  M_VERSION /* _L30/ */ _L30;
  L_TEXT /* _L31/ */ _L31;
  DMI_TEXT_INT_Array_T_DATA /* _L32/ */ _L32;
  DMI_TEXT_DMI_Types_Pkg /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
} outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1/ */
extern void CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI(
  /* dmi_id_int/ */
  DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_Identifier_Request1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_Identifier_Request1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

