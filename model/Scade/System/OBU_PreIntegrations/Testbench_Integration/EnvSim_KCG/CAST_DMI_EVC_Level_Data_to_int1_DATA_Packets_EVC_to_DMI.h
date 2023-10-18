/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_DMI_LevelList_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_Level_Data_int_array_T_DATA /* dmi_evc_level_data_int/ */ dmi_evc_level_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_LevelList_to_int_DATA_Variables /* _L7=(DATA::Variables::CAST_DMI_LevelList_to_int#1)/ */ Context_CAST_DMI_LevelList_to_int_1;
  outC_Bool_to_Int_Utilities /* _L6=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_EVC_Level_Data_int_array_T_DATA /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  DMI_LevelList_T_DMI_Types_Pkg /* _L3/ */ _L3;
  kcg_int64 /* _L6/ */ _L6;
  DMI_LevelList_int_array_T_DATA /* _L7/ */ _L7;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L8/ */ _L8;
  array_int64_2 /* _L9/ */ _L9;
} outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int1/ */
extern void CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_level_data_ct/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct,
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_EVC_Level_Data_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_EVC_Level_Data_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_EVC_Level_Data_to_int1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

