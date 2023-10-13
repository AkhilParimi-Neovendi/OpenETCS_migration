/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_t_DMI_speedProfile_DATA_Variables.h"
#include "CAST_int_to_DMI_trackCondition_DATA_Variables.h"
#include "CAST_int_to_DMI_gradientProfile_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_track_description_ct/ */ dmi_track_description_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables /* _L20=(DATA::Variables::CAST_int_to_DMI_gradientProfile#1)/ */ Context_CAST_int_to_DMI_gradientProfile_1;
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables /* _L21=(DATA::Variables::CAST_int_to_DMI_trackCondition#1)/ */ Context_CAST_int_to_DMI_trackCondition_1;
  outC_Int_to_Bool_Utilities /* _L22=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables /* _L23=(DATA::Variables::CAST_int_t_DMI_speedProfile#1)/ */ Context_CAST_int_t_DMI_speedProfile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L12/ */ _L12;
  DMI_Track_Description_int_array_T /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  array_int64_129 /* _L17/ */ _L17;
  array_int64_129 /* _L18/ */ _L18;
  array_int64_65 /* _L19/ */ _L19;
  DMI_gradientProfile_T_DMI_Types_Pkg /* _L20/ */ _L20;
  DMI_trackCondition_T_DMI_Types_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  DMI_speedProfile_T_DMI_Types_Pkg /* _L23/ */ _L23;
} outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description/ */
extern void CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* dmi_track_description_int/ */
  DMI_Track_Description_int_array_T *dmi_track_description_int,
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_Track_Description_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_Track_Description_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

