/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_P046_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P046_OBU_sectionlist_int_T_TM(
  P046_OBU_sectionlist_int_T_TM *kcg_c1,
  P046_OBU_sectionlist_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P041_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P041_OBU_sectionlist_int_T_TM(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P041_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P021_OBU_sectionlist_int_T_TM(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P021_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_int32_56
kcg_bool kcg_comp_array_int32_56(array_int32_56 *kcg_c1, array_int32_56 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 56; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_56 */

#ifdef kcg_use_array_int32_9
kcg_bool kcg_comp_array_int32_9(array_int32_9 *kcg_c1, array_int32_9 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_9 */

#ifdef kcg_use_array_int32_6
kcg_bool kcg_comp_array_int32_6(array_int32_6 *kcg_c1, array_int32_6 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_6 */

#ifdef kcg_use_array_int32_70
kcg_bool kcg_comp_array_int32_70(array_int32_70 *kcg_c1, array_int32_70 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 70; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_70 */

#ifdef kcg_use_array_int32_2_32_64
kcg_bool kcg_comp_array_int32_2_32_64(
  array_int32_2_32_64 *kcg_c1,
  array_int32_2_32_64 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_2_32_64 */

#ifdef kcg_use_array_int32_2_32
kcg_bool kcg_comp_array_int32_2_32(
  array_int32_2_32 *kcg_c1,
  array_int32_2_32 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_2_32 */

#ifdef kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2
kcg_bool kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_P005_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P005_trackide_sectionlist_T_TM(
  P005_trackide_sectionlist_T_TM *kcg_c1,
  P005_trackide_sectionlist_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_int32_99
kcg_bool kcg_comp_array_int32_99(array_int32_99 *kcg_c1, array_int32_99 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_99 */

#ifdef kcg_use_array_int32_3_33_231
kcg_bool kcg_comp_array_int32_3_33_231(
  array_int32_3_33_231 *kcg_c1,
  array_int32_3_33_231 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_3_33_231 */

#ifdef kcg_use_array_int32_7_33_231
kcg_bool kcg_comp_array_int32_7_33_231(
  array_int32_7_33_231 *kcg_c1,
  array_int32_7_33_231 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_7_33_231 */

#ifdef kcg_use_P015_sections_array_flat_T_TM
kcg_bool kcg_comp_P015_sections_array_flat_T_TM(
  P015_sections_array_flat_T_TM *kcg_c1,
  P015_sections_array_flat_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P015_sections_array_flat_T_TM */

#ifdef kcg_use_array_int32_8
kcg_bool kcg_comp_array_int32_8(array_int32_8 *kcg_c1, array_int32_8 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_8 */

#ifdef kcg_use_array_int32_5
kcg_bool kcg_comp_array_int32_5(array_int32_5 *kcg_c1, array_int32_5 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_5 */

#ifdef kcg_use_array_int32_496
kcg_bool kcg_comp_array_int32_496(
  array_int32_496 *kcg_c1,
  array_int32_496 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 496; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_496 */

#ifdef kcg_use_array
kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array */

#ifdef kcg_use_P046_sections_array_flat_T_TM
kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 66; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use__18_array
kcg_bool kcg_comp__18_array(_18_array *kcg_c1, _18_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__18_array */

#ifdef kcg_use_array_int32_22
kcg_bool kcg_comp_array_int32_22(array_int32_22 *kcg_c1, array_int32_22 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 22; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_22 */

#ifdef kcg_use_array_int32_2_32_32
kcg_bool kcg_comp_array_int32_2_32_32(
  array_int32_2_32_32 *kcg_c1,
  array_int32_2_32_32 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_2_32_32 */

#ifdef kcg_use_P046_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P046_trackide_sectionlist_T_TM(
  P046_trackide_sectionlist_T_TM *kcg_c1,
  P046_trackide_sectionlist_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_trackide_sectionlist_T_TM */

#ifdef kcg_use_P041_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P041_trackide_sectionlist_T_TM(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P041_trackide_sectionlist_T_TM */

#ifdef kcg_use__19_array
kcg_bool kcg_comp__19_array(_19_array *kcg_c1, _19_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__19_array */

#ifdef kcg_use_P021_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P021_trackide_sectionlist_T_TM(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P021_trackide_sectionlist_T_TM */

#ifdef kcg_use__20_array
kcg_bool kcg_comp__20_array(_20_array *kcg_c1, _20_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__20_array */

#ifdef kcg_use__21_array
kcg_bool kcg_comp__21_array(_21_array *kcg_c1, _21_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P058_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__21_array */

#ifdef kcg_use_P005_sections_array_flat_T_TM
kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 95; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use__22_array
kcg_bool kcg_comp__22_array(_22_array *kcg_c1, _22_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_IterPacket58_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__22_array */

#ifdef kcg_use_P015_section_array_T_TM
kcg_bool kcg_comp_P015_section_array_T_TM(
  P015_section_array_T_TM *kcg_c1,
  P015_section_array_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P015_section_array_T_TM */

#ifdef kcg_use_P015_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P015_OBU_sectionlist_array_T_TM(
  P015_OBU_sectionlist_array_T_TM *kcg_c1,
  P015_OBU_sectionlist_array_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P015_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int32_33
kcg_bool kcg_comp_array_int32_33(array_int32_33 *kcg_c1, array_int32_33 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_33 */

#ifdef kcg_use_P005_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P005_OBU_sectionlist_array_T_TM(
  P005_OBU_sectionlist_array_T_TM *kcg_c1,
  P005_OBU_sectionlist_array_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int32_492
kcg_bool kcg_comp_array_int32_492(
  array_int32_492 *kcg_c1,
  array_int32_492 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 492; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_492 */

#ifdef kcg_use_array_int32_18
kcg_bool kcg_comp_array_int32_18(array_int32_18 *kcg_c1, array_int32_18 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 18; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_18 */

#ifdef kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifdef kcg_use_array_int32_3
kcg_bool kcg_comp_array_int32_3(array_int32_3 *kcg_c1, array_int32_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_3 */

#ifdef kcg_use_array_int32_430
kcg_bool kcg_comp_array_int32_430(
  array_int32_430 *kcg_c1,
  array_int32_430 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 430; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_430 */

#ifdef kcg_use_array_int32_500_500
kcg_bool kcg_comp_array_int32_500_500(
  array_int32_500_500 *kcg_c1,
  array_int32_500_500 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_500_500 */

#ifdef kcg_use_P003V1_trackide_sectionlist_T_TM_baseline2
kcg_bool kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2(
  P003V1_trackide_sectionlist_T_TM_baseline2 *kcg_c1,
  P003V1_trackide_sectionlist_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P003V1_trackide_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_P005_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P005_OBU_sectionlist_int_T_TM(
  P005_OBU_sectionlist_int_T_TM *kcg_c1,
  P005_OBU_sectionlist_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2(
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifdef kcg_use_array_int32_494
kcg_bool kcg_comp_array_int32_494(
  array_int32_494 *kcg_c1,
  array_int32_494 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_494 */

#ifdef kcg_use_array_int32_64
kcg_bool kcg_comp_array_int32_64(array_int32_64 *kcg_c1, array_int32_64 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_64 */

#ifdef kcg_use_array_int32_491
kcg_bool kcg_comp_array_int32_491(
  array_int32_491 *kcg_c1,
  array_int32_491 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 491; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_491 */

#ifdef kcg_use_array_int32_17
kcg_bool kcg_comp_array_int32_17(array_int32_17 *kcg_c1, array_int32_17 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 17; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_17 */

#ifdef kcg_use_array_int32_4_32_128
kcg_bool kcg_comp_array_int32_4_32_128(
  array_int32_4_32_128 *kcg_c1,
  array_int32_4_32_128 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_4_32_128 */

#ifdef kcg_use_array_int32_444
kcg_bool kcg_comp_array_int32_444(
  array_int32_444 *kcg_c1,
  array_int32_444 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 444; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_444 */

#ifdef kcg_use_array_int32_400
kcg_bool kcg_comp_array_int32_400(
  array_int32_400 *kcg_c1,
  array_int32_400 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 400; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_400 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataElement_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use__23_array
kcg_bool kcg_comp__23_array(_23_array *kcg_c1, _23_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_150212(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__23_array */

#ifdef kcg_use_array_int32_432
kcg_bool kcg_comp_array_int32_432(
  array_int32_432 *kcg_c1,
  array_int32_432 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 432; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_432 */

#ifdef kcg_use_array_int32_2
kcg_bool kcg_comp_array_int32_2(array_int32_2 *kcg_c1, array_int32_2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_2 */

#ifdef kcg_use__24_array
kcg_bool kcg_comp__24_array(_24_array *kcg_c1, _24_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__24_array */

#ifdef kcg_use_array_int32_396
kcg_bool kcg_comp_array_int32_396(
  array_int32_396 *kcg_c1,
  array_int32_396 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 396; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_396 */

#ifdef kcg_use_array_int32_1
kcg_bool kcg_comp_array_int32_1(array_int32_1 *kcg_c1, array_int32_1 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_1 */

#ifdef kcg_use_array_int32_428
kcg_bool kcg_comp_array_int32_428(
  array_int32_428 *kcg_c1,
  array_int32_428 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 428; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_428 */

#ifdef kcg_use_array_bool_5
kcg_bool kcg_comp_array_bool_5(array_bool_5 *kcg_c1, array_bool_5 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_5 */

#ifdef kcg_use_array_int32_150
kcg_bool kcg_comp_array_int32_150(
  array_int32_150 *kcg_c1,
  array_int32_150 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 150; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_150 */

#ifdef kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c1,
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use__25_array
kcg_bool kcg_comp__25_array(_25_array *kcg_c1, _25_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 16; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__25_array */

#ifdef kcg_use_array_int32_395
kcg_bool kcg_comp_array_int32_395(
  array_int32_395 *kcg_c1,
  array_int32_395 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 395; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_395 */

#ifdef kcg_use_array_int32_8_4
kcg_bool kcg_comp_array_int32_8_4(
  array_int32_8_4 *kcg_c1,
  array_int32_8_4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_8_4 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_int32_105
kcg_bool kcg_comp_array_int32_105(
  array_int32_105 *kcg_c1,
  array_int32_105 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 105; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_105 */

#ifdef kcg_use__26_array
kcg_bool kcg_comp__26_array(_26_array *kcg_c1, _26_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__26_array */

#ifdef kcg_use__27_array
kcg_bool kcg_comp__27_array(_27_array *kcg_c1, _27_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__27_array */

#ifdef kcg_use__28_array
kcg_bool kcg_comp__28_array(_28_array *kcg_c1, _28_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__28_array */

#ifdef kcg_use_P046_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P046_OBU_sectionlist_array_T_TM(
  P046_OBU_sectionlist_array_T_TM *kcg_c1,
  P046_OBU_sectionlist_array_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_sectionlist_array_T_TM */

#ifdef kcg_use__29_array
kcg_bool kcg_comp__29_array(_29_array *kcg_c1, _29_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__29_array */

#ifdef kcg_use_Array11_TM_TrainToTrack
kcg_bool kcg_comp_Array11_TM_TrainToTrack(
  Array11_TM_TrainToTrack *kcg_c1,
  Array11_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array11_TM_TrainToTrack */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_int32_350
kcg_bool kcg_comp_array_int32_350(
  array_int32_350 *kcg_c1,
  array_int32_350 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 350; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_350 */

#ifdef kcg_use_array_int32_2_33_99
kcg_bool kcg_comp_array_int32_2_33_99(
  array_int32_2_33_99 *kcg_c1,
  array_int32_2_33_99 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_2_33_99 */

#ifdef kcg_use_array_int32_3_33_99
kcg_bool kcg_comp_array_int32_3_33_99(
  array_int32_3_33_99 *kcg_c1,
  array_int32_3_33_99 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_3_33_99 */

#ifdef kcg_use_array_int32_72
kcg_bool kcg_comp_array_int32_72(array_int32_72 *kcg_c1, array_int32_72 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 72; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_72 */

#ifdef kcg_use_array_int32_499
kcg_bool kcg_comp_array_int32_499(
  array_int32_499 *kcg_c1,
  array_int32_499 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 499; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_499 */

#ifdef kcg_use_array_int32_104
kcg_bool kcg_comp_array_int32_104(
  array_int32_104 *kcg_c1,
  array_int32_104 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 104; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_104 */

#ifdef kcg_use_P011_TrainTrack_int_TM_TrainToTrack
kcg_bool kcg_comp_P011_TrainTrack_int_TM_TrainToTrack(
  P011_TrainTrack_int_TM_TrainToTrack *kcg_c1,
  P011_TrainTrack_int_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P011_TrainTrack_int_TM_TrainToTrack */

#ifdef kcg_use_array_int32_3_33
kcg_bool kcg_comp_array_int32_3_33(
  array_int32_3_33 *kcg_c1,
  array_int32_3_33 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int32_3(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_3_33 */

#ifdef kcg_use_P005_section_array_T_TM
kcg_bool kcg_comp_P005_section_array_T_TM(
  P005_section_array_T_TM *kcg_c1,
  P005_section_array_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_section_array_T_TM */

#ifdef kcg_use__30_array
kcg_bool kcg_comp__30_array(_30_array *kcg_c1, _30_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__30_array */

#ifdef kcg_use__31_array
kcg_bool kcg_comp__31_array(_31_array *kcg_c1, _31_array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__31_array */

#ifdef kcg_use_array_int32_68
kcg_bool kcg_comp_array_int32_68(array_int32_68 *kcg_c1, array_int32_68 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 68; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_68 */

#ifdef kcg_use__3_RadioTrackTrainMessageQueueEntries_T
kcg_bool kcg_comp__3_RadioTrackTrainMessageQueueEntries_T(
  _3_RadioTrackTrainMessageQueueEntries_T *kcg_c1,
  _3_RadioTrackTrainMessageQueueEntries_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use__3_RadioTrackTrainMessageQueueEntries_T */

#ifdef kcg_use_array_int32_24
kcg_bool kcg_comp_array_int32_24(array_int32_24 *kcg_c1, array_int32_24 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_24 */

#ifdef kcg_use_array_int32_21
kcg_bool kcg_comp_array_int32_21(array_int32_21 *kcg_c1, array_int32_21 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 21; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_21 */

#ifdef kcg_use_array_int32_100
kcg_bool kcg_comp_array_int32_100(
  array_int32_100 *kcg_c1,
  array_int32_100 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_100 */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainRunningNumber == kcg_c2->TrainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TrackSectionData_T_InfraLib
kcg_bool kcg_comp_TrackSectionData_T_InfraLib(
  TrackSectionData_T_InfraLib *kcg_c1,
  TrackSectionData_T_InfraLib *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedBaliseMessage_TM(
      &kcg_c1->BG_Message,
      &kcg_c2->BG_Message);
  kcg_equ = kcg_equ & kcg_comp_TrainPosRaw_T_InfraLib(
      &kcg_c1->TrainPosRaw,
      &kcg_c2->TrainPosRaw);
  return kcg_equ;
}
#endif /* kcg_use_TrackSectionData_T_InfraLib */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntry_T
kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntry_T(
  RadioTrackTrainMessageQueueEntry_T *kcg_c1,
  RadioTrackTrainMessageQueueEntry_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedRadioMessage_TM(
      &kcg_c1->m_Entry,
      &kcg_c2->m_Entry);
  kcg_equ = kcg_equ & (kcg_c1->m_IsValid == kcg_c2->m_IsValid);
  return kcg_equ;
}
#endif /* kcg_use_RadioTrackTrainMessageQueueEntry_T */

#ifdef kcg_use_CompressedBaliseMessage_TM
kcg_bool kcg_comp_CompressedBaliseMessage_TM(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_BaliseTelegramHeader_int_T_TM(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_CompressedBaliseMessage_TM */

#ifdef kcg_use_CompressedRadioMessage_TM
kcg_bool kcg_comp_CompressedRadioMessage_TM(
  CompressedRadioMessage_TM *kcg_c1,
  CompressedRadioMessage_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_TM(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_CompressedRadioMessage_TM */

#ifdef kcg_use__2_RadioTrackTrainMessageQueue_T
kcg_bool kcg_comp__2_RadioTrackTrainMessageQueue_T(
  _2_RadioTrackTrainMessageQueue_T *kcg_c1,
  _2_RadioTrackTrainMessageQueue_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp__3_RadioTrackTrainMessageQueueEntries_T(
      &kcg_c1->m_Entries,
      &kcg_c2->m_Entries);
  return kcg_equ;
}
#endif /* kcg_use__2_RadioTrackTrainMessageQueue_T */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->aNID_RADIO,
      &kcg_c2->aNID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_149189
kcg_bool kcg_comp_struct_149189(struct_149189 *kcg_c1, struct_149189 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_149189 */

#ifdef kcg_use_struct_149262
kcg_bool kcg_comp_struct_149262(struct_149262 *kcg_c1, struct_149262 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_149262 */

#ifdef kcg_use_R_data_internal_T_InfraLib
kcg_bool kcg_comp_R_data_internal_T_InfraLib(
  R_data_internal_T_InfraLib *kcg_c1,
  R_data_internal_T_InfraLib *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->message_sent == kcg_c2->message_sent);
  kcg_equ = kcg_equ & (kcg_c1->trigger == kcg_c2->trigger);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
      &kcg_c1->message,
      &kcg_c2->message);
  return kcg_equ;
}
#endif /* kcg_use_R_data_internal_T_InfraLib */

#ifdef kcg_use_P004_TM_TrainToTrack
kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_error == kcg_c2->m_error);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_P255_trackside_int_T_TM
kcg_bool kcg_comp_P255_trackside_int_T_TM(
  P255_trackside_int_T_TM *kcg_c1,
  P255_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P255_trackside_int_T_TM */

#ifdef kcg_use_P046_section_int_T_TM
kcg_bool kcg_comp_P046_section_int_T_TM(
  P046_section_int_T_TM *kcg_c1,
  P046_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_P046_section_int_T_TM */

#ifdef kcg_use_P003_TM_TrainToTrack
kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack(
      &kcg_c1->nid_radio,
      &kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_P027V1_section_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_int_T_TM_baseline2(
  P027V1_section_int_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_int_T_TM_baseline2 */

#ifdef kcg_use_struct_149475
kcg_bool kcg_comp_struct_149475(struct_149475 *kcg_c1, struct_149475 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_5(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_149475 */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->connectionLost == kcg_c2->connectionLost);
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_Metadata_T_Common_Types_Pkg(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}
#endif /* kcg_use_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_P137_trackside_int_T_TM
kcg_bool kcg_comp_P137_trackside_int_T_TM(
  P137_trackside_int_T_TM *kcg_c1,
  P137_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SRSTOP == kcg_c2->Q_SRSTOP);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P137_trackside_int_T_TM */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ctraction == kcg_c2->NID_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->voltage_type == kcg_c2->voltage_type);
  return kcg_equ;
}
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_TrainPosRaw_T_InfraLib
kcg_bool kcg_comp_TrainPosRaw_T_InfraLib(
  TrainPosRaw_T_InfraLib *kcg_c1,
  TrainPosRaw_T_InfraLib *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainPosCalibrated == kcg_c2->TrainPosCalibrated);
  kcg_equ = kcg_equ & (kcg_c1->OffsetTotal == kcg_c2->OffsetTotal);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos_in == kcg_c2->TrainPos_in);
  return kcg_equ;
}
#endif /* kcg_use_TrainPosRaw_T_InfraLib */

#ifdef kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg
kcg_bool kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c1,
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->diagText == kcg_c2->diagText);
  kcg_equ = kcg_equ & (kcg_c1->diagSrc == kcg_c2->diagSrc);
  kcg_equ = kcg_equ & (kcg_c1->diagType == kcg_c2->diagType);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->count == kcg_c2->count);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & kcg_comp_L_test_trackcond_T_TIU_Types_Pkg(
      &kcg_c1->l_test_trackcond,
      &kcg_c2->l_test_trackcond);
  kcg_equ = kcg_equ & kcg_comp_D_test_trackcond_T_TIU_Types_Pkg(
      &kcg_c1->d_test_trackcond,
      &kcg_c2->d_test_trackcond);
  return kcg_equ;
}
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
      &kcg_c1->packet1,
      &kcg_c2->packet1);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Position_Report_TrainToTrack(
      &kcg_c1->packet0,
      &kcg_c2->packet0);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_SessionManagement_T
kcg_bool kcg_comp_SessionManagement_T(
  SessionManagement_T *kcg_c1,
  SessionManagement_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PosData_T(&kcg_c1->m_PosData, &kcg_c2->m_PosData);
  kcg_equ = kcg_equ & kcg_comp_TrainData_T(
      &kcg_c1->m_TrainData,
      &kcg_c2->m_TrainData);
  return kcg_equ;
}
#endif /* kcg_use_SessionManagement_T */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  return kcg_equ;
}
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_RBC_Data_T_RBC_DataBus_Pkg
kcg_bool kcg_comp_RBC_Data_T_RBC_DataBus_Pkg(
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c1,
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedRadioMessage_TM(
      &kcg_c1->lastSentTrackTrainMessage,
      &kcg_c2->lastSentTrackTrainMessage);
  kcg_equ = kcg_equ & kcg_comp_Clock_T(&kcg_c1->clockk, &kcg_c2->clockk);
  kcg_equ = kcg_equ & kcg_comp__2_RadioTrackTrainMessageQueue_T(
      &kcg_c1->messageQueue,
      &kcg_c2->messageQueue);
  kcg_equ = kcg_equ & kcg_comp__25_array(
      &kcg_c1->diagnostic,
      &kcg_c2->diagnostic);
  kcg_equ = kcg_equ & kcg_comp_DynamicConfig_T(&kcg_c1->config, &kcg_c2->config);
  kcg_equ = kcg_equ & kcg_comp_SessionManagement_T(
      &kcg_c1->session,
      &kcg_c2->session);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Data_T_RBC_DataBus_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &kcg_c1->type_I_train_and_brake_inhibition,
      &kcg_c2->type_I_train_and_brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_trainData_T_TIU_Types_Pkg(
      &kcg_c1->train_data_info,
      &kcg_c2->train_data_info);
  kcg_equ = kcg_equ & (kcg_c1->train_data_entry_type ==
      kcg_c2->train_data_entry_type);
  kcg_equ = kcg_equ & kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
      &kcg_c1->brake_pressure,
      &kcg_c2->brake_pressure);
  kcg_equ = kcg_equ & kcg_comp_Brake_status_T_TIU_Types_Pkg(
      &kcg_c1->brake_status,
      &kcg_c2->brake_status);
  kcg_equ = kcg_equ & kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
      &kcg_c1->train_status,
      &kcg_c2->train_status);
  return kcg_equ;
}
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
      &kcg_c1->rtm_msg,
      &kcg_c2->rtm_msg);
  kcg_equ = kcg_equ & kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
      &kcg_c1->btm_msg,
      &kcg_c2->btm_msg);
  kcg_equ = kcg_equ & (kcg_c1->msg_type == kcg_c2->msg_type);
  kcg_equ = kcg_equ & (kcg_c1->systemTimeMsgReceived ==
      kcg_c2->systemTimeMsgReceived);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_struct_149762
kcg_bool kcg_comp_struct_149762(struct_149762 *kcg_c1, struct_149762 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Or_Line == kcg_c2->Or_Line);
  kcg_equ = kcg_equ & (kcg_c1->Or_BG == kcg_c2->Or_BG);
  kcg_equ = kcg_equ & (kcg_c1->Pos == kcg_c2->Pos);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}
#endif /* kcg_use_struct_149762 */

#ifdef kcg_use_P015_section_int_T_TM
kcg_bool kcg_comp_P015_section_int_T_TM(
  P015_section_int_T_TM *kcg_c1,
  P015_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_SECTION == kcg_c2->L_SECTION);
  return kcg_equ;
}
#endif /* kcg_use_P015_section_int_T_TM */

#ifdef kcg_use_P009_TM_TrainToTrack
kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ltrbg == kcg_c2->nid_ltrbg);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolation_status == kcg_c2->isolation_status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_odometryFactors_T_Toolbox
kcg_bool kcg_comp_odometryFactors_T_Toolbox(
  odometryFactors_T_Toolbox *kcg_c1,
  odometryFactors_T_Toolbox *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_odometryFactors_T_Toolbox */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->pressure == kcg_c2->pressure);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_149909
kcg_bool kcg_comp_struct_149909(struct_149909 *kcg_c1, struct_149909 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->now == kcg_c2->now);
  return kcg_equ;
}
#endif /* kcg_use_struct_149909 */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->door_control_info == kcg_c2->door_control_info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_outPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &kcg_c1->header,
      &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_Message_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &kcg_c1->OptionalPackets,
      &kcg_c2->OptionalPackets);
  kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
      &kcg_c1->Message,
      &kcg_c2->Message);
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_Message_T_TM_radio_messages */

#ifdef kcg_use_Clock_T
kcg_bool kcg_comp_Clock_T(Clock_T *kcg_c1, Clock_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_Value == kcg_c2->m_Value);
  return kcg_equ;
}
#endif /* kcg_use_Clock_T */

#ifdef kcg_use_Brake_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_emergencybrake_cm ==
      kcg_c2->m_emergencybrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_servicebrake_cm == kcg_c2->m_servicebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_P027V1_section_int_qdiff_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_cutoff_cm ==
      kcg_c2->m_traction_cutoff_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_mainpowerswitch_cm ==
      kcg_c2->m_mainpowerswitch_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_airtightness_cm == kcg_c2->m_airtightness_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_pantograph_cm == kcg_c2->m_pantograph_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_P005_TM_TrainToTrack
kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_opeartional == kcg_c2->nid_opeartional);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_P045_trackside_int_T_TM
kcg_bool kcg_comp_P045_trackside_int_T_TM(
  P045_trackside_int_T_TM *kcg_c1,
  P045_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_MN == kcg_c2->NID_MN);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P045_trackside_int_T_TM */

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_max == kcg_c2->d_max);
  kcg_equ = kcg_equ & (kcg_c1->d_min == kcg_c2->d_min);
  kcg_equ = kcg_equ & (kcg_c1->nominal == kcg_c2->nominal);
  return kcg_equ;
}
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_cm ==
      kcg_c2->m_magneticshoebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_cm ==
      kcg_c2->m_eddycurrentbrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_cm ==
      kcg_c2->m_regenerativebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->networkID == kcg_c2->networkID);
  kcg_equ = kcg_equ & (kcg_c1->cmd == kcg_c2->cmd);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_struct_150212
kcg_bool kcg_comp_struct_150212(struct_150212 *kcg_c1, struct_150212 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ctraction == kcg_c2->nid_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->m_voltage == kcg_c2->m_voltage);
  return kcg_equ;
}
#endif /* kcg_use_struct_150212 */

#ifdef kcg_use_P021_section_int_T_TM
kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  return kcg_equ;
}
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_P058_section_int_T_TM
kcg_bool kcg_comp_P058_section_int_T_TM(
  P058_section_int_T_TM *kcg_c1,
  P058_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LGTLOC == kcg_c2->Q_LGTLOC);
  kcg_equ = kcg_equ & (kcg_c1->D_LOC == kcg_c2->D_LOC);
  return kcg_equ;
}
#endif /* kcg_use_P058_section_int_T_TM */

#ifdef kcg_use_B_data_internal_T_InfraLib
kcg_bool kcg_comp_B_data_internal_T_InfraLib(
  B_data_internal_T_InfraLib *kcg_c1,
  B_data_internal_T_InfraLib *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->balise_passed == kcg_c2->balise_passed);
  kcg_equ = kcg_equ & (kcg_c1->pig_nom_0 == kcg_c2->pig_nom_0);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos == kcg_c2->TrainPos);
  kcg_equ = kcg_equ & (kcg_c1->engineering_BG_location ==
      kcg_c2->engineering_BG_location);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_BaliseTelegramHeader_int_T_TM(
      &kcg_c1->header,
      &kcg_c2->header);
  return kcg_equ;
}
#endif /* kcg_use_B_data_internal_T_InfraLib */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC_Id,
      &kcg_c2->sendingRBC_Id);
  kcg_equ = kcg_equ & kcg_comp_RadioMetadata_T_Common_Types_Pkg(
      &kcg_c1->Radio_MetaData,
      &kcg_c2->Radio_MetaData);
  kcg_equ = kcg_equ & kcg_comp__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & (kcg_c1->apiConsistencyError ==
      kcg_c2->apiConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &kcg_c1->api_header,
      &kcg_c2->api_header);
  kcg_equ = kcg_equ & (kcg_c1->api_bad_balise_received ==
      kcg_c2->api_bad_balise_received);
  kcg_equ = kcg_equ & (kcg_c1->checkResult == kcg_c2->checkResult);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_DynamicConfig_T
kcg_bool kcg_comp_DynamicConfig_T(
  DynamicConfig_T *kcg_c1,
  DynamicConfig_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PosRepParams_T(
      &kcg_c1->m_PosRepParams,
      &kcg_c2->m_PosRepParams);
  kcg_equ = kcg_equ & kcg_comp_MAReqParams_T(
      &kcg_c1->m_MAReqParams,
      &kcg_c2->m_MAReqParams);
  kcg_equ = kcg_equ & kcg_comp_NationalParams_T(
      &kcg_c1->m_NationalParams,
      &kcg_c2->m_NationalParams);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  return kcg_equ;
}
#endif /* kcg_use_DynamicConfig_T */

#ifdef kcg_use_P065_trackside_int_T_TM
kcg_bool kcg_comp_P065_trackside_int_T_TM(
  P065_trackside_int_T_TM *kcg_c1,
  P065_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_TSR == kcg_c2->V_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->L_TSR == kcg_c2->L_TSR);
  kcg_equ = kcg_equ & (kcg_c1->D_TSR == kcg_c2->D_TSR);
  kcg_equ = kcg_equ & (kcg_c1->NID_TSR == kcg_c2->NID_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P065_trackside_int_T_TM */

#ifdef kcg_use_M_034_T_TM_radio_messages
kcg_bool kcg_comp_M_034_T_TM_radio_messages(
  M_034_T_TM_radio_messages *kcg_c1,
  M_034_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_tafdisplay == kcg_c2->l_tafdisplay);
  kcg_equ = kcg_equ & (kcg_c1->d_tafdisplay == kcg_c2->d_tafdisplay);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_034_T_TM_radio_messages */

#ifdef kcg_use_M_015_T_TM_radio_messages
kcg_bool kcg_comp_M_015_T_TM_radio_messages(
  M_015_T_TM_radio_messages *kcg_c1,
  M_015_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_015_T_TM_radio_messages */

#ifdef kcg_use_P041_trackside_int_T_TM
kcg_bool kcg_comp_P041_trackside_int_T_TM(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P041_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->D_LEVELTR == kcg_c2->D_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_M_015_int_T_TM_radio_messages
kcg_bool kcg_comp_M_015_int_T_TM_radio_messages(
  M_015_int_T_TM_radio_messages *kcg_c1,
  M_015_int_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_015_int_T_TM_radio_messages */

#ifdef kcg_use_M_TrackTrain_Radio_T_TM_radio_messages
kcg_bool kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c1,
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->field8 == kcg_c2->field8);
  kcg_equ = kcg_equ & (kcg_c1->field7 == kcg_c2->field7);
  kcg_equ = kcg_equ & (kcg_c1->field6 == kcg_c2->field6);
  kcg_equ = kcg_equ & (kcg_c1->field5 == kcg_c2->field5);
  kcg_equ = kcg_equ & (kcg_c1->field4 == kcg_c2->field4);
  kcg_equ = kcg_equ & (kcg_c1->field3 == kcg_c2->field3);
  kcg_equ = kcg_equ & (kcg_c1->field2 == kcg_c2->field2);
  kcg_equ = kcg_equ & (kcg_c1->field1 == kcg_c2->field1);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_TrackTrain_Radio_T_TM_radio_messages */

#ifdef kcg_use_P011_TM_TrainToTrack
kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P011_ntc_list_TM_TrainToTrack(
      &kcg_c1->nid_ntc_list,
      &kcg_c2->nid_ntc_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_nid_ntc == kcg_c2->n_iter_nid_ntc);
  kcg_equ = kcg_equ & kcg_comp_P011_voltage_list_TM_TrainToTrack(
      &kcg_c1->voltage_list,
      &kcg_c2->voltage_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_voltage == kcg_c2->n_iter_voltage);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggauge == kcg_c2->m_loadinggauge);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_P000_TM_TrainToTrack
kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P001_TM_TrainToTrack
kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_prvlrbg == kcg_c2->nid_prvlrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P015_trackside_int_T_TM
kcg_bool kcg_comp_P015_trackside_int_T_TM(
  P015_trackside_int_T_TM *kcg_c1,
  P015_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEOL == kcg_c2->V_RELEASEOL);
  kcg_equ = kcg_equ & (kcg_c1->D_OL == kcg_c2->D_OL);
  kcg_equ = kcg_equ & (kcg_c1->T_OL == kcg_c2->T_OL);
  kcg_equ = kcg_equ & (kcg_c1->D_STARTOL == kcg_c2->D_STARTOL);
  kcg_equ = kcg_equ & (kcg_c1->Q_OVERLAP == kcg_c2->Q_OVERLAP);
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEDP == kcg_c2->V_RELEASEDP);
  kcg_equ = kcg_equ & (kcg_c1->D_DP == kcg_c2->D_DP);
  kcg_equ = kcg_equ & (kcg_c1->Q_DANGERPOINT == kcg_c2->Q_DANGERPOINT);
  kcg_equ = kcg_equ & (kcg_c1->D_ENDTIMERSTARTLOC == kcg_c2->D_ENDTIMERSTARTLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_ENDTIMER == kcg_c2->T_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_ENDTIMER == kcg_c2->Q_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_ENDSECTION == kcg_c2->L_ENDSECTION);
  kcg_equ = kcg_equ & kcg_comp_P015_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->T_LOA == kcg_c2->T_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_LOA == kcg_c2->V_LOA);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P015_trackside_int_T_TM */

#ifdef kcg_use_P021_trackside_int_T_TM
kcg_bool kcg_comp_P021_trackside_int_T_TM(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P021_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_trackside_int_T_TM_baseline2(
  P027V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_int_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
      &kcg_c1->SECTIONS_SSP,
      &kcg_c2->SECTIONS_SSP);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_k == kcg_c2->N_ITER_k);
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_n == kcg_c2->N_ITER_n);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P058_trackside_int_T_TM
kcg_bool kcg_comp_P058_trackside_int_T_TM(
  P058_trackside_int_T_TM *kcg_c1,
  P058_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P058_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->M_LOC == kcg_c2->M_LOC);
  kcg_equ = kcg_equ & (kcg_c1->D_CYCLOC == kcg_c2->D_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_CYCLOC == kcg_c2->T_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P058_trackside_int_T_TM */

#ifdef kcg_use_P005_trackside_int_T_TM
kcg_bool kcg_comp_P005_trackside_int_T_TM(
  P005_trackside_int_T_TM *kcg_c1,
  P005_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P005_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_trackside_int_T_TM */

#ifdef kcg_use_P003V1_trackside_int_T_TM_baseline2
kcg_bool kcg_comp_P003V1_trackside_int_T_TM_baseline2(
  P003V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P003V1_trackside_int_T_TM_baseline2 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_NVDRIVER_ADHES == kcg_c2->Q_NVDRIVER_ADHES);
  kcg_equ = kcg_equ & (kcg_c1->D_NVSTFF == kcg_c2->D_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->M_NVDERUN == kcg_c2->M_NVDERUN);
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT == kcg_c2->T_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->M_NVCONTACT == kcg_c2->M_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->D_NVPOTRP == kcg_c2->D_NVPOTRP);
  kcg_equ = kcg_equ & (kcg_c1->T_NVOVTRP == kcg_c2->T_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->D_NVOVTRP == kcg_c2->D_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSUPOVTRP == kcg_c2->V_NVSUPOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVALLOWOVTRP == kcg_c2->V_NVALLOWOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVEMRRLS == kcg_c2->Q_NVEMRRLS);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVSRBKTRG == kcg_c2->Q_NVSRBKTRG);
  kcg_equ = kcg_equ & (kcg_c1->D_NVROLL == kcg_c2->D_NVROLL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVREL == kcg_c2->V_NVREL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVUNFIT == kcg_c2->V_NVUNFIT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVONSIGHT == kcg_c2->V_NVONSIGHT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSTFF == kcg_c2->V_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSHUNT == kcg_c2->V_NVSHUNT);
  kcg_equ = kcg_equ & kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->D_VALIDNV == kcg_c2->D_VALIDNV);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->nid_ntc,
      &kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->nIter_ntc == kcg_c2->nIter_ntc);
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->tractionIdentity,
      &kcg_c2->tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->nIter_tractionIdentity ==
      kcg_c2->nIter_tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggoage == kcg_c2->m_loadinggoage);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_PRVLRBG == kcg_c2->NID_PRVLRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainToTrack
kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_BaliseTelegramHeader_int_T_TM
kcg_bool kcg_comp_BaliseTelegramHeader_int_T_TM(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}
#endif /* kcg_use_BaliseTelegramHeader_int_T_TM */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->tractionSystem,
      &kcg_c2->tractionSystem);
  kcg_equ = kcg_equ & (kcg_c1->numberTractionSystems ==
      kcg_c2->numberTractionSystems);
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->nationSystems,
      &kcg_c2->nationSystems);
  kcg_equ = kcg_equ & (kcg_c1->numberNationalSystems ==
      kcg_c2->numberNationalSystems);
  kcg_equ = kcg_equ & (kcg_c1->axleNumber == kcg_c2->axleNumber);
  kcg_equ = kcg_equ & (kcg_c1->airtightSystem == kcg_c2->airtightSystem);
  kcg_equ = kcg_equ & (kcg_c1->axleLoadCategory == kcg_c2->axleLoadCategory);
  kcg_equ = kcg_equ & (kcg_c1->loadingGauge == kcg_c2->loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->maxTrainSpeed == kcg_c2->maxTrainSpeed);
  kcg_equ = kcg_equ & (kcg_c1->brakePerctage == kcg_c2->brakePerctage);
  kcg_equ = kcg_equ & (kcg_c1->trainLength == kcg_c2->trainLength);
  kcg_equ = kcg_equ & (kcg_c1->cantDeficientcy == kcg_c2->cantDeficientcy);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->acknowledgedByDriver ==
      kcg_c2->acknowledgedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_151014
kcg_bool kcg_comp_struct_151014(struct_151014 *kcg_c1, struct_151014 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime == kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}
#endif /* kcg_use_struct_151014 */

#ifdef kcg_use_TelegramHeader_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}
#endif /* kcg_use_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_PosData_T
kcg_bool kcg_comp_PosData_T(PosData_T *kcg_c1, PosData_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_prvlrbg == kcg_c2->nid_prvlrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  return kcg_equ;
}
#endif /* kcg_use_PosData_T */

#ifdef kcg_use_TrainData_T
kcg_bool kcg_comp_TrainData_T(TrainData_T *kcg_c1, TrainData_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_operational == kcg_c2->nid_operational);
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_NationalSystemIdentities,
      &kcg_c2->m_NationalSystemIdentities);
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_TractionIdentities,
      &kcg_c2->m_TractionIdentities);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggauge == kcg_c2->m_loadinggauge);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->t_train_ref == kcg_c2->t_train_ref);
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_OnboardPhoneNumbers,
      &kcg_c2->m_OnboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->m_NumberOfOnboardPhoneNumbers ==
      kcg_c2->m_NumberOfOnboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  return kcg_equ;
}
#endif /* kcg_use_TrainData_T */

#ifdef kcg_use_Radio_TrackTrain_Header_T_TM
kcg_bool kcg_comp_Radio_TrackTrain_Header_T_TM(
  Radio_TrackTrain_Header_T_TM *kcg_c1,
  Radio_TrackTrain_Header_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime == kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrackTrain_Header_T_TM */

#ifdef kcg_use_MAReqParams_T
kcg_bool kcg_comp_MAReqParams_T(MAReqParams_T *kcg_c1, MAReqParams_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_cycrqst == kcg_c2->t_cycrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_timeoutrqst == kcg_c2->t_timeoutrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_mar == kcg_c2->t_mar);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  return kcg_equ;
}
#endif /* kcg_use_MAReqParams_T */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
      &kcg_c1->telephoneNumber,
      &kcg_c2->telephoneNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_P041_section_int_T_TM
kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_P041_section_int_T_TM */

#ifdef kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
kcg_bool kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c1,
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_M_current_T_TIU_Types_Pkg(
      &kcg_c1->m_current,
      &kcg_c2->m_current);
  kcg_equ = kcg_equ & kcg_comp_D_test_current_T_TIU_Types_Pkg(
      &kcg_c1->d_test_current,
      &kcg_c2->d_test_current);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_M_voltage_T_TIU_Types_Pkg(
      &kcg_c1->m_voltage,
      &kcg_c2->m_voltage);
  kcg_equ = kcg_equ & kcg_comp_D_test_traction_T_TIU_Types_Pkg(
      &kcg_c1->d_test_traction,
      &kcg_c2->d_test_traction);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Change_traction_system_T_TIU_Types_Pkg */

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_D_test_trackinit_T_TIU_Types_Pkg(
      &kcg_c1->empty_profile_initial_state_to_be_resumed,
      &kcg_c2->empty_profile_initial_state_to_be_resumed);
  kcg_equ = kcg_equ & kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
      &kcg_c1->nothing_to_resume_profile_follow,
      &kcg_c2->nothing_to_resume_profile_follow);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_M_033_T_TM_radio_messages
kcg_bool kcg_comp_M_033_T_TM_radio_messages(
  M_033_T_TM_radio_messages *kcg_c1,
  M_033_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_033_T_TM_radio_messages */

#ifdef kcg_use_M_002_T_TM_radio_messages
kcg_bool kcg_comp_M_002_T_TM_radio_messages(
  M_002_T_TM_radio_messages *kcg_c1,
  M_002_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_002_T_TM_radio_messages */

#ifdef kcg_use_M_008_T_TM_radio_messages
kcg_bool kcg_comp_M_008_T_TM_radio_messages(
  M_008_T_TM_radio_messages *kcg_c1,
  M_008_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_008_T_TM_radio_messages */

#ifdef kcg_use_struct_151363
kcg_bool kcg_comp_struct_151363(struct_151363 *kcg_c1, struct_151363 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_151363 */

#ifdef kcg_use_struct_151390
kcg_bool kcg_comp_struct_151390(struct_151390 *kcg_c1, struct_151390 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_SH_request == kcg_c2->t_train_SH_request);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_151390 */

#ifdef kcg_use_M_008_int_T_TM_radio_messages
kcg_bool kcg_comp_M_008_int_T_TM_radio_messages(
  M_008_int_T_TM_radio_messages *kcg_c1,
  M_008_int_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_008_int_T_TM_radio_messages */

#ifdef kcg_use_M_032_int_T_TM_radio_messages
kcg_bool kcg_comp_M_032_int_T_TM_radio_messages(
  M_032_int_T_TM_radio_messages *kcg_c1,
  M_032_int_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_032_int_T_TM_radio_messages */

#ifdef kcg_use_P046_trackside_int_T_TM
kcg_bool kcg_comp_P046_trackside_int_T_TM(
  P046_trackside_int_T_TM *kcg_c1,
  P046_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P046_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P046_trackside_int_T_TM */

#ifdef kcg_use_P057_trackside_int_T_TM
kcg_bool kcg_comp_P057_trackside_int_T_TM(
  P057_trackside_int_T_TM *kcg_c1,
  P057_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_CYCRQST == kcg_c2->T_CYCRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_TIMEOUTRQST == kcg_c2->T_TIMEOUTRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_MAR == kcg_c2->T_MAR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P057_trackside_int_T_TM */

#ifdef kcg_use_P042_trackside_int_T_TM
kcg_bool kcg_comp_P042_trackside_int_T_TM(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RBC == kcg_c2->Q_RBC);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_P005_section_int_T_TM
kcg_bool kcg_comp_P005_section_int_T_TM(
  P005_section_int_T_TM *kcg_c1,
  P005_section_int_T_TM *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  return kcg_equ;
}
#endif /* kcg_use_P005_section_int_T_TM */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->xNID_TEXTMESSAGE == kcg_c2->xNID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->xQ_EMERGENCYSTOP == kcg_c2->xQ_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->xNID_EM == kcg_c2->xNID_EM);
  kcg_equ = kcg_equ & (kcg_c1->xT_TRAIN == kcg_c2->xT_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->xQ_MARQSTREASON == kcg_c2->xQ_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_st == kcg_c2->m_traction_st);
  kcg_equ = kcg_equ & (kcg_c1->m_trainintegrity_st ==
      kcg_c2->m_trainintegrity_st);
  kcg_equ = kcg_equ & (kcg_c1->m_directioncontroller_st ==
      kcg_c2->m_directioncontroller_st);
  kcg_equ = kcg_equ & (kcg_c1->m_cab_st == kcg_c2->m_cab_st);
  kcg_equ = kcg_equ & (kcg_c1->m_nonleading_st == kcg_c2->m_nonleading_st);
  kcg_equ = kcg_equ & (kcg_c1->m_passiveshunting_st ==
      kcg_c2->m_passiveshunting_st);
  kcg_equ = kcg_equ & (kcg_c1->m_sleeping_st == kcg_c2->m_sleeping_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  return kcg_equ;
}
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->field3 == kcg_c2->field3);
  kcg_equ = kcg_equ & (kcg_c1->field2 == kcg_c2->field2);
  kcg_equ = kcg_equ & (kcg_c1->field1 == kcg_c2->field1);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifdef kcg_use_NationalParams_T
kcg_bool kcg_comp_NationalParams_T(
  NationalParams_T *kcg_c1,
  NationalParams_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  return kcg_equ;
}
#endif /* kcg_use_NationalParams_T */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->transitionInformation ==
      kcg_c2->transitionInformation);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_M_032_T_TM_radio_messages
kcg_bool kcg_comp_M_032_T_TM_radio_messages(
  M_032_T_TM_radio_messages *kcg_c1,
  M_032_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_032_T_TM_radio_messages */

#ifdef kcg_use_M_045_T_TM_radio_messages
kcg_bool kcg_comp_M_045_T_TM_radio_messages(
  M_045_T_TM_radio_messages *kcg_c1,
  M_045_T_TM_radio_messages *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_orientation == kcg_c2->q_orientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_045_T_TM_radio_messages */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
      &kcg_c1->speed,
      &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odo,
      &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_additionalbrake_st ==
      kcg_c2->m_additionalbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_electropneumaticbrake_st ==
      kcg_c2->m_electropneumaticbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_st ==
      kcg_c2->m_magneticshoebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_st ==
      kcg_c2->m_eddycurrentbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_st ==
      kcg_c2->m_regenerativebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p11,
      &kcg_c2->p11);
  kcg_equ = kcg_equ &
    kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p9,
      &kcg_c2->p9);
  kcg_equ = kcg_equ & kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &kcg_c1->p5,
      &kcg_c2->p5);
  kcg_equ = kcg_equ & kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p4,
      &kcg_c2->p4);
  kcg_equ = kcg_equ &
    kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p3,
      &kcg_c2->p3);
  kcg_equ = kcg_equ & kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p1,
      &kcg_c2->p1);
  kcg_equ = kcg_equ & kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p0,
      &kcg_c2->p0);
  return kcg_equ;
}
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
      &kcg_c1->change_of_allowed_current_consumption,
      &kcg_c2->change_of_allowed_current_consumption);
  kcg_equ = kcg_equ & kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
      &kcg_c1->passenger_door_control_info,
      &kcg_c2->passenger_door_control_info);
  kcg_equ = kcg_equ & kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
      &kcg_c1->change_traction_system,
      &kcg_c2->change_traction_system);
  kcg_equ = kcg_equ & kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
      &kcg_c1->type_I_train_commands,
      &kcg_c2->type_I_train_commands);
  kcg_equ = kcg_equ & kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
      &kcg_c1->brake_inhibition,
      &kcg_c2->brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_Brake_command_T_TIU_Types_Pkg(
      &kcg_c1->brake_command,
      &kcg_c2->brake_command);
  kcg_equ = kcg_equ & kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
      &kcg_c1->isolation_status,
      &kcg_c2->isolation_status);
  return kcg_equ;
}
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_PosRepParams_T
kcg_bool kcg_comp_PosRepParams_T(PosRepParams_T *kcg_c1, PosRepParams_T *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp__22_array(
      &kcg_c1->m_IncrementalDistancesAndQualifiers,
      &kcg_c2->m_IncrementalDistancesAndQualifiers);
  kcg_equ = kcg_equ & (kcg_c1->m_NumberOfIncrementalDistancesAndQualifiers ==
      kcg_c2->m_NumberOfIncrementalDistancesAndQualifiers);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  return kcg_equ;
}
#endif /* kcg_use_PosRepParams_T */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_error == kcg_c2->m_error);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->device_id == kcg_c2->device_id);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->restriction == kcg_c2->restriction);
  kcg_equ = kcg_equ & (kcg_c1->no_restriction == kcg_c2->no_restriction);
  return kcg_equ;
}
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odometerOfBaliseDetection,
      &kcg_c2->odometerOfBaliseDetection);
  return kcg_equ;
}
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.c
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

