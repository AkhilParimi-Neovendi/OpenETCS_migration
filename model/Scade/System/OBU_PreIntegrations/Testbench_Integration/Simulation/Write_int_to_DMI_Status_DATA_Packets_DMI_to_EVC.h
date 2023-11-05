/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* dim_status_ct/ */ dim_status_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC /* _L22=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status#1)/ */ Context_C_int_to_DMI_Status_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Status_int_array_T_DATA /* _L2/ */ _L2;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L22/ */ _L22;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* _L23/ */ _L23;
} outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status/ */
extern void Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* dmi_status_int/ */
  DMI_Status_int_array_T_DATA *dmi_status_int,
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

