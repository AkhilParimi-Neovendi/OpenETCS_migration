/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */
#ifndef _ODO_doLocInacc_Toolbox_Functions_H_
#define _ODO_doLocInacc_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* locInAcc/ */ locInAcc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
} outC_ODO_doLocInacc_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_doLocInacc/ */
extern void ODO_doLocInacc_Toolbox_Functions(
  /* d_min/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* d_Max/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_doLocInacc_init_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ODO_doLocInacc_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ODO_doLocInacc_Toolbox_Functions.h
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

