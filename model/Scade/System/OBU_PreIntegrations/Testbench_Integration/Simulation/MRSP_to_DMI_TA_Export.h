/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _MRSP_to_DMI_TA_Export_H_
#define _MRSP_to_DMI_TA_Export_H_

#include "kcg_types.h"
#include "MRSP_limit_to_EOA_TA_Export.h"
#include "MRSP_reduction_TA_Export.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_Profile_t_TrackAtlasTypes /* MRSP_to_DMI/ */ MRSP_to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSP_limit_to_EOA_TA_Export /* _L669=(TA_Export::MRSP_limit_to_EOA#1)/ */ Context_MRSP_limit_to_EOA_1[110];
  outC_MRSP_reduction_TA_Export /* _L666=(TA_Export::MRSP_reduction#1)/ */ Context_MRSP_reduction_1[110];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_Profile_t_TrackAtlasTypes /* _L657/ */ _L657;
  MRSP_reduction_acc_TA_Export /* _L660/ */ _L660;
  _91_array /* _L659/ */ _L659;
  MRSP_Profile_t_TrackAtlasTypes /* _L658/ */ _L658;
  MRSP_reduction_acc_TA_Export /* _L665/ */ _L665;
  kcg_int32 /* _L666/ */ _L666;
  kcg_bool /* _L667/ */ _L667;
  kcg_int32 /* _L669/ */ _L669;
  kcg_bool /* _L670/ */ _L670;
  array_int32_110 /* _L676/ */ _L676;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L677/ */ _L677;
  MRSP_Profile_t_TrackAtlasTypes /* _L679/ */ _L679;
  _91_array /* _L680/ */ _L680;
} outC_MRSP_to_DMI_TA_Export;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Export::MRSP_to_DMI/ */
extern void MRSP_to_DMI_TA_Export(
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* MRSP_in/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  outC_MRSP_to_DMI_TA_Export *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MRSP_to_DMI_reset_TA_Export(outC_MRSP_to_DMI_TA_Export *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MRSP_to_DMI_init_TA_Export(outC_MRSP_to_DMI_TA_Export *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MRSP_to_DMI_TA_Export_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_to_DMI_TA_Export.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

