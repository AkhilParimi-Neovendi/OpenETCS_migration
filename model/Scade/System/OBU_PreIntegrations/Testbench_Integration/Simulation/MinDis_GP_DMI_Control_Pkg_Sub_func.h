/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _MinDis_GP_DMI_Control_Pkg_Sub_func_H_
#define _MinDis_GP_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GP_DMI_Control_Pkg_Sub_func /* acc_out/ */ acc_out;
  kcg_bool /* visable_out/ */ visable_out;
  kcg_float32 /* start_out/ */ start_out;
  kcg_float32 /* end_out/ */ end_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GP_DMI_Control_Pkg_Sub_func /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  GP_DMI_Control_Pkg_Sub_func /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:_L7/ */ _L7_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  GP_DMI_Control_Pkg_Sub_func /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  GP_DMI_Control_Pkg_Sub_func /* _L4/ */ _L4;
} outC_MinDis_GP_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::MinDis_GP/ */
extern void MinDis_GP_DMI_Control_Pkg_Sub_func(
  /* acc/ */
  GP_DMI_Control_Pkg_Sub_func *acc,
  /* visable/ */
  kcg_bool visable,
  /* start_gp/ */
  kcg_float32 start_gp,
  /* end_gp/ */
  kcg_float32 end_gp,
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MinDis_GP_reset_DMI_Control_Pkg_Sub_func(
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MinDis_GP_init_DMI_Control_Pkg_Sub_func(
  outC_MinDis_GP_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MinDis_GP_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MinDis_GP_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

