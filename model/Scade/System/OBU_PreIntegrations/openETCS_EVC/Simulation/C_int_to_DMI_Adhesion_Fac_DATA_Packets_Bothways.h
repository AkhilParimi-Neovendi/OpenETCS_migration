/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways_H_
#define _C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_ADHESION_TM_conversions.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* dmi_adhesion_factor_data_ct/ */ dmi_adhesion_factor_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ADHESION_TM_conversions /* _L6=(TM_conversions::CAST_Int_to_M_ADHESION#1)/ */ Context_CAST_Int_to_M_ADHESION_1;
  outC_Int_to_Bool_Utilities /* _L10=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  M_ADHESION /* _L6/ */ _L6;
  _15_DMI_Adhesion_Factor_Data_int_array_T_DATA /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
} outC_C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data/ */
extern void C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways(
  /* dmi_adhesion_factor_data_int/ */
  _15_DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int,
  outC_C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_int_to_DMI_Adhesion_Fac_reset_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_int_to_DMI_Adhesion_Fac_init_DATA_Packets_Bothways(
  outC_C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Adhesion_Fac_DATA_Packets_Bothways.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

