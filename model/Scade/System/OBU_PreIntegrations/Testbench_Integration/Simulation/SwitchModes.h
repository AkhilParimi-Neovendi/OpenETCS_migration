/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SwitchModes_H_
#define _SwitchModes_H_

#include "kcg_types.h"
#include "From_UN_PriorityManagement.h"
#include "From_RV_PriorityManagement.h"
#include "From_SN_PriorityManagement.h"
#include "From_SF_PriorityManagement.h"
#include "From_PT_PriorityManagement.h"
#include "From_TR_PriorityManagement.h"
#include "From_NL_PriorityManagement.h"
#include "From_SL_PriorityManagement.h"
#include "From_OS_PriorityManagement.h"
#include "From_SR_PriorityManagement.h"
#include "From_LS_PriorityManagement.h"
#include "From_FS_PriorityManagement.h"
#include "From_SH_PriorityManagement.h"
#include "From_PS_PriorityManagement.h"
#include "From_SB_PriorityManagement.h"
#include "From_NP_PriorityManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ currentMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_From_FS_PriorityManagement /* _L43=(PriorityManagement::From_FS#1)/ */ Context_From_FS_1;
  outC_From_LS_PriorityManagement /* _L241=(PriorityManagement::From_LS#1)/ */ Context_From_LS_1;
  outC_From_NL_PriorityManagement /* _L48=(PriorityManagement::From_NL#1)/ */ Context_From_NL_1;
  outC_From_NP_PriorityManagement /* _L21=(PriorityManagement::From_NP#1)/ */ Context_From_NP_1;
  outC_From_OS_PriorityManagement /* _L242=(PriorityManagement::From_OS#1)/ */ Context_From_OS_1;
  outC_From_PS_PriorityManagement /* _L39=(PriorityManagement::From_PS#1)/ */ Context_From_PS_1;
  outC_From_PT_PriorityManagement /* _L50=(PriorityManagement::From_PT#1)/ */ Context_From_PT_1;
  outC_From_RV_PriorityManagement /* _L53=(PriorityManagement::From_RV#1)/ */ Context_From_RV_1;
  outC_From_SB_PriorityManagement /* _L24=(PriorityManagement::From_SB#1)/ */ Context_From_SB_1;
  outC_From_SF_PriorityManagement /* _L51=(PriorityManagement::From_SF#1)/ */ Context_From_SF_1;
  outC_From_SH_PriorityManagement /* _L40=(PriorityManagement::From_SH#1)/ */ Context_From_SH_1;
  outC_From_SL_PriorityManagement /* _L47=(PriorityManagement::From_SL#1)/ */ Context_From_SL_1;
  outC_From_SN_PriorityManagement /* _L52=(PriorityManagement::From_SN#1)/ */ Context_From_SN_1;
  outC_From_TR_PriorityManagement /* _L49=(PriorityManagement::From_TR#1)/ */ Context_From_TR_1;
  outC_From_SR_PriorityManagement /* _L243=(PriorityManagement::From_SR#1)/ */ Context_From_SR_1;
  outC_From_UN_PriorityManagement /* _L356=(PriorityManagement::From_UN#1)/ */ Context_From_UN_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* previousMode_Loc/ */ previousMode_Loc;
  T_Mode_Level_And_Mode_Types_Pkg /* FromNP/ */ FromNP;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSB/ */ FromSB;
  T_Mode_Level_And_Mode_Types_Pkg /* FromPS/ */ FromPS;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSH/ */ FromSH;
  T_Mode_Level_And_Mode_Types_Pkg /* FromFS/ */ FromFS;
  T_Mode_Level_And_Mode_Types_Pkg /* FromLS/ */ FromLS;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSR/ */ FromSR;
  T_Mode_Level_And_Mode_Types_Pkg /* FromOS/ */ FromOS;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSL/ */ FromSL;
  T_Mode_Level_And_Mode_Types_Pkg /* FromNL/ */ FromNL;
  T_Mode_Level_And_Mode_Types_Pkg /* FromTR/ */ FromTR;
  T_Mode_Level_And_Mode_Types_Pkg /* FromPT/ */ FromPT;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSF/ */ FromSF;
  T_Mode_Level_And_Mode_Types_Pkg /* FromSN/ */ FromSN;
  T_Mode_Level_And_Mode_Types_Pkg /* FromRV/ */ FromRV;
  T_Mode_Level_And_Mode_Types_Pkg /* FromUN/ */ FromUN;
  T_Mode_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  T_Mode_Level_And_Mode_Types_Pkg /* _L21/ */ _L21;
  T_Mode_Level_And_Mode_Types_Pkg /* _L24/ */ _L24;
  T_Mode_Level_And_Mode_Types_Pkg /* _L38/ */ _L38;
  T_Mode_Level_And_Mode_Types_Pkg /* _L39/ */ _L39;
  T_Mode_Level_And_Mode_Types_Pkg /* _L40/ */ _L40;
  T_Mode_Level_And_Mode_Types_Pkg /* _L43/ */ _L43;
  T_Mode_Level_And_Mode_Types_Pkg /* _L47/ */ _L47;
  T_Mode_Level_And_Mode_Types_Pkg /* _L48/ */ _L48;
  T_Mode_Level_And_Mode_Types_Pkg /* _L49/ */ _L49;
  T_Mode_Level_And_Mode_Types_Pkg /* _L50/ */ _L50;
  T_Mode_Level_And_Mode_Types_Pkg /* _L51/ */ _L51;
  T_Mode_Level_And_Mode_Types_Pkg /* _L52/ */ _L52;
  T_Mode_Level_And_Mode_Types_Pkg /* _L53/ */ _L53;
  T_Mode_Level_And_Mode_Types_Pkg /* _L55/ */ _L55;
  T_Mode_Level_And_Mode_Types_Pkg /* _L56/ */ _L56;
  T_Mode_Level_And_Mode_Types_Pkg /* _L57/ */ _L57;
  T_Mode_Level_And_Mode_Types_Pkg /* _L58/ */ _L58;
  T_Mode_Level_And_Mode_Types_Pkg /* _L59/ */ _L59;
  T_Mode_Level_And_Mode_Types_Pkg /* _L60/ */ _L60;
  T_Mode_Level_And_Mode_Types_Pkg /* _L61/ */ _L61;
  T_Mode_Level_And_Mode_Types_Pkg /* _L62/ */ _L62;
  T_Mode_Level_And_Mode_Types_Pkg /* _L63/ */ _L63;
  T_Mode_Level_And_Mode_Types_Pkg /* _L64/ */ _L64;
  T_Mode_Level_And_Mode_Types_Pkg /* _L65/ */ _L65;
  T_Mode_Level_And_Mode_Types_Pkg /* _L66/ */ _L66;
  T_Mode_Level_And_Mode_Types_Pkg /* _L67/ */ _L67;
  T_Mode_Level_And_Mode_Types_Pkg /* _L68/ */ _L68;
  T_Mode_Level_And_Mode_Types_Pkg /* _L69/ */ _L69;
  T_Mode_Level_And_Mode_Types_Pkg /* _L70/ */ _L70;
  T_Mode_Level_And_Mode_Types_Pkg /* _L71/ */ _L71;
  T_Mode_Level_And_Mode_Types_Pkg /* _L72/ */ _L72;
  T_Mode_Level_And_Mode_Types_Pkg /* _L73/ */ _L73;
  T_Mode_Level_And_Mode_Types_Pkg /* _L74/ */ _L74;
  T_Mode_Level_And_Mode_Types_Pkg /* _L75/ */ _L75;
  T_Mode_Level_And_Mode_Types_Pkg /* _L76/ */ _L76;
  T_Mode_Level_And_Mode_Types_Pkg /* _L77/ */ _L77;
  T_Mode_Level_And_Mode_Types_Pkg /* _L78/ */ _L78;
  T_Mode_Level_And_Mode_Types_Pkg /* _L79/ */ _L79;
  T_Mode_Level_And_Mode_Types_Pkg /* _L80/ */ _L80;
  T_Mode_Level_And_Mode_Types_Pkg /* _L81/ */ _L81;
  T_Mode_Level_And_Mode_Types_Pkg /* _L82/ */ _L82;
  T_Mode_Level_And_Mode_Types_Pkg /* _L83/ */ _L83;
  T_Mode_Level_And_Mode_Types_Pkg /* _L84/ */ _L84;
  T_Mode_Level_And_Mode_Types_Pkg /* _L187/ */ _L187;
  T_Mode_Level_And_Mode_Types_Pkg /* _L199/ */ _L199;
  kcg_bool /* _L200/ */ _L200;
  kcg_bool /* _L201/ */ _L201;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  kcg_bool /* _L205/ */ _L205;
  kcg_bool /* _L206/ */ _L206;
  kcg_bool /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  kcg_bool /* _L209/ */ _L209;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L211/ */ _L211;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L213/ */ _L213;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L222/ */ _L222;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L225/ */ _L225;
  kcg_bool /* _L226/ */ _L226;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L228/ */ _L228;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L230/ */ _L230;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L233/ */ _L233;
  kcg_bool /* _L234/ */ _L234;
  kcg_bool /* _L235/ */ _L235;
  kcg_bool /* _L236/ */ _L236;
  T_Mode_Level_And_Mode_Types_Pkg /* _L241/ */ _L241;
  T_Mode_Level_And_Mode_Types_Pkg /* _L242/ */ _L242;
  T_Mode_Level_And_Mode_Types_Pkg /* _L243/ */ _L243;
  kcg_bool /* _L244/ */ _L244;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L246/ */ _L246;
  kcg_bool /* _L247/ */ _L247;
  kcg_bool /* _L248/ */ _L248;
  kcg_bool /* _L249/ */ _L249;
  kcg_bool /* _L250/ */ _L250;
  kcg_bool /* _L251/ */ _L251;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L253/ */ _L253;
  kcg_bool /* _L254/ */ _L254;
  kcg_bool /* _L255/ */ _L255;
  kcg_bool /* _L256/ */ _L256;
  kcg_bool /* _L257/ */ _L257;
  kcg_bool /* _L258/ */ _L258;
  kcg_bool /* _L259/ */ _L259;
  kcg_bool /* _L260/ */ _L260;
  kcg_bool /* _L261/ */ _L261;
  kcg_bool /* _L262/ */ _L262;
  kcg_bool /* _L263/ */ _L263;
  kcg_bool /* _L264/ */ _L264;
  kcg_bool /* _L265/ */ _L265;
  kcg_bool /* _L266/ */ _L266;
  kcg_bool /* _L267/ */ _L267;
  kcg_bool /* _L268/ */ _L268;
  kcg_bool /* _L269/ */ _L269;
  kcg_bool /* _L270/ */ _L270;
  kcg_bool /* _L271/ */ _L271;
  kcg_bool /* _L272/ */ _L272;
  kcg_bool /* _L273/ */ _L273;
  kcg_bool /* _L274/ */ _L274;
  kcg_bool /* _L275/ */ _L275;
  kcg_bool /* _L276/ */ _L276;
  kcg_bool /* _L277/ */ _L277;
  kcg_bool /* _L278/ */ _L278;
  kcg_bool /* _L280/ */ _L280;
  kcg_bool /* _L281/ */ _L281;
  kcg_bool /* _L282/ */ _L282;
  kcg_bool /* _L283/ */ _L283;
  kcg_bool /* _L284/ */ _L284;
  kcg_bool /* _L285/ */ _L285;
  kcg_bool /* _L286/ */ _L286;
  kcg_bool /* _L287/ */ _L287;
  kcg_bool /* _L288/ */ _L288;
  kcg_bool /* _L289/ */ _L289;
  kcg_bool /* _L290/ */ _L290;
  kcg_bool /* _L291/ */ _L291;
  kcg_bool /* _L292/ */ _L292;
  kcg_bool /* _L293/ */ _L293;
  kcg_bool /* _L294/ */ _L294;
  kcg_bool /* _L295/ */ _L295;
  kcg_bool /* _L296/ */ _L296;
  kcg_bool /* _L297/ */ _L297;
  kcg_bool /* _L298/ */ _L298;
  kcg_bool /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  kcg_bool /* _L302/ */ _L302;
  kcg_bool /* _L303/ */ _L303;
  kcg_bool /* _L304/ */ _L304;
  kcg_bool /* _L305/ */ _L305;
  kcg_bool /* _L306/ */ _L306;
  kcg_bool /* _L307/ */ _L307;
  kcg_bool /* _L308/ */ _L308;
  kcg_bool /* _L309/ */ _L309;
  kcg_bool /* _L310/ */ _L310;
  kcg_bool /* _L311/ */ _L311;
  kcg_bool /* _L312/ */ _L312;
  kcg_bool /* _L313/ */ _L313;
  kcg_bool /* _L314/ */ _L314;
  kcg_bool /* _L315/ */ _L315;
  kcg_bool /* _L316/ */ _L316;
  kcg_bool /* _L317/ */ _L317;
  kcg_bool /* _L318/ */ _L318;
  kcg_bool /* _L320/ */ _L320;
  kcg_bool /* _L321/ */ _L321;
  kcg_bool /* _L322/ */ _L322;
  kcg_bool /* _L323/ */ _L323;
  kcg_bool /* _L324/ */ _L324;
  kcg_bool /* _L325/ */ _L325;
  kcg_bool /* _L326/ */ _L326;
  kcg_bool /* _L327/ */ _L327;
  kcg_bool /* _L328/ */ _L328;
  kcg_bool /* _L329/ */ _L329;
  kcg_bool /* _L330/ */ _L330;
  kcg_bool /* _L331/ */ _L331;
  kcg_bool /* _L332/ */ _L332;
  kcg_bool /* _L333/ */ _L333;
  kcg_bool /* _L334/ */ _L334;
  kcg_bool /* _L335/ */ _L335;
  kcg_bool /* _L336/ */ _L336;
  kcg_bool /* _L337/ */ _L337;
  kcg_bool /* _L338/ */ _L338;
  kcg_bool /* _L339/ */ _L339;
  kcg_bool /* _L340/ */ _L340;
  kcg_bool /* _L341/ */ _L341;
  kcg_bool /* _L342/ */ _L342;
  kcg_bool /* _L343/ */ _L343;
  kcg_bool /* _L344/ */ _L344;
  kcg_bool /* _L345/ */ _L345;
  kcg_bool /* _L346/ */ _L346;
  kcg_bool /* _L347/ */ _L347;
  kcg_bool /* _L348/ */ _L348;
  kcg_bool /* _L349/ */ _L349;
  kcg_bool /* _L350/ */ _L350;
  kcg_bool /* _L351/ */ _L351;
  kcg_bool /* _L352/ */ _L352;
  kcg_bool /* _L353/ */ _L353;
  kcg_bool /* _L354/ */ _L354;
  T_Mode_Level_And_Mode_Types_Pkg /* _L356/ */ _L356;
  kcg_bool /* _L357/ */ _L357;
  kcg_bool /* _L358/ */ _L358;
  kcg_bool /* _L359/ */ _L359;
  kcg_bool /* _L360/ */ _L360;
  kcg_bool /* _L361/ */ _L361;
  kcg_bool /* _L362/ */ _L362;
  kcg_bool /* _L363/ */ _L363;
  kcg_bool /* _L364/ */ _L364;
  kcg_bool /* _L365/ */ _L365;
  kcg_bool /* _L366/ */ _L366;
  kcg_bool /* _L367/ */ _L367;
  kcg_bool /* _L368/ */ _L368;
  kcg_bool /* _L370/ */ _L370;
  kcg_bool /* _L371/ */ _L371;
  kcg_bool /* _L372/ */ _L372;
  kcg_bool /* _L373/ */ _L373;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L375/ */ _L375;
  kcg_bool /* _L376/ */ _L376;
} outC_SwitchModes;

/* ===========  node initialization and cycle functions  =========== */
/* SwitchModes/ */
extern void SwitchModes(
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
  outC_SwitchModes *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SwitchModes_reset(outC_SwitchModes *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SwitchModes_init(outC_SwitchModes *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ Context_currentMode;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_SwitchModes;

extern void kcg_save_SV_SwitchModes(SV_SwitchModes *SV, outC_SwitchModes *outC);
extern void kcg_load_SV_SwitchModes(outC_SwitchModes *outC, SV_SwitchModes *SV);



#endif /* _SwitchModes_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SwitchModes.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

