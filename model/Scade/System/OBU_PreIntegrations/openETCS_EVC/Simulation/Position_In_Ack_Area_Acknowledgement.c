/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_In_Ack_Area_Acknowledgement.h"

/* Acknowledgement::Position_In_Ack_Area/ */
void Position_In_Ack_Area_Acknowledgement(
  /* Position/ */
  Location_T_Obu_BasicTypes_Pkg Position,
  /* D_Area/ */
  Location_T_Obu_BasicTypes_Pkg D_Area,
  /* L_Ack_Area/ */
  Location_T_Obu_BasicTypes_Pkg L_Ack_Area,
  outC_Position_In_Ack_Area_Acknowledgement *outC)
{
  outC->_L6 = D_Area;
  outC->_L4 = Position;
  outC->_L12 = outC->_L4 <= outC->_L6;
  outC->_L2 = L_Ack_Area;
  outC->_L7 = D_Area;
  outC->_L10 = outC->_L7 - outC->_L2;
  outC->_L5 = Position;
  outC->_L11 = outC->_L5 >= outC->_L10;
  outC->_L9 = outC->_L12 & outC->_L11;
  outC->Position_In_Ack_Area = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Position_In_Ack_Area_init_Acknowledgement(
  outC_Position_In_Ack_Area_Acknowledgement *outC)
{
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->Position_In_Ack_Area = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Position_In_Ack_Area_reset_Acknowledgement(
  outC_Position_In_Ack_Area_Acknowledgement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Position_In_Ack_Area_Acknowledgement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

