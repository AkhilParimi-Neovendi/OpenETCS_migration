/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet/ */
void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* valid/ */
  kcg_bool valid,
  /* TrainRunningNumber/ */
  array_int64_9 *TrainRunningNumber,
  /* SystemTime/ */
  kcg_int64 SystemTime,
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_copy_array_int64_9(&outC->_L1, TrainRunningNumber);
  /* _L22=(DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer)/ */
  ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
    &outC->_L1,
    &outC->Context_ArrayOfASCII_to_Integer);
  outC->_L22 = outC->Context_ArrayOfASCII_to_Integer.Output1;
  outC->_L19 = SystemTime;
  outC->_L18 = valid;
  outC->_L5.valid = outC->_L18;
  outC->_L5.systemTime = outC->_L19;
  outC->_L5.trainRunningNumber = outC->_L22;
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_train_running_number_id,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void Set_TrainRN_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;

  outC->_L22 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = kcg_lit_int64(0);
  outC->_L5.trainRunningNumber = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->DMI_train_running_number_id.valid = kcg_true;
  outC->DMI_train_running_number_id.systemTime = kcg_lit_int64(0);
  outC->DMI_train_running_number_id.trainRunningNumber = kcg_lit_int64(0);
  /* _L22=(DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer)/ */
  ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
    &outC->Context_ArrayOfASCII_to_Integer);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_TrainRN_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  /* _L22=(DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer)/ */
  ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
    &outC->Context_ArrayOfASCII_to_Integer);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

