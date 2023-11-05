/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC_H_
#define _C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icon_Ack_int_array_T_DATA /* dmi_icon_ack_int/ */ dmi_icon_ack_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_3 /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L10/ */ _L10;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L17/ */ _L17;
  kcg_int32 /* _L25/ */ _L25;
} outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int/ */
extern void C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_icon_ack_ct/ */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Icon_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Icon_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

