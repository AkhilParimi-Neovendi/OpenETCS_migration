/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P05_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P05/ */
void nextGen_P05_radioOutput_Pkg(
  /* inP5/ */
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inP5,
  outC_nextGen_P05_radioOutput_Pkg *outC)
{
  outC->_L40 = cp005_TrainRunningNumber_ids;
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L1, inP5);
  outC->_L34 = outC->_L1.valid;
  outC->_L33 = outC->_L1.TrainRunningNumber;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L2.valid = outC->_L34;
  outC->_L2.nid_packet = outC->_L40;
  outC->_L2.l_packet = outC->_L12;
  outC->_L2.nid_opeartional = outC->_L33;
  kcg_copy_P005_TM_TrainToTrack(&outC->outP5, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_P05_init_radioOutput_Pkg(outC_nextGen_P05_radioOutput_Pkg *outC)
{
  outC->_L40 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L34 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int64(0);
  outC->_L2.l_packet = kcg_lit_int64(0);
  outC->_L2.nid_opeartional = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.TrainRunningNumber = kcg_lit_int64(0);
  outC->outP5.valid = kcg_true;
  outC->outP5.nid_packet = kcg_lit_int64(0);
  outC->outP5.l_packet = kcg_lit_int64(0);
  outC->outP5.nid_opeartional = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_P05_reset_radioOutput_Pkg(outC_nextGen_P05_radioOutput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P05_radioOutput_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

