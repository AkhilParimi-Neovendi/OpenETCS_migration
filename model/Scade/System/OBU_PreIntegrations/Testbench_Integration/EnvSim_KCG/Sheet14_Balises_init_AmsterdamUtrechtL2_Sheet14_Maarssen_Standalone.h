/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Balise_Group_14_201_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Balise_Group_14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Balise_Group_14_100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_14_201_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L21=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Balise_Group_14_201#1)/ */ Context_Balise_Group_14_201_1;
  outC_Balise_Group_14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L7=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Balise_Group_14_200#1)/ */ Context_Balise_Group_14_200_1;
  outC_Balise_Group_14_100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Balise_Group_14_100#1)/ */ Context_Balise_Group_14_100_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L4/ */ _L4;
  CompressedBaliseMessage_TM /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L6/ */ _L6;
  CompressedBaliseMessage_TM /* _L7/ */ _L7;
  CompressedBaliseMessage_TM /* _L21/ */ _L21;
} outC_Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init/ */
extern void Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet14_Balises_init_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet14_Balises_init_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

