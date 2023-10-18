/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI_H_
#define _Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Track_Description_int_array_T /* dmi_track_description_int/ */ dmi_track_description_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI /* _L13=(DATA::Packets::EVC_to_DMI::CAST_DMI_Track_Description_to_int#1)/ */ Context_CAST_DMI_Track_Description_to_int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  DMI_Track_Description_int_array_T /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  DMI_Track_Description_int_array_T /* _L13/ */ _L13;
} outC_Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int/ */
extern void Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_track_description_ct/ */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct,
  outC_Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_DMI_Track_Description_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_DMI_Track_Description_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

