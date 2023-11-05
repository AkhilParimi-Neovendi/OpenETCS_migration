/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _op_3_8_2_3_a_TA_MA_Request_H_
#define _op_3_8_2_3_a_TA_MA_Request_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "DIV_real_XCP_numeric.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* exception/ */ exception;
  kcg_bool /* triggerMA/ */ triggerMA;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* preindicationLoc/ */ mem_preindicationLoc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L34=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_DIV_real_XCP_numeric /* _L20=(XCP_numeric::DIV_real#1)/ */ Context_DIV_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  T_MAR /* _L2/ */ _L2;
  trainPosition_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
  kcg_float32 /* _L17/ */ _L17;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L21/ */ _L21;
  kcg_float32 /* _L20/ */ _L20;
  kcg_float32 /* _L27/ */ _L27;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
} outC_op_3_8_2_3_a_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_3_8_2_3_a/ */
extern void op_3_8_2_3_a_TA_MA_Request(
  /* t_mar/ */
  T_MAR t_mar,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* preindicationLoc/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_8_2_3_a_reset_TA_MA_Request(
  outC_op_3_8_2_3_a_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_8_2_3_a_init_TA_MA_Request(
  outC_op_3_8_2_3_a_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_3_8_2_3_a_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_8_2_3_a_TA_MA_Request.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

