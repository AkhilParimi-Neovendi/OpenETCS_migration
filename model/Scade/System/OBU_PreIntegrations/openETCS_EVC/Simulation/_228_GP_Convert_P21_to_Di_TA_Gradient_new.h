/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef __228_GP_Convert_P21_to_Di_TA_Gradient_new_H_
#define __228_GP_Convert_P21_to_Di_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Convert_P21_to_Distanc_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GradientProfile/ */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Convert_P21_to_Distanc_TA_Gradient_new /* _L77=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop#1)/ */ Context_GP_Convert_P21_to_DistanceProfile_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* _L73/ */ _L73;
  P021_OBU_sectionlist_enum_T_TM /* _L71/ */ _L71;
  Q_SCALE /* _L65/ */ _L65;
  P021_OBU_T_TM /* _L63/ */ _L63;
  _123_array /* _L74/ */ _L74;
  _154_array /* _L76/ */ _L76;
  GradientProfile_t_TrackAtlasTypes /* _L77/ */ _L77;
  GradientProfile_t_TrackAtlasTypes /* _L83/ */ _L83;
} outC__228_GP_Convert_P21_to_Di_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Convert_P21_to_DistanceProfile/ */
extern void _228_GP_Convert_P21_to_Di_TA_Gradient_new(
  /* Packet21_in/ */
  P021_OBU_T_TM *Packet21_in,
  outC__228_GP_Convert_P21_to_Di_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _228_GP_Convert_P21_to_Di_reset_TA_Gradient_new(
  outC__228_GP_Convert_P21_to_Di_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _228_GP_Convert_P21_to_Di_init_TA_Gradient_new(
  outC__228_GP_Convert_P21_to_Di_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __228_GP_Convert_P21_to_Di_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _228_GP_Convert_P21_to_Di_TA_Gradient_new.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

