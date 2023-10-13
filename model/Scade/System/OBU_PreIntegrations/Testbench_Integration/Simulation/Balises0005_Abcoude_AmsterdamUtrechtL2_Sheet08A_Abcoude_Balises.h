/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_
#define _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* _L9=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balise_Group_377#1)/ */ Context_Balise_Group_377_1;
  outC_Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* _L8=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balise_Group_376#1)/ */ Context_Balise_Group_376_1;
  outC_Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* _L7=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balise_Group_375#1)/ */ Context_Balise_Group_375_1;
  outC_Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* _L1=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balise_Group_374#1)/ */ Context_Balise_Group_374_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L4/ */ _L4;
  CompressedBaliseMessage_TM /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L6/ */ _L6;
  CompressedBaliseMessage_TM /* _L7/ */ _L7;
  CompressedBaliseMessage_TM /* _L8/ */ _L8;
  CompressedBaliseMessage_TM /* _L9/ */ _L9;
} outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude/ */
extern void Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balises0005_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balises0005_Abcoude_init_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

