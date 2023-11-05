/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_
#define _C_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_LOADINGGAUGE_TM_conversions.h"
#include "CAST_Int_to_M_AIRTIGHT_TM_conversions.h"
#include "CAST_Int_to_M_AXLELOADCAT_TM_conversions.h"
#include "CAST_Int_to_NC_TRAIN_TM_conversions.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* dmi_train_data_ct/ */ dmi_train_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NC_TRAIN_TM_conversions /* _L13=(TM_conversions::CAST_Int_to_NC_TRAIN#1)/ */ Context_CAST_Int_to_NC_TRAIN_1;
  outC_CAST_Int_to_M_AXLELOADCAT_TM_conversions /* _L14=(TM_conversions::CAST_Int_to_M_AXLELOADCAT#1)/ */ Context_CAST_Int_to_M_AXLELOADCAT_1;
  outC_CAST_Int_to_M_AIRTIGHT_TM_conversions /* _L15=(TM_conversions::CAST_Int_to_M_AIRTIGHT#1)/ */ Context_CAST_Int_to_M_AIRTIGHT_1;
  outC_CAST_Int_to_M_LOADINGGAUGE_TM_conversions /* _L16=(TM_conversions::CAST_Int_to_M_LOADINGGAUGE#1)/ */ Context_CAST_Int_to_M_LOADINGGAUGE_1;
  outC_Int_to_Bool_Utilities /* _L19=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  NC_TRAIN /* _L13/ */ _L13;
  M_AXLELOADCAT /* _L14/ */ _L14;
  M_AIRTIGHT /* _L15/ */ _L15;
  M_LOADINGGAUGE /* _L16/ */ _L16;
  DMI_Train_Data_int_array_T_DATA /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
} outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_int_to_DMI_Train_Data/ */
extern void C_int_to_DMI_Train_Data_DATA_Packets_Bothways(
  /* dmi_train_data_int/ */
  DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Train_Data_DATA_Packets_Bothways.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

