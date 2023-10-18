/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg_H_
#define _NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_NVCONTACT /* out_T_NVCONTACT/ */ out_T_NVCONTACT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NationalParams_T /* _L1/ */ _L1;
  T_NVCONTACT /* _L2/ */ _L2;
} outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT/ */
extern void NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(
  /* inNationalParams/ */
  NationalParams_T *inNationalParams,
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC);

extern void NationalParams__Get_T_NVCONTACT_reset_RBC_Config_Pkg(
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void NationalParams__Get_T_NVCONTACT_init_RBC_Config_Pkg(
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

