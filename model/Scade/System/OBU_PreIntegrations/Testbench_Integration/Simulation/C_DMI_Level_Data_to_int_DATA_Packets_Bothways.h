/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _C_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_
#define _C_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_int_array_T_DATA /* dmi_level_data_int/ */ dmi_level_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_level_to_int_DATA_Variables /* _L11=(DATA::Variables::CAST_DMI_level_to_int#1)/ */ Context_CAST_DMI_level_to_int_1;
  outC_Bool_to_Int_Utilities /* _L19=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  DMI_level_T_DMI_Types_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L11/ */ _L11;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L14/ */ _L14;
  array_int64_4 /* _L15/ */ _L15;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
} outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_DMI_Level_Data_to_int/ */
extern void C_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* dmi_level_data_ct/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

