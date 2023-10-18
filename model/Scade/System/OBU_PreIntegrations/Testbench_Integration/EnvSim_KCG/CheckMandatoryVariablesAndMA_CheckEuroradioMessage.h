/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CheckMandatoryVariablesAndMA_CheckEuroradioMessage_H_
#define _CheckMandatoryVariablesAndMA_CheckEuroradioMessage_H_

#include "kcg_types.h"
#include "CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions /* IfBlock1:then:_L17=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#1)/ */ Context_CheckIfPacket15IsPresent_1;
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions /* IfBlock1:else:else:then:_L7=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#3)/ */ Context_CheckIfPacket15IsPresent_3;
  outC_CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions /* IfBlock1:else:else:else:else:else:else:else:else:then:_L11=(CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent#5)/ */ Context_CheckIfPacket15IsPresent_5;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L6/ */ _L6_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L7/ */ _L7_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L16/ */ _L16_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L15/ */ _L15_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L14/ */ _L14_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L13/ */ _L13_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L12/ */ _L12_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L17/ */ _L17_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L18/ */ _L18_then_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L19/ */ _L19_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L20/ */ _L20_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L52/ */ _L52_then_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:then:_L38/ */ _L38_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L39/ */ _L39_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L41/ */ _L41_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L50/ */ _L50_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L49/ */ _L49_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L48/ */ _L48_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L47/ */ _L47_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L46/ */ _L46_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L45/ */ _L45_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L44/ */ _L44_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L43/ */ _L43_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L42/ */ _L42_then_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L11/ */ _L11_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L20/ */ _L20_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L19/ */ _L19_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L18/ */ _L18_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L17/ */ _L17_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L16/ */ _L16_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L15/ */ _L15_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L14/ */ _L14_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L13/ */ _L13_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L12/ */ _L12_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L21/ */ _L21_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L22/ */ _L22_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L20/ */ _L20_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L17/ */ _L17_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L10/ */ _L10_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L9/ */ _L9_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L8/ */ _L8_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L7/ */ _L7_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L6/ */ _L6_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L5/ */ _L5_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L4/ */ _L4_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L11/ */ _L11_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L12/ */ _L12_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L13/ */ _L13_then_else_else_else_else_else_else_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L14/ */ _L14_then_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L15/ */ _L15_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L16/ */ _L16_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L7/ */ _L7_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L8/ */ _L8_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L17/ */ _L17_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L16/ */ _L16_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L15/ */ _L15_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L14/ */ _L14_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L13/ */ _L13_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L12/ */ _L12_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L11/ */ _L11_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L10/ */ _L10_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L9/ */ _L9_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L18/ */ _L18_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  M_ACK /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L4/ */ _L4_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  M_ACK /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L5/ */ _L5_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L14/ */ _L14_then_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L13/ */ _L13_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L4/ */ _L4_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L5/ */ _L5_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L6/ */ _L6_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L7/ */ _L7_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L8/ */ _L8_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L9/ */ _L9_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L10/ */ _L10_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L11/ */ _L11_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L12/ */ _L12_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L15/ */ _L15_then_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L14/ */ _L14_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L13/ */ _L13_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L4/ */ _L4_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L5/ */ _L5_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L6/ */ _L6_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L7/ */ _L7_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L8/ */ _L8_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L9/ */ _L9_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L10/ */ _L10_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L11/ */ _L11_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L12/ */ _L12_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:then:_L14/ */ _L14_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L13/ */ _L13_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L5/ */ _L5_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L6/ */ _L6_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L7/ */ _L7_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L8/ */ _L8_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L9/ */ _L9_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L10/ */ _L10_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L11/ */ _L11_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L16/ */ _L16_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L18/ */ _L18_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L19/ */ _L19_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L20/ */ _L20_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L21/ */ _L21_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  kcg_int64 /* nid_message/ */ nid_message;
  RadioMetadata_T_Common_Types_Pkg /* radioMetadata/ */ radioMetadata;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_MESSAGE /* _L2/ */ _L2;
  RadioMetadata_T_Common_Types_Pkg /* _L3/ */ _L3;
} outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::CheckMandatoryVariablesAndMA/ */
extern void CheckMandatoryVariablesAndMA_CheckEuroradioMessage(
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckMandatoryVariablesAndMA_reset_CheckEuroradioMessage(
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMandatoryVariablesAndMA_init_CheckEuroradioMessage(
  outC_CheckMandatoryVariablesAndMA_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckMandatoryVariablesAndMA_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMandatoryVariablesAndMA_CheckEuroradioMessage.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

