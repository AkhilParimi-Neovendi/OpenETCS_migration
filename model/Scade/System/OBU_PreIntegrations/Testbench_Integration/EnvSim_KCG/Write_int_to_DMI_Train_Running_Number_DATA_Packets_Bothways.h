/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways_H_
#define _Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* dmi_train_running_number_ct/ */ dmi_train_running_number_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways /* _L10=(DATA::Packets::Bothways::C_int_to_DMI_Train_Running_Number#1)/ */ Context_C_int_to_DMI_Train_Running_Number_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Running_Number_int_array_T_DATA /* _L8/ */ _L8;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* _L14/ */ _L14;
} outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number/ */
extern void Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
  /* dmi_train_running_number_int/ */
  DMI_Train_Running_Number_int_array_T_DATA *dmi_train_running_number_int,
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

