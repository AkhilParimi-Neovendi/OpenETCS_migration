/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7/ */
void ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
  /* DMI_dynamicPacket/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamicPacket,
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L31 = cMODE_System_National_DMI_Control_Pkg;
  outC->_L30 = cMODE_Shunting_DMI_Control_Pkg;
  outC->_L29 = cMODE_Stand_By_DMI_Control_Pkg;
  outC->_L28 = cMODE_Unfitted_DMI_Control_Pkg;
  outC->_L27 = cMODE_Trip_DMI_Control_Pkg;
  outC->_L26 = cMODE_System_Faliure_DMI_Control_Pkg;
  outC->_L25 = cMODE_Staff_Responsible_DMI_Control_Pkg;
  outC->_L24 = cMODE_Reversing_DMI_Control_Pkg;
  outC->_L23 = cMODE_Post_trip_DMI_Control_Pkg;
  outC->_L22 = cMODE_On_Sight_DMI_Control_Pkg;
  outC->_L21 = cMODE_Non_leading_DMI_Control_Pkg;
  outC->_L20 = cMODE_Limited_Supervision_DMI_Control_Pkg;
  outC->_L19 = cMODE_Full_Supervision_DMI_Control_Pkg;
  outC->_L18 = kcg_true;
  outC->ModeSymbol_B7_visibility = outC->_L18;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_dynamicPacket);
  outC->_L3 = outC->_L1.mode;
  /* _L2= */
  switch (outC->_L3) {
    case M_MODE_Shunting :
      outC->_L2 = outC->_L30;
      break;
    case M_MODE_Trip :
      outC->_L2 = outC->_L27;
      break;
    case M_MODE_Post_Trip :
      outC->_L2 = outC->_L23;
      break;
    case M_MODE_On_Sight :
      outC->_L2 = outC->_L22;
      break;
    case M_MODE_Staff_Responsible :
      outC->_L2 = outC->_L25;
      break;
    case M_MODE_Full_Supervision :
      outC->_L2 = outC->_L19;
      break;
    case M_MODE_Non_Leading :
      outC->_L2 = outC->_L21;
      break;
    case M_MODE_Reversing :
      outC->_L2 = outC->_L24;
      break;
    case M_MODE_Unfitted :
      outC->_L2 = outC->_L28;
      break;
    case M_MODE_System_Failure :
      outC->_L2 = outC->_L26;
      break;
    case M_MODE_Limited_Supervision :
      outC->_L2 = outC->_L20;
      break;
    case M_MODE_National_System :
      outC->_L2 = outC->_L31;
      break;
    default :
      outC->_L2 = outC->_L29;
      break;
  }
  outC->ModeSymbolIndex = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void ModeSymbolToIndex_B7_init_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.v_train = kcg_lit_int64(0);
  outC->_L1.location_front_train = kcg_lit_int64(0);
  outC->_L1.location_brake_target = kcg_lit_int64(0);
  outC->_L1.v_target = kcg_lit_int64(0);
  outC->_L1.v_permitted = kcg_lit_int64(0);
  outC->_L1.v_release = kcg_lit_int64(0);
  outC->_L1.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L1.v_intervention = kcg_lit_int64(0);
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = kcg_lit_int64(0);
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_c_valid = kcg_true;
  outC->_L1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.location_LOA = kcg_lit_int64(0);
  outC->_L1.v_LOA = kcg_lit_int64(0);
  outC->_L1.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L1.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L1.distance_to_TSA = kcg_lit_int64(0);
  outC->_L1.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.distanceIndicationPoint = kcg_lit_int64(0);
  outC->ModeSymbol_B7_visibility = kcg_true;
  outC->ModeSymbolIndex = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModeSymbolToIndex_B7_reset_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

