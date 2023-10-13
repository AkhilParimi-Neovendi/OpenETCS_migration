/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI_H_
#define _CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_MN_TM_conversions.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_evc_radio_net_data_ct/ */ dmi_evc_radio_net_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_MN_TM_conversions /* _L6=(TM_conversions::CAST_Int_to_NID_MN#1)/ */ Context_CAST_Int_to_NID_MN_1;
  outC_Int_to_Bool_Utilities /* _L7=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg /* _L5/ */ _L5;
  NID_MN /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  DMI_EVC_Radio_Net_Data_int_array_T_DATA /* _L10/ */ _L10;
} outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data1/ */
extern void CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_radio_net_data_int/ */
  DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int,
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_EVC_Radio_Net_Data1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_EVC_Radio_Net_Data1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

