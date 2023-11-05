/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Balise_Localisation_InfraLib_H_
#define _Balise_Localisation_InfraLib_H_

#include "kcg_types.h"
#include "TOOLS_convert_engineering_location_TM_conversions.h"
#include "Balise_Interdistance_InfraLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* PIG_0_out/ */ PIG_0_out;
  kcg_bool /* TrainPass/ */ TrainPass;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Interdistance_InfraLib /* _L75=(InfraLib::Balise_Interdistance#1)/ */ Context_Balise_Interdistance_1;
  outC_TOOLS_convert_engineering_location_TM_conversions /* _L77=(TM_conversions::TOOLS_convert_engineering_location#1)/ */ Context_TOOLS_convert_engineering_location_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* @1/Mi_Output/ */ Mi_Output_Min_1_float32;
  kcg_float32 /* @1/I2/ */ I2_Min_1_float32;
  kcg_float32 /* @1/I1/ */ I1_Min_1_float32;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_float32;
  kcg_float32 /* @1/_L24/ */ _L24_Min_1_float32;
  kcg_float32 /* @1/_L22/ */ _L22_Min_1_float32;
  kcg_float32 /* @1/_L21/ */ _L21_Min_1_float32;
  kcg_int32 /* _L15/ */ _L15;
  BaliseTelegramHeader_int_T_TM /* _L16/ */ _L16;
  kcg_int32 /* _L47/ */ _L47;
  kcg_int32 /* _L48/ */ _L48;
  kcg_bool /* _L50/ */ _L50;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L52/ */ _L52;
  B_data_internal_T_InfraLib /* _L65/ */ _L65;
  kcg_int32 /* _L66/ */ _L66;
  kcg_float32 /* _L73/ */ _L73;
  B_data_internal_T_InfraLib /* _L71/ */ _L71;
  kcg_int32 /* _L68/ */ _L68;
  kcg_float32 /* _L75/ */ _L75;
  kcg_float32 /* _L76/ */ _L76;
  kcg_float32 /* _L77/ */ _L77;
  kcg_float32 /* _L82/ */ _L82;
  kcg_float32 /* _L90/ */ _L90;
  kcg_float32 /* _L91/ */ _L91;
  kcg_float32 /* _L92/ */ _L92;
  kcg_float32 /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
} outC_Balise_Localisation_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Localisation/ */
extern void Balise_Localisation_InfraLib(
  /* B_data_in/ */
  B_data_internal_T_InfraLib *B_data_in,
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* PIG_nom/ */
  kcg_int32 PIG_nom,
  outC_Balise_Localisation_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Localisation_reset_InfraLib(
  outC_Balise_Localisation_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Localisation_init_InfraLib(
  outC_Balise_Localisation_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: InfraLib::Balise_Localisation/
  @1: (math::Min#1)
*/

#endif /* _Balise_Localisation_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Localisation_InfraLib.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

