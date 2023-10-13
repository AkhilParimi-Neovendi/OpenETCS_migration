/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Write_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_
#define _Write_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* dmi_level_data_ct/ */ dmi_level_data_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_int_to_DMI_Level_Data_DATA_Packets_Bothways /* _L13=(DATA::Packets::Bothways::C_int_to_DMI_Level_Data#1)/ */ Context_C_int_to_DMI_Level_Data_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Level_Data_int_array_T_DATA /* _L8/ */ _L8;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L13/ */ _L13;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L17/ */ _L17;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L15/ */ _L15;
} outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::Write_int_to_DMI_Level_Data/ */
extern void Write_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* dmi_level_data_int/ */
  DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Level_Data_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_int_to_DMI_Level_Data_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Level_Data_DATA_Packets_Bothways.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

