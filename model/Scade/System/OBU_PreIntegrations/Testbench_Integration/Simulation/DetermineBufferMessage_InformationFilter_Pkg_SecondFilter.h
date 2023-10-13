/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _DetermineBufferMessage_InformationFilter_Pkg_SecondFilter_H_
#define _DetermineBufferMessage_InformationFilter_Pkg_SecondFilter_H_

#include "kcg_types.h"
#include "DetermineValidFlags_InformationFilter_Pkg_SecondFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessageForBuffer/ */ outMessageForBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DetermineValidFlags_InformationFilter_Pkg_SecondFilter /* _L125=(InformationFilter_Pkg::SecondFilter::DetermineValidFlags)/ */ Context_DetermineValidFlags[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  ReceivedMessage_T_Common_Types_Pkg /* _L2/ */ _L2;
  RBC_Id_T_Common_Types_Pkg /* _L16/ */ _L16;
  CompressedPackets_T_Common_Types_Pkg /* _L15/ */ _L15;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L14/ */ _L14;
  BG_Header_T_BG_Types_Pkg /* _L13/ */ _L13;
  RadioMetadata_T_Common_Types_Pkg /* _L12/ */ _L12;
  MsgSource_T_Common_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* _L17/ */ _L17;
  Metadata_T_Common_Types_Pkg /* _L19/ */ _L19;
  CompressedPackets_T_Common_Types_Pkg /* _L30/ */ _L30;
  Metadata_T_Common_Types_Pkg /* _L52/ */ _L52;
  CompressedPackets_T_Common_Types_Pkg /* _L123/ */ _L123;
  Metadata_T_Common_Types_Pkg /* _L125/ */ _L125;
} outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage/ */
extern void DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
  /* messageForFilter2/ */
  ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* inMessageForBuffer/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DetermineBufferMessage_reset_InformationFilter_Pkg_SecondFilter(
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DetermineBufferMessage_init_InformationFilter_Pkg_SecondFilter(
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DetermineBufferMessage_InformationFilter_Pkg_SecondFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

