/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC_H_
#define _C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "CAST_DMI_Request_to_int_DATA_Variables.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Request_int_array_T_DATA /* dmi_driver_request_int/ */ dmi_driver_request_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_Request_to_int_DATA_Variables /* _L15=(DATA::Variables::CAST_DMI_Request_to_int#1)/ */ Context_CAST_DMI_Request_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  DMI_Request_T_DMI_Types_Pkg /* _L2/ */ _L2;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L13/ */ _L13;
  kcg_int32 /* _L15/ */ _L15;
  array_int32_3 /* _L16/ */ _L16;
  kcg_int32 /* _L21/ */ _L21;
} outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int/ */
extern void C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_driver_request_ct/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct,
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Driver_Reqest_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Driver_Reqest_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

