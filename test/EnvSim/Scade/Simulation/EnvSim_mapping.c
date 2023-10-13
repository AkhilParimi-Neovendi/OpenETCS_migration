/* EnvSim_mapping.c */

#include "EnvSim_type.h"
#include "EnvSim_interface.h"
#include "EnvSim_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_500);
DECL_ITER(array_30);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_9, 10);
DECL_SCOPE(scope_8, 2);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 5);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 2);
DECL_SCOPE(scope_3, 15);
DECL_SCOPE(scope_2, 2);
DECL_SCOPE(scope_1, 8);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_500 = { "array", 500, 500, NULL };
const MappingIterator iter_array_30 = { "array", 30, 30, NULL };

const MappingEntry scope_9_entries[10] = {
    /* 0 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, q_updown), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, m_version), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, q_media), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, n_pig), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, n_total), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, m_dup), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, m_mcount), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, nid_c), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, nid_bg), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int64), offsetof(BaliseTelegramHeader_int_T_TM, q_link), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 9 }
};
const MappingScope scope_9 = {
    "BaliseTelegramHeader_int_T_TM",
    scope_9_entries, 10
};

const MappingEntry scope_8_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(CompressedBaliseMessage_TM, Header), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_9, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(CompressedBaliseMessage_TM, Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_4, 1, 1 }
};
const MappingScope scope_8 = {
    "CompressedBaliseMessage_TM",
    scope_8_entries, 2
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int64), 0, &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "CompressedPacketData_T_Common_Types_Pkg",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[5] = {
    /* 0 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(NID_PACKET), offsetof(MetadataElement_T_Common_Types_Pkg, nid_packet), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(MetadataElement_T_Common_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(MetadataElement_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int64), offsetof(MetadataElement_T_Common_Types_Pkg, startAddress), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int64), offsetof(MetadataElement_T_Common_Types_Pkg, endAddress), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_6 = {
    "MetadataElement_T_Common_Types_Pkg",
    scope_6_entries, 5
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(MetadataElement_T_Common_Types_Pkg), 0, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_6, 1, 0 }
};
const MappingScope scope_5 = {
    "Metadata_T_Common_Types_Pkg",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[2] = {
    /* 0 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_FIELD, ".PacketData", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_4 = {
    "CompressedPackets_T_Common_Types_Pkg",
    scope_4_entries, 2
};

const MappingEntry scope_3_entries[15] = {
    /* 0 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, radioDevice), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, receivedSystemTime), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, nid_message), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, t_train), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, m_ack), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, nid_lrbg), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, t_train_reference), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, nid_em), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, q_scale), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, d_sr), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, t_sh_rqst), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, d_ref), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, q_dir), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, d_emergencystop), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int64), offsetof(Radio_TrackTrain_Header_T_TM, m_version), &_Type_kcg_int64_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_3 = {
    "Radio_TrackTrain_Header_T_TM",
    scope_3_entries, 15
};

const MappingEntry scope_2_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(Radio_TrackTrain_Header_T_TM), offsetof(CompressedRadioMessage_TM, Header), &_Type_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(CompressedRadioMessage_TM, Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_4, 1, 1 }
};
const MappingScope scope_2 = {
    "CompressedRadioMessage_TM",
    scope_2_entries, 2
};

const MappingEntry scope_1_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "radioMessage", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx.radioMessage, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "baliseMessage", NULL, sizeof(CompressedBaliseMessage_TM), (size_t)&outputs_ctx.baliseMessage, &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_8, 1, 1 },
    /* 2 */ { MAP_INPUT, "actualTrainPos", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.actualTrainPos, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "radioTrainPos", NULL, sizeof(kcg_float64), (size_t)&inputs_ctx.radioTrainPos, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), (size_t)&outputs_ctx._L2, &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_8, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L1, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L3, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L4, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_1 = {
    "EnvSim::Internal::ScriptedTrackTest/ ScriptedTrackTest_EnvSim_Internal",
    scope_1_entries, 8
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "EnvSim::Internal::ScriptedTrackTest", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
