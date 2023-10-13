/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_Area_group_to_int_DATA_Variables.h"
#include "CAST_Icon_group_to_int_DATA_Variables.h"
#include "CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables.h"
#include "CAST_Icon_control_flag_to_int_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_int_array_T_DATA /* dmi_icons_int/ */ dmi_icons_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Bool_to_Int_Utilities /* _L22=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  outC_CAST_Icon_control_flag_to_int_DATA_Variables /* _L23=(DATA::Variables::CAST_Icon_control_flag_to_int#1)/ */ Context_CAST_Icon_control_flag_to_int_1;
  outC_CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables /* _L24=(DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int#1)/ */ Context_CAST_DMI_m_icon_flashing_freq_to_int_1;
  outC_CAST_Icon_group_to_int_DATA_Variables /* _L25=(DATA::Variables::CAST_Icon_group_to_int#1)/ */ Context_CAST_Icon_group_to_int_1;
  outC_CAST_Area_group_to_int_DATA_Variables /* _L26=(DATA::Variables::CAST_Area_group_to_int#1)/ */ Context_CAST_Area_group_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L10/ */ _L10;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  Icon_control_flag_T_DMI_Types_Pkg /* _L8/ */ _L8;
  kcg_float64 /* _L7/ */ _L7;
  Icon_group_T_DMI_Types_Pkg /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  Area_group_T_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  array_int64_9 /* _L11/ */ _L11;
  kcg_int64 /* _L22/ */ _L22;
  Icon_control_flag_INT_T_DATA /* _L23/ */ _L23;
  DMI_m_icon_flashing_freq_INT_T_DATA /* _L24/ */ _L24;
  Icon_group_INT_T_DATA /* _L25/ */ _L25;
  Area_group_INT_T_DATA /* _L26/ */ _L26;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* _L27/ */ _L27;
} outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int1/ */
extern void CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_ct/ */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct,
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_Icons_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_Icons_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

