/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI_H_
#define _Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_menu_request_ct/ */ dmi_menu_request_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request1#1)/ */ Context_CAST_int_to_DMI_Menu_Request1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Menu_Request_int_array_T_DATA /* _L10/ */ _L10;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  kcg_int64 /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L15/ */ _L15;
} outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request/ */
extern void Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
  /* dmi_menu_request_int/ */
  DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int,
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Menu_Request_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Menu_Request_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

