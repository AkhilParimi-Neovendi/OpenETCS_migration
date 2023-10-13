/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func_H_
#define _Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_identifier_packet/ */ dmi_identifier_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TEXT_DMI_Types_Pkg /* _L4/ */ _L4;
  array_char_243 /* _L5/ */ _L5;
  kcg_char /* _L6/ */ _L6;
  array_char_12 /* _L7/ */ _L7;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L23/ */ _L23;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* _L25/ */ _L25;
  M_VERSION /* _L40/ */ _L40;
  DMI_TEXT_DMI_Types_Pkg /* _L39/ */ _L39;
  L_TEXT /* _L38/ */ _L38;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg /* _L37/ */ _L37;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* _L36/ */ _L36;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  kcg_int64 /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
} outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER/ */
extern void Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
  /* DMI_name/ */
  array_char_12 *DMI_name,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* valid/ */
  kcg_bool valid,
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_DMI_IDENTIFIER_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_DMI_IDENTIFIER_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

