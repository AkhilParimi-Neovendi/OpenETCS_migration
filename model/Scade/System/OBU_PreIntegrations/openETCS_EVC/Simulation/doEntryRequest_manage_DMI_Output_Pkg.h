/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _doEntryRequest_manage_DMI_Output_Pkg_H_
#define _doEntryRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* new_menuRequest/ */ new_menuRequest;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* new_entryRequest/ */ new_entryRequest;
  kcg_bool /* sendTrainDataToDMI/ */ sendTrainDataToDMI;
  kcg_bool /* outLevelsNeeded/ */ outLevelsNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapEntryForLevel_manage_DMI_Output_Pkg /* _L4=(manage_DMI_Output_Pkg::mapEntryForLevel#1)/ */ Context_mapEntryForLevel_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* valid/ */ valid;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* entry/ */ entry;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* _L3/ */ _L3;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* _L4/ */ _L4;
} outC_doEntryRequest_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::doEntryRequest/ */
extern void doEntryRequest_manage_DMI_Output_Pkg(
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void doEntryRequest_reset_manage_DMI_Output_Pkg(
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void doEntryRequest_init_manage_DMI_Output_Pkg(
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _doEntryRequest_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doEntryRequest_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

