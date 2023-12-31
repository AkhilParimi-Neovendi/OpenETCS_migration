/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_LevelList_to_int_DATA_Variables_H_
#define _CAST_DMI_LevelList_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_DMI_level_to_int_DATA_Variables.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_LevelList_int_array_T_DATA /* dmi_LevelList_int/ */ dmi_LevelList_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_level_to_int_DATA_Variables /* _L6=(DATA::Variables::CAST_DMI_level_to_int#1)/ */ Context_CAST_DMI_level_to_int_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L3/ */ _L3;
  DMI_level_array_T_DMI_Types_Pkg /* _L2/ */ _L2;
  array_int32_65 /* _L4/ */ _L4;
  DMI_LevelList_T_DMI_Types_Pkg /* _L5/ */ _L5;
  array_int32_32 /* _L6/ */ _L6;
  P044_other_data_TM_TrainToTrack /* _L7/ */ _L7;
  array_int32_32 /* _L8/ */ _L8;
} outC_CAST_DMI_LevelList_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_LevelList_to_int/ */
extern void CAST_DMI_LevelList_to_int_DATA_Variables(
  /* dmi_LevelList/ */
  DMI_LevelList_T_DMI_Types_Pkg *dmi_LevelList,
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_LevelList_to_int_reset_DATA_Variables(
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_LevelList_to_int_init_DATA_Variables(
  outC_CAST_DMI_LevelList_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_LevelList_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_LevelList_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

