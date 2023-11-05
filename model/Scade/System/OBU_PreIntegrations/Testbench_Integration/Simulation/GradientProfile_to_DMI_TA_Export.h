/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _GradientProfile_to_DMI_TA_Export_H_
#define _GradientProfile_to_DMI_TA_Export_H_

#include "kcg_types.h"
#include "GradientProfile_to_DMI_loop_TA_Export.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_for_DMI_t_TrackAtlasTypes /* Gradient_Profile_for_DMI_out/ */ Gradient_Profile_for_DMI_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GradientProfile_to_DMI_loop_TA_Export /* _L2=(TA_Export::GradientProfile_to_DMI_loop#1)/ */ Context_GradientProfile_to_DMI_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L4/ */ _L4;
} outC_GradientProfile_to_DMI_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::GradientProfile_to_DMI/ */
extern void GradientProfile_to_DMI_TA_Export(
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* Gradient_Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  outC_GradientProfile_to_DMI_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GradientProfile_to_DMI_reset_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GradientProfile_to_DMI_init_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GradientProfile_to_DMI_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GradientProfile_to_DMI_TA_Export.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

