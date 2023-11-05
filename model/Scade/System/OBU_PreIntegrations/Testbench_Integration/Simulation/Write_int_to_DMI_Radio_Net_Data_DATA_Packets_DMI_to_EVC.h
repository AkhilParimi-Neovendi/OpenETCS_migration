/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC_H_
#define _Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* dmi_radio_net_data_ct/ */ dmi_radio_net_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC /* _L7=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data#1)/ */ Context_C_int_to_DMI_Radio_Net_Data_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Radio_Net_Data_int_array_T_DATA /* _L5/ */ _L5;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* _L12/ */ _L12;
} outC_Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data/ */
extern void Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* dmi_radio_net_data_int/ */
  DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  outC_Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Radio_Net_Data_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Radio_Net_Data_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

