/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc/ */
void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* present/ */
  kcg_bool present,
  /* tcycloc/ */
  T_CYCLOC tcycloc,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;
  /* lastTime/ */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastTime;

  last_lastTime = outC->lastTime;
  outC->_L46 = present;
  noname = outC->_L46;
  outC->_L45 = systemTime;
  outC->_L43 = last_lastTime;
  outC->_L28 = cTimeToElapse_ProvidePositionReport_Pkg;
  outC->_L33 = tcycloc;
  outC->_L34 = outC->_L33 * outC->_L28;
  outC->_L27 = last_lastTime;
  outC->_L29 = systemTime;
  outC->_L31 = outC->_L29 - outC->_L27;
  outC->_L32 = outC->_L31 >= outC->_L34;
  outC->_L41 = kcg_lit_int64(255);
  outC->_L40 = tcycloc;
  outC->_L42 = outC->_L40 < outC->_L41;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L36 = tcycloc;
  outC->_L37 = outC->_L36 > outC->_L38;
  outC->_L39 = outC->_L37 & outC->_L42;
  outC->_L35 = outC->_L39 & outC->_L32;
  /* _L44= */
  if (outC->_L35) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L43;
  }
  outC->lastTime = outC->_L44;
  outC->trigger = outC->_L35;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->trigger = kcg_true;
  outC->lastTime = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->lastTime = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

