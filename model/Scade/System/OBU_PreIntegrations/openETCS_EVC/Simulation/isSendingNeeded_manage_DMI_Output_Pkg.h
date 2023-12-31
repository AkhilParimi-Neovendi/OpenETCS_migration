/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _isSendingNeeded_manage_DMI_Output_Pkg_H_
#define _isSendingNeeded_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* sendingNeeded/ */ sendingNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* lastDMI_Update/ */ lastDMI_Update;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_isSendingNeeded_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::isSendingNeeded/ */
extern void isSendingNeeded_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isSendingNeeded_init_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isSendingNeeded_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isSendingNeeded_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

