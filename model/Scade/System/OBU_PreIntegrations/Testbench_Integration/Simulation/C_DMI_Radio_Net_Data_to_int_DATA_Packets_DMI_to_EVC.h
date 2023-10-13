/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC_H_
#define _C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Radio_Net_Data_int_array_T_DATA /* dmi_radio_net_data_int/ */ dmi_radio_net_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Bool_to_Int_Utilities /* _L17=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_2 /* _L2/ */ _L2;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L13/ */ _L13;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  kcg_int64 /* _L17/ */ _L17;
} outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::C_DMI_Radio_Net_Data_to_int/ */
extern void C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_radio_net_data_ct/ */
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct,
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_DMI_Radio_Net_Data_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_DMI_Radio_Net_Data_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

