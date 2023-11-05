/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"
#include "Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises /* _L2=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */ Context_Balises0012_MaarssenUtrechtCS_1;
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */ Context_Balises0011_Maarssen_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L2/ */ _L2;
  TrackSectionData_T_InfraLib /* _L3/ */ _L3;
} outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises/ */
extern void Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet14_Maarssen_balises_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet14_Maarssen_balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

