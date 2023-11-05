/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_
#define _Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* dmi_driver_identifier_ct/ */ dmi_driver_identifier_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways /* _L24=(DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier#1)/ */ Context_C_int_to_DMI_Driver_Identifier_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Driver_Identifier_int_array_T_DATA /* _L9/ */ _L9;
  kcg_int32 /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L24/ */ _L24;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L23/ */ _L23;
  kcg_int32 /* _L22/ */ _L22;
} outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier/ */
extern void Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* dmi_driver_identifier_int/ */
  DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

