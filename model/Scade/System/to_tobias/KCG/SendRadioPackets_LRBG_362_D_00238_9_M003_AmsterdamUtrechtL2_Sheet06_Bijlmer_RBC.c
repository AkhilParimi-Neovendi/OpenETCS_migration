/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003 */
void SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  static CompressedPackets_T_Common_Types_Pkg tmp1;
  static CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 1 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *) &LRBG362_P015_2_Packets426,
    &tmp);
  /* 1 */
  Send_P021_MessageLibBaseline2(
    &tmp,
    (P021_trackside_int_T_TM *) &LRBG362_P021_2_Packets426,
    &tmp1);
  /* 1 */
  Send_P027V1_MessageLibBaseline2(
    &tmp1,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG362_P027_2_Packets426,
    &tmp);
  /* 1 */
  Send_P005_MessageLibBaseline2(
    &tmp,
    (P005_trackside_int_T_TM *) &LRBG362_P005_2_Packets426,
    &tmp1);
  /* 1 */
  Send_P065_MessageLibBaseline2(
    &tmp1,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R1_Packets426,
    &tmp);
  /* 2 */
  Send_P065_MessageLibBaseline2(
    &tmp,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R2_Packets426,
    &tmp1);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &tmp1,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

