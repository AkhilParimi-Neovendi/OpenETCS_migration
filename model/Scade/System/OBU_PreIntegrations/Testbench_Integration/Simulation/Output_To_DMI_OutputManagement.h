/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Output_To_DMI_OutputManagement_H_
#define _Output_To_DMI_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* announcedLevel/ */ announcedLevel;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* Data_To_DMI_Ack/ */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* needsAckFromDriver/ */ mem_needsAckFromDriver;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_MODE /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:_L3/ */ _L3_else_else_else_else_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  M_MODE /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  M_MODE /* Loc_Selected_Mode_For_Ack/ */ Loc_Selected_Mode_For_Ack;
  kcg_bool /* Loc_Valid/ */ Loc_Valid;
  kcg_bool /* Loc_SH_Refused_By_RBC_To_DMI/ */ Loc_SH_Refused_By_RBC_To_DMI;
  kcg_bool /* Loc_Ack_UN_Req_To_Driver/ */ Loc_Ack_UN_Req_To_Driver;
  kcg_bool /* Loc_Ack_TR_Req_To_Driver/ */ Loc_Ack_TR_Req_To_Driver;
  kcg_bool /* Loc_Ack_SR_Req_To_Driver/ */ Loc_Ack_SR_Req_To_Driver;
  kcg_bool /* Loc_Ack_SN_Req_To_Driver/ */ Loc_Ack_SN_Req_To_Driver;
  kcg_bool /* Loc_Ack_SH_Req_To_Driver/ */ Loc_Ack_SH_Req_To_Driver;
  kcg_bool /* Loc_Ack_RV_Req_To_Driver/ */ Loc_Ack_RV_Req_To_Driver;
  kcg_bool /* Loc_Ack_OS_Req_To_Driver/ */ Loc_Ack_OS_Req_To_Driver;
  kcg_bool /* Loc_Ack_LS_Req_To_Driver/ */ Loc_Ack_LS_Req_To_Driver;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  M_MODE /* _L19/ */ _L19;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L39/ */ _L39;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L42/ */ _L42;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
} outC_Output_To_DMI_OutputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_To_DMI/ */
extern void Output_To_DMI_OutputManagement(
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  /* needsAckFromDriver/ */
  kcg_bool needsAckFromDriver,
  /* Data_To_DMI_From_Mode/ */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* announcedLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* isAvailableForUse/ */
  kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_DMI_init_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* needsAckFromDriver/ */ Context_mem_needsAckFromDriver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_Output_To_DMI_OutputManagement;

extern void kcg_save_SV_Output_To_DMI_OutputManagement(
  SV_Output_To_DMI_OutputManagement *SV,
  outC_Output_To_DMI_OutputManagement *outC);
extern void kcg_load_SV_Output_To_DMI_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC,
  SV_Output_To_DMI_OutputManagement *SV);



#endif /* _Output_To_DMI_OutputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_DMI_OutputManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

