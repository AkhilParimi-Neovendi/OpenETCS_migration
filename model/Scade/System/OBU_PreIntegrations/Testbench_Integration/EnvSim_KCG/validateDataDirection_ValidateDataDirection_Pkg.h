/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _validateDataDirection_ValidateDataDirection_Pkg_H_
#define _validateDataDirection_ValidateDataDirection_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessage/ */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg /* IfBlock1:then:_L30=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#2)/ */ Context_validateDataDirection_General_2;
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg /* IfBlock1:else:then:IfBlock2:else:_L55=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#6)/ */ Context_validateDataDirection_General_6;
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions /* IfBlock1:else:then:IfBlock2:else:_L48=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#6)/ */ Context_getLRBGForRadioMessage_6;
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions /* IfBlock1:else:then:_L22=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#10)/ */ Context_getLRBGForRadioMessage_10;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2: */ IfBlock2_clock_then_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:IfBlock2:else:_L45/ */ _L45_else_IfBlock2_then_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:then:IfBlock2:else:_L46/ */ _L46_else_IfBlock2_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:IfBlock2:else:_L47/ */ _L47_else_IfBlock2_then_else_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:else:then:IfBlock2:else:_L48/ */ _L48_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L49/ */ _L49_else_IfBlock2_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:IfBlock2:else:_L50/ */ _L50_else_IfBlock2_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:IfBlock2:else:_L51/ */ _L51_else_IfBlock2_then_else_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:else:then:IfBlock2:else:_L52/ */ _L52_else_IfBlock2_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:IfBlock2:else:_L53/ */ _L53_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L54/ */ _L54_else_IfBlock2_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:IfBlock2:else:_L55/ */ _L55_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L56/ */ _L56_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L57/ */ _L57_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L58/ */ _L58_else_IfBlock2_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:IfBlock2:else:_L59/ */ _L59_else_IfBlock2_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:trainRunningDirection/ */ trainRunningDirection_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:coordinateSystemAssigned/ */ coordinateSystemAssigned_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:correctRadioHeaderDirection/ */ correctRadioHeaderDirection_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L23/ */ _L23_then_else_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* IfBlock1:else:then:_L22/ */ _L22_then_else_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* IfBlock1:else:then:_L21/ */ _L21_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L27/ */ _L27_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L26/ */ _L26_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L25/ */ _L25_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L24/ */ _L24_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L116/ */ _L116_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L115/ */ _L115_then_else_IfBlock1;
  Q_DIR /* IfBlock1:else:then:_L113/ */ _L113_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L112/ */ _L112_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L111/ */ _L111_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L109/ */ _L109_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L107/ */ _L107_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L106/ */ _L106_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L105/ */ _L105_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L104/ */ _L104_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L102/ */ _L102_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L101/ */ _L101_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L100/ */ _L100_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L99/ */ _L99_then_else_IfBlock1;
  Q_DIR /* IfBlock1:else:then:_L98/ */ _L98_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L97/ */ _L97_then_else_IfBlock1;
  Q_DIR /* IfBlock1:else:then:_L96/ */ _L96_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L119/ */ _L119_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L120/ */ _L120_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L123/ */ _L123_then_else_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:else:then:_L122/ */ _L122_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L121/ */ _L121_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L124/ */ _L124_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L125/ */ _L125_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L129/ */ _L129_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L128/ */ _L128_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L127/ */ _L127_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L126/ */ _L126_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L130/ */ _L130_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L131/ */ _L131_then_else_IfBlock1;
  Q_DIR /* IfBlock1:else:then:_L132/ */ _L132_then_else_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* msgSource/ */ msgSource;
  kcg_bool /* LRBGKnown/ */ LRBGKnown;
  kcg_bool /* trainPositionKnown/ */ trainPositionKnown;
  MsgSource_T_Common_Types_Pkg /* _L5/ */ _L5;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_validateDataDirection_ValidateDataDirection_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirection_Pkg::validateDataDirection/ */
extern void validateDataDirection_ValidateDataDirection_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inLRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* inPositionedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void validateDataDirection_reset_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void validateDataDirection_init_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _validateDataDirection_ValidateDataDirection_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirection_ValidateDataDirection_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

