/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_P015_compr_onboard_TM_conversions_H_
#define _C_P015_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P015_unflatten_sections_TM_lib_internal.h"
#include "CAST_Int_to_D_STARTOL_TM_conversions.h"
#include "CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"
#include "CAST_Int_to_L_ENDSECTION_TM_conversions.h"
#include "CAST_Int_to_V_RELEASEDP_TM_conversions.h"
#include "CAST_Int_to_Q_ENDTIMER_TM_conversions.h"
#include "CAST_Int_to_T_OL_TM_conversions.h"
#include "CAST_Int_to_T_LOA_TM_conversions.h"
#include "CAST_Int_to_Q_DANGERPOINT_TM_conversions.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conversions.h"
#include "CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.h"
#include "CAST_Int_to_Q_SECTIONTIMER_TM_conversions.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_conversions.h"
#include "CAST_Int_to_T_ENDTIMER_TM_conversions.h"
#include "CAST_Int_to_V_LOA_TM_conversions.h"
#include "CAST_Int_to_D_OL_TM_conversions.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_OBU_T_TM /* P015_onboard/ */ P015_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_OL_TM_conversions /* _L91=(TM_conversions::CAST_Int_to_D_OL#2)/ */ Context_CAST_Int_to_D_OL_2;
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions /* _L103=(TM_conversions::CAST_Int_to_Q_OVERLAP#2)/ */ Context_CAST_Int_to_Q_OVERLAP_2;
  outC_CAST_Int_to_D_DP_TM_conversions /* _L90=(TM_conversions::CAST_Int_to_D_DP#2)/ */ Context_CAST_Int_to_D_DP_2;
  outC_CAST_Int_to_Q_DANGERPOINT_TM_conversions /* _L119=(TM_conversions::CAST_Int_to_Q_DANGERPOINT#2)/ */ Context_CAST_Int_to_Q_DANGERPOINT_2;
  outC_CAST_Int_to_T_ENDTIMER_TM_conversions /* _L94=(TM_conversions::CAST_Int_to_T_ENDTIMER#2)/ */ Context_CAST_Int_to_T_ENDTIMER_2;
  outC_CAST_Int_to_Q_SECTIONTIMER_TM_conversions /* _L118=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#2)/ */ Context_CAST_Int_to_Q_SECTIONTIMER_2;
  outC_CAST_Int_to_T_LOA_TM_conversions /* _L121=(TM_conversions::CAST_Int_to_T_LOA#2)/ */ Context_CAST_Int_to_T_LOA_2;
  outC_CAST_Int_to_V_LOA_TM_conversions /* _L92=(TM_conversions::CAST_Int_to_V_LOA#2)/ */ Context_CAST_Int_to_V_LOA_2;
  outC_CAST_Int_to_T_OL_TM_conversions /* _L123=(TM_conversions::CAST_Int_to_T_OL#2)/ */ Context_CAST_Int_to_T_OL_2;
  outC_CAST_Int_to_Q_ENDTIMER_TM_conversions /* _L126=(TM_conversions::CAST_Int_to_Q_ENDTIMER#2)/ */ Context_CAST_Int_to_Q_ENDTIMER_2;
  outC_CAST_Int_to_V_RELEASEDP_TM_conversions /* _L127=(TM_conversions::CAST_Int_to_V_RELEASEDP#2)/ */ Context_CAST_Int_to_V_RELEASEDP_2;
  outC_CAST_Int_to_L_ENDSECTION_TM_conversions /* _L129=(TM_conversions::CAST_Int_to_L_ENDSECTION#2)/ */ Context_CAST_Int_to_L_ENDSECTION_2;
  outC_CAST_Int_to_V_RELEASEOL_TM_conversions /* _L131=(TM_conversions::CAST_Int_to_V_RELEASEOL#2)/ */ Context_CAST_Int_to_V_RELEASEOL_2;
  outC_CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions /* _L133=(TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC#2)/ */ Context_CAST_Int_to_D_ENDTIMERSTARTLOC_2;
  outC_CAST_Int_to_D_STARTOL_TM_conversions /* _L134=(TM_conversions::CAST_Int_to_D_STARTOL#2)/ */ Context_CAST_Int_to_D_STARTOL_2;
  outC_CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions /* _L137=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#2)/ */ Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_2;
  outC_C_P015_unflatten_sections_TM_lib_internal /* _L102=(TM_lib_internal::C_P015_unflatten_sections#1)/ */ Context_C_P015_unflatten_sections_1;
  outC_CAST_Int_to_T_SECTIONTIMER_TM_conversions /* _L143=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */ Context_CAST_Int_to_T_SECTIONTIMER_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @2/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_2;
  kcg_bool /* @2/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_2_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_2_IfBlock1;
  kcg_bool /* @4/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_2;
  kcg_bool /* @4/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_2_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_2_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_PACKET /* @1/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_2;
  kcg_int32 /* @1/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_2;
  kcg_bool /* @1/_L2/ */ _L2_CAST_Int_to_NID_PACKET_2;
  kcg_int32 /* @1/_L3/ */ _L3_CAST_Int_to_NID_PACKET_2;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_NID_PACKET_2;
  kcg_int32 /* @1/_L5/ */ _L5_CAST_Int_to_NID_PACKET_2;
  kcg_int32 /* @1/_L1/ */ _L1_CAST_Int_to_NID_PACKET_2;
  Q_SCALE /* @2/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_2;
  kcg_int32 /* @2/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_2;
  kcg_bool /* @2/_L4/ */ _L4_CAST_Int_to_Q_SCALE_2;
  kcg_int32 /* @2/_L2/ */ _L2_CAST_Int_to_Q_SCALE_2;
  kcg_bool /* @2/error/ */ error_CAST_Int_to_Q_SCALE_2;
  kcg_int32 /* @2/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_2;
  kcg_bool /* @2/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_2_then_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_2_then_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_2_else_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_2_else_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_2_then_else_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_2_then_else_else_IfBlock1;
  Q_SCALE /* @2/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_2_then_IfBlock1;
  kcg_bool /* @2/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_2_then_IfBlock1;
  N_ITER /* @3/n_iter/ */ n_iter_CAST_Int_to_N_ITER_3;
  kcg_int32 /* @3/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_3;
  kcg_int32 /* @3/_L9/ */ _L9_CAST_Int_to_N_ITER_3;
  kcg_bool /* @3/_L10/ */ _L10_CAST_Int_to_N_ITER_3;
  kcg_int32 /* @3/_L11/ */ _L11_CAST_Int_to_N_ITER_3;
  kcg_bool /* @3/_L12/ */ _L12_CAST_Int_to_N_ITER_3;
  kcg_int32 /* @3/_L1/ */ _L1_CAST_Int_to_N_ITER_3;
  Q_DIR /* @4/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_2;
  kcg_int32 /* @4/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_2;
  kcg_int32 /* @4/_L12/ */ _L12_CAST_Int_to_Q_DIR_2;
  kcg_bool /* @4/_L13/ */ _L13_CAST_Int_to_Q_DIR_2;
  kcg_int32 /* @4/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_2;
  kcg_bool /* @4/error/ */ error_CAST_Int_to_Q_DIR_2;
  kcg_bool /* @4/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_2_then_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_2_then_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_2_else_else_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_2_else_else_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_2_then_else_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_2_then_else_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_2_then_IfBlock1;
  kcg_bool /* @4/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_2_then_IfBlock1;
  N_ITER /* n_iter/ */ n_iter;
  kcg_bool /* nid_packet_ok/ */ nid_packet_ok;
  P015_OBU_sectionlist_enum_T_TM /* sections/ */ sections;
  kcg_int32 /* _L139/ */ _L139;
  array_int32_15 /* _L138/ */ _L138;
  D_SECTIONTIMERSTOPLOC /* _L137/ */ _L137;
  Q_DIR /* _L136/ */ _L136;
  N_ITER /* _L135/ */ _L135;
  D_STARTOL /* _L134/ */ _L134;
  D_ENDTIMERSTARTLOC /* _L133/ */ _L133;
  kcg_bool /* _L132/ */ _L132;
  V_RELEASEOL /* _L131/ */ _L131;
  Q_SCALE /* _L130/ */ _L130;
  L_ENDSECTION /* _L129/ */ _L129;
  NID_PACKET /* _L128/ */ _L128;
  V_RELEASEDP /* _L127/ */ _L127;
  Q_ENDTIMER /* _L126/ */ _L126;
  array_int32_6 /* _L125/ */ _L125;
  kcg_int32 /* _L124/ */ _L124;
  T_OL /* _L123/ */ _L123;
  P015_OBU_T_TM /* _L122/ */ _L122;
  T_LOA /* _L121/ */ _L121;
  array_int32_128 /* _L120/ */ _L120;
  Q_DANGERPOINT /* _L119/ */ _L119;
  Q_SECTIONTIMER /* _L118/ */ _L118;
  kcg_int32 /* _L104/ */ _L104;
  kcg_int32 /* _L105/ */ _L105;
  kcg_int32 /* _L106/ */ _L106;
  kcg_int32 /* _L107/ */ _L107;
  kcg_int32 /* _L108/ */ _L108;
  kcg_int32 /* _L109/ */ _L109;
  kcg_int32 /* _L110/ */ _L110;
  kcg_int32 /* _L111/ */ _L111;
  kcg_int32 /* _L112/ */ _L112;
  kcg_int32 /* _L113/ */ _L113;
  kcg_int32 /* _L114/ */ _L114;
  kcg_int32 /* _L115/ */ _L115;
  kcg_int32 /* _L116/ */ _L116;
  kcg_int32 /* _L117/ */ _L117;
  Q_OVERLAP /* _L103/ */ _L103;
  P015_OBU_sectionlist_enum_T_TM /* _L102/ */ _L102;
  kcg_int32 /* _L96/ */ _L96;
  kcg_int32 /* _L97/ */ _L97;
  kcg_int32 /* _L98/ */ _L98;
  kcg_int32 /* _L99/ */ _L99;
  kcg_int32 /* _L100/ */ _L100;
  kcg_int32 /* _L101/ */ _L101;
  N_ITER /* _L95/ */ _L95;
  T_ENDTIMER /* _L94/ */ _L94;
  CompressedPacketData_T_Common_Types_Pkg /* _L93/ */ _L93;
  V_LOA /* _L92/ */ _L92;
  D_OL /* _L91/ */ _L91;
  D_DP /* _L90/ */ _L90;
  MetadataElement_T_Common_Types_Pkg /* _L89/ */ _L89;
  kcg_bool /* _L140/ */ _L140;
  P015_OBU_sectionlist_enum_T_TM /* _L141/ */ _L141;
  kcg_int32 /* _L142/ */ _L142;
  T_SECTIONTIMER /* _L143/ */ _L143;
} outC_C_P015_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_compr_onboard/ */
extern void C_P015_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P015_compr_onboard_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P015_compr_onboard_reset_TM_conversions(
  outC_C_P015_compr_onboard_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_compr_onboard_init_TM_conversions(
  outC_C_P015_compr_onboard_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_P015_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_NID_PACKET#2)
  @2: (TM_conversions::CAST_Int_to_Q_SCALE#2)
  @3: (TM_conversions::CAST_Int_to_N_ITER#3)
  @4: (TM_conversions::CAST_Int_to_Q_DIR#2)
*/

#endif /* _C_P015_compr_onboard_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_compr_onboard_TM_conversions.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

