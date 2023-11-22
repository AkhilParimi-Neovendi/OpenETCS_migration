/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Read_P046_TM_H_
#define _Read_P046_TM_H_

#include "kcg_types.h"
#include "C_P046_compr_onboard_TM_conversions.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* received/ */ received;
  P046_OBU_T_TM /* P046_OBU_out/ */ P046_OBU_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P046_compr_onboard_TM_conversions /* _L166=(TM_conversions::C_P046_compr_onboard#1)/ */ Context_C_P046_compr_onboard_1;
  outC_RECV_ReadPackets_TM_lib_internal /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */ Context_RECV_ReadPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* _L5/ */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  MetadataElement_T_Common_Types_Pkg /* _L30/ */ _L30;
  P046_OBU_T_TM /* _L166/ */ _L166;
  kcg_bool /* _L167/ */ _L167;
} outC_Read_P046_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::Read_P046/ */
extern void Read_P046_TM(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P046_TM *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P046_reset_TM(outC_Read_P046_TM *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P046_init_TM(outC_Read_P046_TM *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P046_TM_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P046_TM.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

