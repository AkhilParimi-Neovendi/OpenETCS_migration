/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg_H_
#define _SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg_H_

#include "kcg_types.h"
#include "Write_P058_TM_trackside.h"
#include "Write_P057_TM_trackside.h"
#include "Write_P027V1_TM_trackside_baseline2.h"
#include "Write_P021_TM_trackside.h"
#include "Write_P015_TM_trackside.h"
#include "Write_P005_TM_trackside.h"
#include "Write_P003V1_TM_trackside_baseline2.h"
#include "Write_P042_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* MessageOUT/ */ MessageOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P058_TM_trackside /* _L57=(TM_trackside::Write_P058#1)/ */ Context_Write_P058_1;
  outC_Write_P042_TM_trackside /* _L60=(TM_trackside::Write_P042#1)/ */ Context_Write_P042_1;
  outC_Write_P057_TM_trackside /* _L41=(TM_trackside::Write_P057#1)/ */ Context_Write_P057_1;
  outC_Write_P042_TM_trackside /* _L46=(TM_trackside::Write_P042#2)/ */ Context_Write_P042_2;
  outC_Write_P027V1_TM_trackside_baseline2 /* _L30=(TM_trackside_baseline2::Write_P027V1#1)/ */ Context_Write_P027V1_1;
  outC_Write_P021_TM_trackside /* _L25=(TM_trackside::Write_P021#1)/ */ Context_Write_P021_1;
  outC_Write_P015_TM_trackside /* _L17=(TM_trackside::Write_P015#1)/ */ Context_Write_P015_1;
  outC_Write_P005_TM_trackside /* _L12=(TM_trackside::Write_P005#1)/ */ Context_Write_P005_1;
  outC_Write_P003V1_TM_trackside_baseline2 /* _L8=(TM_trackside_baseline2::Write_P003V1#1)/ */ Context_Write_P003V1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  kcg_bool every2;
  kcg_bool every3;
  kcg_bool every4;
  kcg_bool every5;
  kcg_bool every6;
  kcg_bool every7;
  kcg_bool every8;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* RadioMessagePackets_1_2/ */ RadioMessagePackets_1_2;
  CompressedPackets_T_Common_Types_Pkg /* RadioMessagePackets_2_3/ */ RadioMessagePackets_2_3;
  CompressedPackets_T_Common_Types_Pkg /* RadioMessagePackets_3_4/ */ RadioMessagePackets_3_4;
  P003V1_trackside_int_T_TM_baseline2 /* _L1/ */ _L1;
  P005_trackside_int_T_TM /* _L2/ */ _L2;
  P015_trackside_int_T_TM /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  CompressedPackets_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L12/ */ _L12;
  CompressedPackets_T_Common_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L17/ */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  P027V1_trackside_int_T_TM_baseline2 /* _L22/ */ _L22;
  P021_trackside_int_T_TM /* _L21/ */ _L21;
  CompressedPackets_T_Common_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  CompressedPackets_T_Common_Types_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  CompressedPackets_T_Common_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L31/ */ _L31;
  CompressedPackets_T_Common_Types_Pkg /* _L34/ */ _L34;
  CompressedPackets_T_Common_Types_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L46/ */ _L46;
  CompressedPackets_T_Common_Types_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L41/ */ _L41;
  CompressedPackets_T_Common_Types_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L36/ */ _L36;
  CompressedPackets_T_Common_Types_Pkg /* _L50/ */ _L50;
  P042_trackside_int_T_TM /* _L51/ */ _L51;
  P057_trackside_int_T_TM /* _L52/ */ _L52;
  P042_trackside_int_T_TM /* _L64/ */ _L64;
  kcg_bool /* _L62/ */ _L62;
  CompressedPackets_T_Common_Types_Pkg /* _L61/ */ _L61;
  kcg_bool /* _L60/ */ _L60;
  Radio_TrackTrain_Header_T_TM /* _L59/ */ _L59;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L57/ */ _L57;
  CompressedPackets_T_Common_Types_Pkg /* _L56/ */ _L56;
  kcg_bool /* _L55/ */ _L55;
  CompressedRadioMessage_TM /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  CompressedPackets_T_Common_Types_Pkg /* _L66/ */ _L66;
  P058_trackside_int_T_TM /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
} outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets/ */
extern void SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
  /* Header/ */
  Radio_TrackTrain_Header_T_TM *Header,
  /* M03/ */
  P003V1_trackside_int_T_TM_baseline2 *M03,
  /* M05/ */
  P005_trackside_int_T_TM *M05,
  /* M15/ */
  P015_trackside_int_T_TM *M15,
  /* M21/ */
  P021_trackside_int_T_TM *M21,
  /* M27/ */
  P027V1_trackside_int_T_TM_baseline2 *M27,
  /* M42/ */
  P042_trackside_int_T_TM *M42,
  /* M57/ */
  P057_trackside_int_T_TM *M57,
  /* M58/ */
  P058_trackside_int_T_TM *M58,
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC);

extern void SEND_MergeRadioPackets_reset_RBC_SendMergeRadio_Pkg(
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_MergeRadioPackets_init_RBC_SendMergeRadio_Pkg(
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

