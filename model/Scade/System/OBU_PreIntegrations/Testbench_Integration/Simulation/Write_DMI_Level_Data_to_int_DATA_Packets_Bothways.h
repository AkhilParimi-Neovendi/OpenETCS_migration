/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Write_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_
#define _Write_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_

#include "kcg_types.h"
#include "C_DMI_Level_Data_to_int_DATA_Packets_Bothways.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Level_Data_int_array_T_DATA /* dmi_level_data_int/ */ dmi_level_data_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_DMI_Level_Data_to_int_DATA_Packets_Bothways /* _L21=(DATA::Packets::Bothways::C_DMI_Level_Data_to_int#1)/ */ Context_C_DMI_Level_Data_to_int_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* _L14/ */ _L14;
  DMI_Level_Data_int_array_T_DATA /* _L21/ */ _L21;
  DMI_Level_Data_int_array_T_DATA /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
} outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Packets::Bothways::Write_DMI_Level_Data_to_int/ */
extern void Write_DMI_Level_Data_to_int_DATA_Packets_Bothways(
  /* dmi_level_data_ct/ */
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct,
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Level_Data_to_int_DATA_Packets_Bothways *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_DMI_Level_Data_to_int_DATA_Packets_Bothways_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Level_Data_to_int_DATA_Packets_Bothways.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

