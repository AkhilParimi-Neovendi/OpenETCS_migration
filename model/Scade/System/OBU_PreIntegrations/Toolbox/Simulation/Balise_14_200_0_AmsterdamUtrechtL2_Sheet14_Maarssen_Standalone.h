/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
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
  outC_Packets_BG14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Packets_BG14_200#1)/ */ Context_Packets_BG14_200_1;
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
} outC_Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Balise_14_200_0/ */
extern void Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* B_data_in/ */
  B_data_internal_T_InfraLib *B_data_in,
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* PIG_nom/ */
  kcg_int64 PIG_nom,
  outC_Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_14_200_0_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_14_200_0_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_14_200_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

