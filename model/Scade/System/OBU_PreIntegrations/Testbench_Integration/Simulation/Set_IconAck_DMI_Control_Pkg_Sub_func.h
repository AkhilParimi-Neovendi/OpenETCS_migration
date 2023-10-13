/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Set_IconAck_DMI_Control_Pkg_Sub_func_H_
#define _Set_IconAck_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IconAck/ */ IconAck;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L3/ */ _L3;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L4/ */ _L4;
} outC_Set_IconAck_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_IconAck/ */
extern void Set_IconAck_DMI_Control_Pkg_Sub_func(
  /* valid/ */
  kcg_bool valid,
  /* system_time/ */
  T_internal_Type_Obu_BasicTypes_Pkg system_time,
  /* NID_icon_id/ */
  kcg_int64 NID_icon_id,
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_IconAck_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_IconAck_init_DMI_Control_Pkg_Sub_func(
  outC_Set_IconAck_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Set_IconAck_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_IconAck_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

