/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _doIdentifierRequest_manage_DMI_Output_Pkg_H_
#define _doIdentifierRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* identifierRequest/ */ identifierRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  M_VERSION /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_VERSION /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isStarted/ */ isStarted;
  kcg_bool /* _L2/ */ _L2;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L3/ */ _L3;
} outC_doIdentifierRequest_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::doIdentifierRequest/ */
extern void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* ownVersion/ */
  M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void doIdentifierRequest_init_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _doIdentifierRequest_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doIdentifierRequest_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

