/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_DMI_Train_Running_Numbe_DATA_Packets_Bothways_H_
#define _C_DMI_Train_Running_Numbe_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_NID_OPERATIONAL_to_int_TM_conversions.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _14_DMI_Train_Running_Number_int_array_T_DATA /* dmi_train_running_number_int/ */ dmi_train_running_number_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_OPERATIONAL_to_int_TM_conversions /* _L6=(TM_conversions::CAST_NID_OPERATIONAL_to_int#1)/ */ Context_CAST_NID_OPERATIONAL_to_int_1;
  outC_Bool_to_Int_Utilities /* _L17=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_3 /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  NID_OPERATIONAL /* _L3/ */ _L3;
  kcg_int32 /* _L6/ */ _L6;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L13/ */ _L13;
  kcg_int32 /* _L17/ */ _L17;
} outC_C_DMI_Train_Running_Numbe_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_DMI_Train_Running_Number_to_int/ */
extern void C_DMI_Train_Running_Numbe_DATA_Packets_Bothways(
  /* dmi_train_running_number_ct/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_train_running_number_ct,
  outC_C_DMI_Train_Running_Numbe_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Train_Running_Numbe_reset_DATA_Packets_Bothways(
  outC_C_DMI_Train_Running_Numbe_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Train_Running_Numbe_init_DATA_Packets_Bothways(
  outC_C_DMI_Train_Running_Numbe_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Train_Running_Numbe_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Train_Running_Numbe_DATA_Packets_Bothways.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

