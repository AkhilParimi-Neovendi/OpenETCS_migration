/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _interpolateMfromA_SDMConversionModelPkg_H_
#define _interpolateMfromA_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_internal_Type_Obu_BasicTypes_Pkg /* m/ */ m;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L13/ */ _L13_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L12/ */ _L12_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L11/ */ _L11_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L10/ */ _L10_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L9/ */ _L9_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L8/ */ _L8_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  A_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
} outC_interpolateMfromA_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::interpolateMfromA/ */
extern void interpolateMfromA_SDMConversionModelPkg(
  /* a/ */
  A_internal_Type_Obu_BasicTypes_Pkg a,
  /* a12/ */
  A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* a23/ */
  A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* m12/ */
  A_internal_Type_Obu_BasicTypes_Pkg m12,
  /* m23/ */
  A_internal_Type_Obu_BasicTypes_Pkg m23,
  outC_interpolateMfromA_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void interpolateMfromA_reset_SDMConversionModelPkg(
  outC_interpolateMfromA_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void interpolateMfromA_init_SDMConversionModelPkg(
  outC_interpolateMfromA_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _interpolateMfromA_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** interpolateMfromA_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

