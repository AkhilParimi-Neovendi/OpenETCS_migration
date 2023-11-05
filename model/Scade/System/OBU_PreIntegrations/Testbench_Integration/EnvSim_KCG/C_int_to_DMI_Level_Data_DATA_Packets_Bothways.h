/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_
#define _C_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* dmi_level_data_ct/ */ dmi_level_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L9=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_int_to_DMI_level_DATA_Variables /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */ Context_CAST_int_to_DMI_level_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L5/ */ _L5;
  DMI_Level_Data_int_array_T_DATA /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  DMI_level_T_DMI_Types_Pkg /* _L12/ */ _L12;
} outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_int_to_DMI_Level_Data/ */
extern void C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* dmi_level_data_int/ */
  DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

