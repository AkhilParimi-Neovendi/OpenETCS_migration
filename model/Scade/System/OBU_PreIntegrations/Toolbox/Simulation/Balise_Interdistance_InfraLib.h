/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balise_Interdistance_InfraLib_H_
#define _Balise_Interdistance_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* distance_BB/ */ distance_BB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/A_Output/ */ A_Output_Abs_1_int32;
  kcg_int32 /* @1/A_Input/ */ A_Input_Abs_1_int32;
  kcg_int32 /* @1/_L8/ */ _L8_Abs_1_int32;
  kcg_int32 /* @1/_L5/ */ _L5_Abs_1_int32;
  kcg_int32 /* @1/_L3/ */ _L3_Abs_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Abs_1_int32;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int32;
  kcg_float32 /* _L3/ */ _L3;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
} outC_Balise_Interdistance_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Interdistance/ */
extern void Balise_Interdistance_InfraLib(
  /* pig0/ */
  kcg_int32 pig0,
  /* n_pig/ */
  kcg_int32 n_pig,
  outC_Balise_Interdistance_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Interdistance_reset_InfraLib(
  outC_Balise_Interdistance_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Interdistance_init_InfraLib(
  outC_Balise_Interdistance_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: InfraLib::Balise_Interdistance/
  @1: (math::Abs#1)
*/

#endif /* _Balise_Interdistance_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Interdistance_InfraLib.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

