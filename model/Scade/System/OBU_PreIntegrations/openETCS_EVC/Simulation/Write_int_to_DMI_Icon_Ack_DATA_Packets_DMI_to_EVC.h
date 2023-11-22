/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_icon_ack_ct/ */ dmi_icon_ack_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC /* _L14=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Icon_Ack#1)/ */ Context_C_int_to_DMI_Icon_Ack_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Icon_Ack_int_array_T_DATA /* _L12/ */ _L12;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L14/ */ _L14;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L19/ */ _L19;
} outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack/ */
extern void Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
  /* dmi_icon_ack_int/ */
  DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Icon_Ack_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Icon_Ack_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

