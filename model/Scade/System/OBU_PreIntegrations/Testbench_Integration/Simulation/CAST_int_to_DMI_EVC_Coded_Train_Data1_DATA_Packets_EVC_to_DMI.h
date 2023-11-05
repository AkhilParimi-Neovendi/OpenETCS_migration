/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_loadingGauge_DATA_Variables.h"
#include "CAST_int_to_DMI_airtightSystem_DATA_Variables.h"
#include "CAST_int_to_DMI_vMax_id_DATA_Variables.h"
#include "CAST_int_to_DMI_brakeModel_id_DATA_Variables.h"
#include "CAST_int_to_DMI_train_length_DATA_Variables.h"
#include "CAST_int_to_DMI_train_id_DATA_Variables.h"
#include "CAST_Int_to_M_AXLELOADCAT_TM_conversions.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_evc_coded_train_data_ct/ */ dmi_evc_coded_train_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L12=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_int_to_DMI_train_id_DATA_Variables /* _L13=(DATA::Variables::CAST_int_to_DMI_train_id#1)/ */ Context_CAST_int_to_DMI_train_id_1;
  outC_CAST_int_to_DMI_train_length_DATA_Variables /* _L14=(DATA::Variables::CAST_int_to_DMI_train_length#1)/ */ Context_CAST_int_to_DMI_train_length_1;
  outC_CAST_int_to_DMI_brakeModel_id_DATA_Variables /* _L15=(DATA::Variables::CAST_int_to_DMI_brakeModel_id#1)/ */ Context_CAST_int_to_DMI_brakeModel_id_1;
  outC_CAST_int_to_DMI_vMax_id_DATA_Variables /* _L16=(DATA::Variables::CAST_int_to_DMI_vMax_id#1)/ */ Context_CAST_int_to_DMI_vMax_id_1;
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions /* _L17=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */ Context_CAST_Int_to_M_AXLELOADCAT_1;
  outC_CAST_int_to_DMI_airtightSystem_DATA_Variables /* _L18=(DATA::Variables::CAST_int_to_DMI_airtightSystem#1)/ */ Context_CAST_int_to_DMI_airtightSystem_1;
  outC_CAST_int_to_DMI_loadingGauge_DATA_Variables /* _L19=(DATA::Variables::CAST_int_to_DMI_loadingGauge#1)/ */ Context_CAST_int_to_DMI_loadingGauge_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  DMI_train_id_T_DMI_Types_Pkg /* _L13/ */ _L13;
  DMI_train_length_T_DMI_Types_Pkg /* _L14/ */ _L14;
  DMI_brakeModel_id_T_DMI_Types_Pkg /* _L15/ */ _L15;
  DMI_vMax_id_T_DMI_Types_Pkg /* _L16/ */ _L16;
  M_AXLELOADCAT /* _L17/ */ _L17;
  DMI_airtightSystem_T_DMI_Types_Pkg /* _L18/ */ _L18;
  DMI_loadingGauge_T_DMI_Types_Pkg /* _L19/ */ _L19;
  DMI_EVC_Coded_Train_Data_int_array_T_DATA /* _L22/ */ _L22;
} outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Coded_Train_Data1/ */
extern void CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_coded_train_data_int/ */
  DMI_EVC_Coded_Train_Data_int_array_T_DATA *dmi_evc_coded_train_data_int,
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_EVC_Coded_Train_Data1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_EVC_Coded_Train_Data1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_EVC_Coded_Train_Data1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

