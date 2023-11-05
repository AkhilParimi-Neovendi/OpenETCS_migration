/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SecondFilter_InformationFilter_Pkg_SecondFilter_H_
#define _SecondFilter_InformationFilter_Pkg_SecondFilter_H_

#include "kcg_types.h"
#include "DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* storeInBuffer2/ */ storeInBuffer2;
  ReceivedMessage_T_Common_Types_Pkg /* outMessageForBuffer/ */ outMessageForBuffer;
  ReceivedMessage_T_Common_Types_Pkg /* messageForFilter3/ */ messageForFilter3;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L17=(InformationFilter_Pkg::SecondFilter::DetermineBufferMessage#1)/ */ Context_DetermineBufferMessage_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:then:IfBlock2: */ IfBlock2_clock_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4: */ IfBlock4_clock_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3: */ IfBlock3_clock_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L12/ */ _L12_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L11/ */ _L11_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L10/ */ _L10_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L9/ */ _L9_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L8/ */ _L8_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L7/ */ _L7_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:_L5/ */ _L5_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:messagesForTransitionBuffer/ */ messagesForTransitionBuffer_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:else:_L2/ */ _L2_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:else:_L1/ */ _L1_else_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L1/ */ _L1_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L15/ */ _L15_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L14/ */ _L14_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L13/ */ _L13_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L6/ */ _L6_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L7/ */ _L7_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L8/ */ _L8_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L9/ */ _L9_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L10/ */ _L10_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L11/ */ _L11_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L12/ */ _L12_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L16/ */ _L16_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:then:IfBlock4:then:_L17/ */ _L17_then_IfBlock4_then_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L14/ */ _L14_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L13/ */ _L13_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L6/ */ _L6_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L7/ */ _L7_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L8/ */ _L8_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L9/ */ _L9_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L10/ */ _L10_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L11/ */ _L11_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L12/ */ _L12_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L3/ */ _L3_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:IfBlock2:then:IfBlock3:else:_L4/ */ _L4_else_IfBlock3_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:messagesToReject/ */ messagesToReject_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L4/ */ _L4_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L5/ */ _L5_then_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:then:_L6/ */ _L6_then_IfBlock2_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:IfBlock2:then:_L7/ */ _L7_then_IfBlock2_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isFromRBC/ */ isFromRBC;
  kcg_int32 /* messageId/ */ messageId;
  kcg_bool /* isFromSupervisingRBC/ */ isFromSupervisingRBC;
  ReceivedMessage_T_Common_Types_Pkg /* _L14/ */ _L14;
  MsgSource_T_Common_Types_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  MsgSource_T_Common_Types_Pkg /* _L26/ */ _L26;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  NID_MESSAGE /* _L29/ */ _L29;
  kcg_bool /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
} outC_SecondFilter_InformationFilter_Pkg_SecondFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::SecondFilter::SecondFilter/ */
extern void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* messageForFilter2/ */
  ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* inMessageForBuffer/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* inSupervisingDevice/ */
  kcg_int32 inSupervisingDevice,
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SecondFilter_reset_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SecondFilter_init_InformationFilter_Pkg_SecondFilter(
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SecondFilter_InformationFilter_Pkg_SecondFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SecondFilter_InformationFilter_Pkg_SecondFilter.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

