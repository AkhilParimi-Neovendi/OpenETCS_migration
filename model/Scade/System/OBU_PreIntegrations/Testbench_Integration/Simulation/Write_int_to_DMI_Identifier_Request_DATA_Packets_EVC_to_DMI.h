/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI_H_
#define _Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_id_ct/ */ dmi_id_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_Identifier_Request1_DATA_Packets_EVC_to_DMI /* _L35=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Identifier_Request1#1)/ */ Context_CAST_int_to_DMI_Identifier_Request1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_Request_int_array_T_DATA /* _L20/ */ _L20;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L35/ */ _L35;
  kcg_int32 /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  kcg_int32 /* _L36/ */ _L36;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L39/ */ _L39;
} outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request/ */
extern void Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
  /* dmi_id_int/ */
  DMI_Identifier_Request_int_array_T_DATA *dmi_id_int,
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Identifier_Request_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Identifier_Request_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

