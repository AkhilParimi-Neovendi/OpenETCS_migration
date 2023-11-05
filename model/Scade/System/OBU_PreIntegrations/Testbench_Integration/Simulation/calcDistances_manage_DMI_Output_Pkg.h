/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _calcDistances_manage_DMI_Output_Pkg_H_
#define _calcDistances_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* outLocationKP_Balise_Track/ */ outLocationKP_Balise_Track;
  L_internal_Type_Obu_BasicTypes_Pkg /* ouDistanceKP_Balise/ */ ouDistanceKP_Balise;
  L_internal_Type_Obu_BasicTypes_Pkg /* outDistance_ToTSA/ */ outDistance_ToTSA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* doCalc/ */ doCalc;
  kcg_int32 /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_calcDistances_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::calcDistances/ */
extern void calcDistances_manage_DMI_Output_Pkg(
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  outC_calcDistances_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calcDistances_reset_manage_DMI_Output_Pkg(
  outC_calcDistances_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calcDistances_init_manage_DMI_Output_Pkg(
  outC_calcDistances_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calcDistances_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcDistances_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

