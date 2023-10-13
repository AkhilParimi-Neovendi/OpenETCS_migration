/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets/ */
void RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
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
    &outC->_L5,
    inRadioTrainTrackMessage);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1.outRadioTrainTrackHeader);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  outC->_L4 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrainTrackmessageId = outC->_L4;
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->radioTrainTrackPackets,
    &outC->_L6);
  outC->IfBlock1_clock = outC->radioTrainTrackmessageId == kcg_lit_int64(129);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_outPackets_T_Common_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->radioTrainTrackPackets);
    /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets#1)/ */
    Msg129ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_Msg129ConsistencyChecker__HasConsistentPackets_1);
    outC->_L1_then_IfBlock1 =
      outC->Context_Msg129ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
    outIsConsistent_partial = outC->_L1_then_IfBlock1;
    outC->outIsConsistent = outIsConsistent_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->radioTrainTrackmessageId == kcg_lit_int64(
        132);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_outPackets_T_Common_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->radioTrainTrackPackets);
      /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets#1)/ */
      Msg132ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->Context_Msg132ConsistencyChecker__HasConsistentPackets_1);
      outC->_L1_then_else_IfBlock1 =
        outC->Context_Msg132ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
      _17_outIsConsistent_partial = outC->_L1_then_else_IfBlock1;
      _1_outIsConsistent_partial = _17_outIsConsistent_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->radioTrainTrackmessageId ==
        kcg_lit_int64(136);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_outPackets_T_Common_Types_Pkg(
          &outC->_L2_then_else_else_IfBlock1,
          &outC->radioTrainTrackPackets);
        /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets#1)/ */
        Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
          &outC->_L2_then_else_else_IfBlock1,
          &outC->Context_Msg136ConsistencyChecker__HasConsistentPackets_1);
        outC->_L1_then_else_else_IfBlock1 =
          outC->Context_Msg136ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
        _2_outIsConsistent_partial = outC->_L1_then_else_else_IfBlock1;
        _16_outIsConsistent_partial = _2_outIsConsistent_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->radioTrainTrackmessageId ==
          kcg_lit_int64(146);
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          kcg_copy_outPackets_T_Common_Types_Pkg(
            &outC->_L4_then_else_else_else_IfBlock1,
            &outC->radioTrainTrackPackets);
          /* IfBlock1:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentPackets#1)/ */
          Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
            &outC->_L4_then_else_else_else_IfBlock1,
            &outC->Context_Msg146ConsistencyChecker__HasConsistentPackets_1);
          outC->_L3_then_else_else_else_IfBlock1 =
            outC->Context_Msg146ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
          _15_outIsConsistent_partial = outC->_L3_then_else_else_else_IfBlock1;
          _3_outIsConsistent_partial = _15_outIsConsistent_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 =
            outC->radioTrainTrackmessageId == kcg_lit_int64(154);
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            kcg_copy_outPackets_T_Common_Types_Pkg(
              &outC->_L2_then_else_else_else_else_IfBlock1,
              &outC->radioTrainTrackPackets);
            /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets#1)/ */
            Msg154ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
              &outC->_L2_then_else_else_else_else_IfBlock1,
              &outC->Context_Msg154ConsistencyChecker__HasConsistentPackets_1);
            outC->_L1_then_else_else_else_else_IfBlock1 =
              outC->Context_Msg154ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
            _4_outIsConsistent_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _14_outIsConsistent_partial = _4_outIsConsistent_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->radioTrainTrackmessageId == kcg_lit_int64(155);
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              kcg_copy_outPackets_T_Common_Types_Pkg(
                &outC->_L3_then_else_else_else_else_else_IfBlock1,
                &outC->radioTrainTrackPackets);
              /* IfBlock1:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets#1)/ */
              Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                &outC->_L3_then_else_else_else_else_else_IfBlock1,
                &outC->Context_Msg155ConsistencyChecker__HasConsistentPackets_1);
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                outC->Context_Msg155ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
              _13_outIsConsistent_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _5_outIsConsistent_partial = _13_outIsConsistent_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->radioTrainTrackmessageId == kcg_lit_int64(159);
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                kcg_copy_outPackets_T_Common_Types_Pkg(
                  &outC->_L2_then_else_else_else_else_else_else_IfBlock1,
                  &outC->radioTrainTrackPackets);
                /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets#1)/ */
                Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                  &outC->_L2_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_Msg159ConsistencyChecker__HasConsistentPackets_1);
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  outC->Context_Msg159ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
                _6_outIsConsistent_partial =
                  outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                _12_outIsConsistent_partial = _6_outIsConsistent_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->radioTrainTrackmessageId == kcg_lit_int64(156);
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  kcg_copy_outPackets_T_Common_Types_Pkg(
                    &outC->_L2_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->radioTrainTrackPackets);
                  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentPackets#1)/ */
                  Msg156ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                    &outC->_L2_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_Msg156ConsistencyChecker__HasConsistentPackets_1);
                  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1 =
                    outC->Context_Msg156ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
                  _11_outIsConsistent_partial =
                    outC->_L3_then_else_else_else_else_else_else_else_IfBlock1;
                  _7_outIsConsistent_partial = _11_outIsConsistent_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->radioTrainTrackmessageId == kcg_lit_int64(147);
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    kcg_copy_outPackets_T_Common_Types_Pkg(
                      &outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->radioTrainTrackPackets);
                    /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentPackets#1)/ */
                    Msg147ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
                      &outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_Msg147ConsistencyChecker__HasConsistentPackets_1);
                    outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->Context_Msg147ConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
                    _8_outIsConsistent_partial =
                      outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _10_outIsConsistent_partial = _8_outIsConsistent_partial;
                  }
                  else {
                    outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _9_outIsConsistent_partial =
                      outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1;
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
void RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;

  outC->_L6.p0.valid = kcg_true;
  outC->_L6.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L6.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L6.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L6.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L6.p1.valid = kcg_true;
  outC->_L6.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L6.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L6.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L6.p3.valid = kcg_true;
  outC->_L6.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L6.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L6.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L6.p4.valid = kcg_true;
  outC->_L6.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6.p5.valid = kcg_true;
  outC->_L6.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L6.p9.valid = kcg_true;
  outC->_L6.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L6.p11.valid = kcg_true;
  outC->_L6.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.p11.l_train = kcg_lit_int64(0);
  outC->_L6.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L6.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6.p11.n_axle = kcg_lit_int64(0);
  outC->_L6.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L6.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L6.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L6.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->_L5.present = kcg_true;
  outC->_L5.header.present = kcg_true;
  outC->_L5.header.nid_message = kcg_lit_int64(0);
  outC->_L5.header.t_train = kcg_lit_int64(0);
  outC->_L5.header.nid_engine = kcg_lit_int64(0);
  outC->_L5.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L5.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L5.header.xNID_EM = kcg_lit_int64(0);
  outC->_L5.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L5.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L5.packets.p0.valid = kcg_true;
  outC->_L5.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L5.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L5.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L5.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L5.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L5.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L5.packets.p1.valid = kcg_true;
  outC->_L5.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L5.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L5.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L5.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L5.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L5.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L5.packets.p3.valid = kcg_true;
  outC->_L5.packets.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L5.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L5.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L5.packets.p4.valid = kcg_true;
  outC->_L5.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L5.packets.p5.valid = kcg_true;
  outC->_L5.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L5.packets.p9.valid = kcg_true;
  outC->_L5.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L5.packets.p11.valid = kcg_true;
  outC->_L5.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L5.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L5.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L5.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L5.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L5.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L5.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L5.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L5.packets.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L3.present = kcg_true;
  outC->_L3.nid_message = kcg_lit_int64(0);
  outC->_L3.t_train = kcg_lit_int64(0);
  outC->_L3.nid_engine = kcg_lit_int64(0);
  outC->_L3.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3.xT_TRAIN = kcg_lit_int64(0);
  outC->_L3.xNID_EM = kcg_lit_int64(0);
  outC->_L3.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.valid = kcg_true;
  outC->radioTrainTrackPackets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->radioTrainTrackPackets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->radioTrainTrackPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->radioTrainTrackPackets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->radioTrainTrackPackets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->radioTrainTrackPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->radioTrainTrackPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->radioTrainTrackPackets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.valid = kcg_true;
  outC->radioTrainTrackPackets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->radioTrainTrackPackets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->radioTrainTrackPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->radioTrainTrackPackets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->radioTrainTrackPackets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->radioTrainTrackPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->radioTrainTrackPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->radioTrainTrackPackets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p3.valid = kcg_true;
  outC->radioTrainTrackPackets.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->radioTrainTrackPackets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->radioTrainTrackPackets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int64(0);
    }
  }
  outC->radioTrainTrackPackets.p4.valid = kcg_true;
  outC->radioTrainTrackPackets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->radioTrainTrackPackets.p5.valid = kcg_true;
  outC->radioTrainTrackPackets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p9.valid = kcg_true;
  outC->radioTrainTrackPackets.p9.transitionInformation = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p11.valid = kcg_true;
  outC->radioTrainTrackPackets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->radioTrainTrackPackets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->radioTrainTrackPackets.p11.l_train = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->radioTrainTrackPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->radioTrainTrackPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->radioTrainTrackPackets.p11.n_axle = kcg_lit_int64(0);
  outC->radioTrainTrackPackets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->radioTrainTrackPackets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->radioTrainTrackPackets.p11.tractionIdentity[idx10].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->radioTrainTrackPackets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->radioTrainTrackPackets.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
  outC->radioTrainTrackmessageId = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_IfBlock1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_IfBlock1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_else_IfBlock1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_IfBlock1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_IfBlock1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_else_IfBlock1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 1; idx13++) {
    outC->_L2_then_else_IfBlock1.p3.aNID_RADIO[idx13].valid = kcg_true;
    for (idx12 = 0; idx12 < 15; idx12++) {
      outC->_L2_then_else_IfBlock1.p3.aNID_RADIO[idx13].telephoneNumber[idx12] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_else_IfBlock1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->_L2_then_else_IfBlock1.p11.tractionIdentity[idx14].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_IfBlock1.p11.tractionIdentity[idx14].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L2_then_else_IfBlock1.p11.nid_ntc[idx15] = kcg_lit_int64(0);
  }
  outC->_L1_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(
      0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L4_then_else_else_else_IfBlock1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(
      0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(
      0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L4_then_else_else_else_IfBlock1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L4_then_else_else_else_IfBlock1.p3.aNID_RADIO[idx17].valid = kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      outC->_L4_then_else_else_else_IfBlock1.p3.aNID_RADIO[idx17].telephoneNumber[idx16] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_then_else_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L4_then_else_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_then_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_then_else_else_else_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_then_else_else_else_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L4_then_else_else_else_IfBlock1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L4_then_else_else_else_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L4_then_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L4_then_else_else_else_IfBlock1.p11.tractionIdentity[idx18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_then_else_else_else_IfBlock1.p11.tractionIdentity[idx18].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L4_then_else_else_else_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L4_then_else_else_else_IfBlock1.p11.nid_ntc[idx19] = kcg_lit_int64(0);
  }
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->_L3_then_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx21].valid =
      kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->_L3_then_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx21].telephoneNumber[idx20] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_then_else_else_else_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L3_then_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_then_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx22].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L3_then_else_else_else_else_else_IfBlock1.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L3_then_else_else_else_else_else_IfBlock1.p11.nid_ntc[idx23] =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p3.number =
    kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx25].valid =
      kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx25].telephoneNumber[idx24] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.l_train =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx26].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L2_then_else_else_else_else_else_else_else_IfBlock1.p11.nid_ntc[idx27] =
      kcg_lit_int64(0);
  }
  outC->_L3_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p3.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p3.number =
    kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx29].valid =
      kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx29].telephoneNumber[idx28] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p4.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p5.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p9.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.valid =
    kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.l_train =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx30].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1.p11.nid_ntc[idx31] =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p3.number =
    kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    outC->_L2_then_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx33].valid =
      kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      outC->_L2_then_else_else_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx33].telephoneNumber[idx32] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.l_train =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.tractionIdentity[idx34].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 5; idx35++) {
    outC->_L2_then_else_else_else_else_else_else_IfBlock1.p11.nid_ntc[idx35] =
      kcg_lit_int64(0);
  }
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(
      0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_IfBlock1.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(
      0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_else_else_else_else_IfBlock1.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    outC->_L2_then_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx37].valid =
      kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      outC->_L2_then_else_else_else_else_IfBlock1.p3.aNID_RADIO[idx37].telephoneNumber[idx36] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_else_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_else_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_else_else_else_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->_L2_then_else_else_else_else_IfBlock1.p11.tractionIdentity[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_else_else_else_IfBlock1.p11.tractionIdentity[idx38].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_else_else_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L2_then_else_else_else_else_IfBlock1.p11.nid_ntc[idx39] =
      kcg_lit_int64(0);
  }
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_else_else_IfBlock1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_else_else_IfBlock1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L2_then_else_else_IfBlock1.p3.aNID_RADIO[idx41].valid = kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      outC->_L2_then_else_else_IfBlock1.p3.aNID_RADIO[idx41].telephoneNumber[idx40] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_else_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_else_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_else_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_else_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_else_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_else_else_IfBlock1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_else_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_else_else_IfBlock1.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx42 = 0; idx42 < 4; idx42++) {
    outC->_L2_then_else_else_IfBlock1.p11.tractionIdentity[idx42].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_else_IfBlock1.p11.tractionIdentity[idx42].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_else_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->_L2_then_else_else_IfBlock1.p11.nid_ntc[idx43] = kcg_lit_int64(0);
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_IfBlock1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_IfBlock1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 1; idx45++) {
    outC->_L2_then_IfBlock1.p3.aNID_RADIO[idx45].valid = kcg_true;
    for (idx44 = 0; idx44 < 15; idx44++) {
      outC->_L2_then_IfBlock1.p3.aNID_RADIO[idx45].telephoneNumber[idx44] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_IfBlock1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_IfBlock1.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_IfBlock1.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_IfBlock1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx46 = 0; idx46 < 4; idx46++) {
    outC->_L2_then_IfBlock1.p11.tractionIdentity[idx46].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_IfBlock1.p11.tractionIdentity[idx46].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->_L2_then_IfBlock1.p11.nid_ntc[idx47] = kcg_lit_int64(0);
  }
  outC->outIsConsistent = kcg_true;
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg129ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg129ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg132ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg132ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg136ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg136ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg146ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg146ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg154ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg154ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg155ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg155ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg159ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg159ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg156ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg156ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg147ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg147ConsistencyChecker__HasConsistentPackets_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg129ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg129ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg132ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg132ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg136ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg136ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg146ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg146ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg154ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg154ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg155ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg155ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg159ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg159ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg156ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg156ConsistencyChecker__HasConsistentPackets_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentPackets#1)/ */
  Msg147ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_Msg147ConsistencyChecker__HasConsistentPackets_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

