/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _C_DMI_Train_Data_to_int_DATA_Packets_Bothways_H_
#define _C_DMI_Train_Data_to_int_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_M_LOADINGGAUGE_to_int_TM_conversions.h"
#include "CAST_M_AIRTIGHT_to_int_TM_conversions.h"
#include "CAST_NC_TRAIN_to_int_TM_conversions.h"
#include "CAST_M_AXLELOADCAT_to_int_TM_conversions.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Data_int_array_T_DATA /* dmi_train_data_int/ */ dmi_train_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_M_LOADINGGAUGE_to_int_TM_conversions /* _L16=(TM_conversions::CAST_M_LOADINGGAUGE_to_int#1)/ */ Context_CAST_M_LOADINGGAUGE_to_int_1;
  outC_CAST_M_AIRTIGHT_to_int_TM_conversions /* _L15=(TM_conversions::CAST_M_AIRTIGHT_to_int#1)/ */ Context_CAST_M_AIRTIGHT_to_int_1;
  outC_CAST_M_AXLELOADCAT_to_int_TM_conversions /* _L14=(TM_conversions::CAST_M_AXLELOADCAT_to_int#1)/ */ Context_CAST_M_AXLELOADCAT_to_int_1;
  outC_CAST_NC_TRAIN_to_int_TM_conversions /* _L13=(TM_conversions::CAST_NC_TRAIN_to_int#1)/ */ Context_CAST_NC_TRAIN_to_int_1;
  outC_Bool_to_Int_Utilities /* _L36=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_9 /* _L2/ */ _L2;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L22/ */ _L22;
  M_LOADINGGAUGE /* _L24/ */ _L24;
  M_AIRTIGHT /* _L25/ */ _L25;
  M_AXLELOADCAT /* _L26/ */ _L26;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  M_BRAKEPERCT_DMI_Types_Pkg /* _L28/ */ _L28;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  NC_TRAIN /* _L30/ */ _L30;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_int64 /* _L36/ */ _L36;
} outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_DMI_Train_Data_to_int/ */
extern void C_DMI_Train_Data_to_int_DATA_Packets_Bothways(
  /* dmi_train_data_ct/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_train_data_ct,
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Train_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Train_Data_to_int_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Train_Data_to_int_DATA_Packets_Bothways.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

