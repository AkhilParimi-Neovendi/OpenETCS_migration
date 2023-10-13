/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _mapMoRCtoRadio_CS_manage_DMI_Output_Pkg_H_
#define _mapMoRCtoRadio_CS_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* outBMI_CS/ */ outBMI_CS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L6/ */ _L6;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L8/ */ _L8;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L9/ */ _L9;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L12/ */ _L12;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L13/ */ _L13;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L15/ */ _L15;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L24/ */ _L24;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L25/ */ _L25;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* _L26/ */ _L26;
} outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS/ */
extern void mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapMoRCtoRadio_CS_reset_manage_DMI_Output_Pkg(
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapMoRCtoRadio_CS_init_manage_DMI_Output_Pkg(
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapMoRCtoRadio_CS_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

