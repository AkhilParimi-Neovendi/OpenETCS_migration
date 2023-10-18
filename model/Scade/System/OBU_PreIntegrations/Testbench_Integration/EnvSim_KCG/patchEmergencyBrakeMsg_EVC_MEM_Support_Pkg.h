/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg_H_
#define _patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* outToML/ */ outToML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* _L1/ */ _L1;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L5/ */ _L5;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L8/ */ _L8;
} outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg/ */
extern void patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg(
  /* inFromTA/ */
  DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void patchEmergencyBrakeMsg_reset_EVC_MEM_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void patchEmergencyBrakeMsg_init_EVC_MEM_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

