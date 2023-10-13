/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_LevelList_DATA_Variables_H_
#define _CAST_int_to_DMI_LevelList_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_LevelList_T_DMI_Types_Pkg /* dmi_LevelList_ct/ */ dmi_LevelList_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_level_DATA_Variables /* _L12=(DATA::Variables::CAST_int_to_DMI_level#1)/ */ Context_CAST_int_to_DMI_level_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_LevelList_T_DMI_Types_Pkg /* _L4/ */ _L4;
  DMI_LevelList_int_array_T_DATA /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  DMI_level_array_T_DMI_Types_Pkg /* _L12/ */ _L12;
  array_int64_32 /* _L13/ */ _L13;
  array_int64_32 /* _L14/ */ _L14;
} outC_CAST_int_to_DMI_LevelList_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_LevelList/ */
extern void CAST_int_to_DMI_LevelList_DATA_Variables(
  /* dmi_LevelList_int/ */
  DMI_LevelList_int_array_T_DATA *dmi_LevelList_int,
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_LevelList_reset_DATA_Variables(
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_LevelList_init_DATA_Variables(
  outC_CAST_int_to_DMI_LevelList_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_LevelList_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_LevelList_DATA_Variables.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

