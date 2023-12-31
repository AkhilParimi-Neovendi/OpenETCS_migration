/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises_H_
#define _Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises_H_

#include "kcg_types.h"
#include "Balise_409_0_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"
#include "Balise_409_1_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"
#include "Balise_Group_Close_InfraLib.h"
#include "Balise_Group_Init_InfraLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* BG_message_out/ */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_InfraLib /* _L14=(InfraLib::Balise_Group_Close#1)/ */ Context_Balise_Group_Close_1;
  outC_Balise_409_1_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises /* _L7=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_409_1#1)/ */ Context_Balise_409_1_1;
  outC_Balise_409_0_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_409_0#1)/ */ Context_Balise_409_0_1;
  outC_Balise_Group_Init_InfraLib /* _L11=(InfraLib::Balise_Group_Init#1)/ */ Context_Balise_Group_Init_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_InfraLib /* BaliseDataIn/ */ BaliseDataIn;
  B_data_internal_T_InfraLib /* BaliseDataOut/ */ BaliseDataOut;
  B_data_internal_T_InfraLib /* _L7/ */ _L7;
  B_data_internal_T_InfraLib /* _L9/ */ _L9;
  B_data_internal_T_InfraLib /* _L11/ */ _L11;
  CompressedBaliseMessage_TM /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  B_data_internal_T_InfraLib /* _L16/ */ _L16;
  BaliseGroupData_TM /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  B_data_internal_T_InfraLib /* _L8/ */ _L8;
  kcg_float32 /* _L28/ */ _L28;
  CompressedBaliseMessage_TM /* _L29/ */ _L29;
} outC_Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balise_Group_409/ */
extern void Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* BG_message_in/ */
  CompressedBaliseMessage_TM *BG_message_in,
  /* TrainPos/ */
  kcg_float32 TrainPos,
  /* Engineering_Data/ */
  BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balise_Group_409_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  outC_Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balise_Group_409_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  outC_Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_409_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

