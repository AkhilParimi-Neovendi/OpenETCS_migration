/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_IconAck/ */
void Set_IconAck_DMI_Control_Pkg_Sub_func(
  /* valid/ */
  kcg_bool valid,
  /* system_time/ */
  T_internal_Type_Obu_BasicTypes_Pkg system_time,
  /* NID_icon_id/ */
  kcg_int32 NID_icon_id,
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = valid;
  outC->_L2 = system_time;
  outC->_L3 = NID_icon_id;
  outC->_L4.valid = outC->_L1;
  outC->_L4.systemTime = outC->_L2;
  outC->_L4.DMI_nid_icon_identifier = outC->_L3;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->IconAck, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Set_IconAck_init_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L4.valid = kcg_true;
  outC->_L4.systemTime = kcg_lit_int32(0);
  outC->_L4.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->IconAck.valid = kcg_true;
  outC->IconAck.systemTime = kcg_lit_int32(0);
  outC->IconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_IconAck_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_IconAck_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

