/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDriverOutput/ */
void CalcDriverOutput_SDM_Commands_Pkg(
  /* sdmType/ */
  SDM_Types_T_SDM_Types_Pkg sdmType,
  /* supVisStatus/ */
  SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC)
{
  /* valid_v_est/ */
  static kcg_bool valid_v_est_partial;
  /* valid_v_permitted/ */
  static kcg_bool valid_v_permitted_partial;
  /* valid_v_release/ */
  static kcg_bool valid_v_release_partial;
  /* v_mrdt/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_mrdt_partial;
  /* valid_v_mrdt/ */
  static kcg_bool valid_v_mrdt_partial;
  /* valid_targetDistance/ */
  static kcg_bool valid_targetDistance_partial;
  /* valid_v_est/ */
  static kcg_bool _1_valid_v_est_partial;
  /* valid_v_permitted/ */
  static kcg_bool _2_valid_v_permitted_partial;
  /* valid_v_release/ */
  static kcg_bool _3_valid_v_release_partial;
  /* v_mrdt/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg _4_v_mrdt_partial;
  /* valid_v_mrdt/ */
  static kcg_bool _5_valid_v_mrdt_partial;
  /* valid_targetDistance/ */
  static kcg_bool _6_valid_targetDistance_partial;
  /* valid_v_est/ */
  static kcg_bool _7_valid_v_est_partial;
  /* valid_v_permitted/ */
  static kcg_bool _8_valid_v_permitted_partial;
  /* valid_v_release/ */
  static kcg_bool _9_valid_v_release_partial;
  /* v_mrdt/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg _10_v_mrdt_partial;
  /* valid_v_mrdt/ */
  static kcg_bool _11_valid_v_mrdt_partial;
  /* valid_targetDistance/ */
  static kcg_bool _12_valid_targetDistance_partial;
  /* valid_v_est/ */
  static kcg_bool _13_valid_v_est_partial;
  /* valid_v_permitted/ */
  static kcg_bool _14_valid_v_permitted_partial;
  /* valid_v_release/ */
  static kcg_bool _15_valid_v_release_partial;
  /* v_mrdt/ */
  static V_odometry_Type_Obu_BasicTypes_Pkg _16_v_mrdt_partial;
  /* valid_v_mrdt/ */
  static kcg_bool _17_valid_v_mrdt_partial;
  /* valid_targetDistance/ */
  static kcg_bool _18_valid_targetDistance_partial;

  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L38, locations);
  outC->_L37 = outC->_L38.d_target;
  outC->targetDistance = outC->_L37;
  outC->_L13 = Intervention_Supervision_SDM_Types_Pkg;
  outC->_L2 = supVisStatus;
  outC->_L12 = outC->_L2 == outC->_L13;
  outC->_L11 = Warning_Supervision_SDM_Types_Pkg;
  outC->_L9 = outC->_L2 == outC->_L11;
  outC->_L10 = Overspeed_Supervision_SDM_Types_Pkg;
  outC->_L8 = outC->_L10 == outC->_L2;
  outC->_L7 = outC->_L8 | outC->_L9 | outC->_L12;
  outC->valid_v_floi = outC->_L7;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L32, speeds);
  outC->_L36 = outC->_L32.v_FLOI_dmi;
  outC->v_floi = outC->_L36;
  outC->_L35 = outC->_L32.v_p_dmi;
  outC->v_permitted = outC->_L35;
  outC->_L33 = outC->_L32.V_est;
  outC->v_est = outC->_L33;
  outC->WhenBlock1_clock = sdmType;
  /* WhenBlock1: */
  switch (outC->WhenBlock1_clock) {
    case No_SDM_Type_SDM_Types_Pkg :
      _18_valid_targetDistance_partial = kcg_false;
      _17_valid_v_mrdt_partial = kcg_false;
      _16_v_mrdt_partial = kcg_lit_int32(0);
      _15_valid_v_release_partial = kcg_false;
      _14_valid_v_permitted_partial = kcg_false;
      _13_valid_v_est_partial = kcg_false;
      outC->valid_v_est = _13_valid_v_est_partial;
      outC->valid_v_permitted = _14_valid_v_permitted_partial;
      outC->valid_v_release = _15_valid_v_release_partial;
      outC->v_mrdt = _16_v_mrdt_partial;
      outC->valid_v_mrdt = _17_valid_v_mrdt_partial;
      outC->valid_targetDistance = _18_valid_targetDistance_partial;
      break;
    case RSM_SDM_Types_Pkg :
      _2_valid_v_permitted_partial = kcg_false;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L3_RSM_WhenBlock1, speeds);
      outC->_L10_RSM_WhenBlock1 = outC->_L3_RSM_WhenBlock1.v_p_mrdt;
      outC->_L9_RSM_WhenBlock1 = Intervention_Supervision_SDM_Types_Pkg;
      outC->_L7_RSM_WhenBlock1 = Indication_Supervision_SDM_Types_Pkg;
      outC->_L6_RSM_WhenBlock1 = supVisStatus;
      outC->_L1_RSM_WhenBlock1 = outC->_L6_RSM_WhenBlock1 == outC->_L9_RSM_WhenBlock1;
      outC->_L4_RSM_WhenBlock1 = outC->_L7_RSM_WhenBlock1 == outC->_L6_RSM_WhenBlock1;
      outC->_L5_RSM_WhenBlock1 = outC->_L4_RSM_WhenBlock1 | outC->_L1_RSM_WhenBlock1;
      _1_valid_v_est_partial = outC->_L5_RSM_WhenBlock1;
      _4_v_mrdt_partial = outC->_L10_RSM_WhenBlock1;
      _6_valid_targetDistance_partial = outC->_L5_RSM_WhenBlock1;
      _5_valid_v_mrdt_partial = outC->_L5_RSM_WhenBlock1;
      _3_valid_v_release_partial = outC->_L5_RSM_WhenBlock1;
      outC->valid_v_est = _1_valid_v_est_partial;
      outC->valid_v_permitted = _2_valid_v_permitted_partial;
      outC->valid_v_release = _3_valid_v_release_partial;
      outC->v_mrdt = _4_v_mrdt_partial;
      outC->valid_v_mrdt = _5_valid_v_mrdt_partial;
      outC->valid_targetDistance = _6_valid_targetDistance_partial;
      break;
    case TSM_SDM_Types_Pkg :
      outC->_L9_TSM_WhenBlock1 = EoA_TargetManagement_types;
      kcg_copy_Target_T_TargetManagement_types(&outC->_L12_TSM_WhenBlock1, mrdt);
      outC->_L10_TSM_WhenBlock1 = outC->_L12_TSM_WhenBlock1.targetType;
      outC->_L18_TSM_WhenBlock1 = outC->_L10_TSM_WhenBlock1 ==
        outC->_L9_TSM_WhenBlock1;
      outC->_L15_TSM_WhenBlock1 = SvL_TargetManagement_types;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L14_TSM_WhenBlock1, speeds);
      outC->_L13_TSM_WhenBlock1 = outC->_L15_TSM_WhenBlock1 ==
        outC->_L10_TSM_WhenBlock1;
      outC->_L11_TSM_WhenBlock1 = outC->_L13_TSM_WhenBlock1 |
        outC->_L18_TSM_WhenBlock1;
      outC->_L8_TSM_WhenBlock1 = supVisStatus;
      outC->_L4_TSM_WhenBlock1 = Undefined_Supervision_SDM_Types_Pkg;
      outC->_L3_TSM_WhenBlock1 = outC->_L4_TSM_WhenBlock1 != outC->_L8_TSM_WhenBlock1;
      _12_valid_targetDistance_partial = outC->_L3_TSM_WhenBlock1;
      _8_valid_v_permitted_partial = outC->_L3_TSM_WhenBlock1;
      outC->_L7_TSM_WhenBlock1 = outC->_L3_TSM_WhenBlock1 & outC->_L11_TSM_WhenBlock1;
      _9_valid_v_release_partial = outC->_L7_TSM_WhenBlock1;
      outC->_L1_TSM_WhenBlock1 = outC->_L14_TSM_WhenBlock1.V_target;
      _10_v_mrdt_partial = outC->_L1_TSM_WhenBlock1;
      _11_valid_v_mrdt_partial = outC->_L3_TSM_WhenBlock1;
      _7_valid_v_est_partial = outC->_L3_TSM_WhenBlock1;
      outC->valid_v_est = _7_valid_v_est_partial;
      outC->valid_v_permitted = _8_valid_v_permitted_partial;
      outC->valid_v_release = _9_valid_v_release_partial;
      outC->v_mrdt = _10_v_mrdt_partial;
      outC->valid_v_mrdt = _11_valid_v_mrdt_partial;
      outC->valid_targetDistance = _12_valid_targetDistance_partial;
      break;
    case CSM_SDM_Types_Pkg :
      valid_targetDistance_partial = kcg_false;
      valid_v_mrdt_partial = kcg_false;
      v_mrdt_partial = kcg_lit_int32(0);
      valid_v_release_partial = kcg_false;
      outC->_L4_CSM_WhenBlock1 = kcg_true;
      valid_v_permitted_partial = outC->_L4_CSM_WhenBlock1;
      valid_v_est_partial = outC->_L4_CSM_WhenBlock1;
      outC->valid_v_est = valid_v_est_partial;
      outC->valid_v_permitted = valid_v_permitted_partial;
      outC->valid_v_release = valid_v_release_partial;
      outC->v_mrdt = v_mrdt_partial;
      outC->valid_v_mrdt = valid_v_mrdt_partial;
      outC->valid_targetDistance = valid_targetDistance_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L34 = outC->_L32.V_release;
  outC->v_release = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void CalcDriverOutput_init_SDM_Commands_Pkg(
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC)
{
  outC->_L37 = kcg_lit_int32(0);
  outC->_L38.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L38.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L38.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L38.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L38.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L38.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L38.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L38.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L38.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L38.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L38.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L38.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L38.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L38.d_target = kcg_lit_int32(0);
  outC->_L38.d_eoa = kcg_lit_int32(0);
  outC->_L38.d_svl = kcg_lit_int32(0);
  outC->_L38.Preindication_EBD_location_valid = kcg_true;
  outC->_L38.Preindication_SBD_location_valid = kcg_true;
  outC->_L38.RSM_start_location_EBD_valid = kcg_true;
  outC->_L38.RSM_start_location_SBD_valid = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L32.V_est = kcg_lit_int32(0);
  outC->_L32.V_MRSP = kcg_lit_int32(0);
  outC->_L32.V_release = kcg_lit_int32(0);
  outC->_L32.V_target = kcg_lit_int32(0);
  outC->_L32.v_p_mrdt = kcg_lit_int32(0);
  outC->_L32.v_p_dmi = kcg_lit_int32(0);
  outC->_L32.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L32.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L32.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L32.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L32.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L32.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L32.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L32.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L32.OdoStandStill = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L13 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L12 = kcg_true;
  outC->_L11 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L10 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L2 = Normal_Supervision_SDM_Types_Pkg;
  outC->WhenBlock1_clock = CSM_SDM_Types_Pkg;
  outC->_L18_TSM_WhenBlock1 = kcg_true;
  outC->_L15_TSM_WhenBlock1 = EoA_TargetManagement_types;
  outC->_L14_TSM_WhenBlock1.V_est = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.V_MRSP = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.V_release = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.V_target = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.v_p_mrdt = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.v_p_dmi = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L14_TSM_WhenBlock1.OdoStandStill = kcg_true;
  outC->_L13_TSM_WhenBlock1 = kcg_true;
  outC->_L12_TSM_WhenBlock1.targetType = EoA_TargetManagement_types;
  outC->_L12_TSM_WhenBlock1.distance = kcg_lit_int32(0);
  outC->_L12_TSM_WhenBlock1.speed = kcg_lit_int32(0);
  outC->_L12_TSM_WhenBlock1.valid = kcg_true;
  outC->_L11_TSM_WhenBlock1 = kcg_true;
  outC->_L10_TSM_WhenBlock1 = EoA_TargetManagement_types;
  outC->_L9_TSM_WhenBlock1 = EoA_TargetManagement_types;
  outC->_L8_TSM_WhenBlock1 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L7_TSM_WhenBlock1 = kcg_true;
  outC->_L4_TSM_WhenBlock1 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L3_TSM_WhenBlock1 = kcg_true;
  outC->_L1_TSM_WhenBlock1 = kcg_lit_int32(0);
  outC->_L10_RSM_WhenBlock1 = kcg_lit_int32(0);
  outC->_L9_RSM_WhenBlock1 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L7_RSM_WhenBlock1 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L6_RSM_WhenBlock1 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L5_RSM_WhenBlock1 = kcg_true;
  outC->_L4_RSM_WhenBlock1 = kcg_true;
  outC->_L3_RSM_WhenBlock1.V_est = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.V_MRSP = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.V_release = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.V_target = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.v_p_mrdt = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.v_p_dmi = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L3_RSM_WhenBlock1.OdoStandStill = kcg_true;
  outC->_L1_RSM_WhenBlock1 = kcg_true;
  outC->_L4_CSM_WhenBlock1 = kcg_true;
  outC->valid_targetDistance = kcg_true;
  outC->targetDistance = kcg_lit_int32(0);
  outC->valid_v_floi = kcg_true;
  outC->v_floi = kcg_lit_int32(0);
  outC->valid_v_mrdt = kcg_true;
  outC->v_mrdt = kcg_lit_int32(0);
  outC->valid_v_release = kcg_true;
  outC->v_release = kcg_lit_int32(0);
  outC->valid_v_permitted = kcg_true;
  outC->v_permitted = kcg_lit_int32(0);
  outC->valid_v_est = kcg_true;
  outC->v_est = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcDriverOutput_reset_SDM_Commands_Pkg(
  outC_CalcDriverOutput_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcDriverOutput_SDM_Commands_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

