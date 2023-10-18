/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Position_In_Ack_Area_Acknowledgement_H_
#define _Position_In_Ack_Area_Acknowledgement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Position_In_Ack_Area/ */ Position_In_Ack_Area;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L9/ */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  Location_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  Location_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  Location_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
} outC_Position_In_Ack_Area_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::Position_In_Ack_Area/ */
extern void Position_In_Ack_Area_Acknowledgement(
  /* Position/ */
  Location_T_Obu_BasicTypes_Pkg Position,
  /* D_Area/ */
  Location_T_Obu_BasicTypes_Pkg D_Area,
  /* L_Ack_Area/ */
  Location_T_Obu_BasicTypes_Pkg L_Ack_Area,
  outC_Position_In_Ack_Area_Acknowledgement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Position_In_Ack_Area_reset_Acknowledgement(
  outC_Position_In_Ack_Area_Acknowledgement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Position_In_Ack_Area_init_Acknowledgement(
  outC_Position_In_Ack_Area_Acknowledgement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Position_In_Ack_Area_Acknowledgement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Position_In_Ack_Area_Acknowledgement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

