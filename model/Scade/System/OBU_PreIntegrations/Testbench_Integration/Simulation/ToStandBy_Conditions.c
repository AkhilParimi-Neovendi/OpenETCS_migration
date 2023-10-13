/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStandBy_Conditions.h"

/* Conditions::ToStandBy/ */
void ToStandBy_Conditions(
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* All_Desks_Closed/ */
  kcg_bool All_Desks_Closed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Req_SL/ */
  kcg_bool Train_Req_SL,
  /* OnBoard_Powered/ */
  kcg_bool OnBoard_Powered,
  /* Train_Permitted_PS/ */
  kcg_bool Train_Permitted_PS,
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Continue_Shunting_function_Active/ */
  kcg_bool Continue_Shunting_function_Active,
  /* Driver_Req_Exit_SH/ */
  kcg_bool Driver_Req_Exit_SH,
  /* Stop_Shunting_Stored/ */
  kcg_bool Stop_Shunting_Stored,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  outC_ToStandBy_Conditions *outC)
{
  outC->_L148 = Train_Standstill;
  outC->_L8 = Train_Permitted_NL;
  outC->_L106 = !outC->_L8;
  outC->_L102 = outC->_L106 & outC->_L148;
  outC->_L7 = Train_Permitted_PS;
  outC->_L77 = !outC->_L7;
  outC->_L79 = All_Desks_Closed;
  outC->_L80 = outC->_L79 & outC->_L77;
  outC->_L125 = All_Desks_Closed;
  outC->_L63 = Continue_Shunting_function_Active;
  outC->_L64 = !outC->_L63;
  outC->_L62 = All_Desks_Closed;
  outC->_L55 = outC->_L62 & outC->_L64;
  outC->_L98 = Stop_Shunting_Stored;
  outC->_L97 = Desk_Open;
  outC->_L96 = outC->_L97 & outC->_L98;
  outC->_L10 = Driver_Req_Exit_SH;
  outC->_L32 = Train_Standstill;
  outC->_L34 = outC->_L32 & outC->_L10;
  outC->_L24 = OnBoard_Powered;
  outC->_L4 = Train_Req_SL;
  outC->_L23 = !outC->_L4;
  outC->_L3 = Train_Standstill;
  outC->_L147 = outC->_L3 & outC->_L23;
  outC->_L146 = Desk_Open;
  outC->_L150 = outC->_L146 | outC->_L147 | outC->_L24 | outC->_L34 |
    outC->_L96 | outC->_L55 | outC->_L125 | outC->_L80 | outC->_L102;
  outC->_L149 = On_Going_Mission;
  outC->_L151 = outC->_L149 & outC->_L150;
  outC->End_Of_Mission_Procedure_Req = outC->_L151;
  outC->Condition47 = outC->_L102;
  outC->Condition30 = outC->_L80;
  outC->Condition28 = outC->_L125;
  outC->Condition27 = outC->_L55;
  outC->Condition22 = outC->_L96;
  outC->Condition19 = outC->_L34;
  outC->Condition4 = outC->_L24;
  outC->Condition3 = outC->_L147;
  outC->Condition2 = outC->_L146;
}

#ifndef KCG_USER_DEFINED_INIT
void ToStandBy_init_Conditions(outC_ToStandBy_Conditions *outC)
{
  outC->_L151 = kcg_true;
  outC->_L150 = kcg_true;
  outC->_L149 = kcg_true;
  outC->_L148 = kcg_true;
  outC->_L147 = kcg_true;
  outC->_L146 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Condition47 = kcg_true;
  outC->Condition30 = kcg_true;
  outC->Condition28 = kcg_true;
  outC->Condition27 = kcg_true;
  outC->Condition22 = kcg_true;
  outC->Condition19 = kcg_true;
  outC->Condition4 = kcg_true;
  outC->Condition3 = kcg_true;
  outC->Condition2 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToStandBy_reset_Conditions(outC_ToStandBy_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToStandBy_Conditions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

