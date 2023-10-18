/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ToFullSupervision_Conditions_H_
#define _ToFullSupervision_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition25/ */ Condition25;
  kcg_bool /* Condition31/ */ Condition31;
  kcg_bool /* Condition32/ */ Condition32;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ mem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* FS_Data_Condition/ */ FS_Data_Condition;
  kcg_bool /* _L277/ */ _L277;
  kcg_bool /* _L276/ */ _L276;
  M_LEVEL /* _L275/ */ _L275;
  kcg_bool /* _L274/ */ _L274;
  kcg_bool /* _L272/ */ _L272;
  kcg_bool /* _L270/ */ _L270;
  M_LEVEL /* _L297/ */ _L297;
  kcg_bool /* _L290/ */ _L290;
  kcg_bool /* _L352/ */ _L352;
  kcg_bool /* _L385/ */ _L385;
  M_LEVEL /* _L383/ */ _L383;
  kcg_bool /* _L382/ */ _L382;
  kcg_bool /* _L381/ */ _L381;
  kcg_bool /* _L375/ */ _L375;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L387/ */ _L387;
  kcg_bool /* _L391/ */ _L391;
  kcg_bool /* _L404/ */ _L404;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L406/ */ _L406;
  kcg_bool /* _L408/ */ _L408;
  kcg_bool /* _L413/ */ _L413;
  T_MA_Level_And_Mode_Types_Pkg /* _L414/ */ _L414;
  kcg_bool /* _L417/ */ _L417;
  kcg_bool /* _L418/ */ _L418;
  kcg_bool /* _L419/ */ _L419;
  M_LEVEL /* _L420/ */ _L420;
  kcg_bool /* _L424/ */ _L424;
  kcg_bool /* _L423/ */ _L423;
  kcg_bool /* _L422/ */ _L422;
  kcg_bool /* _L421/ */ _L421;
  kcg_bool /* _L425/ */ _L425;
  T_MA_Level_And_Mode_Types_Pkg /* _L426/ */ _L426;
  M_LEVEL /* _L427/ */ _L427;
} outC_ToFullSupervision_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToFullSupervision/ */
extern void ToFullSupervision_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Trip_Order_Given_By_Balise/ */
  kcg_bool Trip_Order_Given_By_Balise,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToFullSupervision_reset_Conditions(
  outC_ToFullSupervision_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToFullSupervision_init_Conditions(
  outC_ToFullSupervision_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ToFullSupervision_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToFullSupervision_Conditions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

