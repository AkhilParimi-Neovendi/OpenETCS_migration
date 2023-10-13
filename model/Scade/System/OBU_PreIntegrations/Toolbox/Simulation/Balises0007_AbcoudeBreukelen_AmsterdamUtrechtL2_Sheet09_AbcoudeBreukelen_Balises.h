/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_
#define _Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_396_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L13=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_396#1)/ */ Context_Balise_Group_396_1;
  outC_Balise_Group_395_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L12=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_395#1)/ */ Context_Balise_Group_395_1;
  outC_Balise_Group_394_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L11=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_394#1)/ */ Context_Balise_Group_394_1;
  outC_Balise_Group_393_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L10=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_393#1)/ */ Context_Balise_Group_393_1;
  outC_Balise_Group_392_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L9=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_392#1)/ */ Context_Balise_Group_392_1;
  outC_Balise_Group_391_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L8=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_391#1)/ */ Context_Balise_Group_391_1;
  outC_Balise_Group_390_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L7=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_390#1)/ */ Context_Balise_Group_390_1;
  outC_Balise_Group_389_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L1=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_Group_389#1)/ */ Context_Balise_Group_389_1;
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
  CompressedBaliseMessage_TM /* _L10/ */ _L10;
  CompressedBaliseMessage_TM /* _L11/ */ _L11;
  CompressedBaliseMessage_TM /* _L12/ */ _L12;
  CompressedBaliseMessage_TM /* _L13/ */ _L13;
} outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen/ */
extern void Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Balises0007_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Balises0007_AbcoudeBreukelen_init_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

