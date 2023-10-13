/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _StoreRaw_NV_TA_Storage_H_
#define _StoreRaw_NV_TA_Storage_H_

#include "kcg_types.h"
#include "NV_storage_TA_Storage.h"
#include "Read_P003V1_TM_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* vald_NV/ */ vald_NV;
  kcg_bool /* new_NV/ */ new_NV;
  P003V1_OBU_T_TM_baseline2 /* NV_onboard_out/ */ NV_onboard_out;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L23/ */ _L23;
  P003V1_OBU_T_TM_baseline2 /* _L24/ */ _L24;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NV_storage_TA_Storage /* _L23=(TA_Storage::NV_storage#3)/ */ Context_NV_storage_3;
  outC_Read_P003V1_TM_baseline2 /* _L21=(TM_baseline2::Read_P003V1#3)/ */ Context_Read_P003V1_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L21/ */ _L21;
  P003V1_OBU_T_TM_baseline2 /* _L22/ */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* _L26/ */ _L26;
} outC_StoreRaw_NV_TA_Storage;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Storage::StoreRaw_NV/ */
extern void StoreRaw_NV_TA_Storage(
  /* mesaage_in/ */
  ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void StoreRaw_NV_init_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  P003V1_OBU_T_TM_baseline2 /* _L24/ */ Context__L24;
  kcg_bool /* _L23/ */ Context__L23;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_StoreRaw_NV_TA_Storage;

extern void kcg_save_SV_StoreRaw_NV_TA_Storage(
  SV_StoreRaw_NV_TA_Storage *SV,
  outC_StoreRaw_NV_TA_Storage *outC);
extern void kcg_load_SV_StoreRaw_NV_TA_Storage(
  outC_StoreRaw_NV_TA_Storage *outC,
  SV_StoreRaw_NV_TA_Storage *SV);



#endif /* _StoreRaw_NV_TA_Storage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** StoreRaw_NV_TA_Storage.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

