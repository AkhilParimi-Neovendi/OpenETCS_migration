/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT/ */
void NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(
  /* inNationalParams/ */
  NationalParams_T *inNationalParams,
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC)
{
  kcg_copy_NationalParams_T(&outC->_L1, inNationalParams);
  outC->_L2 = outC->_L1.t_nvcontact;
  outC->out_T_NVCONTACT = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void NationalParams__Get_T_NVCONTACT_init_RBC_Config_Pkg(
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC)
{
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.v_nvshunt = kcg_lit_int64(0);
  outC->_L1.v_nvstff = kcg_lit_int64(0);
  outC->_L1.v_nvonsight = kcg_lit_int64(0);
  outC->_L1.v_nvunfit = kcg_lit_int64(0);
  outC->_L1.v_nvrel = kcg_lit_int64(0);
  outC->_L1.t_nvcontact = kcg_lit_int64(0);
  outC->out_T_NVCONTACT = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void NationalParams__Get_T_NVCONTACT_reset_RBC_Config_Pkg(
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

