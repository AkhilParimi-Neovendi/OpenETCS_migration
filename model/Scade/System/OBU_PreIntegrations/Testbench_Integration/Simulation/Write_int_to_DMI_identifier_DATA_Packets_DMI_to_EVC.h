/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_identifier_ct_out/ */ dmi_identifier_ct_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC /* _L277=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_identifier#1)/ */ Context_C_int_to_DMI_identifier_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_int_array_T_DATA /* _L1/ */ _L1;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L277/ */ _L277;
  kcg_int32 /* _L280/ */ _L280;
  kcg_int32 /* _L279/ */ _L279;
  kcg_bool /* _L278/ */ _L278;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L281/ */ _L281;
} outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier/ */
extern void Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_int_in/ */
  DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

