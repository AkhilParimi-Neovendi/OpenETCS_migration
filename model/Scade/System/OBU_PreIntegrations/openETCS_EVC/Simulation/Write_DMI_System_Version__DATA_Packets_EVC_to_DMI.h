/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Write_DMI_System_Version__DATA_Packets_EVC_to_DMI_H_
#define _Write_DMI_System_Version__DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_DMI_System_Version_t_DATA_Packets_EVC_to_DMI.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_System_Version_int_array_T_DATA /* dmi_system_version_int/ */ dmi_system_version_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_DMI_System_Version_t_DATA_Packets_EVC_to_DMI /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_System_Version_to_int1#1)/ */ Context_CAST_DMI_System_Version_to_int1_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  DMI_System_Version_int_array_T_DATA /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  DMI_System_Version_int_array_T_DATA /* _L10/ */ _L10;
} outC_Write_DMI_System_Version__DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::Write_DMI_System_Version_to_int/ */
extern void Write_DMI_System_Version__DATA_Packets_EVC_to_DMI(
  /* dmi_system_version_ct/ */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_system_version_ct,
  outC_Write_DMI_System_Version__DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_DMI_System_Version__reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_System_Version__DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_DMI_System_Version__init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_System_Version__DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_DMI_System_Version__DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_System_Version__DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

