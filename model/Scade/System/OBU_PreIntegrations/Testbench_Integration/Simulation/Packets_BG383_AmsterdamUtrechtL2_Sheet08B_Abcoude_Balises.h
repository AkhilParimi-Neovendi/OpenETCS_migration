/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises_H_
#define _Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises_H_

#include "kcg_types.h"
#include "Send_P255_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* Balise_data_out/ */ Balise_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_P255_MessageLibBaseline2 /* _L11=(MessageLibBaseline2::Send_P255#1)/ */ Context_Send_P255_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* B_data_in/ */ B_data_in;
  CompressedPackets_T_Common_Types_Pkg /* B_data_out/ */ B_data_out;
  CompressedPackets_T_Common_Types_Pkg /* _L11/ */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* _L22/ */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* _L25/ */ _L25;
  B_data_internal_T_InfraLib /* _L26/ */ _L26;
  BaliseTelegramHeader_int_T_TM /* _L28/ */ _L28;
  B_data_internal_T_InfraLib /* _L29/ */ _L29;
  CompressedPackets_T_Common_Types_Pkg /* _L30/ */ _L30;
  B_data_internal_T_InfraLib /* _L31/ */ _L31;
  B_data_internal_T_InfraLib /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
} outC_Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Packets_BG383/ */
extern void Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Packets_BG383_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Packets_BG383_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Packets_BG383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

