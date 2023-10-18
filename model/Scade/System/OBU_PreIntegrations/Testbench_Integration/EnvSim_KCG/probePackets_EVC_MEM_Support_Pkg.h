/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _probePackets_EVC_MEM_Support_Pkg_H_
#define _probePackets_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "Read_P065_TM.h"
#include "Read_P080_TM.h"
#include "Read_P042_TM.h"
#include "Read_P005_TM.h"
#include "Read_P046_Legacy_TM_specific.h"
#include "Read_P041_Legacy_TM_specific.h"
#include "Read_P021_Legacy_TM_specific.h"
#include "Read_P015_Legacy_TM_specific.h"
#include "Read_P139_Legacy_TM_specific.h"
#include "Read_P138_Legacy_TM_specific.h"
#include "Read_P137_Legacy_TM_specific.h"
#include "Read_P135_TM.h"
#include "Read_P027V1_TM_baseline2.h"
#include "Read_P012_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------   local probes  ------------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* p41/ */ p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* p46/ */ p46;
  P005_OBU_T_TM /* p05/ */ p05;
  P027V1_OBU_T_TM_baseline2 /* p27/ */ p27;
  P21_GradientProfiles_T_Packet_Types_Pkg /* p21/ */ p21;
  P42_SessionManagement_T_Packet_Types_Pkg /* p42/ */ p42;
  P080_OBU_T_TM /* p80/ */ p80;
  P065_OBU_T_TM /* p65/ */ p65;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P135_TM /* _L131=(TM::Read_P135#1)/ */ Context_Read_P135_1;
  outC_Read_P012_TM /* _L116=(TM::Read_P012#1)/ */ Context_Read_P012_1;
  outC_Read_P137_Legacy_TM_specific /* _L125=(TM_specific::Read_P137_Legacy#1)/ */ Context_Read_P137_Legacy_1;
  outC_Read_P138_Legacy_TM_specific /* _L134=(TM_specific::Read_P138_Legacy#1)/ */ Context_Read_P138_Legacy_1;
  outC_Read_P139_Legacy_TM_specific /* _L127=(TM_specific::Read_P139_Legacy#1)/ */ Context_Read_P139_Legacy_1;
  outC_Read_P015_Legacy_TM_specific /* _L129=(TM_specific::Read_P015_Legacy#1)/ */ Context_Read_P015_Legacy_1;
  outC_Read_P041_Legacy_TM_specific /* _L155=(TM_specific::Read_P041_Legacy#1)/ */ Context_Read_P041_Legacy_1;
  outC_Read_P046_Legacy_TM_specific /* _L156=(TM_specific::Read_P046_Legacy#1)/ */ Context_Read_P046_Legacy_1;
  outC_Read_P005_TM /* _L160=(TM::Read_P005#1)/ */ Context_Read_P005_1;
  outC_Read_P021_Legacy_TM_specific /* _L136=(TM_specific::Read_P021_Legacy#1)/ */ Context_Read_P021_Legacy_1;
  outC_Read_P042_TM /* _L162=(TM::Read_P042#1)/ */ Context_Read_P042_1;
  outC_Read_P080_TM /* _L164=(TM::Read_P080#1)/ */ Context_Read_P080_1;
  outC_Read_P065_TM /* _L166=(TM::Read_P065#1)/ */ Context_Read_P065_1;
  outC_Read_P027V1_TM_baseline2 /* _L122=(TM_baseline2::Read_P027V1#1)/ */ Context_Read_P027V1_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* _L137/ */ _L137;
  P21_GradientProfiles_T_Packet_Types_Pkg /* _L136/ */ _L136;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L134/ */ _L134;
  kcg_bool /* _L131/ */ _L131;
  P135_OBU_T_TM /* _L132/ */ _L132;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* _L129/ */ _L129;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L127/ */ _L127;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L125/ */ _L125;
  CompressedPackets_T_Common_Types_Pkg /* _L119/ */ _L119;
  kcg_bool /* _L116/ */ _L116;
  P012_OBU_T_TM /* _L117/ */ _L117;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L155/ */ _L155;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L156/ */ _L156;
  P005_OBU_T_TM /* _L161/ */ _L161;
  kcg_bool /* _L160/ */ _L160;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L163/ */ _L163;
  kcg_bool /* _L162/ */ _L162;
  P080_OBU_T_TM /* _L165/ */ _L165;
  kcg_bool /* _L164/ */ _L164;
  P065_OBU_T_TM /* _L167/ */ _L167;
  kcg_bool /* _L166/ */ _L166;
  kcg_bool /* _L122/ */ _L122;
  P027V1_OBU_T_TM_baseline2 /* _L172/ */ _L172;
} outC_probePackets_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::probePackets/ */
extern void probePackets_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *actualMessage,
  outC_probePackets_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probePackets_reset_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probePackets_init_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _probePackets_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probePackets_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

