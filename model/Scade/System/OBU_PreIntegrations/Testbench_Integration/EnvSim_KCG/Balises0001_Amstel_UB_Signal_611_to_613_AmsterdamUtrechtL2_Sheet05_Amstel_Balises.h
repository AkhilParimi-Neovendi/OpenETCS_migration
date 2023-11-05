/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_
#define _Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_352#1)/ */ Context_Balise_Group_352_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L3/ */ _L3;
  CompressedBaliseMessage_TM /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  TrackSectionData_T_InfraLib /* _L15/ */ _L15;
} outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613/ */
extern void Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balises0001_Amstel_UB_Signal_611_to_613_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balises0001_Amstel_UB_Signal_611_to_613_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

