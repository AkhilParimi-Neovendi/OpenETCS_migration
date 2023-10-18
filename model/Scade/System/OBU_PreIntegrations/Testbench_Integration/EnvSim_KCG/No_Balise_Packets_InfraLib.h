/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _No_Balise_Packets_InfraLib_H_
#define _No_Balise_Packets_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* Balise_data_out/ */ Balise_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_InfraLib /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  BaliseTelegramHeader_int_T_TM /* _L32/ */ _L32;
  B_data_internal_T_InfraLib /* _L31/ */ _L31;
  B_data_internal_T_InfraLib /* _L30/ */ _L30;
} outC_No_Balise_Packets_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::No_Balise_Packets/ */
extern void No_Balise_Packets_InfraLib(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_No_Balise_Packets_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void No_Balise_Packets_reset_InfraLib(
  outC_No_Balise_Packets_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void No_Balise_Packets_init_InfraLib(
  outC_No_Balise_Packets_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _No_Balise_Packets_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** No_Balise_Packets_InfraLib.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

