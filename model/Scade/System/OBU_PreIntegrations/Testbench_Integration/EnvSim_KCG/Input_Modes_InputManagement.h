/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Input_Modes_InputManagement_H_
#define _Input_Modes_InputManagement_H_

#include "kcg_types.h"
#include "Input_Staff_Responsible_InputManagement.h"
#include "Input_Reversing_Mode_InputManagement.h"
#include "Input_ModeProfiles_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Stop_If_In_SH/ */ Stop_If_In_SH;
  kcg_bool /* Stop_if_In_SR/ */ Stop_if_In_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* Reversing_Data/ */ Reversing_Data;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* Mode_Profile_On_Borad/ */ Mode_Profile_On_Borad;
  kcg_bool /* List_BG_Related_SR_Empty/ */ List_BG_Related_SR_Empty;
  kcg_bool /* Trip_Order_givrn_By_Balise/ */ Trip_Order_givrn_By_Balise;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Input_ModeProfiles_InputManagement /* _L92=(InputManagement::Input_ModeProfiles#1)/ */ Context_Input_ModeProfiles_1[3];
  outC_Input_Reversing_Mode_InputManagement /* _L94=(InputManagement::Input_Reversing_Mode#1)/ */ Context_Input_Reversing_Mode_1;
  outC_Input_Staff_Responsible_InputManagement /* _L97=(InputManagement::Input_Staff_Responsible#1)/ */ Context_Input_Staff_Responsible_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* Loc_Packet_12/ */ Loc_Packet_12;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* Loc_Packet_139/ */ Loc_Packet_139;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* Loc_Packet_138/ */ Loc_Packet_138;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* Loc_Packet_137/ */ Loc_Packet_137;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* Loc_Packet_135/ */ Loc_Packet_135;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* Loc_Packet_63/ */ Loc_Packet_63;
  P80_ModeProfiles_T_Packet_Types_Pkg /* Loc_Packet_80/ */ Loc_Packet_80;
  Location_T_Obu_BasicTypes_Pkg /* Loc_referenceLocation/ */ Loc_referenceLocation;
  kcg_bool /* _L55/ */ _L55;
  Q_DIR /* _L54/ */ _L54;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L84/ */ _L84;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L90/ */ _L90;
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* _L89/ */ _L89;
  kcg_int64 /* _L88/ */ _L88;
  V_MAIN /* _L87/ */ _L87;
  kcg_bool /* _L86/ */ _L86;
  P12_Level1MovementAuthority_T_Packet_Types_Pkg /* _L85/ */ _L85;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* _L92/ */ _L92;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L93/ */ _L93;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L94/ */ _L94;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L95/ */ _L95;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L98/ */ _L98;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* _L99/ */ _L99;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L100/ */ _L100;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* _L101/ */ _L101;
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg /* _L115/ */ _L115;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg /* _L114/ */ _L114;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg /* _L113/ */ _L113;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L112/ */ _L112;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L111/ */ _L111;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg /* _L110/ */ _L110;
  P21_GradientProfiles_T_Packet_Types_Pkg /* _L109/ */ _L109;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* _L108/ */ _L108;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L107/ */ _L107;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg /* _L106/ */ _L106;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg /* _L105/ */ _L105;
  P80_ModeProfiles_T_Packet_Types_Pkg /* _L104/ */ _L104;
  NID_LRBG /* _L103/ */ _L103;
  Location_T_Obu_BasicTypes_Pkg /* _L102/ */ _L102;
  array_int64_3 /* _L118/ */ _L118;
  Location_T_Obu_BasicTypes_Pkg /* _L119/ */ _L119;
  Location_T_Obu_BasicTypes_Pkg /* _L120/ */ _L120;
} outC_Input_Modes_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_Modes/ */
extern void Input_Modes_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  outC_Input_Modes_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Modes_reset_InputManagement(
  outC_Input_Modes_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Modes_init_InputManagement(
  outC_Input_Modes_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_Modes_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Modes_InputManagement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

