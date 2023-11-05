/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P003V1_compr_onboard_TM_conversions_baseline2_H_
#define _C_P003V1_compr_onboard_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "CAST_Int_to_D_NVSTFF_TM_conversions.h"
#include "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"
#include "CAST_Int_to_T_NVCONTACT_TM_conversions.h"
#include "CAST_Int_to_M_NVCONTACT_TM_conversions.h"
#include "CAST_Int_to_D_NVPOTRP_TM_conversions.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conversions.h"
#include "CAST_Int_to_T_NVOVTRP_TM_conversions.h"
#include "CAST_Int_to_D_NVOVTRP_TM_conversions.h"
#include "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.h"
#include "CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.h"
#include "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.h"
#include "CAST_Int_to_D_NVROLL_TM_conversions.h"
#include "CAST_Int_to_V_NVREL_TM_conversions.h"
#include "CAST_Int_to_V_NVUNFIT_TM_conversions.h"
#include "CAST_Int_to_V_NVONSIGHT_TM_conversions.h"
#include "CAST_Int_to_V_NVSTFF_TM_conversions.h"
#include "CAST_Int_to_V_NVSHUNT_TM_conversions.h"
#include "CAST_Int_to_D_VALIDNV_TM_conversions.h"
#include "C_P003V1_unflatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003V1_OBU_T_TM_baseline2 /* P003V1_onboard/ */ P003V1_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_unflatten_sections_TM_lib_internal /* _L5=(TM_lib_internal::C_P003V1_unflatten_sections#1)/ */ Context_C_P003V1_unflatten_sections_1;
  outC_CAST_Int_to_D_VALIDNV_TM_conversions /* _L43=(TM_conversions::CAST_Int_to_D_VALIDNV#1)/ */ Context_CAST_Int_to_D_VALIDNV_1;
  outC_CAST_Int_to_V_NVSHUNT_TM_conversions /* _L47=(TM_conversions::CAST_Int_to_V_NVSHUNT#1)/ */ Context_CAST_Int_to_V_NVSHUNT_1;
  outC_CAST_Int_to_V_NVSTFF_TM_conversions /* _L48=(TM_conversions::CAST_Int_to_V_NVSTFF#1)/ */ Context_CAST_Int_to_V_NVSTFF_1;
  outC_CAST_Int_to_V_NVONSIGHT_TM_conversions /* _L49=(TM_conversions::CAST_Int_to_V_NVONSIGHT#1)/ */ Context_CAST_Int_to_V_NVONSIGHT_1;
  outC_CAST_Int_to_V_NVUNFIT_TM_conversions /* _L50=(TM_conversions::CAST_Int_to_V_NVUNFIT#1)/ */ Context_CAST_Int_to_V_NVUNFIT_1;
  outC_CAST_Int_to_V_NVREL_TM_conversions /* _L51=(TM_conversions::CAST_Int_to_V_NVREL#1)/ */ Context_CAST_Int_to_V_NVREL_1;
  outC_CAST_Int_to_D_NVROLL_TM_conversions /* _L52=(TM_conversions::CAST_Int_to_D_NVROLL#1)/ */ Context_CAST_Int_to_D_NVROLL_1;
  outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions /* _L53=(TM_conversions::CAST_Int_to_Q_NVSBTSMPERM#1)/ */ Context_CAST_Int_to_Q_NVSBTSMPERM_1;
  outC_CAST_Int_to_V_NVALLOWOVTRP_TM_conversions /* _L54=(TM_conversions::CAST_Int_to_V_NVALLOWOVTRP#1)/ */ Context_CAST_Int_to_V_NVALLOWOVTRP_1;
  outC_CAST_Int_to_V_NVSUPOVTRP_TM_conversions /* _L56=(TM_conversions::CAST_Int_to_V_NVSUPOVTRP#2)/ */ Context_CAST_Int_to_V_NVSUPOVTRP_2;
  outC_CAST_Int_to_D_NVOVTRP_TM_conversions /* _L57=(TM_conversions::CAST_Int_to_D_NVOVTRP#1)/ */ Context_CAST_Int_to_D_NVOVTRP_1;
  outC_CAST_Int_to_T_NVOVTRP_TM_conversions /* _L58=(TM_conversions::CAST_Int_to_T_NVOVTRP#1)/ */ Context_CAST_Int_to_T_NVOVTRP_1;
  outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions /* _L60=(TM_conversions::CAST_Int_to_Q_NVEMRRLS#1)/ */ Context_CAST_Int_to_Q_NVEMRRLS_1;
  outC_CAST_Int_to_D_NVPOTRP_TM_conversions /* _L62=(TM_conversions::CAST_Int_to_D_NVPOTRP#2)/ */ Context_CAST_Int_to_D_NVPOTRP_2;
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions /* _L63=(TM_conversions::CAST_Int_to_M_NVCONTACT#1)/ */ Context_CAST_Int_to_M_NVCONTACT_1;
  outC_CAST_Int_to_T_NVCONTACT_TM_conversions /* _L64=(TM_conversions::CAST_Int_to_T_NVCONTACT#1)/ */ Context_CAST_Int_to_T_NVCONTACT_1;
  outC_CAST_Int_to_M_NVDERUN_TM_conversions /* _L65=(TM_conversions::CAST_Int_to_M_NVDERUN#1)/ */ Context_CAST_Int_to_M_NVDERUN_1;
  outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions /* _L66=(TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES#1)/ */ Context_CAST_Int_to_Q_NVDRIVER_ADHES_1;
  outC_CAST_Int_to_D_NVSTFF_TM_conversions /* _L67=(TM_conversions::CAST_Int_to_D_NVSTFF#1)/ */ Context_CAST_Int_to_D_NVSTFF_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1;
  kcg_bool /* @3/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @3/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* @1/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  N_ITER /* @2/n_iter/ */ n_iter_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L9/ */ _L9_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L10/ */ _L10_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L11/ */ _L11_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L12/ */ _L12_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L1/ */ _L1_CAST_Int_to_N_ITER_1;
  Q_DIR /* @3/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @3/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @3/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @3/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @3/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @3/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @3/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @3/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @3/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @3/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @3/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @3/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  NID_PACKET /* @4/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @4/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @4/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @4/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @4/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @4/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @4/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1;
  N_ITER /* n_iter/ */ n_iter;
  array_int32_32 /* _L13/ */ _L13;
  NID_PACKET /* _L12/ */ _L12;
  Q_DIR /* _L11/ */ _L11;
  P003V1_OBU_T_TM_baseline2 /* _L10/ */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* _L9/ */ _L9;
  N_ITER /* _L7/ */ _L7;
  P003V1_sectionlist_enum_T_TM_baseline2 /* _L5/ */ _L5;
  Q_SCALE /* _L4/ */ _L4;
  array_int32_24 /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L42/ */ _L42;
  kcg_int32 /* _L41/ */ _L41;
  kcg_int32 /* _L40/ */ _L40;
  kcg_int32 /* _L39/ */ _L39;
  kcg_int32 /* _L38/ */ _L38;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L31/ */ _L31;
  kcg_int32 /* _L30/ */ _L30;
  kcg_int32 /* _L29/ */ _L29;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  D_VALIDNV /* _L43/ */ _L43;
  N_ITER /* _L45/ */ _L45;
  N_ITER /* _L46/ */ _L46;
  V_NVSHUNT /* _L47/ */ _L47;
  V_NVSTFF /* _L48/ */ _L48;
  V_NVONSIGHT /* _L49/ */ _L49;
  V_NVUNFIT /* _L50/ */ _L50;
  V_NVREL /* _L51/ */ _L51;
  D_NVROLL /* _L52/ */ _L52;
  Q_NVSBTSMPERM /* _L53/ */ _L53;
  V_NVALLOWOVTRP /* _L54/ */ _L54;
  V_NVSUPOVTRP /* _L56/ */ _L56;
  D_NVOVTRP /* _L57/ */ _L57;
  T_NVOVTRP /* _L58/ */ _L58;
  kcg_int32 /* _L59/ */ _L59;
  Q_NVEMRRLS /* _L60/ */ _L60;
  D_NVPOTRP /* _L62/ */ _L62;
  M_NVCONTACT /* _L63/ */ _L63;
  T_NVCONTACT /* _L64/ */ _L64;
  M_NVDERUN /* _L65/ */ _L65;
  Q_NVDRIVER_ADHES /* _L66/ */ _L66;
  D_NVSTFF /* _L67/ */ _L67;
} outC_C_P003V1_compr_onboard_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_compr_onboard/ */
extern void C_P003V1_compr_onboard_TM_conversions_baseline2(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003V1_compr_onboard_reset_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_compr_onboard_init_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions_baseline2::C_P003V1_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @2: (TM_conversions::CAST_Int_to_N_ITER#1)
  @3: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @4: (TM_conversions::CAST_Int_to_NID_PACKET#1)
*/

#endif /* _C_P003V1_compr_onboard_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_compr_onboard_TM_conversions_baseline2.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

