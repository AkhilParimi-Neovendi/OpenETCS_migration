/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_
#define _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* outData/ */ outData_5;
  kcg_bool /* outValid/ */ outValid_5;
  kcg_int64 /* size/ */ size_5;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int64 /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1_5;
  _101_array /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1_5;
  kcg_int64 /* l_size/ */ l_size_5;
  kcg_int64 /* next_entry/ */ next_entry_5;
  _101_array /* buffer/ */ buffer_5;
  kcg_int64 /* entry/ */ entry_5;
  kcg_int64 /* _L32/ */ _L32_5;
  kcg_int64 /* _L50/ */ _L50_5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock_5;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Mi_Output/ */ Mi_Output_Min_1_int64;
  kcg_int64 /* @1/I2/ */ I2_Min_1_int64;
  kcg_int64 /* @1/I1/ */ I1_Min_1_int64;
  kcg_bool /* @1/_L25/ */ _L25_Min_1_int64;
  kcg_int64 /* @1/_L24/ */ _L24_Min_1_int64;
  kcg_int64 /* @1/_L22/ */ _L22_Min_1_int64;
  kcg_int64 /* @1/_L21/ */ _L21_Min_1_int64;
  _101_array /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1_5;
  _101_array /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1_5;
  _101_array /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1_5;
  kcg_int64 /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1_5;
  kcg_int64 /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1_5;
  kcg_int64 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1_5;
  kcg_int64 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1_5;
  API_TrackSideInput_T_API_Msg_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1_5;
  API_TrackSideInput_T_API_Msg_Pkg /* _L18/ */ _L18_5;
  _101_array /* _L19/ */ _L19_5;
  kcg_int64 /* _L22/ */ _L22_5;
  kcg_int64 /* _L23/ */ _L23_5;
  kcg_int64 /* _L25/ */ _L25_5;
  kcg_int64 /* _L26/ */ _L26_5;
  kcg_bool /* _L27/ */ _L27_5;
  kcg_int64 /* _L28/ */ _L28_5;
  kcg_int64 /* _L30/ */ _L30_5;
  kcg_int64 /* _L31/ */ _L31_5;
  kcg_int64 /* _L33/ */ _L33_5;
  kcg_int64 /* _L38/ */ _L38_5;
  kcg_int64 /* _L40/ */ _L40_5;
  kcg_bool /* _L44/ */ _L44_5;
  kcg_int64 /* _L45/ */ _L45_5;
  kcg_int64 /* _L47/ */ _L47_5;
  kcg_int64 /* _L49/ */ _L49_5;
  kcg_int64 /* _L51/ */ _L51_5;
  kcg_int64 /* _L52/ */ _L52_5;
  kcg_int64 /* _L53/ */ _L53_5;
  kcg_int64 /* _L55/ */ _L55_5;
  kcg_bool /* _L56/ */ _L56_5;
  kcg_bool /* _L57/ */ _L57_5;
  kcg_int64 /* _L59/ */ _L59_5;
  kcg_int64 /* _L60/ */ _L60_5;
  kcg_int64 /* _L61/ */ _L61_5;
  kcg_int64 /* _L62/ */ _L62_5;
  kcg_bool /* _L63/ */ _L63_5;
  kcg_bool /* _L64/ */ _L64_5;
  kcg_bool /* _L66/ */ _L66_5;
  kcg_bool /* _L67/ */ _L67_5;
  API_TrackSideInput_T_API_Msg_Pkg /* _L68/ */ _L68_5;
  kcg_int64 /* _L69/ */ _L69_5;
} outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_TrackSideInputFifo/ */
extern void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* inData/ */
  API_TrackSideInput_T_API_Msg_Pkg *inData_5,
  /* inValid/ */
  kcg_bool inValid_5,
  /* inReady/ */
  kcg_bool inReady_5,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Toolbox::Functions::TRAIN_TrackSideInputFifo/
  @1: (math::Min#1)
*/

#endif /* _TRAIN_TrackSideInputFifo_Toolbox_Functions_5_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

