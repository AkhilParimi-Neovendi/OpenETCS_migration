/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define __138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "_133_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsConsistent/ */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__133_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_MARQSTREASON#1)/ */ Context_RadioTrainTrackHeader__Get_Q_MARQSTREASON_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L6/ */ _L6;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L5/ */ _L5;
  Q_MARQSTREASON /* _L4/ */ _L4;
  Q_MARQSTREASON /* _L1/ */ _L1;
} outC__138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader/ */
extern void _138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC__138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _138_Msg146ConsistencyChe_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _138_Msg146ConsistencyChe_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

