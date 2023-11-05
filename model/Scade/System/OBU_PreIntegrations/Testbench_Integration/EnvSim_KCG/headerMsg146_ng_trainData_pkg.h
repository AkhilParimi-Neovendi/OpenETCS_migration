/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _headerMsg146_ng_trainData_pkg_H_
#define _headerMsg146_ng_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_146_T_TM_radio_messages /* header/ */ header;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_ENGINE /* _L11/ */ _L11;
  T_TRAIN /* _L16/ */ _L16;
  T_TRAIN /* _L18/ */ _L18;
  M_146_T_TM_radio_messages /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  NID_MESSAGE /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
} outC_headerMsg146_ng_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::headerMsg146_ng/ */
extern void headerMsg146_ng_trainData_pkg(
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* t_train/ */
  T_TRAIN t_train,
  /* RBC_timeStamp/ */
  T_TRAIN RBC_timeStamp,
  outC_headerMsg146_ng_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void headerMsg146_ng_reset_trainData_pkg(
  outC_headerMsg146_ng_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void headerMsg146_ng_init_trainData_pkg(
  outC_headerMsg146_ng_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _headerMsg146_ng_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** headerMsg146_ng_trainData_pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

