/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI_H_
#define _CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_DMI_loadingGauge_to_int_DATA_Variables.h"
#include "CAST_DMI_airtightSystem_t_DATA_Variables.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_conversions.h"
#include "CAST_DMI_vMax_id_to_int_DATA_Variables.h"
#include "CAST_DMI_brakeModel_id_to_int_DATA_Variables.h"
#include "CAST_DMI_train_length_to_int_DATA_Variables.h"
#include "CAST_DMI_train_id_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _11_DMI_EVC_Coded_Train_Data_int_array_T_DATA /* dmi_evc_coded_train_data_int/ */ dmi_evc_coded_train_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_loadingGauge_to_int_DATA_Variables /* _L19=(DATA::Variables::CAST_DMI_loadingGauge_to_int#1)/ */ Context_CAST_DMI_loadingGauge_to_int_1;
  outC_CAST_DMI_airtightSystem_t_DATA_Variables /* _L18=(DATA::Variables::CAST_DMI_airtightSystem_to_int#1)/ */ Context_CAST_DMI_airtightSystem_to_int_1;
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions /* _L17=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */ Context_CAST_M_AXLELOADCAT_to_int_1;
  outC_CAST_DMI_vMax_id_to_int_DATA_Variables /* _L16=(DATA::Variables::CAST_DMI_vMax_id_to_int#1)/ */ Context_CAST_DMI_vMax_id_to_int_1;
  outC_CAST_DMI_brakeModel_id_to_int_DATA_Variables /* _L15=(DATA::Variables::CAST_DMI_brakeModel_id_to_int#1)/ */ Context_CAST_DMI_brakeModel_id_to_int_1;
  outC_CAST_DMI_train_length_to_int_DATA_Variables /* _L14=(DATA::Variables::CAST_DMI_train_length_to_int#1)/ */ Context_CAST_DMI_train_length_to_int_1;
  outC_CAST_DMI_train_id_to_int_DATA_Variables /* _L13=(DATA::Variables::CAST_DMI_train_id_to_int#1)/ */ Context_CAST_DMI_train_id_to_int_1;
  outC_Bool_to_Int_Utilities /* _L12=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L10/ */ _L10;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  DMI_train_id_T_DMI_Types_Pkg /* _L8/ */ _L8;
  DMI_train_length_T_DMI_Types_Pkg /* _L7/ */ _L7;
  DMI_brakeModel_id_T_DMI_Types_Pkg /* _L6/ */ _L6;
  DMI_vMax_id_T_DMI_Types_Pkg /* _L5/ */ _L5;
  M_AXLELOADCAT /* _L4/ */ _L4;
  DMI_airtightSystem_T_DMI_Types_Pkg /* _L3/ */ _L3;
  DMI_loadingGauge_T_DMI_Types_Pkg /* _L2/ */ _L2;
  array_int32_9 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  DMI_train_id_INT_T_DATA /* _L13/ */ _L13;
  DMI_train_length_INT_T_DATA /* _L14/ */ _L14;
  DMI_brakeModel_id_INT_T_DATA /* _L15/ */ _L15;
  DMI_vMax_id_INT_T_DATA /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  DMI_airtightSystem_INT_T_DATA /* _L18/ */ _L18;
  DMI_loadingGauge_INT_T_DATA /* _L19/ */ _L19;
} outC_CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Coded_Train_Data_to_int1/ */
extern void CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_ct/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data_ct,
  outC_CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_EVC_Coded_Train__reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_EVC_Coded_Train__init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_EVC_Coded_Train__DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

