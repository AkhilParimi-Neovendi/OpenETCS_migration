/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Write_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_
#define _Write_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Train_Data_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* dmi_train_data_ct/ */ dmi_train_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Train_Data_DATA_Packets_Bothways /* _L20=(DATA::Packets::Bothways::C_int_to_DMI_Train_Data#1)/ */ Context_C_int_to_DMI_Train_Data_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Data_int_array_T_DATA /* _L18/ */ _L18;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L20/ */ _L20;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L21/ */ _L21;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
} outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::Write_int_to_DMI_Train_Data/ */
extern void Write_int_to_DMI_Train_Data_DATA_Packets_Bothways(
  /* dmi_train_data_int/ */
  DMI_Train_Data_int_array_T_DATA *dmi_train_data_int,
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Train_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Train_Data_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Train_Data_DATA_Packets_Bothways.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

