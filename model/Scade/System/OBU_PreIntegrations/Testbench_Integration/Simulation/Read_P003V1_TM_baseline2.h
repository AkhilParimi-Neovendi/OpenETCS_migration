/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Read_P003V1_TM_baseline2_H_
#define _Read_P003V1_TM_baseline2_H_

#include "kcg_types.h"
#include "C_P003V1_compr_onboard_TM_conversions_baseline2.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* received/ */ received;
  P003V1_OBU_T_TM_baseline2 /* P003V1_OBU_out/ */ P003V1_OBU_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 /* _L166=(TM_conversions_baseline2::C_P003V1_compr_onboard#1)/ */ Context_C_P003V1_compr_onboard_1;
  outC_RECV_ReadPackets_TM_lib_internal /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */ Context_RECV_ReadPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  P003V1_OBU_T_TM_baseline2 /* _L166/ */ _L166;
  MetadataElement_T_Common_Types_Pkg /* _L30/ */ _L30;
  CompressedPacketData_T_Common_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L167/ */ _L167;
} outC_Read_P003V1_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P003V1/ */
extern void Read_P003V1_TM_baseline2(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P003V1_TM_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P003V1_reset_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P003V1_init_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P003V1_TM_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P003V1_TM_baseline2.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

