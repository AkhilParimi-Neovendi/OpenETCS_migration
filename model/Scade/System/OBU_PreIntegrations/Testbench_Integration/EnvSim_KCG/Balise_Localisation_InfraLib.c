/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Localisation_InfraLib.h"

/* InfraLib::Balise_Localisation/ */
void Balise_Localisation_InfraLib(
  /* B_data_in/ */
  B_data_internal_T_InfraLib *B_data_in,
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* PIG_nom/ */
  kcg_int64 PIG_nom,
  outC_Balise_Localisation_InfraLib *outC)
{
  static kcg_int64 noname;

  outC->_L92 = ReleaseDelta_InfraLib;
  outC->I2_Min_1_float64 = outC->_L92;
  outC->_L22_Min_1_float64 = outC->I2_Min_1_float64;
  outC->_L82 = Half_Distance_Balises_in_BG_InfraLib;
  outC->I1_Min_1_float64 = outC->_L82;
  outC->_L21_Min_1_float64 = outC->I1_Min_1_float64;
  outC->_L25_Min_1_float64 = outC->_L21_Min_1_float64 <= outC->_L22_Min_1_float64;
  /* @1/_L24= */
  if (outC->_L25_Min_1_float64) {
    outC->_L24_Min_1_float64 = outC->_L21_Min_1_float64;
  }
  else {
    outC->_L24_Min_1_float64 = outC->_L22_Min_1_float64;
  }
  outC->Mi_Output_Min_1_float64 = outC->_L24_Min_1_float64;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L71, B_data_in);
  outC->_L73 = outC->_L71.TrainPos;
  outC->_L93 = outC->Mi_Output_Min_1_float64;
  outC->_L68 = outC->_L71.engineering_BG_location;
  /* _L77=(TM_conversions::TOOLS_convert_engineering_location#1)/ */
  TOOLS_convert_engineering_location_TM_conversions(
    outC->_L68,
    &outC->Context_TOOLS_convert_engineering_location_1);
  outC->_L77 = outC->Context_TOOLS_convert_engineering_location_1.Loc_real;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L65, B_data_in);
  outC->_L66 = outC->_L65.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L16, Header);
  outC->_L47 = outC->_L16.n_pig;
  outC->_L51 = kcg_lit_int64(0);
  outC->_L48 = PIG_nom;
  outC->_L50 = outC->_L48 == outC->_L51;
  /* _L52= */
  if (outC->_L50) {
    outC->_L52 = outC->_L47;
  }
  else {
    outC->_L52 = outC->_L66;
  }
  /* _L75=(InfraLib::Balise_Interdistance#1)/ */
  Balise_Interdistance_InfraLib(
    outC->_L52,
    outC->_L47,
    &outC->Context_Balise_Interdistance_1);
  outC->_L75 = outC->Context_Balise_Interdistance_1.distance_BB;
  outC->_L76 = outC->_L75 + outC->_L77;
  outC->_L91 = outC->_L76 - outC->_L93;
  outC->_L94 = outC->_L91 <= outC->_L73;
  outC->_L90 = outC->_L76 + outC->_L93;
  outC->_L95 = outC->_L90 > outC->_L73;
  outC->_L96 = outC->_L95 & outC->_L94;
  outC->TrainPass = outC->_L96;
  outC->PIG_0_out = outC->_L52;
  outC->_L15 = kcg_lit_int64(0);
  noname = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_Localisation_init_InfraLib(outC_Balise_Localisation_InfraLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_lit_float64(0.0);
  outC->_L92 = kcg_lit_float64(0.0);
  outC->_L91 = kcg_lit_float64(0.0);
  outC->_L90 = kcg_lit_float64(0.0);
  outC->_L82 = kcg_lit_float64(0.0);
  outC->_L77 = kcg_lit_float64(0.0);
  outC->_L76 = kcg_lit_float64(0.0);
  outC->_L75 = kcg_lit_float64(0.0);
  outC->_L68 = kcg_lit_int64(0);
  outC->_L71.header.q_updown = kcg_lit_int64(0);
  outC->_L71.header.m_version = kcg_lit_int64(0);
  outC->_L71.header.q_media = kcg_lit_int64(0);
  outC->_L71.header.n_pig = kcg_lit_int64(0);
  outC->_L71.header.n_total = kcg_lit_int64(0);
  outC->_L71.header.m_dup = kcg_lit_int64(0);
  outC->_L71.header.m_mcount = kcg_lit_int64(0);
  outC->_L71.header.nid_c = kcg_lit_int64(0);
  outC->_L71.header.nid_bg = kcg_lit_int64(0);
  outC->_L71.header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L71.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L71.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L71.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L71.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L71.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L71.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L71.engineering_BG_location = kcg_lit_int64(0);
  outC->_L71.TrainPos = kcg_lit_float64(0.0);
  outC->_L71.pig_nom_0 = kcg_lit_int64(0);
  outC->_L71.balise_passed = kcg_true;
  outC->_L73 = kcg_lit_float64(0.0);
  outC->_L66 = kcg_lit_int64(0);
  outC->_L65.header.q_updown = kcg_lit_int64(0);
  outC->_L65.header.m_version = kcg_lit_int64(0);
  outC->_L65.header.q_media = kcg_lit_int64(0);
  outC->_L65.header.n_pig = kcg_lit_int64(0);
  outC->_L65.header.n_total = kcg_lit_int64(0);
  outC->_L65.header.m_dup = kcg_lit_int64(0);
  outC->_L65.header.m_mcount = kcg_lit_int64(0);
  outC->_L65.header.nid_c = kcg_lit_int64(0);
  outC->_L65.header.nid_bg = kcg_lit_int64(0);
  outC->_L65.header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L65.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L65.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L65.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L65.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L65.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L65.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L65.engineering_BG_location = kcg_lit_int64(0);
  outC->_L65.TrainPos = kcg_lit_float64(0.0);
  outC->_L65.pig_nom_0 = kcg_lit_int64(0);
  outC->_L65.balise_passed = kcg_true;
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50 = kcg_true;
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L16.q_updown = kcg_lit_int64(0);
  outC->_L16.m_version = kcg_lit_int64(0);
  outC->_L16.q_media = kcg_lit_int64(0);
  outC->_L16.n_pig = kcg_lit_int64(0);
  outC->_L16.n_total = kcg_lit_int64(0);
  outC->_L16.m_dup = kcg_lit_int64(0);
  outC->_L16.m_mcount = kcg_lit_int64(0);
  outC->_L16.nid_c = kcg_lit_int64(0);
  outC->_L16.nid_bg = kcg_lit_int64(0);
  outC->_L16.q_link = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L21_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L22_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L24_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L25_Min_1_float64 = kcg_true;
  outC->I1_Min_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Min_1_float64 = kcg_lit_float64(0.0);
  outC->Mi_Output_Min_1_float64 = kcg_lit_float64(0.0);
  outC->TrainPass = kcg_true;
  outC->PIG_0_out = kcg_lit_int64(0);
  /* _L75=(InfraLib::Balise_Interdistance#1)/ */
  Balise_Interdistance_init_InfraLib(&outC->Context_Balise_Interdistance_1);
  /* _L77=(TM_conversions::TOOLS_convert_engineering_location#1)/ */
  TOOLS_convert_engineering_location_init_TM_conversions(
    &outC->Context_TOOLS_convert_engineering_location_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Localisation_reset_InfraLib(outC_Balise_Localisation_InfraLib *outC)
{
  /* _L75=(InfraLib::Balise_Interdistance#1)/ */
  Balise_Interdistance_reset_InfraLib(&outC->Context_Balise_Interdistance_1);
  /* _L77=(TM_conversions::TOOLS_convert_engineering_location#1)/ */
  TOOLS_convert_engineering_location_reset_TM_conversions(
    &outC->Context_TOOLS_convert_engineering_location_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: InfraLib::Balise_Localisation/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Localisation_InfraLib.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

