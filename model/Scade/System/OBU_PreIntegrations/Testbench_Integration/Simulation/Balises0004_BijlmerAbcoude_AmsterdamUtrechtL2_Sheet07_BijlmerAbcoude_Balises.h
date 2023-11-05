/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises_H_
#define _Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_373_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"
#include "Balise_Group_372_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"
#include "Balise_Group_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_373_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises /* _L8=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_373#2)/ */ Context_Balise_Group_373_2;
  outC_Balise_Group_372_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises /* _L7=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_372#1)/ */ Context_Balise_Group_372_1;
  outC_Balise_Group_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises /* _L1=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_Group_371#1)/ */ Context_Balise_Group_371_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L4/ */ _L4;
  CompressedBaliseMessage_TM /* _L3/ */ _L3;
  kcg_float32 /* _L2/ */ _L2;
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L6/ */ _L6;
  CompressedBaliseMessage_TM /* _L7/ */ _L7;
  CompressedBaliseMessage_TM /* _L8/ */ _L8;
} outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude/ */
extern void Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balises0004_BijlmerAbcoude_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

