/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_Area_group_DATA_Variables.h"
#include "CAST_int_to_Icon_group_DATA_Variables.h"
#include "CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables.h"
#include "CAST_int_to_Icon_control_flag_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_icons_ct/ */ dmi_icons_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_Area_group_DATA_Variables /* _L26=(DATA::Variables::CAST_int_to_Area_group#1)/ */ Context_CAST_int_to_Area_group_1;
  outC_CAST_int_to_Icon_group_DATA_Variables /* _L25=(DATA::Variables::CAST_int_to_Icon_group#1)/ */ Context_CAST_int_to_Icon_group_1;
  outC_CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables /* _L24=(DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq#1)/ */ Context_CAST_to_int_DMI_m_icon_flashing_freq_1;
  outC_CAST_int_to_Icon_control_flag_DATA_Variables /* _L23=(DATA::Variables::CAST_int_to_Icon_control_flag#1)/ */ Context_CAST_int_to_Icon_control_flag_1;
  outC_Int_to_Bool_Utilities /* _L22=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L22/ */ _L22;
  Icon_control_flag_T_DMI_Types_Pkg /* _L23/ */ _L23;
  kcg_float32 /* _L24/ */ _L24;
  Icon_group_T_DMI_Types_Pkg /* _L25/ */ _L25;
  Area_group_T_DMI_Types_Pkg /* _L26/ */ _L26;
  DMI_Icons_int_array_T_DATA /* _L29/ */ _L29;
} outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons1/ */
extern void CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_int/ */
  DMI_Icons_int_array_T_DATA *dmi_icons_int,
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_Icons1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_Icons1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

