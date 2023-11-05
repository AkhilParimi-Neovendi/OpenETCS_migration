/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_
#define _Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_int_array_T_DATA /* dmi_identifier_int/ */ dmi_identifier_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC /* _L37=(DATA::Packets::DMI_to_EVC::C_DMI_identifier_to_int#1)/ */ Context_C_DMI_identifier_to_int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L25/ */ _L25;
  DMI_Identifier_int_array_T_DATA /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  DMI_Identifier_int_array_T_DATA /* _L39/ */ _L39;
} outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int/ */
extern void Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_identifier_ct/ */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

