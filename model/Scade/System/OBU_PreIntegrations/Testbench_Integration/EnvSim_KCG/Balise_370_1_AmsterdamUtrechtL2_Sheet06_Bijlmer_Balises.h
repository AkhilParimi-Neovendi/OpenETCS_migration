/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_
#define _Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_

#include "kcg_types.h"
#include "Packets_BG370_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"
#include "Balise_Localisation_InfraLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* B_data_out/ */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Packets_BG370_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises /* _L4=(AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG370#1)/ */ Context_Packets_BG370_1;
  outC_Balise_Localisation_InfraLib /* _L21=(InfraLib::Balise_Localisation#1)/ */ Context_Balise_Localisation_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  B_data_internal_T_InfraLib /* _L4/ */ _L4;
  B_data_internal_T_InfraLib /* _L5/ */ _L5;
  B_data_internal_T_InfraLib /* _L15/ */ _L15;
  B_data_internal_T_InfraLib /* _L17/ */ _L17;
  BaliseTelegramHeader_int_T_TM /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  BaliseTelegramHeader_int_T_TM /* _L23/ */ _L23;
} outC_Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_370_1/ */
extern void Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* B_data_in/ */
  B_data_internal_T_InfraLib *B_data_in,
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* PIG_nom/ */
  kcg_int64 PIG_nom,
  outC_Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_370_1_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  outC_Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_370_1_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  outC_Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_370_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

