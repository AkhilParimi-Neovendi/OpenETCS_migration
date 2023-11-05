/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CAST_int_to_DMI_DMI_identifier_DATA_Variables_H_
#define _CAST_int_to_DMI_DMI_identifier_DATA_Variables_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* dmi_dmi_identifier_ct/ */ dmi_dmi_identifier_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  DMI_DMI_Identifier_T_DMI_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* error/ */ error;
  kcg_bool /* _L22/ */ _L22;
} outC_CAST_int_to_DMI_DMI_identifier_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_DMI_identifier/ */
extern void CAST_int_to_DMI_DMI_identifier_DATA_Variables(
  /* dmi_dmi_identifier_int/ */
  kcg_int32 dmi_dmi_identifier_int,
  outC_CAST_int_to_DMI_DMI_identifier_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_DMI_identifier_reset_DATA_Variables(
  outC_CAST_int_to_DMI_DMI_identifier_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_DMI_identifier_init_DATA_Variables(
  outC_CAST_int_to_DMI_DMI_identifier_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_DMI_identifier_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_DMI_identifier_DATA_Variables.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

