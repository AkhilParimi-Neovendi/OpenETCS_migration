/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Balise_Group_Init_InfraLib_H_
#define _Balise_Group_Init_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* BG_internal_out/ */ BG_internal_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseGroupData_TM /* _L2/ */ _L2;
  kcg_int64 /* _L14/ */ _L14;
  B_data_internal_T_InfraLib /* _L26/ */ _L26;
  BaliseTelegramHeader_int_T_TM /* _L27/ */ _L27;
  CompressedPackets_T_Common_Types_Pkg /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
  kcg_float64 /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
} outC_Balise_Group_Init_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Group_Init/ */
extern void Balise_Group_Init_InfraLib(
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Engineering_Data/ */
  BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Group_Init_reset_InfraLib(
  outC_Balise_Group_Init_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Group_Init_init_InfraLib(
  outC_Balise_Group_Init_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balise_Group_Init_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_Init_InfraLib.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

