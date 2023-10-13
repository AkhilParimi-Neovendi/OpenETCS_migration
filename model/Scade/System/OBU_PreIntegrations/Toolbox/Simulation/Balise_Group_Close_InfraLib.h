/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balise_Group_Close_InfraLib_H_
#define _Balise_Group_Close_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Error_out/ */ Error_out;
  CompressedBaliseMessage_TM /* BG_message_out/ */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* _L2/ */ _L2;
  CompressedBaliseMessage_TM /* _L20/ */ _L20;
  B_data_internal_T_InfraLib /* _L21/ */ _L21;
  BaliseTelegramHeader_int_T_TM /* _L22/ */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* _L23/ */ _L23;
  CompressedBaliseMessage_TM /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
} outC_Balise_Group_Close_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Group_Close/ */
extern void Balise_Group_Close_InfraLib(
  /* BG_internal_in/ */
  B_data_internal_T_InfraLib *BG_internal_in,
  /* BG_message_in/ */
  CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Group_Close_reset_InfraLib(
  outC_Balise_Group_Close_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Group_Close_init_InfraLib(
  outC_Balise_Group_Close_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balise_Group_Close_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_Close_InfraLib.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

