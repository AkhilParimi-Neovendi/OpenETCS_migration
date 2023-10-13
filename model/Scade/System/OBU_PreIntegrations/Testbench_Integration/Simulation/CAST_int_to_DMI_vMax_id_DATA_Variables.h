/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_vMax_id_DATA_Variables_H_
#define _CAST_int_to_DMI_vMax_id_DATA_Variables_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_vMax_id_T_DMI_Types_Pkg /* dmi_vmax_id_ct/ */ dmi_vmax_id_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L57/ */ _L57;
  kcg_int64 /* _L56/ */ _L56;
  kcg_int64 /* _L55/ */ _L55;
  kcg_int64 /* _L54/ */ _L54;
  kcg_int64 /* _L53/ */ _L53;
  kcg_int64 /* _L52/ */ _L52;
  DMI_vMax_id_T_DMI_Types_Pkg /* _L51/ */ _L51;
  kcg_int64 /* _L50/ */ _L50;
  kcg_int64 /* _L49/ */ _L49;
  kcg_int64 /* _L48/ */ _L48;
  kcg_int64 /* _L46/ */ _L46;
  kcg_int64 /* _L44/ */ _L44;
  DMI_vMax_id_INT_T_DATA /* _L58/ */ _L58;
} outC_CAST_int_to_DMI_vMax_id_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_vMax_id/ */
extern void CAST_int_to_DMI_vMax_id_DATA_Variables(
  /* dmi_vmax_id_int/ */
  DMI_vMax_id_INT_T_DATA dmi_vmax_id_int,
  outC_CAST_int_to_DMI_vMax_id_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_vMax_id_reset_DATA_Variables(
  outC_CAST_int_to_DMI_vMax_id_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_vMax_id_init_DATA_Variables(
  outC_CAST_int_to_DMI_vMax_id_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_vMax_id_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_vMax_id_DATA_Variables.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

