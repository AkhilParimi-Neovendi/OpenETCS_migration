/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Area_Librairies.h"

/* Librairies::Position_In_Area/ */
void Position_In_Area_Librairies(
  /* Position/ */
  Location_T_Obu_BasicTypes_Pkg Position,
  /* D_Area/ */
  Location_T_Obu_BasicTypes_Pkg D_Area,
  /* L_Area/ */
  Location_T_Obu_BasicTypes_Pkg L_Area,
  outC_Position_In_Area_Librairies *outC)
{
  outC->_L4 = L_Area;
  outC->_L9 = D_Area;
  outC->_L10 = outC->_L9 + outC->_L4;
  outC->_L6 = Position;
  outC->_L8 = outC->_L6 <= outC->_L10;
  outC->_L3 = D_Area;
  outC->_L2 = Position;
  outC->_L5 = outC->_L2 >= outC->_L3;
  outC->_L11 = outC->_L5 & outC->_L8;
  outC->Position_In_Area = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void Position_In_Area_init_Librairies(outC_Position_In_Area_Librairies *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->Position_In_Area = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Position_In_Area_reset_Librairies(outC_Position_In_Area_Librairies *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Position_In_Area_Librairies.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

