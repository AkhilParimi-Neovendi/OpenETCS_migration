/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LengthLargerThanLKr_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::LengthLargerThanLKr/ */
void LengthLargerThanLKr_SDMConversionModelPkg(
  /* L/ */
  L_internal_Type_Obu_BasicTypes_Pkg L,
  /* LnvKrInt/ */
  L_NVKRINT LnvKrInt,
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC)
{
  outC->_L83 = kcg_lit_int64(100);
  kcg_copy_array_int64_32(
    &outC->_L7,
    (array_int64_32 *) &cLKrIntLookUp_SDMConversionModelPkg);
  outC->_L50 = outC->_L7[0];
  outC->_L51 = outC->_L7[1];
  outC->_L52 = outC->_L7[2];
  outC->_L53 = outC->_L7[3];
  outC->_L54 = outC->_L7[4];
  outC->_L55 = outC->_L7[5];
  outC->_L56 = outC->_L7[6];
  outC->_L57 = outC->_L7[7];
  outC->_L58 = outC->_L7[8];
  outC->_L59 = outC->_L7[9];
  outC->_L60 = outC->_L7[10];
  outC->_L61 = outC->_L7[11];
  outC->_L62 = outC->_L7[12];
  outC->_L63 = outC->_L7[13];
  outC->_L64 = outC->_L7[14];
  outC->_L65 = outC->_L7[15];
  outC->_L66 = outC->_L7[16];
  outC->_L67 = outC->_L7[17];
  outC->_L68 = outC->_L7[18];
  outC->_L69 = outC->_L7[19];
  outC->_L70 = outC->_L7[20];
  outC->_L71 = outC->_L7[21];
  outC->_L72 = outC->_L7[22];
  outC->_L73 = outC->_L7[23];
  outC->_L74 = outC->_L7[24];
  outC->_L75 = outC->_L7[25];
  outC->_L76 = outC->_L7[26];
  outC->_L77 = outC->_L7[27];
  outC->_L78 = outC->_L7[28];
  outC->_L79 = outC->_L7[29];
  outC->_L80 = outC->_L7[30];
  outC->_L81 = outC->_L7[31];
  outC->_L2 = LnvKrInt;
  /* _L3= */
  switch (outC->_L2) {
    case L_NVKRINT_0m :
      outC->_L3 = outC->_L50;
      break;
    case L_NVKRINT_25m :
      outC->_L3 = outC->_L51;
      break;
    case L_NVKRINT_50m :
      outC->_L3 = outC->_L52;
      break;
    case L_NVKRINT_75m :
      outC->_L3 = outC->_L53;
      break;
    case L_NVKRINT_100m :
      outC->_L3 = outC->_L54;
      break;
    case L_NVKRINT_150m :
      outC->_L3 = outC->_L55;
      break;
    case L_NVKRINT_200m :
      outC->_L3 = outC->_L56;
      break;
    case L_NVKRINT_300m :
      outC->_L3 = outC->_L57;
      break;
    case L_NVKRINT_400m :
      outC->_L3 = outC->_L58;
      break;
    case L_NVKRINT_500m :
      outC->_L3 = outC->_L59;
      break;
    case L_NVKRINT_600m :
      outC->_L3 = outC->_L60;
      break;
    case L_NVKRINT_700m :
      outC->_L3 = outC->_L61;
      break;
    case L_NVKRINT_800m :
      outC->_L3 = outC->_L62;
      break;
    case L_NVKRINT_900m :
      outC->_L3 = outC->_L63;
      break;
    case L_NVKRINT_1000m :
      outC->_L3 = outC->_L64;
      break;
    case L_NVKRINT_1100m :
      outC->_L3 = outC->_L65;
      break;
    case L_NVKRINT_1200m :
      outC->_L3 = outC->_L66;
      break;
    case L_NVKRINT_1300m :
      outC->_L3 = outC->_L67;
      break;
    case L_NVKRINT_1400m :
      outC->_L3 = outC->_L68;
      break;
    case L_NVKRINT_1500m :
      outC->_L3 = outC->_L69;
      break;
    case L_NVKRINT_1600m :
      outC->_L3 = outC->_L70;
      break;
    case L_NVKRINT_1700m :
      outC->_L3 = outC->_L71;
      break;
    case L_NVKRINT_1800m :
      outC->_L3 = outC->_L72;
      break;
    case L_NVKRINT_1900m :
      outC->_L3 = outC->_L73;
      break;
    case L_NVKRINT_2000m :
      outC->_L3 = outC->_L74;
      break;
    case L_NVKRINT_2100m :
      outC->_L3 = outC->_L75;
      break;
    case L_NVKRINT_2200m :
      outC->_L3 = outC->_L76;
      break;
    case L_NVKRINT_2300m :
      outC->_L3 = outC->_L77;
      break;
    case L_NVKRINT_2400m :
      outC->_L3 = outC->_L78;
      break;
    case L_NVKRINT_2500m :
      outC->_L3 = outC->_L79;
      break;
    case L_NVKRINT_2600m :
      outC->_L3 = outC->_L80;
      break;
    case L_NVKRINT_2700m :
      outC->_L3 = outC->_L81;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L82 = outC->_L83 * outC->_L3;
  outC->_L1 = L;
  outC->_L4 = outC->_L1 >= outC->_L82;
  outC->isLarger = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void LengthLargerThanLKr_init_SDMConversionModelPkg(
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  outC->_L83 = kcg_lit_int64(0);
  outC->_L82 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L53 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L59 = kcg_lit_int64(0);
  outC->_L60 = kcg_lit_int64(0);
  outC->_L61 = kcg_lit_int64(0);
  outC->_L62 = kcg_lit_int64(0);
  outC->_L63 = kcg_lit_int64(0);
  outC->_L64 = kcg_lit_int64(0);
  outC->_L65 = kcg_lit_int64(0);
  outC->_L66 = kcg_lit_int64(0);
  outC->_L67 = kcg_lit_int64(0);
  outC->_L68 = kcg_lit_int64(0);
  outC->_L69 = kcg_lit_int64(0);
  outC->_L70 = kcg_lit_int64(0);
  outC->_L71 = kcg_lit_int64(0);
  outC->_L72 = kcg_lit_int64(0);
  outC->_L73 = kcg_lit_int64(0);
  outC->_L74 = kcg_lit_int64(0);
  outC->_L75 = kcg_lit_int64(0);
  outC->_L76 = kcg_lit_int64(0);
  outC->_L77 = kcg_lit_int64(0);
  outC->_L78 = kcg_lit_int64(0);
  outC->_L79 = kcg_lit_int64(0);
  outC->_L80 = kcg_lit_int64(0);
  outC->_L81 = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L7[idx] = kcg_lit_int64(0);
  }
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = L_NVKRINT_0m;
  outC->_L1 = kcg_lit_int64(0);
  outC->isLarger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LengthLargerThanLKr_reset_SDMConversionModelPkg(
  outC_LengthLargerThanLKr_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LengthLargerThanLKr_SDMConversionModelPkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

