/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_connectionStatusRadioUnit_to_int_DATA_Variables.h"
#include "CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables.h"
#include "CAST_M_SupervisionDisplay_to_int_DATA_Variables.h"
#include "CAST_NID_C_to_int_TM_conversions.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"
#include "CAST_M_MODE_to_int_TM_conversions.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_int_array_T_DATA /* dmi_dynamic_int/ */ dmi_dynamic_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_connectionStatusRadioUnit_to_int_DATA_Variables /* _L32=(DATA::Variables::CAST_connectionStatusRadioUnit_to_int#1)/ */ Context_CAST_connectionStatusRadioUnit_to_int_1;
  outC_CAST_M_SUPERVISION_STATUS_to_int_DATA_Variables /* _L31=(DATA::Variables::CAST_M_SUPERVISION_STATUS_to_int#1)/ */ Context_CAST_M_SUPERVISION_STATUS_to_int_1;
  outC_CAST_M_SupervisionDisplay_to_int_DATA_Variables /* _L29=(DATA::Variables::CAST_M_SupervisionDisplay_to_int#1)/ */ Context_CAST_M_SupervisionDisplay_to_int_1;
  outC_Bool_to_Int_Utilities /* _L30=(Utilities::Bool_to_Int#2)/ */ Context_Bool_to_Int_2;
  outC_CAST_NID_C_to_int_TM_conversions /* _L28=(TM_conversions::CAST_NID_C_to_int#1)/ */ Context_CAST_NID_C_to_int_1;
  outC_CAST_DMI_level_to_int_DATA_Variables /* _L27=(DATA::Variables::CAST_DMI_level_to_int#1)/ */ Context_CAST_DMI_level_to_int_1;
  outC_CAST_M_MODE_to_int_TM_conversions /* _L26=(TM_conversions::CAST_M_MODE_to_int#1)/ */ Context_CAST_M_MODE_to_int_1;
  outC_Bool_to_Int_Utilities /* _L25=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L24/ */ _L24;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L23/ */ _L23;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  M_MODE /* _L14/ */ _L14;
  DMI_level_T_DMI_Types_Pkg /* _L13/ */ _L13;
  NID_C /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L10/ */ _L10;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  M_SupervisionDisplay_INT_T_DATA /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  M_SUPERVISION_STATUS_INT_T_DATA /* _L31/ */ _L31;
  connectionStatusRadioUnit_INT_T_DATA /* _L32/ */ _L32;
  array_int32_24 /* _L33/ */ _L33;
  kcg_int32 /* _L36/ */ _L36;
} outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_DMI_Dynamic_to_int1/ */
extern void CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_ct/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic_ct,
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_Dynamic_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_Dynamic_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Dynamic_to_int1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

