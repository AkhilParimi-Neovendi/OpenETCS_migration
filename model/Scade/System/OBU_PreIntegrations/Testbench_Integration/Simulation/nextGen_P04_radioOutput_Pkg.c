/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P04_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P04/ */
void nextGen_P04_radioOutput_Pkg(
  /* inP4/ */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inP4,
  outC_nextGen_P04_radioOutput_Pkg *outC)
{
  outC->_L38 = cp004_ErrorReporting_ids;
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L1, inP4);
  outC->_L34 = outC->_L1.valid;
  outC->_L33 = outC->_L1.m_error;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L2.valid = outC->_L34;
  outC->_L2.nid_packet = outC->_L38;
  outC->_L2.l_packet = outC->_L12;
  outC->_L2.m_error = outC->_L33;
  kcg_copy_P004_TM_TrainToTrack(&outC->outP4, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_P04_init_radioOutput_Pkg(outC_nextGen_P04_radioOutput_Pkg *outC)
{
  outC->_L38 = kcg_lit_int64(0);
  outC->_L33 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L34 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int64(0);
  outC->_L2.l_packet = kcg_lit_int64(0);
  outC->_L2.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.valid = kcg_true;
  outC->_L1.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->outP4.valid = kcg_true;
  outC->outP4.nid_packet = kcg_lit_int64(0);
  outC->outP4.l_packet = kcg_lit_int64(0);
  outC->outP4.m_error = M_ERROR_Balise_group_linking_consistency_error;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_P04_reset_radioOutput_Pkg(outC_nextGen_P04_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P04_radioOutput_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

