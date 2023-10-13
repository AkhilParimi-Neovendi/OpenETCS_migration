/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Set_level_data_DMI_Control_Pkg_Sub_func_H_
#define _Set_level_data_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* dmi_level_data/ */ dmi_level_data;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  DMI_level_T_DMI_Types_Pkg /* _L9/ */ _L9;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L11/ */ _L11;
} outC_Set_level_data_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Set_level_data/ */
extern void Set_level_data_DMI_Control_Pkg_Sub_func(
  /* LevelDataAck/ */
  kcg_bool LevelDataAck,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* level/ */
  DMI_level_T_DMI_Types_Pkg *level,
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Set_level_data_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Set_level_data_init_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Set_level_data_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Set_level_data_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

