/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _MEM_convertP80_element_EVC_MEM_Support_Pkg_H_
#define _MEM_convertP80_element_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"
#include "scaleVelo_EVC_MEM_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* continue/ */ _1_continue;
  P80_ModeProfile_T_Packet_Types_Pkg /* p80/ */ p80;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_scaleVelo_EVC_MEM_Support_Pkg /* _L26=(EVC_MEM_Support_Pkg::scaleVelo#1)/ */ Context_scaleVelo_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P080_section_enum_T_TM /* _L1/ */ _L1;
  Q_MAMODE /* _L22/ */ _L22;
  L_ACKMAMODE /* _L21/ */ _L21;
  L_MAMODE /* _L20/ */ _L20;
  V_MAMODE /* _L19/ */ _L19;
  M_MAMODE /* _L18/ */ _L18;
  D_MAMODE /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  P80_ModeProfile_T_Packet_Types_Pkg /* _L23/ */ _L23;
  Q_DIR /* _L24/ */ _L24;
  Q_SCALE /* _L25/ */ _L25;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  P003_OBU_T_TM /* _L27/ */ _L27;
} outC_MEM_convertP80_element_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::MEM_convertP80_element/ */
extern void MEM_convertP80_element_EVC_MEM_Support_Pkg(
  /* p80TM/ */
  P080_section_enum_T_TM *p80TM,
  /* qDir/ */
  Q_DIR qDir,
  /* qScale/ */
  Q_SCALE qScale,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MEM_convertP80_element_reset_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MEM_convertP80_element_init_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MEM_convertP80_element_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_convertP80_element_EVC_MEM_Support_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

