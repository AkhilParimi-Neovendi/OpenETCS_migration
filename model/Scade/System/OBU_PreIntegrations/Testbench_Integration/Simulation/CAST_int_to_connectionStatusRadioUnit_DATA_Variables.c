/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_connectionStatusRadioUnit_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_connectionStatusRadioUnit/ */
void CAST_int_to_connectionStatusRadioUnit_DATA_Variables(
  /* connectionStatusRadioUnit_int/ */
  connectionStatusRadioUnit_INT_T_DATA connectionStatusRadioUnit_int,
  outC_CAST_int_to_connectionStatusRadioUnit_DATA_Variables *outC)
{
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _1_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _3_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _5_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _8_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _10_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _12_connectionStatusRadioUnit_ct_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* connectionStatusRadioUnit_ct/ */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _14_connectionStatusRadioUnit_ct_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = connectionStatusRadioUnit_int ==
    INT_connectionStatusRadioUnit_T_conn_unknown;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_unknown;
    connectionStatusRadioUnit_ct_partial = outC->_L1_then_IfBlock1;
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->connectionStatusRadioUnit_ct = connectionStatusRadioUnit_ct_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = connectionStatusRadioUnit_int ==
      INT_connectionStatusRadioUnit_T_conn_no_connection;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 =
        ENUM_connectionStatusRadioUnit_T_conn_no_connection;
      _14_connectionStatusRadioUnit_ct_partial = outC->_L1_then_else_IfBlock1;
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L2_then_else_IfBlock1;
      _1_connectionStatusRadioUnit_ct_partial =
        _14_connectionStatusRadioUnit_ct_partial;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = connectionStatusRadioUnit_int ==
        INT_connectionStatusRadioUnit_T_conn_ConnectionUp;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp;
        _3_connectionStatusRadioUnit_ct_partial = outC->_L1_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        _12_connectionStatusRadioUnit_ct_partial =
          _3_connectionStatusRadioUnit_ct_partial;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = connectionStatusRadioUnit_int ==
          INT_connectionStatusRadioUnit_T_conn_SetupFailed;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 =
            ENUM_connectionStatusRadioUnit_T_conn_SetupFailed;
          _10_connectionStatusRadioUnit_ct_partial =
            outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_connectionStatusRadioUnit_ct_partial =
            _10_connectionStatusRadioUnit_ct_partial;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 =
            ENUM_connectionStatusRadioUnit_T_conn_unknown;
          _8_connectionStatusRadioUnit_ct_partial =
            outC->_L1_else_else_else_else_IfBlock1;
          outC->_L2_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_connectionStatusRadioUnit_ct_partial =
            _8_connectionStatusRadioUnit_ct_partial;
          _6_error_partial = _7_error_partial;
        }
        _12_connectionStatusRadioUnit_ct_partial =
          _5_connectionStatusRadioUnit_ct_partial;
        _11_error_partial = _6_error_partial;
      }
      _1_connectionStatusRadioUnit_ct_partial =
        _12_connectionStatusRadioUnit_ct_partial;
      _2_error_partial = _11_error_partial;
    }
    outC->connectionStatusRadioUnit_ct = _1_connectionStatusRadioUnit_ct_partial;
    outC->error = _2_error_partial;
  }
  outC->_L1 = outC->error;
  noname = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_connectionStatusRadioUnit_init_DATA_Variables(
  outC_CAST_int_to_connectionStatusRadioUnit_DATA_Variables *outC)
{
  outC->_L1 = kcg_true;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = conn_unknown_API_RadioCommunication_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L2_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_IfBlock1 =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->connectionStatusRadioUnit_ct = conn_unknown_API_RadioCommunication_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_connectionStatusRadioUnit_reset_DATA_Variables(
  outC_CAST_int_to_connectionStatusRadioUnit_DATA_Variables *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_connectionStatusRadioUnit_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

