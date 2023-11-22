/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _copyTrackDescription_manage_DMI_Output_Pkg_H_
#define _copyTrackDescription_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "copyGradientElement_manage_DMI_Output_Pkg.h"
#include "copySpeedProfileElement_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* toDMI/ */ toDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_copyGradientElement_manage_DMI_Output_Pkg /* _L20=(manage_DMI_Output_Pkg::copyGradientElement#1)/ */ Context_copyGradientElement_1[32];
  outC_copySpeedProfileElement_manage_DMI_Output_Pkg /* _L8=(manage_DMI_Output_Pkg::copySpeedProfileElement#1)/ */ Context_copySpeedProfileElement_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForDMI_t_TrackAtlasTypes /* _L1/ */ _L1;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  MRSP_Profile_t_TrackAtlasTypes /* _L11/ */ _L11;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* _L13/ */ _L13;
  DMI_gradientProfileArray_T_DMI_Types_Pkg /* _L16/ */ _L16;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* _L15/ */ _L15;
  kcg_bool /* _L17/ */ _L17;
  DMI_gradientProfileArray_T_DMI_Types_Pkg /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  DMI_speedProfile_T_DMI_Types_Pkg /* _L22/ */ _L22;
  DMI_gradientProfile_T_DMI_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  _4_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg /* _L27/ */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L28/ */ _L28;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  DMI_trackCondition_T_DMI_Types_Pkg /* _L31/ */ _L31;
  DMI_speedProfileElement_T_DMI_Types_Pkg /* _L33/ */ _L33;
  DMI_gradientProfileElement_T_DMI_Types_Pkg /* _L34/ */ _L34;
} outC_copyTrackDescription_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::copyTrackDescription/ */
extern void copyTrackDescription_manage_DMI_Output_Pkg(
  /* fromTrackAtlas/ */
  DataForDMI_t_TrackAtlasTypes *fromTrackAtlas,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void copyTrackDescription_reset_manage_DMI_Output_Pkg(
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void copyTrackDescription_init_manage_DMI_Output_Pkg(
  outC_copyTrackDescription_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _copyTrackDescription_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** copyTrackDescription_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

