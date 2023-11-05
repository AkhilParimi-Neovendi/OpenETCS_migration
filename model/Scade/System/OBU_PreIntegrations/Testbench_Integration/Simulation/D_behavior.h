/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _D_behavior_H_
#define _D_behavior_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"
#include "ComputeDistDisplay.h"
#include "ZoomLevel.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tScale /* Scale/ */ Scale;
  array_float32_32 /* GradientStartInterpolated/ */ GradientStartInterpolated;
  array_float32_32 /* GradientEndInterpolated/ */ GradientEndInterpolated;
  array_bool_32 /* GradientVisible/ */ GradientVisible;
  tPASPOutput_Array /* PASP_Distances/ */ PASP_Distances;
  tPASPOutput_Array /* PASP_Speeds/ */ PASP_Speeds;
  array_float32_10 /* SPDI_SpeedChangePosition/ */ SPDI_SpeedChangePosition;
  array_int32_10 /* SPDI_SpeedChangeIndex/ */ SPDI_SpeedChangeIndex;
  array_bool_10 /* SPDI_SpeedChangeSymbolsVisible/ */ SPDI_SpeedChangeSymbolsVisible;
  array_float32_1 /* toDisplay/ */ toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ComputeDistDisplay /* _L133=(ComputeDistDisplay#1)/ */ Context_ComputeDistDisplay_1[32];
  outC_ComputeDistDisplay /* _L135=(ComputeDistDisplay#2)/ */ Context_ComputeDistDisplay_2[32];
  outC_ComputeDistDisplay /* _L170=(ComputeDistDisplay#3)/ */ Context_ComputeDistDisplay_3[4];
  outC_ComputeDistDisplay /* _L188=(ComputeDistDisplay#4)/ */ Context_ComputeDistDisplay_4[10];
  outC_SPDI_ComputeSpeedChangeIndex_SPDI /* _L202=(SPDI::SPDI_ComputeSpeedChangeIndex#1)/ */ Context_SPDI_ComputeSpeedChangeIndex_1[10];
  outC_ZoomLevel /* _L2=(ZoomLevel#1)/ */ Context_ZoomLevel_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float32_1 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  array_float32_1 /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  array_float32_1 /* IfBlock1:else:else:else:_L4/ */ _L4_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L7/ */ _L7_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L8/ */ _L8_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L9/ */ _L9_else_else_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:else:else:_L10/ */ _L10_else_else_else_IfBlock1;
  array_float32_1 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_bool /* ZoomIn/ */ ZoomIn;
  kcg_bool /* ZoomOut/ */ ZoomOut;
  kcg_int32 /* zoomlevel/ */ zoomlevel;
  array_float32_32 /* endOfLinearPartArray/ */ endOfLinearPartArray;
  array_float32_32 /* endOfLogPartArray/ */ endOfLogPartArray;
  array_float32_32 /* trainPositionArray/ */ trainPositionArray;
  array_int32_32 /* zoomlevelArray/ */ zoomlevelArray;
  kcg_float32 /* endOfLinearPart/ */ endOfLinearPart;
  kcg_float32 /* endOfLogPart2/ */ endOfLogPart2;
  kcg_float32 /* maxLogDistance/ */ maxLogDistance;
  kcg_float32 /* maxLinearDistance/ */ maxLinearDistance;
  kcg_float32 /* localdinstance/ */ localdinstance;
  kcg_float32 /* linearScaleFactor/ */ linearScaleFactor;
  kcg_bool /* isPIM/ */ isPIM;
  kcg_bool /* _L1/ */ _L1;
  tScale /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L33/ */ _L33;
  tScale /* _L35/ */ _L35;
  array_float32_9_6 /* _L36/ */ _L36;
  array_float32_32 /* _L43/ */ _L43;
  array_float32_32 /* _L45/ */ _L45;
  array_float32_32 /* _L52/ */ _L52;
  kcg_float32 /* _L51/ */ _L51;
  kcg_int32 /* _L54/ */ _L54;
  array_int32_32 /* _L53/ */ _L53;
  array_float32_32 /* _L137/ */ _L137;
  array_float32_32 /* _L136/ */ _L136;
  array_float32_32 /* _L135/ */ _L135;
  array_float32_32 /* _L134/ */ _L134;
  array_float32_32 /* _L133/ */ _L133;
  array_float32_32 /* _L131/ */ _L131;
  array_float32_32 /* _L130/ */ _L130;
  array_float32_32 /* _L129/ */ _L129;
  array_int32_32 /* _L128/ */ _L128;
  array_float32_32 /* _L127/ */ _L127;
  array_float32_32 /* _L126/ */ _L126;
  array_int32_32 /* _L125/ */ _L125;
  tPASPOutput_Array /* _L170/ */ _L170;
  kcg_float32 /* _L169/ */ _L169;
  array_int32_4 /* _L168/ */ _L168;
  tPASPOutput_Array /* _L167/ */ _L167;
  array_float32_10 /* _L165/ */ _L165;
  array_float32_10 /* _L166/ */ _L166;
  kcg_float32 /* _L163/ */ _L163;
  tSpeedPoints /* _L162/ */ _L162;
  tPASPOutput_Array /* _L161/ */ _L161;
  kcg_float32 /* _L160/ */ _L160;
  tPASPOutput_Array /* _L158/ */ _L158;
  tPASPOutput_Array /* _L159/ */ _L159;
  tPASPOutput_Array /* _L157/ */ _L157;
  kcg_int32 /* _L156/ */ _L156;
  kcg_float32 /* _L155/ */ _L155;
  tSpeedPoints /* _L172/ */ _L172;
  array_float32_10 /* _L187/ */ _L187;
  array_float32_10 /* _L186/ */ _L186;
  array_float32_10 /* _L188/ */ _L188;
  array_int32_10 /* _L189/ */ _L189;
  kcg_float32 /* _L190/ */ _L190;
  kcg_float32 /* _L191/ */ _L191;
  kcg_int32 /* _L192/ */ _L192;
  kcg_float32 /* _L193/ */ _L193;
  array_float32_10 /* _L194/ */ _L194;
  array_float32_10 /* _L195/ */ _L195;
  array_int32_10 /* _L197/ */ _L197;
  array_float32_10 /* _L196/ */ _L196;
  kcg_float32 /* _L201/ */ _L201;
  kcg_float32 /* _L202/ */ _L202;
  kcg_float32 /* _L203/ */ _L203;
  array_float32_10 /* _L204/ */ _L204;
  array_bool_10 /* _L205/ */ _L205;
  array_float32_10 /* _L206/ */ _L206;
  array_bool_32 /* _L209/ */ _L209;
  kcg_int32 /* _L217/ */ _L217;
  kcg_int32 /* _L216/ */ _L216;
  kcg_int32 /* _L215/ */ _L215;
  array_float32_6 /* _L214/ */ _L214;
  kcg_int32 /* _L213/ */ _L213;
  kcg_float32 /* _L212/ */ _L212;
  kcg_float32 /* _L211/ */ _L211;
  array_float32_10 /* _L218/ */ _L218;
  kcg_float32 /* _L219/ */ _L219;
  array_float32_10 /* _L220/ */ _L220;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L222/ */ _L222;
  kcg_bool /* _L223/ */ _L223;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L224/ */ _L224;
} outC_D_behavior;

/* ===========  node initialization and cycle functions  =========== */
/* D_behavior/ */
extern void D_behavior(
  /* MousePressed/ */
  kcg_bool MousePressed,
  /* OverD9/ */
  kcg_bool OverD9,
  /* OverD12/ */
  kcg_bool OverD12,
  /* TrainPosition/ */
  kcg_float32 TrainPosition,
  /* GradientsStart/ */
  array_float32_32 *GradientsStart,
  /* GradientsEnd/ */
  array_float32_32 *GradientsEnd,
  /* PASP_SpeedPoints/ */
  tSpeedPoints *PASP_SpeedPoints,
  /* CPS/ */
  kcg_float32 CPS,
  /* Indicationlocation/ */
  kcg_int32 Indicationlocation,
  /* sup_status/ */
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status,
  /* isValid/ */
  kcg_bool isValid,
  outC_D_behavior *outC);

extern void D_behavior_reset(outC_D_behavior *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void D_behavior_init(outC_D_behavior *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  array_float32_1 /* toDisplay/ */ Context_toDisplay;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ZoomLevel Context_ZoomLevel_1;
} SV_D_behavior;

extern void kcg_save_SV_D_behavior(SV_D_behavior *SV, outC_D_behavior *outC);
extern void kcg_load_SV_D_behavior(outC_D_behavior *outC, SV_D_behavior *SV);



#endif /* _D_behavior_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** D_behavior.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

