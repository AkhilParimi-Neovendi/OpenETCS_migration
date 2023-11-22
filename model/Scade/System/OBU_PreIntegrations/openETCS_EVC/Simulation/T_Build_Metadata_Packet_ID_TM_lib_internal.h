/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _T_Build_Metadata_Packet_ID_TM_lib_internal_H_
#define _T_Build_Metadata_Packet_ID_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  nid_packet_meta_TM /* nid_packet_meta/ */ nid_packet_meta;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  NID_PACKET /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
} outC_T_Build_Metadata_Packet_ID_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Build_Metadata_Packet_ID/ */
extern void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* nid_packet_in/ */
  kcg_int32 nid_packet_in,
  /* q_dir/ */
  kcg_int32 q_dir,
  /* id/ */
  kcg_int32 id,
  /* nid_packet_defined/ */
  NID_PACKET nid_packet_defined,
  /* m_version/ */
  kcg_int32 m_version,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_Build_Metadata_Packet_ID_init_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_Build_Metadata_Packet_ID_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Build_Metadata_Packet_ID_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

