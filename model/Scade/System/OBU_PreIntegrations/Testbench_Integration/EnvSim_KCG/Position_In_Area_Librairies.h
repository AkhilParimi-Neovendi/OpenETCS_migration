/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Position_In_Area_Librairies_H_
#define _Position_In_Area_Librairies_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Position_In_Area/ */ Position_In_Area;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Location_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  Location_T_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  Location_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  Location_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Position_In_Area_Librairies;

/* ===========  node initialization and cycle functions  =========== */
/* Librairies::Position_In_Area/ */
extern void Position_In_Area_Librairies(
  /* Position/ */
  Location_T_Obu_BasicTypes_Pkg Position,
  /* D_Area/ */
  Location_T_Obu_BasicTypes_Pkg D_Area,
  /* L_Area/ */
  Location_T_Obu_BasicTypes_Pkg L_Area,
  outC_Position_In_Area_Librairies *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Position_In_Area_reset_Librairies(
  outC_Position_In_Area_Librairies *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Position_In_Area_init_Librairies(
  outC_Position_In_Area_Librairies *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Position_In_Area_Librairies_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Position_In_Area_Librairies.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

