/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _compressed_to_Radio_Track_TM_RBC_conversions_legacy_H_
#define _compressed_to_Radio_Track_TM_RBC_conversions_legacy_H_

#include "kcg_types.h"
#include "M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M028_TM_RBC_conversions.h"
#include "M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M032_TM_RBC_conversions.h"
#include "C_header_to_M033_TM_RBC_conversions.h"
#include "M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M034_TM_RBC_conversions.h"
#include "M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M038_TM_RBC_conversions.h"
#include "M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M039_TM_RBC_conversions.h"
#include "M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M040_TM_RBC_conversions.h"
#include "M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M041_TM_RBC_conversions.h"
#include "C_header_to_M043_TM_RBC_conversions.h"
#include "M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M045_TM_RBC_conversions.h"
#include "M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M002_TM_RBC_conversions.h"
#include "C_header_to_M003_TM_RBC_conversions.h"
#include "M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M006_TM_RBC_conversions.h"
#include "M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M008_TM_RBC_conversions.h"
#include "M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M009_TM_RBC_conversions.h"
#include "M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M015_TM_RBC_conversions.h"
#include "M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M016_TM_RBC_conversions.h"
#include "C_header_to_M018_TM_RBC_conversions.h"
#include "M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M024_TM_RBC_conversions.h"
#include "M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "C_header_to_M027_TM_RBC_conversions.h"
#include "M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* Header_Out/ */ Header_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:then:_L3=(TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H#1)/ */ Context_M002_to_Radio_Track_Train_H_1;
  outC_C_header_to_M002_TM_RBC_conversions /* IfBlock1:then:_L2=(TM_RBC_conversions::C_header_to_M002#1)/ */ Context_C_header_to_M002_1;
  outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:then:_L2=(TM_RBC_conversions_legacy::M003_to_Radio_Track_Train_H#4)/ */ Context_M003_to_Radio_Track_Train_H_4;
  outC_C_header_to_M003_TM_RBC_conversions /* IfBlock1:else:then:_L3=(TM_RBC_conversions::C_header_to_M003#1)/ */ Context_C_header_to_M003_1;
  outC_M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:then:_L2=(TM_RBC_conversions_legacy::M006_to_Radio_Track_Train_H#1)/ */ Context_M006_to_Radio_Track_Train_H_1;
  outC_C_header_to_M006_TM_RBC_conversions /* IfBlock1:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M006#1)/ */ Context_C_header_to_M006_1;
  outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M008_to_Radio_Track_Train_H#2)/ */ Context_M008_to_Radio_Track_Train_H_2;
  outC_C_header_to_M008_TM_RBC_conversions /* IfBlock1:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M008#1)/ */ Context_C_header_to_M008_1;
  outC_M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M009_to_Radio_Track_Train_H#1)/ */ Context_M009_to_Radio_Track_Train_H_1;
  outC_C_header_to_M009_TM_RBC_conversions /* IfBlock1:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M009#1)/ */ Context_C_header_to_M009_1;
  outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H#2)/ */ Context_M015_to_Radio_Track_Train_H_2;
  outC_C_header_to_M015_TM_RBC_conversions /* IfBlock1:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M015#1)/ */ Context_C_header_to_M015_1;
  outC_M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H#2)/ */ Context_M016_to_Radio_Track_Train_H_2;
  outC_C_header_to_M016_TM_RBC_conversions /* IfBlock1:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M016#1)/ */ Context_C_header_to_M016_1;
  outC_M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M018_to_Radio_Track_Train_H#2)/ */ Context_M018_to_Radio_Track_Train_H_2;
  outC_C_header_to_M018_TM_RBC_conversions /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M018#1)/ */ Context_C_header_to_M018_1;
  outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M024_to_Radio_Track_Train_H#9)/ */ Context_M024_to_Radio_Track_Train_H_9;
  outC_C_header_to_M024_TM_RBC_conversions /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M024#1)/ */ Context_C_header_to_M024_1;
  outC_M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M027_to_Radio_Track_Train_H#1)/ */ Context_M027_to_Radio_Track_Train_H_1;
  outC_C_header_to_M027_TM_RBC_conversions /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M027#1)/ */ Context_C_header_to_M027_1;
  outC_M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:then:_L3=(TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H#1)/ */ Context_M028_to_Radio_Track_Train_H_1;
  outC_C_header_to_M028_TM_RBC_conversions /* IfBlock2:then:_L2=(TM_RBC_conversions::C_header_to_M028#1)/ */ Context_C_header_to_M028_1;
  outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:then:_L3=(TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H#2)/ */ Context_M032_to_Radio_Track_Train_H_2;
  outC_C_header_to_M032_TM_RBC_conversions /* IfBlock2:else:then:_L2=(TM_RBC_conversions::C_header_to_M032#1)/ */ Context_C_header_to_M032_1;
  outC_M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:then:_L2=(TM_RBC_conversions_legacy::M033_to_Radio_Track_Train_H#1)/ */ Context_M033_to_Radio_Track_Train_H_1;
  outC_C_header_to_M033_TM_RBC_conversions /* IfBlock2:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M033#1)/ */ Context_C_header_to_M033_1;
  outC_M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M034_to_Radio_Track_Train_H#1)/ */ Context_M034_to_Radio_Track_Train_H_1;
  outC_C_header_to_M034_TM_RBC_conversions /* IfBlock2:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M034#1)/ */ Context_C_header_to_M034_1;
  outC_M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M038_to_Radio_Track_Train_H#1)/ */ Context_M038_to_Radio_Track_Train_H_1;
  outC_C_header_to_M038_TM_RBC_conversions /* IfBlock2:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M038#1)/ */ Context_C_header_to_M038_1;
  outC_M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M039_to_Radio_Track_Train_H#1)/ */ Context_M039_to_Radio_Track_Train_H_1;
  outC_C_header_to_M039_TM_RBC_conversions /* IfBlock2:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M039#1)/ */ Context_C_header_to_M039_1;
  outC_M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H#1)/ */ Context_M040_to_Radio_Track_Train_H_1;
  outC_C_header_to_M040_TM_RBC_conversions /* IfBlock2:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M040#1)/ */ Context_C_header_to_M040_1;
  outC_M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H#1)/ */ Context_M041_to_Radio_Track_Train_H_1;
  outC_C_header_to_M041_TM_RBC_conversions /* IfBlock2:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions::C_header_to_M041#1)/ */ Context_C_header_to_M041_1;
  outC_M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions_legacy::M043_to_Radio_Track_Train_H#1)/ */ Context_M043_to_Radio_Track_Train_H_1;
  outC_C_header_to_M043_TM_RBC_conversions /* IfBlock2:else:else:else:else:else:else:else:else:then:_L3=(TM_RBC_conversions::C_header_to_M043#1)/ */ Context_C_header_to_M043_1;
  outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L1=(TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H#1)/ */ Context_M045_to_Radio_Track_Train_H_1;
  outC_C_header_to_M045_TM_RBC_conversions /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L2=(TM_RBC_conversions::C_header_to_M045#1)/ */ Context_C_header_to_M045_1;
  outC_CAST_NID_MESSAGE_to_int_TM_conversions /* _L33=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */ Context_CAST_NID_MESSAGE_to_int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock2:else: */ else_clock_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else: */ else_clock_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else:else:else:else: */ _1_else_clock_else_else_else_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else:else:else:else:else:else: */ _2_else_clock_else_else_else_else_else_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else:else:else:else:else: */ _3_else_clock_else_else_else_else_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else:else:else: */ _4_else_clock_else_else_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else:else:else: */ else_clock_else_else_else_IfBlock2;
  kcg_bool /* IfBlock2:else:else: */ else_clock_else_IfBlock2;
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ _5_else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ _6_else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else: */ _7_else_clock_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ _8_else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ _9_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ _10_else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:then:_L3/ */ _L3_then_IfBlock2;
  M_028_T_TM_radio_messages /* IfBlock2:then:_L2/ */ _L2_then_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:then:_L1/ */ _L1_then_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:then:_L1/ */ _L1_then_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:then:_L2/ */ _L2_then_else_else_IfBlock2;
  M_033_T_TM_radio_messages /* IfBlock2:else:else:then:_L3/ */ _L3_then_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock2;
  M_038_T_TM_radio_messages /* IfBlock2:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_IfBlock2;
  M_040_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:else:else:else:then:_L2/ */ _L211_then_else_else_else_else_else_else_else_else_IfBlock2;
  M_043_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:else:then:_L3/ */ _L312_then_else_else_else_else_else_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:else:then:_L4/ */ _L4_then_else_else_else_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L313_then_else_else_else_else_else_else_else_else_else_IfBlock2;
  M_045_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L214_then_else_else_else_else_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L115_then_else_else_else_else_else_else_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:then:_L3/ */ _L316_then_else_else_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:else:else:then:_L2/ */ _L217_then_else_else_else_else_else_else_else_IfBlock2;
  M_041_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:else:else:then:_L1/ */ _L118_then_else_else_else_else_else_else_else_IfBlock2;
  M_039_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:then:_L3/ */ _L319_then_else_else_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:else:else:then:_L2/ */ _L220_then_else_else_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:else:else:then:_L1/ */ _L121_then_else_else_else_else_else_IfBlock2;
  M_034_T_TM_radio_messages /* IfBlock2:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock2;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock2:else:then:_L4/ */ _L4_then_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock2:else:then:_L3/ */ _L3_then_else_IfBlock2;
  M_032_T_TM_radio_messages /* IfBlock2:else:then:_L2/ */ _L2_then_else_IfBlock2;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  M_002_T_TM_radio_messages /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  M_006_T_TM_radio_messages /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:then:_L1/ */ _L122_then_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:then:_L2/ */ _L223_then_else_else_else_else_IfBlock1;
  M_009_T_TM_radio_messages /* IfBlock1:else:else:else:else:then:_L3/ */ _L324_then_else_else_else_else_IfBlock1;
  M_016_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L125_then_else_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L226_then_else_else_else_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:then:_L3/ */ _L327_then_else_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L128_then_else_else_else_else_else_else_else_else_IfBlock1;
  M_024_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2/ */ _L229_then_else_else_else_else_else_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:else:then:_L3/ */ _L330_then_else_else_else_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L131_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  M_027_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L332_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L233_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L134_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:then:_L4/ */ _L435_then_else_else_else_else_else_else_else_IfBlock1;
  M_018_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L336_then_else_else_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L237_then_else_else_else_else_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L338_then_else_else_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L2/ */ _L239_then_else_else_else_else_else_IfBlock1;
  M_015_T_TM_radio_messages /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L140_then_else_else_else_else_else_IfBlock1;
  M_008_T_TM_radio_messages /* IfBlock1:else:else:else:then:_L3/ */ _L341_then_else_else_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:then:_L2/ */ _L242_then_else_else_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:else:else:then:_L1/ */ _L143_then_else_else_else_IfBlock1;
  M_003_T_TM_radio_messages /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_int32 /* nid_message/ */ nid_message;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* header_sheet1/ */ header_sheet1;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* header_sheet2/ */ header_sheet2;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L1/ */ _L1;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L34/ */ _L34;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L39/ */ _L39;
} outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy;

/* ===========  node initialization and cycle functions  =========== */
/* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H/ */
extern void compressed_to_Radio_Track_TM_RBC_conversions_legacy(
  /* Header_In/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Header_In,
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void compressed_to_Radio_Track_reset_TM_RBC_conversions_legacy(
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void compressed_to_Radio_Track_init_TM_RBC_conversions_legacy(
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _compressed_to_Radio_Track_TM_RBC_conversions_legacy_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** compressed_to_Radio_Track_TM_RBC_conversions_legacy.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

