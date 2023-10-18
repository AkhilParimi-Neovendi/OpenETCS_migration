/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_Available_Menu_to_int_DATA_Variables_H_
#define _CAST_DMI_Available_Menu_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "BoolVect2Int64_digital_30.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Available_Menu_INT_T_DATA /* dmi_available_menu_int/ */ dmi_available_menu_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BoolVect2Int64_digital_30 /* _L37=(digital::BoolVect2Int64#1)/ */ Context_BoolVect2Int64_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Available_Menu_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  array_bool_30 /* _L33/ */ _L33;
  kcg_int64 /* _L37/ */ _L37;
} outC_CAST_DMI_Available_Menu_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_Available_Menu_to_int/ */
extern void CAST_DMI_Available_Menu_to_int_DATA_Variables(
  /* dmi_available_menu_ct/ */
  DMI_Available_Menu_T_DMI_Types_Pkg *dmi_available_menu_ct,
  outC_CAST_DMI_Available_Menu_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_Available_Menu_to_int_reset_DATA_Variables(
  outC_CAST_DMI_Available_Menu_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_Available_Menu_to_int_init_DATA_Variables(
  outC_CAST_DMI_Available_Menu_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_Available_Menu_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Available_Menu_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

