/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Send_P003V1_MessageLibBaseline2.h"
#include "Send_P046_MessageLibBaseline2.h"
#include "Send_P042_MessageLibBaseline2.h"
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
  outC_Send_P003V1_MessageLibBaseline2 /* _L38=(MessageLibBaseline2::Send_P003V1#1)/ */ Context_Send_P003V1_1;
  outC_Send_P046_MessageLibBaseline2 /* _L37=(MessageLibBaseline2::Send_P046#2)/ */ Context_Send_P046_2;
  outC_Send_P046_MessageLibBaseline2 /* _L36=(MessageLibBaseline2::Send_P046#1)/ */ Context_Send_P046_1;
  outC_Send_P042_MessageLibBaseline2 /* _L35=(MessageLibBaseline2::Send_P042#2)/ */ Context_Send_P042_2;
  outC_Send_P042_MessageLibBaseline2 /* _L34=(MessageLibBaseline2::Send_P042#1)/ */ Context_Send_P042_1;
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
  CompressedPackets_T_Common_Types_Pkg /* _L34/ */ _L34;
  CompressedPackets_T_Common_Types_Pkg /* _L35/ */ _L35;
  CompressedPackets_T_Common_Types_Pkg /* _L36/ */ _L36;
  CompressedPackets_T_Common_Types_Pkg /* _L37/ */ _L37;
  CompressedPackets_T_Common_Types_Pkg /* _L38/ */ _L38;
} outC_Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200/ */
extern void Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Packets_BG14_200_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Packets_BG14_200_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

