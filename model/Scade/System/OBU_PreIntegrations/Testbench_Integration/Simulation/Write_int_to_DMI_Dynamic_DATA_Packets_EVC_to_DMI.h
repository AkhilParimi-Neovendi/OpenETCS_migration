/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI_H_
#define _Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_dynamic_ct/ */ dmi_dynamic_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_Dynamic1_DATA_Packets_EVC_to_DMI /* _L44=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Dynamic1#1)/ */ Context_CAST_int_to_DMI_Dynamic1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_int_array_T_DATA /* _L38/ */ _L38;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L44/ */ _L44;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L45/ */ _L45;
  kcg_bool /* _L48/ */ _L48;
  kcg_int32 /* _L47/ */ _L47;
  kcg_int32 /* _L46/ */ _L46;
} outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic/ */
extern void Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
  /* dmi_dynamic_int/ */
  DMI_Dynamic_int_array_T_DATA *dmi_dynamic_int,
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Dynamic_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Dynamic_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

