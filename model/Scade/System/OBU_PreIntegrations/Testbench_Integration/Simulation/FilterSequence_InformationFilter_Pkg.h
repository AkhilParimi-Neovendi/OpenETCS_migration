/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _FilterSequence_InformationFilter_Pkg_H_
#define _FilterSequence_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessage/ */ outMessage;
  ReceivedMessage_T_Common_Types_Pkg /* bufferMessage/ */ bufferMessage;
  kcg_bool /* storeInBuffer/ */ storeInBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter /* _L12=(InformationFilter_Pkg::ThirdFilter::ThirdFilter#1)/ */ Context_ThirdFilter_1;
  outC_SecondFilter_InformationFilter_Pkg_SecondFilter /* _L11=(InformationFilter_Pkg::SecondFilter::SecondFilter#1)/ */ Context_SecondFilter_1;
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter /* _L6=(InformationFilter_Pkg::FirstFilter::FirstFilter#1)/ */ Context_FirstFilter_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_MODE /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  filterRelatedEvents_T_Common_Types_Pkg /* _L3/ */ _L3;
  M_LEVEL /* _L2/ */ _L2;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  ReceivedMessage_T_Common_Types_Pkg /* _L6/ */ _L6;
  ReceivedMessage_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* _L9/ */ _L9;
  ReceivedMessage_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  ReceivedMessage_T_Common_Types_Pkg /* _L12/ */ _L12;
  ReceivedMessage_T_Common_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  ReceivedMessage_T_Common_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_FilterSequence_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FilterSequence/ */
extern void FilterSequence_InformationFilter_Pkg(
  /* message/ */
  ReceivedMessage_T_Common_Types_Pkg *message,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* inSupervisingDevice/ */
  kcg_int64 inSupervisingDevice,
  /* inMode/ */
  M_MODE inMode,
  outC_FilterSequence_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FilterSequence_reset_InformationFilter_Pkg(
  outC_FilterSequence_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FilterSequence_init_InformationFilter_Pkg(
  outC_FilterSequence_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FilterSequence_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FilterSequence_InformationFilter_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

