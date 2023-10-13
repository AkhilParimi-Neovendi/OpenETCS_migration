/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_connectionStatusRadioUnit_DATA_Variables.h"
#include "CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables.h"
#include "CAST_int_to_M_SupervisionDisplay_DATA_Variables.h"
#include "CAST_Int_to_M_MODE_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_dynamic_ct/ */ dmi_dynamic_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_connectionStatusRadioUnit_DATA_Variables /* _L41=(DATA::Variables::CAST_int_to_connectionStatusRadioUnit#1)/ */ Context_CAST_int_to_connectionStatusRadioUnit_1;
  outC_CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables /* _L31=(DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS#1)/ */ Context_CAST_int_to_M_SUPERVISION_STATUS_1;
  outC_CAST_int_to_M_SupervisionDisplay_DATA_Variables /* _L29=(DATA::Variables::CAST_int_to_M_SupervisionDisplay#1)/ */ Context_CAST_int_to_M_SupervisionDisplay_1;
  outC_Int_to_Bool_Utilities /* _L30=(Utilities::Int_to_Bool#2)/ */ Context_Int_to_Bool_2;
  outC_CAST_Int_to_NID_C_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_NID_C#1)/ */ Context_CAST_Int_to_NID_C_1;
  outC_CAST_Int_to_M_MODE_TM_conversions /* _L26=(TM_conversions::CAST_Int_to_M_MODE#1)/ */ Context_CAST_Int_to_M_MODE_1;
  outC_Int_to_Bool_Utilities /* _L25=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_int_to_DMI_level_DATA_Variables /* _L43=(DATA::Variables::CAST_int_to_DMI_level#1)/ */ Context_CAST_int_to_DMI_level_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  kcg_bool /* _L25/ */ _L25;
  M_MODE /* _L26/ */ _L26;
  NID_C /* _L28/ */ _L28;
  M_SupervisionDisplay_T_DMI_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L31/ */ _L31;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L33/ */ _L33;
  DMI_Dynamic_int_array_T_DATA /* _L38/ */ _L38;
  kcg_int64 /* _L39/ */ _L39;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L41/ */ _L41;
  DMI_level_T_DMI_Types_Pkg /* _L43/ */ _L43;
} outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1/ */
extern void CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_int/ */
  DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_Dynamic1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_Dynamic1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

