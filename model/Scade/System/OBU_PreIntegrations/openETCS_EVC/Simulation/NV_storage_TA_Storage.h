/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _NV_storage_TA_Storage_H_
#define _NV_storage_TA_Storage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* P3_received/ */ P3_received;
  P003V1_OBU_T_TM_baseline2 /* Packet3_out/ */ Packet3_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_T_TM_baseline2 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
} outC_NV_storage_TA_Storage;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Storage::NV_storage/ */
extern void NV_storage_TA_Storage(
  /* Packet3_in/ */
  P003V1_OBU_T_TM_baseline2 *Packet3_in,
  outC_NV_storage_TA_Storage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NV_storage_reset_TA_Storage(outC_NV_storage_TA_Storage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NV_storage_init_TA_Storage(outC_NV_storage_TA_Storage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NV_storage_TA_Storage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NV_storage_TA_Storage.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

