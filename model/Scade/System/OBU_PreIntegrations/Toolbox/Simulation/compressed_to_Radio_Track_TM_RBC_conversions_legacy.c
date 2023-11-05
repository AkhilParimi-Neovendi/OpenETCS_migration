/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions_legacy.h"

/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ */
void compressed_to_Radio_Track_TM_RBC_conversions_legacy(
  /* Header_In/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC)
{
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _1_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _2_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _5_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _6_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _7_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _8_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _9_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _10_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _11_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _12_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _13_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _14_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _15_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _16_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _17_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _18_header_sheet2_partial;
  /* header_sheet2/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _19_header_sheet2_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _20_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _21_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _22_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _23_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _24_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _25_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _26_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _27_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _28_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _29_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _30_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _31_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _32_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _33_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _34_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _35_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _36_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _37_header_sheet1_partial;
  /* header_sheet1/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _38_header_sheet1_partial;

  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, Header_In);
  outC->_L32 = outC->_L1.nid_message;
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_TM_conversions(
    outC->_L32,
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  outC->_L33 = outC->Context_CAST_NID_MESSAGE_to_int_1.nid_message_int;
  outC->nid_message = outC->_L33;
  outC->IfBlock2_clock = outC->nid_message == kcg_lit_int32(28);
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_then_IfBlock2,
      Header_In);
    /* IfBlock2:then:_L2=(TM_RBC_conversions::C_header_to_M028#1)/ */
    C_header_to_M028_TM_RBC_conversions(
      &outC->_L1_then_IfBlock2,
      &outC->Context_C_header_to_M028_1);
    kcg_copy_M_028_T_TM_radio_messages(
      &outC->_L2_then_IfBlock2,
      &outC->Context_C_header_to_M028_1.message_out);
    /* IfBlock2:then:_L3=(TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H#1)/ */
    M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &outC->_L2_then_IfBlock2,
      &outC->Context_M028_to_Radio_Track_Train_H_1);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_then_IfBlock2,
      &outC->Context_M028_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &header_sheet2_partial,
      &outC->_L3_then_IfBlock2);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet2,
      &header_sheet2_partial);
  }
  else {
    outC->else_clock_IfBlock2 = outC->nid_message == kcg_lit_int32(32);
    /* IfBlock2:else: */
    if (outC->else_clock_IfBlock2) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &outC->_L4_then_else_IfBlock2,
        Header_In);
      /* IfBlock2:else:then:_L2=(TM_RBC_conversions::C_header_to_M032#1)/ */
      C_header_to_M032_TM_RBC_conversions(
        &outC->_L4_then_else_IfBlock2,
        &outC->Context_C_header_to_M032_1);
      kcg_copy_M_032_T_TM_radio_messages(
        &outC->_L2_then_else_IfBlock2,
        &outC->Context_C_header_to_M032_1.message_out);
      /* IfBlock2:else:then:_L3=(TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H#2)/ */
      M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &outC->_L2_then_else_IfBlock2,
        &outC->Context_M032_to_Radio_Track_Train_H_2);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->_L3_then_else_IfBlock2,
        &outC->Context_M032_to_Radio_Track_Train_H_2.Radio_Track_Train_Hd_out);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_19_header_sheet2_partial,
        &outC->_L3_then_else_IfBlock2);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_1_header_sheet2_partial,
        &_19_header_sheet2_partial);
    }
    else {
      outC->else_clock_else_IfBlock2 = outC->nid_message == kcg_lit_int32(33);
      /* IfBlock2:else:else: */
      if (outC->else_clock_else_IfBlock2) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &outC->_L1_then_else_else_IfBlock2,
          Header_In);
        /* IfBlock2:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M033#1)/ */
        C_header_to_M033_TM_RBC_conversions(
          &outC->_L1_then_else_else_IfBlock2,
          &outC->Context_C_header_to_M033_1);
        kcg_copy_M_033_T_TM_radio_messages(
          &outC->_L3_then_else_else_IfBlock2,
          &outC->Context_C_header_to_M033_1.message_out);
        /* IfBlock2:else:else:then:_L2=(TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H#1)/ */
        M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &outC->_L3_then_else_else_IfBlock2,
          &outC->Context_M033_to_Radio_Track_Train_H_1);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L2_then_else_else_IfBlock2,
          &outC->Context_M033_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_2_header_sheet2_partial,
          &outC->_L2_then_else_else_IfBlock2);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_18_header_sheet2_partial,
          &_2_header_sheet2_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock2 = outC->nid_message == kcg_lit_int32(34);
        /* IfBlock2:else:else:else: */
        if (outC->else_clock_else_else_IfBlock2) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &outC->_L1_then_else_else_else_IfBlock2,
            Header_In);
          /* IfBlock2:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M034#1)/ */
          C_header_to_M034_TM_RBC_conversions(
            &outC->_L1_then_else_else_else_IfBlock2,
            &outC->Context_C_header_to_M034_1);
          kcg_copy_M_034_T_TM_radio_messages(
            &outC->_L3_then_else_else_else_IfBlock2,
            &outC->Context_C_header_to_M034_1.message_out);
          /* IfBlock2:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H#1)/ */
          M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &outC->_L3_then_else_else_else_IfBlock2,
            &outC->Context_M034_to_Radio_Track_Train_H_1);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L2_then_else_else_else_IfBlock2,
            &outC->Context_M034_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_17_header_sheet2_partial,
            &outC->_L2_then_else_else_else_IfBlock2);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_3_header_sheet2_partial,
            &_17_header_sheet2_partial);
        }
        else {
          outC->else_clock_else_else_else_IfBlock2 = outC->nid_message ==
            kcg_lit_int32(38);
          /* IfBlock2:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock2) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &outC->_L1_then_else_else_else_else_IfBlock2,
              Header_In);
            /* IfBlock2:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M038#1)/ */
            C_header_to_M038_TM_RBC_conversions(
              &outC->_L1_then_else_else_else_else_IfBlock2,
              &outC->Context_C_header_to_M038_1);
            kcg_copy_M_038_T_TM_radio_messages(
              &outC->_L3_then_else_else_else_else_IfBlock2,
              &outC->Context_C_header_to_M038_1.message_out);
            /* IfBlock2:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H#1)/ */
            M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &outC->_L3_then_else_else_else_else_IfBlock2,
              &outC->Context_M038_to_Radio_Track_Train_H_1);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L2_then_else_else_else_else_IfBlock2,
              &outC->Context_M038_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_4_header_sheet2_partial,
              &outC->_L2_then_else_else_else_else_IfBlock2);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_16_header_sheet2_partial,
              &_4_header_sheet2_partial);
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock2 = outC->nid_message ==
              kcg_lit_int32(39);
            /* IfBlock2:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock2) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &outC->_L121_then_else_else_else_else_else_IfBlock2,
                Header_In);
              /* IfBlock2:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M039#1)/ */
              C_header_to_M039_TM_RBC_conversions(
                &outC->_L121_then_else_else_else_else_else_IfBlock2,
                &outC->Context_C_header_to_M039_1);
              kcg_copy_M_039_T_TM_radio_messages(
                &outC->_L319_then_else_else_else_else_else_IfBlock2,
                &outC->Context_C_header_to_M039_1.message_out);
              /* IfBlock2:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H#1)/ */
              M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &outC->_L319_then_else_else_else_else_else_IfBlock2,
                &outC->Context_M039_to_Radio_Track_Train_H_1);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &outC->_L220_then_else_else_else_else_else_IfBlock2,
                &outC->Context_M039_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_15_header_sheet2_partial,
                &outC->_L220_then_else_else_else_else_else_IfBlock2);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_5_header_sheet2_partial,
                &_15_header_sheet2_partial);
            }
            else {
              outC->_4_else_clock_else_else_else_else_else_IfBlock2 =
                outC->nid_message == kcg_lit_int32(40);
              /* IfBlock2:else:else:else:else:else:else: */
              if (outC->_4_else_clock_else_else_else_else_else_IfBlock2) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &outC->_L3_then_else_else_else_else_else_else_IfBlock2,
                  Header_In);
                /* IfBlock2:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M040#1)/ */
                C_header_to_M040_TM_RBC_conversions(
                  &outC->_L3_then_else_else_else_else_else_else_IfBlock2,
                  &outC->Context_C_header_to_M040_1);
                kcg_copy_M_040_T_TM_radio_messages(
                  &outC->_L1_then_else_else_else_else_else_else_IfBlock2,
                  &outC->Context_C_header_to_M040_1.message_out);
                /* IfBlock2:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H#1)/ */
                M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &outC->_L1_then_else_else_else_else_else_else_IfBlock2,
                  &outC->Context_M040_to_Radio_Track_Train_H_1);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &outC->_L2_then_else_else_else_else_else_else_IfBlock2,
                  &outC->Context_M040_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_6_header_sheet2_partial,
                  &outC->_L2_then_else_else_else_else_else_else_IfBlock2);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_14_header_sheet2_partial,
                  &_6_header_sheet2_partial);
              }
              else {
                outC->_1_else_clock_else_else_else_else_else_else_IfBlock2 =
                  outC->nid_message == kcg_lit_int32(41);
                /* IfBlock2:else:else:else:else:else:else:else: */
                if (outC->_1_else_clock_else_else_else_else_else_else_IfBlock2) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &outC->_L316_then_else_else_else_else_else_else_else_IfBlock2,
                    Header_In);
                  /* IfBlock2:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M041#1)/ */
                  C_header_to_M041_TM_RBC_conversions(
                    &outC->_L316_then_else_else_else_else_else_else_else_IfBlock2,
                    &outC->Context_C_header_to_M041_1);
                  kcg_copy_M_041_T_TM_radio_messages(
                    &outC->_L118_then_else_else_else_else_else_else_else_IfBlock2,
                    &outC->Context_C_header_to_M041_1.message_out);
                  /* IfBlock2:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H#1)/ */
                  M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &outC->_L118_then_else_else_else_else_else_else_else_IfBlock2,
                    &outC->Context_M041_to_Radio_Track_Train_H_1);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &outC->_L217_then_else_else_else_else_else_else_else_IfBlock2,
                    &outC->Context_M041_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_13_header_sheet2_partial,
                    &outC->_L217_then_else_else_else_else_else_else_else_IfBlock2);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_7_header_sheet2_partial,
                    &_13_header_sheet2_partial);
                }
                else {
                  outC->_3_else_clock_else_else_else_else_else_else_else_IfBlock2 =
                    outC->nid_message == kcg_lit_int32(43);
                  /* IfBlock2:else:else:else:else:else:else:else:else: */
                  if (outC->_3_else_clock_else_else_else_else_else_else_else_IfBlock2) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2,
                      Header_In);
                    /* IfBlock2:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M043#1)/ */
                    C_header_to_M043_TM_RBC_conversions(
                      &outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2,
                      &outC->Context_C_header_to_M043_1);
                    kcg_copy_M_043_T_TM_radio_messages(
                      &outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2,
                      &outC->Context_C_header_to_M043_1.message_out);
                    /* IfBlock2:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H#1)/ */
                    M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2,
                      &outC->Context_M043_to_Radio_Track_Train_H_1);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2,
                      &outC->Context_M043_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_8_header_sheet2_partial,
                      &outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_12_header_sheet2_partial,
                      &_8_header_sheet2_partial);
                  }
                  else {
                    outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock2 =
                      outC->nid_message == kcg_lit_int32(45);
                    /* IfBlock2:else:else:else:else:else:else:else:else:else: */
                    if (outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock2) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2,
                        Header_In);
                      /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M045#1)/ */
                      C_header_to_M045_TM_RBC_conversions(
                        &outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2,
                        &outC->Context_C_header_to_M045_1);
                      kcg_copy_M_045_T_TM_radio_messages(
                        &outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2,
                        &outC->Context_C_header_to_M045_1.message_out);
                      /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H#1)/ */
                      M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2,
                        &outC->Context_M045_to_Radio_Track_Train_H_1);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2,
                        &outC->Context_M045_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_11_header_sheet2_partial,
                        &outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_9_header_sheet2_partial,
                        &_11_header_sheet2_partial);
                    }
                    else {
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2,
                        (_4_Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_10_header_sheet2_partial,
                        &outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_9_header_sheet2_partial,
                        &_10_header_sheet2_partial);
                    }
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_12_header_sheet2_partial,
                      &_9_header_sheet2_partial);
                  }
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_7_header_sheet2_partial,
                    &_12_header_sheet2_partial);
                }
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_14_header_sheet2_partial,
                  &_7_header_sheet2_partial);
              }
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_5_header_sheet2_partial,
                &_14_header_sheet2_partial);
            }
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_16_header_sheet2_partial,
              &_5_header_sheet2_partial);
          }
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_3_header_sheet2_partial,
            &_16_header_sheet2_partial);
        }
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_18_header_sheet2_partial,
          &_3_header_sheet2_partial);
      }
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_1_header_sheet2_partial,
        &_18_header_sheet2_partial);
    }
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet2,
      &_1_header_sheet2_partial);
  }
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L35,
    &outC->header_sheet2);
  outC->IfBlock1_clock = outC->nid_message == kcg_lit_int32(2);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_then_IfBlock1,
      Header_In);
    /* IfBlock1:then:_L2=(TM_RBC_conversions::C_header_to_M002#1)/ */
    C_header_to_M002_TM_RBC_conversions(
      &outC->_L1_then_IfBlock1,
      &outC->Context_C_header_to_M002_1);
    kcg_copy_M_002_T_TM_radio_messages(
      &outC->_L2_then_IfBlock1,
      &outC->Context_C_header_to_M002_1.message_out);
    /* IfBlock1:then:_L3=(TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H#1)/ */
    M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
      &outC->_L2_then_IfBlock1,
      &outC->Context_M002_to_Radio_Track_Train_H_1);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->Context_M002_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &header_sheet1_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet1,
      &header_sheet1_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->nid_message == kcg_lit_int32(3);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
        &outC->_L1_then_else_IfBlock1,
        Header_In);
      /* IfBlock1:else:then:_L3=(TM_RBC_conversions::C_header_to_M003#1)/ */
      C_header_to_M003_TM_RBC_conversions(
        &outC->_L1_then_else_IfBlock1,
        &outC->Context_C_header_to_M003_1);
      kcg_copy_M_003_T_TM_radio_messages(
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_C_header_to_M003_1.message_out);
      /* IfBlock1:else:then:_L2=(TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H#4)/ */
      M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
        &outC->_L3_then_else_IfBlock1,
        &outC->Context_M003_to_Radio_Track_Train_H_4);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->Context_M003_to_Radio_Track_Train_H_4.Radio_Track_Train_Hd_out);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_38_header_sheet1_partial,
        &outC->_L2_then_else_IfBlock1);
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_20_header_sheet1_partial,
        &_38_header_sheet1_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->nid_message == kcg_lit_int32(6);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
          &outC->_L1_then_else_else_IfBlock1,
          Header_In);
        /* IfBlock1:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M006#1)/ */
        C_header_to_M006_TM_RBC_conversions(
          &outC->_L1_then_else_else_IfBlock1,
          &outC->Context_C_header_to_M006_1);
        kcg_copy_M_006_T_TM_radio_messages(
          &outC->_L3_then_else_else_IfBlock1,
          &outC->Context_C_header_to_M006_1.message_out);
        /* IfBlock1:else:else:then:_L2=(TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H#1)/ */
        M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
          &outC->_L3_then_else_else_IfBlock1,
          &outC->Context_M006_to_Radio_Track_Train_H_1);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &outC->_L2_then_else_else_IfBlock1,
          &outC->Context_M006_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_21_header_sheet1_partial,
          &outC->_L2_then_else_else_IfBlock1);
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_37_header_sheet1_partial,
          &_21_header_sheet1_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->nid_message == kcg_lit_int32(8);
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
            &outC->_L143_then_else_else_else_IfBlock1,
            Header_In);
          /* IfBlock1:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M008#1)/ */
          C_header_to_M008_TM_RBC_conversions(
            &outC->_L143_then_else_else_else_IfBlock1,
            &outC->Context_C_header_to_M008_1);
          kcg_copy_M_008_T_TM_radio_messages(
            &outC->_L341_then_else_else_else_IfBlock1,
            &outC->Context_C_header_to_M008_1.message_out);
          /* IfBlock1:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H#2)/ */
          M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
            &outC->_L341_then_else_else_else_IfBlock1,
            &outC->Context_M008_to_Radio_Track_Train_H_2);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &outC->_L242_then_else_else_else_IfBlock1,
            &outC->Context_M008_to_Radio_Track_Train_H_2.Radio_Track_Train_Hd_out);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_36_header_sheet1_partial,
            &outC->_L242_then_else_else_else_IfBlock1);
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_22_header_sheet1_partial,
            &_36_header_sheet1_partial);
        }
        else {
          outC->_10_else_clock_else_else_else_IfBlock1 = outC->nid_message ==
            kcg_lit_int32(9);
          /* IfBlock1:else:else:else:else: */
          if (outC->_10_else_clock_else_else_else_IfBlock1) {
            kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
              &outC->_L122_then_else_else_else_else_IfBlock1,
              Header_In);
            /* IfBlock1:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M009#1)/ */
            C_header_to_M009_TM_RBC_conversions(
              &outC->_L122_then_else_else_else_else_IfBlock1,
              &outC->Context_C_header_to_M009_1);
            kcg_copy_M_009_T_TM_radio_messages(
              &outC->_L324_then_else_else_else_else_IfBlock1,
              &outC->Context_C_header_to_M009_1.message_out);
            /* IfBlock1:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H#1)/ */
            M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
              &outC->_L324_then_else_else_else_else_IfBlock1,
              &outC->Context_M009_to_Radio_Track_Train_H_1);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &outC->_L223_then_else_else_else_else_IfBlock1,
              &outC->Context_M009_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_23_header_sheet1_partial,
              &outC->_L223_then_else_else_else_else_IfBlock1);
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_35_header_sheet1_partial,
              &_23_header_sheet1_partial);
          }
          else {
            outC->_5_else_clock_else_else_else_else_IfBlock1 =
              outC->nid_message == kcg_lit_int32(15);
            /* IfBlock1:else:else:else:else:else: */
            if (outC->_5_else_clock_else_else_else_else_IfBlock1) {
              kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                &outC->_L338_then_else_else_else_else_else_IfBlock1,
                Header_In);
              /* IfBlock1:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M015#1)/ */
              C_header_to_M015_TM_RBC_conversions(
                &outC->_L338_then_else_else_else_else_else_IfBlock1,
                &outC->Context_C_header_to_M015_1);
              kcg_copy_M_015_T_TM_radio_messages(
                &outC->_L140_then_else_else_else_else_else_IfBlock1,
                &outC->Context_C_header_to_M015_1.message_out);
              /* IfBlock1:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H#2)/ */
              M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                &outC->_L140_then_else_else_else_else_else_IfBlock1,
                &outC->Context_M015_to_Radio_Track_Train_H_2);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &outC->_L239_then_else_else_else_else_else_IfBlock1,
                &outC->Context_M015_to_Radio_Track_Train_H_2.Radio_Track_Train_Hd_out);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_34_header_sheet1_partial,
                &outC->_L239_then_else_else_else_else_else_IfBlock1);
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_24_header_sheet1_partial,
                &_34_header_sheet1_partial);
            }
            else {
              outC->_9_else_clock_else_else_else_else_else_IfBlock1 =
                outC->nid_message == kcg_lit_int32(16);
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->_9_else_clock_else_else_else_else_else_IfBlock1) {
                kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                  &outC->_L327_then_else_else_else_else_else_else_IfBlock1,
                  Header_In);
                /* IfBlock1:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M016#1)/ */
                C_header_to_M016_TM_RBC_conversions(
                  &outC->_L327_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_C_header_to_M016_1);
                kcg_copy_M_016_T_TM_radio_messages(
                  &outC->_L125_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_C_header_to_M016_1.message_out);
                /* IfBlock1:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H#2)/ */
                M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                  &outC->_L125_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_M016_to_Radio_Track_Train_H_2);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &outC->_L226_then_else_else_else_else_else_else_IfBlock1,
                  &outC->Context_M016_to_Radio_Track_Train_H_2.Radio_Track_Train_Hd_out);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_25_header_sheet1_partial,
                  &outC->_L226_then_else_else_else_else_else_else_IfBlock1);
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_33_header_sheet1_partial,
                  &_25_header_sheet1_partial);
              }
              else {
                outC->_6_else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->nid_message == kcg_lit_int32(18);
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->_6_else_clock_else_else_else_else_else_else_IfBlock1) {
                  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                    &outC->_L435_then_else_else_else_else_else_else_else_IfBlock1,
                    Header_In);
                  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M018#1)/ */
                  C_header_to_M018_TM_RBC_conversions(
                    &outC->_L435_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_C_header_to_M018_1);
                  kcg_copy_M_018_T_TM_radio_messages(
                    &outC->_L336_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_C_header_to_M018_1.message_out);
                  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H#2)/ */
                  M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                    &outC->_L336_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_M018_to_Radio_Track_Train_H_2);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &outC->_L237_then_else_else_else_else_else_else_else_IfBlock1,
                    &outC->Context_M018_to_Radio_Track_Train_H_2.Radio_Track_Train_Hd_out);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_32_header_sheet1_partial,
                    &outC->_L237_then_else_else_else_else_else_else_else_IfBlock1);
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_26_header_sheet1_partial,
                    &_32_header_sheet1_partial);
                }
                else {
                  outC->_8_else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->nid_message == kcg_lit_int32(24);
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->_8_else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                      &outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1,
                      Header_In);
                    /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M024#1)/ */
                    C_header_to_M024_TM_RBC_conversions(
                      &outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_C_header_to_M024_1);
                    kcg_copy_M_024_T_TM_radio_messages(
                      &outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_C_header_to_M024_1.message_out);
                    /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H#9)/ */
                    M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                      &outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_M024_to_Radio_Track_Train_H_9);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1,
                      &outC->Context_M024_to_Radio_Track_Train_H_9.Radio_Track_Train_Hd_out);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_27_header_sheet1_partial,
                      &outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1);
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_31_header_sheet1_partial,
                      &_27_header_sheet1_partial);
                  }
                  else {
                    outC->_7_else_clock_else_else_else_else_else_else_else_else_IfBlock1 =
                      outC->nid_message == kcg_lit_int32(27);
                    /* IfBlock1:else:else:else:else:else:else:else:else:else: */
                    if (outC->_7_else_clock_else_else_else_else_else_else_else_else_IfBlock1) {
                      kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
                        &outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        Header_In);
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M027#1)/ */
                      C_header_to_M027_TM_RBC_conversions(
                        &outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        &outC->Context_C_header_to_M027_1);
                      kcg_copy_M_027_T_TM_radio_messages(
                        &outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        &outC->Context_C_header_to_M027_1.message_out);
                      /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H#1)/ */
                      M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
                        &outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        &outC->Context_M027_to_Radio_Track_Train_H_1);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1,
                        &outC->Context_M027_to_Radio_Track_Train_H_1.Radio_Track_Train_Hd_out);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_30_header_sheet1_partial,
                        &outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_28_header_sheet1_partial,
                        &_30_header_sheet1_partial);
                    }
                    else {
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1,
                        (_4_Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
                          &default_header_TM_RBC_conversions_legacy);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_29_header_sheet1_partial,
                        &outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1);
                      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                        &_28_header_sheet1_partial,
                        &_29_header_sheet1_partial);
                    }
                    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                      &_31_header_sheet1_partial,
                      &_28_header_sheet1_partial);
                  }
                  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                    &_26_header_sheet1_partial,
                    &_31_header_sheet1_partial);
                }
                kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                  &_33_header_sheet1_partial,
                  &_26_header_sheet1_partial);
              }
              kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
                &_24_header_sheet1_partial,
                &_33_header_sheet1_partial);
            }
            kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
              &_35_header_sheet1_partial,
              &_24_header_sheet1_partial);
          }
          kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_22_header_sheet1_partial,
            &_35_header_sheet1_partial);
        }
        kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_37_header_sheet1_partial,
          &_22_header_sheet1_partial);
      }
      kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &_20_header_sheet1_partial,
        &_37_header_sheet1_partial);
    }
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->header_sheet1,
      &_20_header_sheet1_partial);
  }
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L34,
    &outC->header_sheet1);
  outC->_L38 = kcg_lit_int32(27);
  outC->_L36 = outC->nid_message;
  outC->_L37 = outC->_L36 <= outC->_L38;
  /* _L39= */
  if (outC->_L37) {
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&outC->_L39, &outC->_L34);
  }
  else {
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&outC->_L39, &outC->_L35);
  }
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Header_Out,
    &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void compressed_to_Radio_Track_init_TM_RBC_conversions_legacy(
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC)
{
  outC->_L39.radioDevice = kcg_lit_int32(0);
  outC->_L39.receivedSystemTime = kcg_lit_int32(0);
  outC->_L39.nid_message = kcg_lit_int32(0);
  outC->_L39.t_train = kcg_lit_int32(0);
  outC->_L39.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L39.nid_lrbg = kcg_lit_int32(0);
  outC->_L39.t_train_reference = kcg_lit_int32(0);
  outC->_L39.nid_em = kcg_lit_int32(0);
  outC->_L39.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39.d_sr = kcg_lit_int32(0);
  outC->_L39.t_sh_rqst = kcg_lit_int32(0);
  outC->_L39.d_ref = kcg_lit_int32(0);
  outC->_L39.q_dir = Q_DIR_Reverse;
  outC->_L39.d_emergencystop = kcg_lit_int32(0);
  outC->_L39.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L35.radioDevice = kcg_lit_int32(0);
  outC->_L35.receivedSystemTime = kcg_lit_int32(0);
  outC->_L35.nid_message = kcg_lit_int32(0);
  outC->_L35.t_train = kcg_lit_int32(0);
  outC->_L35.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L35.nid_lrbg = kcg_lit_int32(0);
  outC->_L35.t_train_reference = kcg_lit_int32(0);
  outC->_L35.nid_em = kcg_lit_int32(0);
  outC->_L35.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.d_sr = kcg_lit_int32(0);
  outC->_L35.t_sh_rqst = kcg_lit_int32(0);
  outC->_L35.d_ref = kcg_lit_int32(0);
  outC->_L35.q_dir = Q_DIR_Reverse;
  outC->_L35.d_emergencystop = kcg_lit_int32(0);
  outC->_L35.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.radioDevice = kcg_lit_int32(0);
  outC->_L34.receivedSystemTime = kcg_lit_int32(0);
  outC->_L34.nid_message = kcg_lit_int32(0);
  outC->_L34.t_train = kcg_lit_int32(0);
  outC->_L34.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L34.nid_lrbg = kcg_lit_int32(0);
  outC->_L34.t_train_reference = kcg_lit_int32(0);
  outC->_L34.nid_em = kcg_lit_int32(0);
  outC->_L34.q_scale = Q_SCALE_10_cm_scale;
  outC->_L34.d_sr = kcg_lit_int32(0);
  outC->_L34.t_sh_rqst = kcg_lit_int32(0);
  outC->_L34.d_ref = kcg_lit_int32(0);
  outC->_L34.q_dir = Q_DIR_Reverse;
  outC->_L34.d_emergencystop = kcg_lit_int32(0);
  outC->_L34.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.field1 = kcg_lit_int32(0);
  outC->_L1.field2 = kcg_lit_int32(0);
  outC->_L1.field3 = kcg_lit_int32(0);
  outC->_L1.field4 = kcg_lit_int32(0);
  outC->_L1.field5 = kcg_lit_int32(0);
  outC->_L1.field6 = kcg_lit_int32(0);
  outC->_L1.field7 = kcg_lit_int32(0);
  outC->_L1.field8 = kcg_lit_int32(0);
  outC->header_sheet2.radioDevice = kcg_lit_int32(0);
  outC->header_sheet2.receivedSystemTime = kcg_lit_int32(0);
  outC->header_sheet2.nid_message = kcg_lit_int32(0);
  outC->header_sheet2.t_train = kcg_lit_int32(0);
  outC->header_sheet2.m_ack = M_ACK_No_acknowledgement_required;
  outC->header_sheet2.nid_lrbg = kcg_lit_int32(0);
  outC->header_sheet2.t_train_reference = kcg_lit_int32(0);
  outC->header_sheet2.nid_em = kcg_lit_int32(0);
  outC->header_sheet2.q_scale = Q_SCALE_10_cm_scale;
  outC->header_sheet2.d_sr = kcg_lit_int32(0);
  outC->header_sheet2.t_sh_rqst = kcg_lit_int32(0);
  outC->header_sheet2.d_ref = kcg_lit_int32(0);
  outC->header_sheet2.q_dir = Q_DIR_Reverse;
  outC->header_sheet2.d_emergencystop = kcg_lit_int32(0);
  outC->header_sheet2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->header_sheet1.radioDevice = kcg_lit_int32(0);
  outC->header_sheet1.receivedSystemTime = kcg_lit_int32(0);
  outC->header_sheet1.nid_message = kcg_lit_int32(0);
  outC->header_sheet1.t_train = kcg_lit_int32(0);
  outC->header_sheet1.m_ack = M_ACK_No_acknowledgement_required;
  outC->header_sheet1.nid_lrbg = kcg_lit_int32(0);
  outC->header_sheet1.t_train_reference = kcg_lit_int32(0);
  outC->header_sheet1.nid_em = kcg_lit_int32(0);
  outC->header_sheet1.q_scale = Q_SCALE_10_cm_scale;
  outC->header_sheet1.d_sr = kcg_lit_int32(0);
  outC->header_sheet1.t_sh_rqst = kcg_lit_int32(0);
  outC->header_sheet1.d_ref = kcg_lit_int32(0);
  outC->header_sheet1.q_dir = Q_DIR_Reverse;
  outC->header_sheet1.d_emergencystop = kcg_lit_int32(0);
  outC->header_sheet1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->nid_message = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->_L1_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.t_train_reference = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_IfBlock1.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L143_then_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L143_then_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L143_then_else_else_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.radioDevice = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L242_then_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.t_train_reference = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L242_then_else_else_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L242_then_else_else_else_IfBlock1.d_emergencystop = kcg_lit_int32(0);
  outC->_L242_then_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L341_then_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L341_then_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L341_then_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L341_then_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L341_then_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L341_then_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L341_then_else_else_else_IfBlock1.t_train_received = kcg_lit_int32(0);
  outC->_10_else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L140_then_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L140_then_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L140_then_else_else_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L140_then_else_else_else_else_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L140_then_else_else_else_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L140_then_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L239_then_else_else_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L239_then_else_else_else_else_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L239_then_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L239_then_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L338_then_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L338_then_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L338_then_else_else_else_else_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_9_else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L237_then_else_else_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L336_then_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field1 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field2 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field3 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field4 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field5 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field6 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field7 =
    kcg_lit_int32(0);
  outC->_L435_then_else_else_else_else_else_else_else_IfBlock1.field8 =
    kcg_lit_int32(0);
  outC->_8_else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field1 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field2 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field3 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field4 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field5 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field6 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field7 =
    kcg_lit_int32(0);
  outC->_L134_then_else_else_else_else_else_else_else_else_else_IfBlock1.field8 =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L233_then_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L332_then_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_SH_request =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L131_else_else_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_7_else_clock_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field1 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field2 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field3 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field4 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field5 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field6 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field7 =
    kcg_lit_int32(0);
  outC->_L330_then_else_else_else_else_else_else_else_else_IfBlock1.field8 =
    kcg_lit_int32(0);
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.valid =
    kcg_true;
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L229_then_else_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.d_sr =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.d_ref =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L128_then_else_else_else_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_6_else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field1 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field2 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field3 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field4 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field5 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field6 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field7 =
    kcg_lit_int32(0);
  outC->_L327_then_else_else_else_else_else_else_IfBlock1.field8 =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.radioDevice =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.d_ref = kcg_lit_int32(
      0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L226_then_else_else_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.nid_message =
    kcg_lit_int32(0);
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.l_message =
    kcg_lit_int32(0);
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.t_train =
    kcg_lit_int32(0);
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L125_then_else_else_else_else_else_else_IfBlock1.nid_em =
    kcg_lit_int32(0);
  outC->_5_else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L324_then_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L324_then_else_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L324_then_else_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L324_then_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L324_then_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L324_then_else_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.radioDevice = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L223_then_else_else_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.t_train_reference =
    kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L223_then_else_else_else_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L223_then_else_else_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L223_then_else_else_else_else_IfBlock1.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L223_then_else_else_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L122_then_else_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L122_then_else_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L122_then_else_else_else_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L3_then_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.t_train_reference = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_else_IfBlock1.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.radioDevice = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.t_train_reference = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.nid_em = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock1.d_sr = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.d_ref = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L3_then_IfBlock1.d_emergencystop = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_else_IfBlock2.valid = kcg_true;
  outC->_L2_then_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_IfBlock2.radioDevice = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.t_train_reference = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L3_then_else_IfBlock2.d_emergencystop = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_then_else_IfBlock2.valid = kcg_true;
  outC->_L4_then_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock2 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L1_then_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.t_train_reference = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_else_else_IfBlock2.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L3_then_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L3_then_else_else_else_IfBlock2.d_tafdisplay = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_IfBlock2.l_tafdisplay = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock2 = kcg_true;
  outC->_L121_then_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L121_then_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L121_then_else_else_else_else_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L220_then_else_else_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L220_then_else_else_else_else_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L220_then_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L220_then_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L319_then_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L319_then_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L319_then_else_else_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L319_then_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L319_then_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L319_then_else_else_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_4_else_clock_else_else_else_else_else_IfBlock2 = kcg_true;
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L118_then_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.nid_em =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.d_sr =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.d_ref =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.q_dir =
    Q_DIR_Reverse;
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L217_then_else_else_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field1 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field2 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field3 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field4 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field5 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field6 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field7 =
    kcg_lit_int32(0);
  outC->_L316_then_else_else_else_else_else_else_else_IfBlock2.field8 =
    kcg_lit_int32(0);
  outC->_3_else_clock_else_else_else_else_else_else_else_IfBlock2 = kcg_true;
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_em =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.d_sr =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.d_ref =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.q_dir =
    Q_DIR_Reverse;
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L115_then_else_else_else_else_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.valid =
    kcg_true;
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L214_then_else_else_else_else_else_else_else_else_else_IfBlock2.q_orientation =
    Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction;
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.valid =
    kcg_true;
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field1 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field2 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field3 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field4 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field5 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field6 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field7 =
    kcg_lit_int32(0);
  outC->_L313_then_else_else_else_else_else_else_else_else_else_IfBlock2.field8 =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.nid_em =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.d_sr =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.d_ref =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.q_dir =
    Q_DIR_Reverse;
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_2_else_clock_else_else_else_else_else_else_else_else_IfBlock2 = kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.valid =
    kcg_true;
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field1 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field2 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field3 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field4 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field5 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field6 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field7 =
    kcg_lit_int32(0);
  outC->_L4_then_else_else_else_else_else_else_else_else_IfBlock2.field8 =
    kcg_lit_int32(0);
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.valid =
    kcg_true;
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L312_then_else_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.t_train =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.nid_em =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.d_sr =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.d_ref =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.q_dir =
    Q_DIR_Reverse;
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L211_then_else_else_else_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_1_else_clock_else_else_else_else_else_else_IfBlock2 = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(
      0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_else_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.radioDevice =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(
      0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.nid_message =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.l_message =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(
      0);
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_else_else_else_else_else_else_IfBlock2.nid_lrbg =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_IfBlock2 = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.t_train_reference = kcg_lit_int32(
      0);
  outC->_L2_then_else_else_else_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_else_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_else_else_else_IfBlock2.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_else_else_else_else_IfBlock2.valid = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock2 = kcg_true;
  outC->_L3_then_else_else_IfBlock2.valid = kcg_true;
  outC->_L3_then_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_else_else_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.t_train_reference = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_else_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L2_then_else_else_IfBlock2.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_else_else_IfBlock2.valid = kcg_true;
  outC->_L1_then_else_else_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L1_then_else_else_IfBlock2.field8 = kcg_lit_int32(0);
  outC->else_clock_IfBlock2 = kcg_true;
  outC->_L1_then_IfBlock2.valid = kcg_true;
  outC->_L1_then_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field2 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field3 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field4 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field5 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field6 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field7 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2.field8 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock2.valid = kcg_true;
  outC->_L2_then_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock2.l_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock2.t_train_SH_request = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.radioDevice = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.receivedSystemTime = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.nid_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.t_train = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_IfBlock2.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.t_train_reference = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.nid_em = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock2.d_sr = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.t_sh_rqst = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.d_ref = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.q_dir = Q_DIR_Reverse;
  outC->_L3_then_IfBlock2.d_emergencystop = kcg_lit_int32(0);
  outC->_L3_then_IfBlock2.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Header_Out.radioDevice = kcg_lit_int32(0);
  outC->Header_Out.receivedSystemTime = kcg_lit_int32(0);
  outC->Header_Out.nid_message = kcg_lit_int32(0);
  outC->Header_Out.t_train = kcg_lit_int32(0);
  outC->Header_Out.m_ack = M_ACK_No_acknowledgement_required;
  outC->Header_Out.nid_lrbg = kcg_lit_int32(0);
  outC->Header_Out.t_train_reference = kcg_lit_int32(0);
  outC->Header_Out.nid_em = kcg_lit_int32(0);
  outC->Header_Out.q_scale = Q_SCALE_10_cm_scale;
  outC->Header_Out.d_sr = kcg_lit_int32(0);
  outC->Header_Out.t_sh_rqst = kcg_lit_int32(0);
  outC->Header_Out.d_ref = kcg_lit_int32(0);
  outC->Header_Out.q_dir = Q_DIR_Reverse;
  outC->Header_Out.d_emergencystop = kcg_lit_int32(0);
  outC->Header_Out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* IfBlock1:then:_L3=(TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H#1)/ */
  M002_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M002_to_Radio_Track_Train_H_1);
  /* IfBlock1:then:_L2=(TM_RBC_conversions::C_header_to_M002#1)/ */
  C_header_to_M002_init_TM_RBC_conversions(&outC->Context_C_header_to_M002_1);
  /* IfBlock1:else:then:_L2=(TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H#4)/ */
  M003_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M003_to_Radio_Track_Train_H_4);
  /* IfBlock1:else:then:_L3=(TM_RBC_conversions::C_header_to_M003#1)/ */
  C_header_to_M003_init_TM_RBC_conversions(&outC->Context_C_header_to_M003_1);
  /* IfBlock1:else:else:then:_L2=(TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H#1)/ */
  M006_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M006_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M006#1)/ */
  C_header_to_M006_init_TM_RBC_conversions(&outC->Context_C_header_to_M006_1);
  /* IfBlock1:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H#2)/ */
  M008_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M008_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M008#1)/ */
  C_header_to_M008_init_TM_RBC_conversions(&outC->Context_C_header_to_M008_1);
  /* IfBlock1:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H#1)/ */
  M009_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M009_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M009#1)/ */
  C_header_to_M009_init_TM_RBC_conversions(&outC->Context_C_header_to_M009_1);
  /* IfBlock1:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H#2)/ */
  M015_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M015_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M015#1)/ */
  C_header_to_M015_init_TM_RBC_conversions(&outC->Context_C_header_to_M015_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H#2)/ */
  M016_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M016_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M016#1)/ */
  C_header_to_M016_init_TM_RBC_conversions(&outC->Context_C_header_to_M016_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H#2)/ */
  M018_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M018_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M018#1)/ */
  C_header_to_M018_init_TM_RBC_conversions(&outC->Context_C_header_to_M018_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H#9)/ */
  M024_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M024_to_Radio_Track_Train_H_9);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M024#1)/ */
  C_header_to_M024_init_TM_RBC_conversions(&outC->Context_C_header_to_M024_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H#1)/ */
  M027_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M027_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M027#1)/ */
  C_header_to_M027_init_TM_RBC_conversions(&outC->Context_C_header_to_M027_1);
  /* IfBlock2:then:_L3=(TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H#1)/ */
  M028_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M028_to_Radio_Track_Train_H_1);
  /* IfBlock2:then:_L2=(TM_RBC_conversions::C_header_to_M028#1)/ */
  C_header_to_M028_init_TM_RBC_conversions(&outC->Context_C_header_to_M028_1);
  /* IfBlock2:else:then:_L3=(TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H#2)/ */
  M032_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M032_to_Radio_Track_Train_H_2);
  /* IfBlock2:else:then:_L2=(TM_RBC_conversions::C_header_to_M032#1)/ */
  C_header_to_M032_init_TM_RBC_conversions(&outC->Context_C_header_to_M032_1);
  /* IfBlock2:else:else:then:_L2=(TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H#1)/ */
  M033_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M033_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M033#1)/ */
  C_header_to_M033_init_TM_RBC_conversions(&outC->Context_C_header_to_M033_1);
  /* IfBlock2:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H#1)/ */
  M034_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M034_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M034#1)/ */
  C_header_to_M034_init_TM_RBC_conversions(&outC->Context_C_header_to_M034_1);
  /* IfBlock2:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H#1)/ */
  M038_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M038_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M038#1)/ */
  C_header_to_M038_init_TM_RBC_conversions(&outC->Context_C_header_to_M038_1);
  /* IfBlock2:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H#1)/ */
  M039_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M039_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M039#1)/ */
  C_header_to_M039_init_TM_RBC_conversions(&outC->Context_C_header_to_M039_1);
  /* IfBlock2:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H#1)/ */
  M040_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M040_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M040#1)/ */
  C_header_to_M040_init_TM_RBC_conversions(&outC->Context_C_header_to_M040_1);
  /* IfBlock2:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H#1)/ */
  M041_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M041_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M041#1)/ */
  C_header_to_M041_init_TM_RBC_conversions(&outC->Context_C_header_to_M041_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H#1)/ */
  M043_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M043_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M043#1)/ */
  C_header_to_M043_init_TM_RBC_conversions(&outC->Context_C_header_to_M043_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H#1)/ */
  M045_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_M045_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M045#1)/ */
  C_header_to_M045_init_TM_RBC_conversions(&outC->Context_C_header_to_M045_1);
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void compressed_to_Radio_Track_reset_TM_RBC_conversions_legacy(
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC)
{
  /* IfBlock1:then:_L3=(TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H#1)/ */
  M002_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M002_to_Radio_Track_Train_H_1);
  /* IfBlock1:then:_L2=(TM_RBC_conversions::C_header_to_M002#1)/ */
  C_header_to_M002_reset_TM_RBC_conversions(&outC->Context_C_header_to_M002_1);
  /* IfBlock1:else:then:_L2=(TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H#4)/ */
  M003_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M003_to_Radio_Track_Train_H_4);
  /* IfBlock1:else:then:_L3=(TM_RBC_conversions::C_header_to_M003#1)/ */
  C_header_to_M003_reset_TM_RBC_conversions(&outC->Context_C_header_to_M003_1);
  /* IfBlock1:else:else:then:_L2=(TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H#1)/ */
  M006_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M006_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M006#1)/ */
  C_header_to_M006_reset_TM_RBC_conversions(&outC->Context_C_header_to_M006_1);
  /* IfBlock1:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H#2)/ */
  M008_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M008_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M008#1)/ */
  C_header_to_M008_reset_TM_RBC_conversions(&outC->Context_C_header_to_M008_1);
  /* IfBlock1:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H#1)/ */
  M009_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M009_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M009#1)/ */
  C_header_to_M009_reset_TM_RBC_conversions(&outC->Context_C_header_to_M009_1);
  /* IfBlock1:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H#2)/ */
  M015_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M015_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M015#1)/ */
  C_header_to_M015_reset_TM_RBC_conversions(&outC->Context_C_header_to_M015_1);
  /* IfBlock1:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H#2)/ */
  M016_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M016_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M016#1)/ */
  C_header_to_M016_reset_TM_RBC_conversions(&outC->Context_C_header_to_M016_1);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H#2)/ */
  M018_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M018_to_Radio_Track_Train_H_2);
  /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M018#1)/ */
  C_header_to_M018_reset_TM_RBC_conversions(&outC->Context_C_header_to_M018_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H#9)/ */
  M024_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M024_to_Radio_Track_Train_H_9);
  /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M024#1)/ */
  C_header_to_M024_reset_TM_RBC_conversions(&outC->Context_C_header_to_M024_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H#1)/ */
  M027_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M027_to_Radio_Track_Train_H_1);
  /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M027#1)/ */
  C_header_to_M027_reset_TM_RBC_conversions(&outC->Context_C_header_to_M027_1);
  /* IfBlock2:then:_L3=(TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H#1)/ */
  M028_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M028_to_Radio_Track_Train_H_1);
  /* IfBlock2:then:_L2=(TM_RBC_conversions::C_header_to_M028#1)/ */
  C_header_to_M028_reset_TM_RBC_conversions(&outC->Context_C_header_to_M028_1);
  /* IfBlock2:else:then:_L3=(TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H#2)/ */
  M032_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M032_to_Radio_Track_Train_H_2);
  /* IfBlock2:else:then:_L2=(TM_RBC_conversions::C_header_to_M032#1)/ */
  C_header_to_M032_reset_TM_RBC_conversions(&outC->Context_C_header_to_M032_1);
  /* IfBlock2:else:else:then:_L2=(TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H#1)/ */
  M033_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M033_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M033#1)/ */
  C_header_to_M033_reset_TM_RBC_conversions(&outC->Context_C_header_to_M033_1);
  /* IfBlock2:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H#1)/ */
  M034_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M034_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M034#1)/ */
  C_header_to_M034_reset_TM_RBC_conversions(&outC->Context_C_header_to_M034_1);
  /* IfBlock2:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H#1)/ */
  M038_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M038_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M038#1)/ */
  C_header_to_M038_reset_TM_RBC_conversions(&outC->Context_C_header_to_M038_1);
  /* IfBlock2:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H#1)/ */
  M039_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M039_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M039#1)/ */
  C_header_to_M039_reset_TM_RBC_conversions(&outC->Context_C_header_to_M039_1);
  /* IfBlock2:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H#1)/ */
  M040_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M040_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M040#1)/ */
  C_header_to_M040_reset_TM_RBC_conversions(&outC->Context_C_header_to_M040_1);
  /* IfBlock2:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H#1)/ */
  M041_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M041_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M041#1)/ */
  C_header_to_M041_reset_TM_RBC_conversions(&outC->Context_C_header_to_M041_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H#1)/ */
  M043_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M043_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M043#1)/ */
  C_header_to_M043_reset_TM_RBC_conversions(&outC->Context_C_header_to_M043_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H#1)/ */
  M045_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_M045_to_Radio_Track_Train_H_1);
  /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M045#1)/ */
  C_header_to_M045_reset_TM_RBC_conversions(&outC->Context_C_header_to_M045_1);
  /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** compressed_to_Radio_Track_TM_RBC_conversions_legacy.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

