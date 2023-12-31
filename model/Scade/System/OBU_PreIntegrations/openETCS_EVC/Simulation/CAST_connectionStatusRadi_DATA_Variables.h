/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_connectionStatusRadi_DATA_Variables_H_
#define _CAST_connectionStatusRadi_DATA_Variables_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  connectionStatusRadioUnit_INT_T_DATA /* connectionStatusRadioUnit_int/ */ connectionStatusRadioUnit_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:_L1/ */ _L1_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:_L2/ */ _L2_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  kcg_bool /* _L1/ */ _L1;
} outC_CAST_connectionStatusRadi_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_connectionStatusRadioUnit_to_int/ */
extern void CAST_connectionStatusRadi_DATA_Variables(
  /* connectionStatusRadioUnit_ct/ */
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionStatusRadioUnit_ct,
  outC_CAST_connectionStatusRadi_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_connectionStatusRadi_reset_DATA_Variables(
  outC_CAST_connectionStatusRadi_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_connectionStatusRadi_init_DATA_Variables(
  outC_CAST_connectionStatusRadi_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_connectionStatusRadi_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_connectionStatusRadi_DATA_Variables.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

