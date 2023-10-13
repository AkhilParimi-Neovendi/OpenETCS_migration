/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_TRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NC_TRAIN/ */
void CAST_Int_to_NC_TRAIN_TM_conversions(
  /* nc_train_int/ */
  kcg_int64 nc_train_int,
  outC_CAST_Int_to_NC_TRAIN_TM_conversions *outC)
{
  /* nc_train/ */
  NC_TRAIN nc_train_partial;
  /* error/ */
  kcg_bool error_partial;
  /* nc_train/ */
  NC_TRAIN _1_nc_train_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* nc_train/ */
  NC_TRAIN _3_nc_train_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* nc_train/ */
  NC_TRAIN _5_nc_train_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* error/ */
  kcg_bool _7_error_partial;
  /* nc_train/ */
  NC_TRAIN _8_nc_train_partial;
  /* error/ */
  kcg_bool _9_error_partial;
  /* nc_train/ */
  NC_TRAIN _10_nc_train_partial;
  /* error/ */
  kcg_bool _11_error_partial;
  /* nc_train/ */
  NC_TRAIN _12_nc_train_partial;
  /* error/ */
  kcg_bool _13_error_partial;
  /* nc_train/ */
  NC_TRAIN _14_nc_train_partial;
  kcg_bool noname;

  outC->_L4 = nc_train_int;
  outC->nc_train_in = outC->_L4;
  outC->IfBlock1_clock = outC->nc_train_in ==
    INT_NC_TRAIN_no_train_categroy_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->nc_train_in ==
      INT_NC_TRAIN_freight_P_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L5_then_else_IfBlock1;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->nc_train_in ==
        INT_NC_TRAIN_freight_G_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->nc_train_in ==
          INT_NC_TRAIN_passenger_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L4_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L4_then_else_else_else_IfBlock1;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L1_else_else_else_else_IfBlock1;
          _6_error_partial = _7_error_partial;
        }
        _11_error_partial = _6_error_partial;
      }
      _2_error_partial = _11_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = ENUM_NC_TRAIN_no_train_categroy_TM_conversions;
    nc_train_partial = outC->_L4_then_IfBlock1;
    outC->nc_train = nc_train_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = ENUM_NC_TRAIN_freight_P_TM_conversions;
      _14_nc_train_partial = outC->_L3_then_else_IfBlock1;
      _1_nc_train_partial = _14_nc_train_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = ENUM_NC_TRAIN_freight_G_TM_conversions;
        _3_nc_train_partial = outC->_L2_then_else_else_IfBlock1;
        _12_nc_train_partial = _3_nc_train_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = ENUM_NC_TRAIN_passenger_TM_conversions;
          _10_nc_train_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_nc_train_partial = _10_nc_train_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            ENUM_NC_TRAIN_no_train_categroy_TM_conversions;
          _8_nc_train_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_nc_train_partial = _8_nc_train_partial;
        }
        _12_nc_train_partial = _5_nc_train_partial;
      }
      _1_nc_train_partial = _12_nc_train_partial;
    }
    outC->nc_train = _1_nc_train_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NC_TRAIN_init_TM_conversions(
  outC_CAST_Int_to_NC_TRAIN_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->nc_train_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NC_TRAIN_reset_TM_conversions(
  outC_CAST_Int_to_NC_TRAIN_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NC_TRAIN_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

