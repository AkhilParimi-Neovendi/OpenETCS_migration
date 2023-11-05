/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_
#define _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "ASCII_to_Char_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* DMI_DriverID_packet/ */ DMI_DriverID_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ASCII_to_Char_iterator_DMI_Control_Pkg_Utils /* _L4=(DMI_Control_Pkg::Utils::ASCII_to_Char_iterator#1)/ */ Context_ASCII_to_Char_iterator_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  array_int32_9 /* _L1/ */ _L1;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg /* _L4/ */ _L4;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* _L5/ */ _L5;
} outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet/ */
extern void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DriverID/ */
  array_int32_9 *DriverID,
  /* valid/ */
  kcg_bool valid,
  /* CurrentSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_DriverID_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_DriverID_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DriverID_packet_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Set_DriverID_packet_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

