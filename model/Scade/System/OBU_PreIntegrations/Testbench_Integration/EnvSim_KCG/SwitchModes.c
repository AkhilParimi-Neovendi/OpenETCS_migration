/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SwitchModes.h"

/* SwitchModes/ */
void SwitchModes(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition2/ */
  kcg_bool Condition2,
  /* Condition3/ */
  kcg_bool Condition3,
  /* Condition4/ */
  kcg_bool Condition4,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition7/ */
  kcg_bool Condition7,
  /* Condition8/ */
  kcg_bool Condition8,
  /* Condition10/ */
  kcg_bool Condition10,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition14/ */
  kcg_bool Condition14,
  /* Condition15/ */
  kcg_bool Condition15,
  /* Condition19/ */
  kcg_bool Condition19,
  /* Condition21/ */
  kcg_bool Condition21,
  /* Condition22/ */
  kcg_bool Condition22,
  /* Condition23/ */
  kcg_bool Condition23,
  /* Condition25/ */
  kcg_bool Condition25,
  /* Condition26/ */
  kcg_bool Condition26,
  /* Condition27/ */
  kcg_bool Condition27,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition30/ */
  kcg_bool Condition30,
  /* Condition31/ */
  kcg_bool Condition31,
  /* Condition32/ */
  kcg_bool Condition32,
  /* Condition34/ */
  kcg_bool Condition34,
  /* Condition37/ */
  kcg_bool Condition37,
  /* Condition40/ */
  kcg_bool Condition40,
  /* Condition44/ */
  kcg_bool Condition44,
  /* Condition45/ */
  kcg_bool Condition45,
  /* Condition46/ */
  kcg_bool Condition46,
  /* Condition47/ */
  kcg_bool Condition47,
  /* Condition50/ */
  kcg_bool Condition50,
  /* Condition51/ */
  kcg_bool Condition51,
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition58/ */
  kcg_bool Condition58,
  /* Condition59/ */
  kcg_bool Condition59,
  /* Condition60/ */
  kcg_bool Condition60,
  /* Condition61/ */
  kcg_bool Condition61,
  /* Condition62/ */
  kcg_bool Condition62,
  /* Condition63/ */
  kcg_bool Condition63,
  /* Condition68/ */
  kcg_bool Condition68,
  /* Condition70/ */
  kcg_bool Condition70,
  /* Condition71/ */
  kcg_bool Condition71,
  /* Condition72/ */
  kcg_bool Condition72,
  /* Condition73/ */
  kcg_bool Condition73,
  /* Condition74/ */
  kcg_bool Condition74,
  /* ConditionTrip/ */
  kcg_bool ConditionTrip,
  outC_SwitchModes *outC)
{
  /* currentMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg last_currentMode;

  last_currentMode = outC->currentMode;
  outC->_L376 = ConditionTrip;
  outC->_L375 = ConditionTrip;
  outC->_L374 = ConditionTrip;
  outC->_L373 = ConditionTrip;
  outC->_L372 = ConditionTrip;
  outC->_L371 = ConditionTrip;
  outC->_L370 = ConditionTrip;
  outC->_L368 = Condition71;
  outC->_L367 = Condition61;
  outC->_L366 = Condition56;
  outC->_L365 = Condition45;
  outC->_L364 = Condition44;
  outC->_L363 = Condition34;
  outC->_L362 = Condition29;
  outC->_L361 = Condition28;
  outC->_L360 = Condition25;
  outC->_L359 = Condition13;
  outC->_L358 = Condition5;
  outC->_L357 = Condition1;
  outC->_L354 = Condition71;
  outC->_L353 = Condition61;
  outC->_L352 = Condition45;
  outC->_L351 = Condition44;
  outC->_L350 = Condition34;
  outC->_L349 = Condition29;
  outC->_L348 = Condition28;
  outC->_L347 = Condition25;
  outC->_L346 = Condition21;
  outC->_L345 = Condition13;
  outC->_L344 = Condition5;
  outC->_L343 = Condition1;
  outC->_L342 = Condition70;
  outC->_L341 = Condition50;
  outC->_L340 = Condition37;
  outC->_L339 = Condition31;
  outC->_L338 = Condition29;
  outC->_L337 = Condition28;
  outC->_L336 = Condition15;
  outC->_L335 = Condition13;
  outC->_L334 = Condition8;
  outC->_L333 = Condition6;
  outC->_L332 = Condition5;
  outC->_L331 = Condition1;
  outC->_L330 = Condition68;
  outC->_L329 = Condition63;
  outC->_L328 = Condition62;
  outC->_L327 = Condition29;
  outC->_L326 = Condition13;
  outC->_L325 = Condition7;
  outC->_L324 = Condition1;
  outC->_L323 = Condition29;
  outC->_L322 = Condition3;
  outC->_L321 = Condition2;
  outC->_L320 = Condition1;
  outC->_L318 = Condition74;
  outC->_L317 = Condition70;
  outC->_L316 = Condition59;
  outC->_L315 = Condition56;
  outC->_L314 = Condition51;
  outC->_L313 = Condition50;
  outC->_L312 = Condition46;
  outC->_L311 = Condition37;
  outC->_L310 = Condition32;
  outC->_L309 = Condition31;
  outC->_L308 = Condition29;
  outC->_L307 = Condition28;
  outC->_L306 = Condition21;
  outC->_L305 = Condition13;
  outC->_L304 = Condition6;
  outC->_L303 = Condition5;
  outC->_L302 = Condition1;
  outC->_L300 = Condition72;
  outC->_L299 = Condition32;
  outC->_L298 = Condition31;
  outC->_L297 = Condition59;
  outC->_L296 = Condition56;
  outC->_L295 = Condition51;
  outC->_L294 = Condition46;
  outC->_L293 = Condition40;
  outC->_L292 = Condition29;
  outC->_L291 = Condition28;
  outC->_L290 = Condition21;
  outC->_L289 = Condition13;
  outC->_L288 = Condition6;
  outC->_L287 = Condition5;
  outC->_L286 = Condition1;
  outC->_L285 = Condition29;
  outC->_L284 = Condition1;
  outC->_L283 = Condition47;
  outC->_L282 = Condition29;
  outC->_L281 = Condition28;
  outC->_L280 = Condition1;
  outC->_L278 = Condition73;
  outC->_L277 = Condition59;
  outC->_L276 = Condition56;
  outC->_L275 = Condition51;
  outC->_L274 = Condition50;
  outC->_L273 = Condition46;
  outC->_L272 = Condition37;
  outC->_L271 = Condition32;
  outC->_L270 = Condition31;
  outC->_L269 = Condition29;
  outC->_L268 = Condition28;
  outC->_L267 = Condition21;
  outC->_L266 = Condition15;
  outC->_L265 = Condition13;
  outC->_L264 = Condition6;
  outC->_L263 = Condition5;
  outC->_L262 = Condition1;
  outC->_L261 = ConditionTrip;
  outC->_L260 = Condition72;
  outC->_L259 = Condition70;
  outC->_L258 = Condition59;
  outC->_L257 = Condition56;
  outC->_L256 = Condition51;
  outC->_L255 = Condition50;
  outC->_L254 = Condition46;
  outC->_L253 = Condition40;
  outC->_L252 = Condition37;
  outC->_L251 = Condition29;
  outC->_L250 = Condition28;
  outC->_L249 = Condition21;
  outC->_L248 = Condition15;
  outC->_L247 = Condition13;
  outC->_L246 = Condition6;
  outC->_L245 = Condition5;
  outC->_L244 = Condition1;
  outC->_L236 = Condition29;
  outC->_L235 = Condition28;
  outC->_L234 = Condition13;
  outC->_L233 = Condition1;
  outC->_L231 = Condition46;
  outC->_L230 = Condition30;
  outC->_L229 = Condition29;
  outC->_L228 = Condition27;
  outC->_L227 = Condition26;
  outC->_L226 = Condition19;
  outC->_L225 = Condition13;
  outC->_L224 = Condition1;
  outC->_L223 = Condition29;
  outC->_L222 = Condition23;
  outC->_L221 = Condition22;
  outC->_L220 = Condition14;
  outC->_L219 = Condition13;
  outC->_L218 = Condition1;
  outC->_L216 = Condition70;
  outC->_L215 = Condition60;
  outC->_L214 = Condition50;
  outC->_L213 = Condition58;
  outC->_L212 = Condition46;
  outC->_L211 = Condition37;
  outC->_L210 = Condition29;
  outC->_L209 = Condition15;
  outC->_L208 = Condition14;
  outC->_L207 = Condition13;
  outC->_L206 = Condition10;
  outC->_L205 = Condition8;
  outC->_L204 = Condition6;
  outC->_L203 = Condition5;
  outC->_L202 = Condition1;
  outC->_L201 = Condition4;
  outC->_L200 = Condition1;
  outC->previousMode_Loc = last_currentMode;
  outC->_L187 = outC->previousMode_Loc;
  /* _L356=(PriorityManagement::From_UN#1)/ */
  From_UN_PriorityManagement(
    outC->_L357,
    outC->_L358,
    outC->_L359,
    outC->_L360,
    outC->_L361,
    outC->_L362,
    outC->_L363,
    outC->_L364,
    outC->_L365,
    outC->_L366,
    outC->_L367,
    outC->_L368,
    outC->_L376,
    outC->_L187,
    &outC->Context_From_UN_1);
  outC->_L356 = outC->Context_From_UN_1.FromUN_To_NewMode;
  outC->FromUN = outC->_L356;
  outC->_L199 = outC->FromUN;
  outC->_L84 = outC->previousMode_Loc;
  outC->_L83 = outC->previousMode_Loc;
  outC->_L82 = outC->previousMode_Loc;
  outC->_L81 = outC->previousMode_Loc;
  outC->_L80 = outC->previousMode_Loc;
  outC->_L79 = outC->previousMode_Loc;
  outC->_L78 = outC->previousMode_Loc;
  outC->_L77 = outC->previousMode_Loc;
  outC->_L76 = outC->previousMode_Loc;
  outC->_L75 = outC->previousMode_Loc;
  outC->_L74 = outC->previousMode_Loc;
  outC->_L73 = outC->previousMode_Loc;
  outC->_L72 = outC->previousMode_Loc;
  outC->_L71 = outC->previousMode_Loc;
  outC->_L70 = outC->previousMode_Loc;
  /* _L243=(PriorityManagement::From_SR#1)/ */
  From_SR_PriorityManagement(
    outC->_L286,
    outC->_L287,
    outC->_L288,
    outC->_L289,
    outC->_L290,
    outC->_L291,
    outC->_L292,
    outC->_L298,
    outC->_L299,
    outC->_L293,
    outC->_L294,
    outC->_L295,
    outC->_L296,
    outC->_L297,
    outC->_L300,
    outC->_L375,
    outC->_L78,
    &outC->Context_From_SR_1);
  outC->_L243 = outC->Context_From_SR_1.FromSR_To_NewMode;
  outC->FromSR = outC->_L243;
  outC->_L69 = outC->FromSR;
  /* _L49=(PriorityManagement::From_TR#1)/ */
  From_TR_PriorityManagement(
    outC->_L324,
    outC->_L325,
    outC->_L326,
    outC->_L327,
    outC->_L328,
    outC->_L329,
    outC->_L330,
    outC->_L70,
    &outC->Context_From_TR_1);
  outC->_L49 = outC->Context_From_TR_1.FromTR_To_NewMode;
  outC->FromTR = outC->_L49;
  outC->_L68 = outC->FromTR;
  /* _L52=(PriorityManagement::From_SN#1)/ */
  From_SN_PriorityManagement(
    outC->_L343,
    outC->_L344,
    outC->_L345,
    outC->_L346,
    outC->_L347,
    outC->_L348,
    outC->_L349,
    outC->_L350,
    outC->_L351,
    outC->_L352,
    outC->_L353,
    outC->_L354,
    outC->_L374,
    outC->_L73,
    &outC->Context_From_SN_1);
  outC->_L52 = outC->Context_From_SN_1.FromSN_To_NewMode;
  outC->FromSN = outC->_L52;
  outC->_L67 = outC->FromSN;
  /* _L47=(PriorityManagement::From_SL#1)/ */
  From_SL_PriorityManagement(
    outC->_L320,
    outC->_L321,
    outC->_L322,
    outC->_L323,
    outC->_L76,
    &outC->Context_From_SL_1);
  outC->_L47 = outC->Context_From_SL_1.FromSL_To_NewMode;
  outC->FromSL = outC->_L47;
  outC->_L66 = outC->FromSL;
  /* _L40=(PriorityManagement::From_SH#1)/ */
  From_SH_PriorityManagement(
    outC->_L224,
    outC->_L225,
    outC->_L226,
    outC->_L227,
    outC->_L228,
    outC->_L229,
    outC->_L230,
    outC->_L231,
    outC->_L371,
    outC->_L83,
    &outC->Context_From_SH_1);
  outC->_L40 = outC->Context_From_SH_1.FromSH_To_NewMode;
  outC->FromSH = outC->_L40;
  outC->_L65 = outC->FromSH;
  /* _L51=(PriorityManagement::From_SF#1)/ */
  From_SF_PriorityManagement(
    outC->_L284,
    outC->_L285,
    outC->_L72,
    &outC->Context_From_SF_1);
  outC->_L51 = outC->Context_From_SF_1.FromSF_To_NewMode;
  outC->FromSF = outC->_L51;
  outC->_L64 = outC->FromSF;
  /* _L24=(PriorityManagement::From_SB#1)/ */
  From_SB_PriorityManagement(
    outC->_L202,
    outC->_L203,
    outC->_L204,
    outC->_L205,
    outC->_L206,
    outC->_L207,
    outC->_L208,
    outC->_L209,
    outC->_L210,
    outC->_L211,
    outC->_L212,
    outC->_L214,
    outC->_L213,
    outC->_L215,
    outC->_L216,
    outC->_L370,
    outC->_L81,
    &outC->Context_From_SB_1);
  outC->_L24 = outC->Context_From_SB_1.FromSB_To_NewMode;
  outC->FromSB = outC->_L24;
  outC->_L63 = outC->FromSB;
  /* _L53=(PriorityManagement::From_RV#1)/ */
  From_RV_PriorityManagement(
    outC->_L233,
    outC->_L234,
    outC->_L235,
    outC->_L236,
    outC->_L74,
    &outC->Context_From_RV_1);
  outC->_L53 = outC->Context_From_RV_1.FromRV_To_NewMode;
  outC->FromRV = outC->_L53;
  outC->_L62 = outC->FromRV;
  /* _L50=(PriorityManagement::From_PT#1)/ */
  From_PT_PriorityManagement(
    outC->_L331,
    outC->_L332,
    outC->_L333,
    outC->_L334,
    outC->_L335,
    outC->_L336,
    outC->_L337,
    outC->_L338,
    outC->_L339,
    outC->_L340,
    outC->_L341,
    outC->_L342,
    outC->_L71,
    &outC->Context_From_PT_1);
  outC->_L50 = outC->Context_From_PT_1.FromPT_To_NewMode;
  outC->FromPT = outC->_L50;
  outC->_L61 = outC->FromPT;
  /* _L39=(PriorityManagement::From_PS#1)/ */
  From_PS_PriorityManagement(
    outC->_L218,
    outC->_L219,
    outC->_L220,
    outC->_L221,
    outC->_L222,
    outC->_L223,
    outC->_L82,
    &outC->Context_From_PS_1);
  outC->_L39 = outC->Context_From_PS_1.FromPS_To_NewMode;
  outC->FromPS = outC->_L39;
  outC->_L60 = outC->FromPS;
  /* _L242=(PriorityManagement::From_OS#1)/ */
  From_OS_PriorityManagement(
    outC->_L302,
    outC->_L303,
    outC->_L304,
    outC->_L305,
    outC->_L306,
    outC->_L307,
    outC->_L308,
    outC->_L309,
    outC->_L310,
    outC->_L311,
    outC->_L312,
    outC->_L313,
    outC->_L314,
    outC->_L315,
    outC->_L316,
    outC->_L317,
    outC->_L318,
    outC->_L373,
    outC->_L77,
    &outC->Context_From_OS_1);
  outC->_L242 = outC->Context_From_OS_1.FromOS_To_NewMode;
  outC->FromOS = outC->_L242;
  outC->_L59 = outC->FromOS;
  /* _L21=(PriorityManagement::From_NP#1)/ */
  From_NP_PriorityManagement(
    outC->_L200,
    outC->_L201,
    outC->_L80,
    &outC->Context_From_NP_1);
  outC->_L21 = outC->Context_From_NP_1.FromNP_To_NewMode;
  outC->FromNP = outC->_L21;
  outC->_L58 = outC->FromNP;
  /* _L48=(PriorityManagement::From_NL#1)/ */
  From_NL_PriorityManagement(
    outC->_L280,
    outC->_L281,
    outC->_L282,
    outC->_L283,
    outC->_L75,
    &outC->Context_From_NL_1);
  outC->_L48 = outC->Context_From_NL_1.FromNL_To_NewMode;
  outC->FromNL = outC->_L48;
  outC->_L57 = outC->FromNL;
  /* _L241=(PriorityManagement::From_LS#1)/ */
  From_LS_PriorityManagement(
    outC->_L262,
    outC->_L263,
    outC->_L264,
    outC->_L265,
    outC->_L266,
    outC->_L267,
    outC->_L268,
    outC->_L269,
    outC->_L270,
    outC->_L271,
    outC->_L272,
    outC->_L273,
    outC->_L274,
    outC->_L275,
    outC->_L276,
    outC->_L277,
    outC->_L278,
    outC->_L372,
    outC->_L79,
    &outC->Context_From_LS_1);
  outC->_L241 = outC->Context_From_LS_1.FromLS_To_NewMode;
  outC->FromLS = outC->_L241;
  outC->_L56 = outC->FromLS;
  /* _L43=(PriorityManagement::From_FS#1)/ */
  From_FS_PriorityManagement(
    outC->_L244,
    outC->_L245,
    outC->_L246,
    outC->_L247,
    outC->_L248,
    outC->_L249,
    outC->_L250,
    outC->_L251,
    outC->_L252,
    outC->_L253,
    outC->_L254,
    outC->_L255,
    outC->_L256,
    outC->_L257,
    outC->_L258,
    outC->_L259,
    outC->_L260,
    outC->_L261,
    outC->_L84,
    &outC->Context_From_FS_1);
  outC->_L43 = outC->Context_From_FS_1.FromFS_To_NewMode;
  outC->FromFS = outC->_L43;
  outC->_L55 = outC->FromFS;
  outC->_L38 = IS_Level_And_Mode_Types_Pkg;
  /* _L18= */
  switch (outC->previousMode_Loc) {
    case NP_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L58;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L63;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L60;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L65;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L55;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L56;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L69;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L59;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L66;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L57;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L68;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L61;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L64;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L38;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L67;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L62;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L18 = outC->_L199;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->currentMode = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void SwitchModes_init(outC_SwitchModes *outC)
{
  outC->_L376 = kcg_true;
  outC->_L375 = kcg_true;
  outC->_L374 = kcg_true;
  outC->_L373 = kcg_true;
  outC->_L372 = kcg_true;
  outC->_L371 = kcg_true;
  outC->_L370 = kcg_true;
  outC->_L368 = kcg_true;
  outC->_L367 = kcg_true;
  outC->_L366 = kcg_true;
  outC->_L365 = kcg_true;
  outC->_L364 = kcg_true;
  outC->_L363 = kcg_true;
  outC->_L362 = kcg_true;
  outC->_L361 = kcg_true;
  outC->_L360 = kcg_true;
  outC->_L359 = kcg_true;
  outC->_L358 = kcg_true;
  outC->_L357 = kcg_true;
  outC->_L356 = NP_Level_And_Mode_Types_Pkg;
  outC->_L354 = kcg_true;
  outC->_L353 = kcg_true;
  outC->_L352 = kcg_true;
  outC->_L351 = kcg_true;
  outC->_L350 = kcg_true;
  outC->_L349 = kcg_true;
  outC->_L348 = kcg_true;
  outC->_L347 = kcg_true;
  outC->_L346 = kcg_true;
  outC->_L345 = kcg_true;
  outC->_L344 = kcg_true;
  outC->_L343 = kcg_true;
  outC->_L342 = kcg_true;
  outC->_L341 = kcg_true;
  outC->_L340 = kcg_true;
  outC->_L339 = kcg_true;
  outC->_L338 = kcg_true;
  outC->_L337 = kcg_true;
  outC->_L336 = kcg_true;
  outC->_L335 = kcg_true;
  outC->_L334 = kcg_true;
  outC->_L333 = kcg_true;
  outC->_L332 = kcg_true;
  outC->_L331 = kcg_true;
  outC->_L330 = kcg_true;
  outC->_L329 = kcg_true;
  outC->_L328 = kcg_true;
  outC->_L327 = kcg_true;
  outC->_L326 = kcg_true;
  outC->_L325 = kcg_true;
  outC->_L324 = kcg_true;
  outC->_L323 = kcg_true;
  outC->_L322 = kcg_true;
  outC->_L321 = kcg_true;
  outC->_L320 = kcg_true;
  outC->_L318 = kcg_true;
  outC->_L317 = kcg_true;
  outC->_L316 = kcg_true;
  outC->_L315 = kcg_true;
  outC->_L314 = kcg_true;
  outC->_L313 = kcg_true;
  outC->_L312 = kcg_true;
  outC->_L311 = kcg_true;
  outC->_L310 = kcg_true;
  outC->_L309 = kcg_true;
  outC->_L308 = kcg_true;
  outC->_L307 = kcg_true;
  outC->_L306 = kcg_true;
  outC->_L305 = kcg_true;
  outC->_L304 = kcg_true;
  outC->_L303 = kcg_true;
  outC->_L302 = kcg_true;
  outC->_L300 = kcg_true;
  outC->_L299 = kcg_true;
  outC->_L298 = kcg_true;
  outC->_L297 = kcg_true;
  outC->_L296 = kcg_true;
  outC->_L295 = kcg_true;
  outC->_L294 = kcg_true;
  outC->_L293 = kcg_true;
  outC->_L292 = kcg_true;
  outC->_L291 = kcg_true;
  outC->_L290 = kcg_true;
  outC->_L289 = kcg_true;
  outC->_L288 = kcg_true;
  outC->_L287 = kcg_true;
  outC->_L286 = kcg_true;
  outC->_L285 = kcg_true;
  outC->_L284 = kcg_true;
  outC->_L283 = kcg_true;
  outC->_L282 = kcg_true;
  outC->_L281 = kcg_true;
  outC->_L280 = kcg_true;
  outC->_L278 = kcg_true;
  outC->_L277 = kcg_true;
  outC->_L276 = kcg_true;
  outC->_L275 = kcg_true;
  outC->_L274 = kcg_true;
  outC->_L273 = kcg_true;
  outC->_L272 = kcg_true;
  outC->_L271 = kcg_true;
  outC->_L270 = kcg_true;
  outC->_L269 = kcg_true;
  outC->_L268 = kcg_true;
  outC->_L267 = kcg_true;
  outC->_L266 = kcg_true;
  outC->_L265 = kcg_true;
  outC->_L264 = kcg_true;
  outC->_L263 = kcg_true;
  outC->_L262 = kcg_true;
  outC->_L261 = kcg_true;
  outC->_L260 = kcg_true;
  outC->_L259 = kcg_true;
  outC->_L258 = kcg_true;
  outC->_L257 = kcg_true;
  outC->_L256 = kcg_true;
  outC->_L255 = kcg_true;
  outC->_L254 = kcg_true;
  outC->_L253 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L250 = kcg_true;
  outC->_L249 = kcg_true;
  outC->_L248 = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L246 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L244 = kcg_true;
  outC->_L243 = NP_Level_And_Mode_Types_Pkg;
  outC->_L242 = NP_Level_And_Mode_Types_Pkg;
  outC->_L241 = NP_Level_And_Mode_Types_Pkg;
  outC->_L236 = kcg_true;
  outC->_L235 = kcg_true;
  outC->_L234 = kcg_true;
  outC->_L233 = kcg_true;
  outC->_L231 = kcg_true;
  outC->_L230 = kcg_true;
  outC->_L229 = kcg_true;
  outC->_L228 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L226 = kcg_true;
  outC->_L225 = kcg_true;
  outC->_L224 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L222 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L210 = kcg_true;
  outC->_L209 = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = kcg_true;
  outC->_L205 = kcg_true;
  outC->_L204 = kcg_true;
  outC->_L203 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L201 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L199 = NP_Level_And_Mode_Types_Pkg;
  outC->_L187 = NP_Level_And_Mode_Types_Pkg;
  outC->_L84 = NP_Level_And_Mode_Types_Pkg;
  outC->_L83 = NP_Level_And_Mode_Types_Pkg;
  outC->_L82 = NP_Level_And_Mode_Types_Pkg;
  outC->_L81 = NP_Level_And_Mode_Types_Pkg;
  outC->_L80 = NP_Level_And_Mode_Types_Pkg;
  outC->_L79 = NP_Level_And_Mode_Types_Pkg;
  outC->_L78 = NP_Level_And_Mode_Types_Pkg;
  outC->_L77 = NP_Level_And_Mode_Types_Pkg;
  outC->_L76 = NP_Level_And_Mode_Types_Pkg;
  outC->_L75 = NP_Level_And_Mode_Types_Pkg;
  outC->_L74 = NP_Level_And_Mode_Types_Pkg;
  outC->_L73 = NP_Level_And_Mode_Types_Pkg;
  outC->_L72 = NP_Level_And_Mode_Types_Pkg;
  outC->_L71 = NP_Level_And_Mode_Types_Pkg;
  outC->_L70 = NP_Level_And_Mode_Types_Pkg;
  outC->_L69 = NP_Level_And_Mode_Types_Pkg;
  outC->_L68 = NP_Level_And_Mode_Types_Pkg;
  outC->_L67 = NP_Level_And_Mode_Types_Pkg;
  outC->_L66 = NP_Level_And_Mode_Types_Pkg;
  outC->_L65 = NP_Level_And_Mode_Types_Pkg;
  outC->_L64 = NP_Level_And_Mode_Types_Pkg;
  outC->_L63 = NP_Level_And_Mode_Types_Pkg;
  outC->_L62 = NP_Level_And_Mode_Types_Pkg;
  outC->_L61 = NP_Level_And_Mode_Types_Pkg;
  outC->_L60 = NP_Level_And_Mode_Types_Pkg;
  outC->_L59 = NP_Level_And_Mode_Types_Pkg;
  outC->_L58 = NP_Level_And_Mode_Types_Pkg;
  outC->_L57 = NP_Level_And_Mode_Types_Pkg;
  outC->_L56 = NP_Level_And_Mode_Types_Pkg;
  outC->_L55 = NP_Level_And_Mode_Types_Pkg;
  outC->_L53 = NP_Level_And_Mode_Types_Pkg;
  outC->_L52 = NP_Level_And_Mode_Types_Pkg;
  outC->_L51 = NP_Level_And_Mode_Types_Pkg;
  outC->_L50 = NP_Level_And_Mode_Types_Pkg;
  outC->_L49 = NP_Level_And_Mode_Types_Pkg;
  outC->_L48 = NP_Level_And_Mode_Types_Pkg;
  outC->_L47 = NP_Level_And_Mode_Types_Pkg;
  outC->_L43 = NP_Level_And_Mode_Types_Pkg;
  outC->_L40 = NP_Level_And_Mode_Types_Pkg;
  outC->_L39 = NP_Level_And_Mode_Types_Pkg;
  outC->_L38 = NP_Level_And_Mode_Types_Pkg;
  outC->_L24 = NP_Level_And_Mode_Types_Pkg;
  outC->_L21 = NP_Level_And_Mode_Types_Pkg;
  outC->_L18 = NP_Level_And_Mode_Types_Pkg;
  outC->FromUN = NP_Level_And_Mode_Types_Pkg;
  outC->FromRV = NP_Level_And_Mode_Types_Pkg;
  outC->FromSN = NP_Level_And_Mode_Types_Pkg;
  outC->FromSF = NP_Level_And_Mode_Types_Pkg;
  outC->FromPT = NP_Level_And_Mode_Types_Pkg;
  outC->FromTR = NP_Level_And_Mode_Types_Pkg;
  outC->FromNL = NP_Level_And_Mode_Types_Pkg;
  outC->FromSL = NP_Level_And_Mode_Types_Pkg;
  outC->FromOS = NP_Level_And_Mode_Types_Pkg;
  outC->FromSR = NP_Level_And_Mode_Types_Pkg;
  outC->FromLS = NP_Level_And_Mode_Types_Pkg;
  outC->FromFS = NP_Level_And_Mode_Types_Pkg;
  outC->FromSH = NP_Level_And_Mode_Types_Pkg;
  outC->FromPS = NP_Level_And_Mode_Types_Pkg;
  outC->FromSB = NP_Level_And_Mode_Types_Pkg;
  outC->FromNP = NP_Level_And_Mode_Types_Pkg;
  outC->previousMode_Loc = NP_Level_And_Mode_Types_Pkg;
  /* _L43=(PriorityManagement::From_FS#1)/ */
  From_FS_init_PriorityManagement(&outC->Context_From_FS_1);
  /* _L241=(PriorityManagement::From_LS#1)/ */
  From_LS_init_PriorityManagement(&outC->Context_From_LS_1);
  /* _L48=(PriorityManagement::From_NL#1)/ */
  From_NL_init_PriorityManagement(&outC->Context_From_NL_1);
  /* _L21=(PriorityManagement::From_NP#1)/ */
  From_NP_init_PriorityManagement(&outC->Context_From_NP_1);
  /* _L242=(PriorityManagement::From_OS#1)/ */
  From_OS_init_PriorityManagement(&outC->Context_From_OS_1);
  /* _L39=(PriorityManagement::From_PS#1)/ */
  From_PS_init_PriorityManagement(&outC->Context_From_PS_1);
  /* _L50=(PriorityManagement::From_PT#1)/ */
  From_PT_init_PriorityManagement(&outC->Context_From_PT_1);
  /* _L53=(PriorityManagement::From_RV#1)/ */
  From_RV_init_PriorityManagement(&outC->Context_From_RV_1);
  /* _L24=(PriorityManagement::From_SB#1)/ */
  From_SB_init_PriorityManagement(&outC->Context_From_SB_1);
  /* _L51=(PriorityManagement::From_SF#1)/ */
  From_SF_init_PriorityManagement(&outC->Context_From_SF_1);
  /* _L40=(PriorityManagement::From_SH#1)/ */
  From_SH_init_PriorityManagement(&outC->Context_From_SH_1);
  /* _L47=(PriorityManagement::From_SL#1)/ */
  From_SL_init_PriorityManagement(&outC->Context_From_SL_1);
  /* _L52=(PriorityManagement::From_SN#1)/ */
  From_SN_init_PriorityManagement(&outC->Context_From_SN_1);
  /* _L49=(PriorityManagement::From_TR#1)/ */
  From_TR_init_PriorityManagement(&outC->Context_From_TR_1);
  /* _L243=(PriorityManagement::From_SR#1)/ */
  From_SR_init_PriorityManagement(&outC->Context_From_SR_1);
  /* _L356=(PriorityManagement::From_UN#1)/ */
  From_UN_init_PriorityManagement(&outC->Context_From_UN_1);
  outC->currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SwitchModes_reset(outC_SwitchModes *outC)
{
  /* _L43=(PriorityManagement::From_FS#1)/ */
  From_FS_reset_PriorityManagement(&outC->Context_From_FS_1);
  /* _L241=(PriorityManagement::From_LS#1)/ */
  From_LS_reset_PriorityManagement(&outC->Context_From_LS_1);
  /* _L48=(PriorityManagement::From_NL#1)/ */
  From_NL_reset_PriorityManagement(&outC->Context_From_NL_1);
  /* _L21=(PriorityManagement::From_NP#1)/ */
  From_NP_reset_PriorityManagement(&outC->Context_From_NP_1);
  /* _L242=(PriorityManagement::From_OS#1)/ */
  From_OS_reset_PriorityManagement(&outC->Context_From_OS_1);
  /* _L39=(PriorityManagement::From_PS#1)/ */
  From_PS_reset_PriorityManagement(&outC->Context_From_PS_1);
  /* _L50=(PriorityManagement::From_PT#1)/ */
  From_PT_reset_PriorityManagement(&outC->Context_From_PT_1);
  /* _L53=(PriorityManagement::From_RV#1)/ */
  From_RV_reset_PriorityManagement(&outC->Context_From_RV_1);
  /* _L24=(PriorityManagement::From_SB#1)/ */
  From_SB_reset_PriorityManagement(&outC->Context_From_SB_1);
  /* _L51=(PriorityManagement::From_SF#1)/ */
  From_SF_reset_PriorityManagement(&outC->Context_From_SF_1);
  /* _L40=(PriorityManagement::From_SH#1)/ */
  From_SH_reset_PriorityManagement(&outC->Context_From_SH_1);
  /* _L47=(PriorityManagement::From_SL#1)/ */
  From_SL_reset_PriorityManagement(&outC->Context_From_SL_1);
  /* _L52=(PriorityManagement::From_SN#1)/ */
  From_SN_reset_PriorityManagement(&outC->Context_From_SN_1);
  /* _L49=(PriorityManagement::From_TR#1)/ */
  From_TR_reset_PriorityManagement(&outC->Context_From_TR_1);
  /* _L243=(PriorityManagement::From_SR#1)/ */
  From_SR_reset_PriorityManagement(&outC->Context_From_SR_1);
  /* _L356=(PriorityManagement::From_UN#1)/ */
  From_UN_reset_PriorityManagement(&outC->Context_From_UN_1);
  outC->currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SwitchModes.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

