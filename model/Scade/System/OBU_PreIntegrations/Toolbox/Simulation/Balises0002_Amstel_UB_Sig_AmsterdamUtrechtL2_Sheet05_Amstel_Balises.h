/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_
#define _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_353_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balise_Group_353#2)/ */ Context_Balise_Group_353_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L4/ */ _L4;
  CompressedBaliseMessage_TM /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L6/ */ _L6;
} outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617/ */
extern void Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balises0002_Amstel_UB_Sig_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

