/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_driver_request_ct/ */ dmi_driver_request_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC /* _L13=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest#1)/ */ Context_C_int_to_DMI_Driver_Reqest_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Driver_Request_int_array_T_DATA /* _L1/ */ _L1;
  kcg_int64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L13/ */ _L13;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L14/ */ _L14;
} outC_Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest/ */
extern void Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* dmi_driver_request_int/ */
  DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  outC_Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Driver_Reqest_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Driver_Reqest_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

