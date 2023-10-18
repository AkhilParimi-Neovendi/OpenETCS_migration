/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA/ */
void TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC)
{
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L1, speeds);
  outC->_L47 = outC->_L1.V_target;
  outC->_L48 = outC->_L1.V_est;
  outC->_L51 = outC->_L48 <= outC->_L47;
  outC->_L50 = outC->_L47 < outC->_L48;
  outC->_L46 = outC->_L1.V_MRSP;
  outC->_L49 = outC->_L48 <= outC->_L46;
  outC->_L45 = outC->_L1.V_est;
  outC->_L44 = outC->_L1.dV_warning_V_MRSP;
  outC->_L43 = outC->_L46 < outC->_L45;
  outC->_L41 = outC->_L46 + outC->_L44;
  outC->_L42 = outC->_L45 <= outC->_L41;
  outC->_L40 = outC->_L50 & outC->_L49;
  outC->_L39 = outC->_L43 & outC->_L42;
  outC->_L38 = outC->_L1.V_MRSP;
  outC->_L37 = outC->_L1.V_est;
  outC->_L36 = outC->_L1.V_target;
  outC->_L35 = outC->_L1.dV_warning_V_target;
  outC->_L34 = outC->_L36 + outC->_L35;
  outC->_L33 = outC->_L44 + outC->_L38;
  outC->_L32 = outC->_L33 < outC->_L37;
  outC->_L31 = outC->_L37 <= outC->_L34;
  outC->_L30 = outC->_L32 & outC->_L31;
  outC->_L29 = outC->_L1.dV_warning_V_MRSP;
  outC->_L28 = outC->_L1.V_est;
  outC->_L27 = outC->_L1.V_MRSP;
  outC->_L26 = outC->_L1.dV_sbi_V_MRSP;
  outC->_L25 = outC->_L1.V_target;
  outC->_L22 = outC->_L27 + outC->_L26;
  outC->_L20 = outC->_L28 <= outC->_L22;
  outC->_L23 = outC->_L29 + outC->_L27;
  outC->_L21 = outC->_L23 < outC->_L28;
  outC->_L24 = outC->_L21 & outC->_L20;
  outC->_L19 = outC->_L1.dV_sbi_V_target;
  outC->_L18 = outC->_L25 + outC->_L19;
  outC->_L16 = outC->_L18 < outC->_L28;
  outC->_L17 = outC->_L20 & outC->_L16;
  outC->_L15 = outC->_L1.V_est;
  outC->_L14 = outC->_L1.V_MRSP;
  outC->_L13 = outC->_L1.dV_ebi_V_MRSP;
  outC->_L12 = outC->_L14 + outC->_L13;
  outC->_L10 = outC->_L15 <= outC->_L12;
  outC->_L8 = outC->_L22 < outC->_L15;
  outC->_L11 = outC->_L8 & outC->_L10;
  outC->_L6 = outC->_L1.dV_ebi_V_target;
  outC->_L7 = outC->_L1.V_target;
  outC->_L4 = outC->_L7 + outC->_L6;
  outC->_L3 = outC->_L4 < outC->_L15;
  outC->_L5 = outC->_L10 & outC->_L3;
  outC->_L2 = !outC->_L10;
  outC->_L9.t1 = outC->_L51;
  outC->_L9.t2 = outC->_L40;
  outC->_L9.t3 = outC->_L40;
  outC->_L9.t4 = outC->_L40;
  outC->_L9.t5 = outC->_L39;
  outC->_L9.t6 = outC->_L39;
  outC->_L9.t7 = outC->_L30;
  outC->_L9.t8 = outC->_L24;
  outC->_L9.t9 = outC->_L24;
  outC->_L9.t10 = outC->_L17;
  outC->_L9.t11 = outC->_L11;
  outC->_L9.t12 = outC->_L11;
  outC->_L9.t13 = outC->_L5;
  outC->_L9.t14 = outC->_L2;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&outC->triggerConds, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void TSM_EstSpeedCond_MRSP_LOA_init_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC)
{
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9.t1 = kcg_true;
  outC->_L9.t2 = kcg_true;
  outC->_L9.t3 = kcg_true;
  outC->_L9.t4 = kcg_true;
  outC->_L9.t5 = kcg_true;
  outC->_L9.t6 = kcg_true;
  outC->_L9.t7 = kcg_true;
  outC->_L9.t8 = kcg_true;
  outC->_L9.t9 = kcg_true;
  outC->_L9.t10 = kcg_true;
  outC->_L9.t11 = kcg_true;
  outC->_L9.t12 = kcg_true;
  outC->_L9.t13 = kcg_true;
  outC->_L9.t14 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.V_est = kcg_lit_int64(0);
  outC->_L1.V_MRSP = kcg_lit_int64(0);
  outC->_L1.V_release = kcg_lit_int64(0);
  outC->_L1.V_target = kcg_lit_int64(0);
  outC->_L1.v_p_mrdt = kcg_lit_int64(0);
  outC->_L1.v_p_dmi = kcg_lit_int64(0);
  outC->_L1.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L1.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L1.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L1.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L1.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L1.OdoStandStill = kcg_true;
  outC->triggerConds.t1 = kcg_true;
  outC->triggerConds.t2 = kcg_true;
  outC->triggerConds.t3 = kcg_true;
  outC->triggerConds.t4 = kcg_true;
  outC->triggerConds.t5 = kcg_true;
  outC->triggerConds.t6 = kcg_true;
  outC->triggerConds.t7 = kcg_true;
  outC->triggerConds.t8 = kcg_true;
  outC->triggerConds.t9 = kcg_true;
  outC->triggerConds.t10 = kcg_true;
  outC->triggerConds.t11 = kcg_true;
  outC->triggerConds.t12 = kcg_true;
  outC->triggerConds.t13 = kcg_true;
  outC->triggerConds.t14 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TSM_EstSpeedCond_MRSP_LOA_reset_SDM_Commands_Pkg(
  outC_TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

