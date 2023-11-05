/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader/ */
void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency *outC)
{
  /* outIsConsistent/ */
  static kcg_bool outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _1_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _2_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _3_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _4_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _5_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _6_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _7_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _8_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _9_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _10_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _11_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _12_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _13_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _14_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _15_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _16_outIsConsistent_partial;
  /* outIsConsistent/ */
  static kcg_bool _17_outIsConsistent_partial;

  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    inRadioTrainTrackMessage);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1.outRadioTrainTrackHeader);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  outC->_L3 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L3;
  outC->IfBlock1_clock = outC->radioTrainTrackMessageId == kcg_lit_int32(129);
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->radioTrainTrackMessageId == kcg_lit_int32(
        132);
    if (outC->else_clock_IfBlock1) {
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->radioTrainTrackMessageId ==
        kcg_lit_int32(136);
      if (outC->else_clock_else_IfBlock1) {
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->radioTrainTrackMessageId ==
          kcg_lit_int32(146);
        if (outC->else_clock_else_else_IfBlock1) {
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 =
            outC->radioTrainTrackMessageId == kcg_lit_int32(154);
          if (outC->else_clock_else_else_else_IfBlock1) {
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->radioTrainTrackMessageId == kcg_lit_int32(155);
            if (outC->else_clock_else_else_else_else_IfBlock1) {
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->radioTrainTrackMessageId == kcg_lit_int32(159);
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->radioTrainTrackMessageId == kcg_lit_int32(156);
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->radioTrainTrackMessageId == kcg_lit_int32(147);
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                  }
                  else {
                    outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _9_outIsConsistent_partial =
                      outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->radioTrainTrackHeader,
    &outC->_L2);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->radioTrainTrackHeader);
    /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentHeader#1)/ */
    Msg129ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_Msg129ConsistencyChecker__HasConsistentHeader_1);
    outC->_L1_then_IfBlock1 =
      outC->Context_Msg129ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
    outIsConsistent_partial = outC->_L1_then_IfBlock1;
    outC->outIsConsistent = outIsConsistent_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->radioTrainTrackHeader);
      /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentHeader#1)/ */
      Msg132ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_Msg132ConsistencyChecker__HasConsistentHeader_1);
      outC->_L1_then_else_IfBlock1 =
        outC->Context_Msg132ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
      _17_outIsConsistent_partial = outC->_L1_then_else_IfBlock1;
      _1_outIsConsistent_partial = _17_outIsConsistent_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
          &outC->_L4_then_else_else_IfBlock1,
          &outC->radioTrainTrackHeader);
        /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentHeader#1)/ */
        Msg136ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &outC->_L4_then_else_else_IfBlock1,
          &outC->Context_Msg136ConsistencyChecker__HasConsistentHeader_1);
        outC->_L1_then_else_else_IfBlock1 =
          outC->Context_Msg136ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
        _2_outIsConsistent_partial = outC->_L1_then_else_else_IfBlock1;
        _16_outIsConsistent_partial = _2_outIsConsistent_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
            &outC->_L4_then_else_else_else_IfBlock1,
            &outC->radioTrainTrackHeader);
          /* IfBlock1:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader#1)/ */
          Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &outC->_L4_then_else_else_else_IfBlock1,
            &outC->Context_Msg146ConsistencyChecker__HasConsistentHeader_1);
          outC->_L1_then_else_else_else_IfBlock1 =
            outC->Context_Msg146ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
          _15_outIsConsistent_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_outIsConsistent_partial = _15_outIsConsistent_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
              &outC->_L3_then_else_else_else_else_IfBlock1,
              &outC->radioTrainTrackHeader);
            /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentHeader#1)/ */
            Msg154ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &outC->_L3_then_else_else_else_else_IfBlock1,
              &outC->Context_Msg154ConsistencyChecker__HasConsistentHeader_1);
            outC->_L1_then_else_else_else_else_IfBlock1 =
              outC->Context_Msg154ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
            _4_outIsConsistent_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _14_outIsConsistent_partial = _4_outIsConsistent_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                &outC->_L3_then_else_else_else_else_else_IfBlock1,
                &outC->radioTrainTrackHeader);
              /* IfBlock1:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader#1)/ */
              Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &outC->_L3_then_else_else_else_else_else_IfBlock1,
                &outC->Context_Msg155ConsistencyChecker__HasConsistentHeader_1);
              outC->_L1_then_else_else_else_else_else_IfBlock1 =
                outC->Context_Msg155ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
              _13_outIsConsistent_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _5_outIsConsistent_partial = _13_outIsConsistent_partial;
            }
            else {
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                  &outC->_L3_then_else_else_else_else_else_else_IfBlock1,
                  &outC->radioTrainTrackHeader);
                /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader#1)/ */
                Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &outC->_L3_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_Msg159ConsistencyChecker__HasConsistentHeader_1);
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  outC->Context_Msg159ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
                _6_outIsConsistent_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _12_outIsConsistent_partial = _6_outIsConsistent_partial;
              }
              else {
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                    &outC->_L3_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->radioTrainTrackHeader);
                  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader#1)/ */
                  Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &outC->_L3_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_Msg156ConsistencyChecker__HasConsistentHeader_1);
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->Context_Msg156ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
                  _11_outIsConsistent_partial =
                    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_outIsConsistent_partial = _11_outIsConsistent_partial;
                }
                else {
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
                      &outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->radioTrainTrackHeader);
                    /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader#1)/ */
                    Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_Msg147ConsistencyChecker__HasConsistentHeader_1);
                    outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->Context_Msg147ConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
                    _8_outIsConsistent_partial =
                      outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _10_outIsConsistent_partial = _8_outIsConsistent_partial;
                  }
                  else {
                    _10_outIsConsistent_partial = _9_outIsConsistent_partial;
                  }
                  _7_outIsConsistent_partial = _10_outIsConsistent_partial;
                }
                _12_outIsConsistent_partial = _7_outIsConsistent_partial;
              }
              _5_outIsConsistent_partial = _12_outIsConsistent_partial;
            }
            _14_outIsConsistent_partial = _5_outIsConsistent_partial;
          }
          _3_outIsConsistent_partial = _14_outIsConsistent_partial;
        }
        _16_outIsConsistent_partial = _3_outIsConsistent_partial;
      }
      _1_outIsConsistent_partial = _16_outIsConsistent_partial;
    }
    outC->outIsConsistent = _1_outIsConsistent_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L1.present = kcg_true;
  outC->_L1.header.present = kcg_true;
  outC->_L1.header.nid_message = kcg_lit_int32(0);
  outC->_L1.header.t_train = kcg_lit_int32(0);
  outC->_L1.header.nid_engine = kcg_lit_int32(0);
  outC->_L1.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1.packets.p0.valid = kcg_true;
  outC->_L1.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p1.valid = kcg_true;
  outC->_L1.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p3.valid = kcg_true;
  outC->_L1.packets.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L1.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L1.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L1.packets.p4.valid = kcg_true;
  outC->_L1.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.packets.p5.valid = kcg_true;
  outC->_L1.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L1.packets.p9.valid = kcg_true;
  outC->_L1.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L1.packets.p11.valid = kcg_true;
  outC->_L1.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L1.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L1.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L1.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1.packets.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L2.present = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2.xNID_EM = kcg_lit_int32(0);
  outC->_L2.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.present = kcg_true;
  outC->radioTrainTrackHeader.nid_message = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.t_train = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.nid_engine = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->radioTrainTrackHeader.xT_TRAIN = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.xNID_EM = kcg_lit_int32(0);
  outC->radioTrainTrackHeader.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->radioTrainTrackHeader.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->radioTrainTrackMessageId = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1.present = kcg_true;
  outC->_L3_then_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_else_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_else_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.present = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4_then_else_else_else_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4_then_else_else_else_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.present = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_else_else_else_else_else_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_else_else_else_else_else_IfBlock1.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.present = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.nid_engine =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.xNID_EM =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.present =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.nid_engine =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.xNID_EM =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.present = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(
      0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.nid_engine =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.xNID_EM = kcg_lit_int32(
      0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_else_else_else_else_else_else_IfBlock1.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock1.present = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_else_else_else_else_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_else_else_else_else_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_IfBlock1.present = kcg_true;
  outC->_L4_then_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4_then_else_else_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L4_then_else_else_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4_then_else_else_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.present = kcg_true;
  outC->_L2_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_IfBlock1.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.xNID_EM = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->outIsConsistent = kcg_true;
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg129ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg129ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg132ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg132ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg136ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg136ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg146ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg146ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg154ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg154ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg155ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg155ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg159ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg159ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg156ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg156ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg147ConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg147ConsistencyChecker__HasConsistentHeader_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistenc(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency *outC)
{
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg129ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg129ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg132ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg132ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg136ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg136ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg146ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg146ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg154ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg154ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg155ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg155ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg159ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg159ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg156ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg156ConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader#1)/ */
  Msg147ConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg147ConsistencyChecker__HasConsistentHeader_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

