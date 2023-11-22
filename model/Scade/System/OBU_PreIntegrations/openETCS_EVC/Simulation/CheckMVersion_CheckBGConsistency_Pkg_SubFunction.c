/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMVersion_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMVersion/ */
void CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
  /* trackVersion/ */
  M_VERSION trackVersion,
  /* trainVersion/ */
  M_VERSION trainVersion,
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L2 = trackVersion;
  /* _L4=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_M_VERSION_to_int_2);
  outC->_L4 = outC->Context_CAST_M_VERSION_to_int_2.m_version_int;
  outC->_L1 = trainVersion;
  /* _L3=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_TM_conversions(
    outC->_L1,
    &outC->Context_CAST_M_VERSION_to_int_1);
  outC->_L3 = outC->Context_CAST_M_VERSION_to_int_1.m_version_int;
  outC->_L5 = outC->_L3 >= outC->_L4;
  outC->compatibleVersion = outC->_L5;
  outC->_L7 = outC->_L3 == outC->_L4;
  outC->isSameVersion = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckMVersion_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->compatibleVersion = kcg_true;
  outC->isSameVersion = kcg_true;
  /* _L3=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L4=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_init_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckMVersion_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMVersion_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* _L3=(TM_conversions::CAST_M_VERSION_to_int#1)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_1);
  /* _L4=(TM_conversions::CAST_M_VERSION_to_int#2)/ */
  CAST_M_VERSION_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_VERSION_to_int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMVersion_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

