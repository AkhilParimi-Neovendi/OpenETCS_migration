/* MoRC_mapping.c */

#include "MoRC_type.h"
#include "MoRC_interface.h"
#include "MoRC_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(mapwi_500);
DECL_ITER(foldwi_30);
DECL_ITER(array_500);
DECL_ITER(array_30);
DECL_ITER(array_5);
DECL_ITER(array_4);
DECL_ITER(array_15);
DECL_ITER(array_1);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_264, 8);
DECL_SCOPE(scope_263, 8);
DECL_SCOPE(scope_262, 10);
DECL_SCOPE(scope_261, 12);
DECL_SCOPE(scope_260, 8);
DECL_SCOPE(scope_259, 1);
DECL_SCOPE(scope_258, 3);
DECL_SCOPE(scope_257, 3);
DECL_SCOPE(scope_256, 3);
DECL_SCOPE(scope_255, 3);
DECL_SCOPE(scope_254, 2);
DECL_SCOPE(scope_253, 2);
DECL_SCOPE(scope_252, 2);
DECL_SCOPE(scope_251, 3);
DECL_SCOPE(scope_250, 3);
DECL_SCOPE(scope_249, 6);
DECL_SCOPE(scope_248, 3);
DECL_SCOPE(scope_247, 8);
DECL_SCOPE(scope_246, 6);
DECL_SCOPE(scope_245, 6);
DECL_SCOPE(scope_244, 6);
DECL_SCOPE(scope_243, 2);
DECL_SCOPE(scope_242, 2);
DECL_SCOPE(scope_241, 2);
DECL_SCOPE(scope_240, 2);
DECL_SCOPE(scope_239, 3);
DECL_SCOPE(scope_238, 3);
DECL_SCOPE(scope_237, 3);
DECL_SCOPE(scope_236, 6);
DECL_SCOPE(scope_235, 2);
DECL_SCOPE(scope_234, 2);
DECL_SCOPE(scope_233, 2);
DECL_SCOPE(scope_232, 3);
DECL_SCOPE(scope_231, 3);
DECL_SCOPE(scope_230, 6);
DECL_SCOPE(scope_229, 27);
DECL_SCOPE(scope_228, 9);
DECL_SCOPE(scope_227, 7);
DECL_SCOPE(scope_226, 18);
DECL_SCOPE(scope_225, 16);
DECL_SCOPE(scope_224, 15);
DECL_SCOPE(scope_223, 19);
DECL_SCOPE(scope_222, 1);
DECL_SCOPE(scope_221, 1);
DECL_SCOPE(scope_220, 3);
DECL_SCOPE(scope_219, 1);
DECL_SCOPE(scope_218, 1);
DECL_SCOPE(scope_217, 3);
DECL_SCOPE(scope_216, 1);
DECL_SCOPE(scope_215, 1);
DECL_SCOPE(scope_214, 3);
DECL_SCOPE(scope_213, 10);
DECL_SCOPE(scope_212, 81);
DECL_SCOPE(scope_211, 1);
DECL_SCOPE(scope_210, 1);
DECL_SCOPE(scope_209, 9);
DECL_SCOPE(scope_208, 1);
DECL_SCOPE(scope_207, 1);
DECL_SCOPE(scope_206, 2);
DECL_SCOPE(scope_205, 9);
DECL_SCOPE(scope_204, 57);
DECL_SCOPE(scope_203, 6);
DECL_SCOPE(scope_202, 1);
DECL_SCOPE(scope_201, 2);
DECL_SCOPE(scope_200, 22);
DECL_SCOPE(scope_199, 1);
DECL_SCOPE(scope_198, 1);
DECL_SCOPE(scope_197, 9);
DECL_SCOPE(scope_196, 1);
DECL_SCOPE(scope_195, 1);
DECL_SCOPE(scope_194, 10);
DECL_SCOPE(scope_193, 26);
DECL_SCOPE(scope_192, 1);
DECL_SCOPE(scope_191, 14);
DECL_SCOPE(scope_190, 6);
DECL_SCOPE(scope_189, 11);
DECL_SCOPE(scope_188, 1);
DECL_SCOPE(scope_187, 5);
DECL_SCOPE(scope_186, 9);
DECL_SCOPE(scope_185, 1);
DECL_SCOPE(scope_184, 2);
DECL_SCOPE(scope_183, 1);
DECL_SCOPE(scope_182, 2);
DECL_SCOPE(scope_181, 9);
DECL_SCOPE(scope_180, 34);
DECL_SCOPE(scope_179, 1);
DECL_SCOPE(scope_178, 10);
DECL_SCOPE(scope_177, 24);
DECL_SCOPE(scope_176, 9);
DECL_SCOPE(scope_175, 1);
DECL_SCOPE(scope_174, 2);
DECL_SCOPE(scope_173, 1);
DECL_SCOPE(scope_172, 1);
DECL_SCOPE(scope_171, 1);
DECL_SCOPE(scope_170, 4);
DECL_SCOPE(scope_169, 1);
DECL_SCOPE(scope_168, 1);
DECL_SCOPE(scope_167, 3);
DECL_SCOPE(scope_166, 1);
DECL_SCOPE(scope_165, 2);
DECL_SCOPE(scope_164, 11);
DECL_SCOPE(scope_163, 71);
DECL_SCOPE(scope_162, 1);
DECL_SCOPE(scope_161, 15);
DECL_SCOPE(scope_160, 1);
DECL_SCOPE(scope_159, 1);
DECL_SCOPE(scope_158, 7);
DECL_SCOPE(scope_157, 10);
DECL_SCOPE(scope_156, 26);
DECL_SCOPE(scope_155, 1);
DECL_SCOPE(scope_154, 1);
DECL_SCOPE(scope_153, 21);
DECL_SCOPE(scope_152, 1);
DECL_SCOPE(scope_151, 12);
DECL_SCOPE(scope_150, 11);
DECL_SCOPE(scope_149, 18);
DECL_SCOPE(scope_148, 1);
DECL_SCOPE(scope_147, 2);
DECL_SCOPE(scope_146, 1);
DECL_SCOPE(scope_145, 1);
DECL_SCOPE(scope_144, 1);
DECL_SCOPE(scope_143, 4);
DECL_SCOPE(scope_142, 1);
DECL_SCOPE(scope_141, 1);
DECL_SCOPE(scope_140, 3);
DECL_SCOPE(scope_139, 1);
DECL_SCOPE(scope_138, 1);
DECL_SCOPE(scope_137, 1);
DECL_SCOPE(scope_136, 4);
DECL_SCOPE(scope_135, 11);
DECL_SCOPE(scope_134, 6);
DECL_SCOPE(scope_133, 9);
DECL_SCOPE(scope_132, 9);
DECL_SCOPE(scope_131, 9);
DECL_SCOPE(scope_130, 9);
DECL_SCOPE(scope_129, 9);
DECL_SCOPE(scope_128, 6);
DECL_SCOPE(scope_127, 2);
DECL_SCOPE(scope_126, 2);
DECL_SCOPE(scope_125, 2);
DECL_SCOPE(scope_124, 2);
DECL_SCOPE(scope_123, 3);
DECL_SCOPE(scope_122, 3);
DECL_SCOPE(scope_121, 3);
DECL_SCOPE(scope_120, 6);
DECL_SCOPE(scope_119, 6);
DECL_SCOPE(scope_118, 15);
DECL_SCOPE(scope_117, 14);
DECL_SCOPE(scope_116, 1);
DECL_SCOPE(scope_115, 12);
DECL_SCOPE(scope_114, 7);
DECL_SCOPE(scope_113, 13);
DECL_SCOPE(scope_112, 19);
DECL_SCOPE(scope_111, 12);
DECL_SCOPE(scope_110, 1);
DECL_SCOPE(scope_109, 1);
DECL_SCOPE(scope_108, 27);
DECL_SCOPE(scope_107, 17);
DECL_SCOPE(scope_106, 9);
DECL_SCOPE(scope_105, 153);
DECL_SCOPE(scope_104, 1);
DECL_SCOPE(scope_103, 1);
DECL_SCOPE(scope_102, 1);
DECL_SCOPE(scope_101, 1);
DECL_SCOPE(scope_100, 1);
DECL_SCOPE(scope_99, 3);
DECL_SCOPE(scope_98, 3);
DECL_SCOPE(scope_97, 3);
DECL_SCOPE(scope_96, 3);
DECL_SCOPE(scope_95, 47);
DECL_SCOPE(scope_94, 9);
DECL_SCOPE(scope_93, 6);
DECL_SCOPE(scope_92, 10);
DECL_SCOPE(scope_91, 6);
DECL_SCOPE(scope_90, 6);
DECL_SCOPE(scope_89, 6);
DECL_SCOPE(scope_88, 3);
DECL_SCOPE(scope_87, 3);
DECL_SCOPE(scope_86, 3);
DECL_SCOPE(scope_85, 3);
DECL_SCOPE(scope_84, 1);
DECL_SCOPE(scope_83, 1);
DECL_SCOPE(scope_82, 3);
DECL_SCOPE(scope_81, 6);
DECL_SCOPE(scope_80, 1);
DECL_SCOPE(scope_79, 1);
DECL_SCOPE(scope_78, 1);
DECL_SCOPE(scope_77, 1);
DECL_SCOPE(scope_76, 11);
DECL_SCOPE(scope_75, 1);
DECL_SCOPE(scope_74, 1);
DECL_SCOPE(scope_73, 3);
DECL_SCOPE(scope_72, 10);
DECL_SCOPE(scope_71, 6);
DECL_SCOPE(scope_70, 6);
DECL_SCOPE(scope_69, 1);
DECL_SCOPE(scope_68, 1);
DECL_SCOPE(scope_67, 2);
DECL_SCOPE(scope_66, 1);
DECL_SCOPE(scope_65, 1);
DECL_SCOPE(scope_64, 2);
DECL_SCOPE(scope_63, 1);
DECL_SCOPE(scope_62, 1);
DECL_SCOPE(scope_61, 2);
DECL_SCOPE(scope_60, 10);
DECL_SCOPE(scope_59, 111);
DECL_SCOPE(scope_58, 17);
DECL_SCOPE(scope_57, 7);
DECL_SCOPE(scope_56, 8);
DECL_SCOPE(scope_55, 3);
DECL_SCOPE(scope_54, 5);
DECL_SCOPE(scope_53, 3);
DECL_SCOPE(scope_52, 3);
DECL_SCOPE(scope_51, 3);
DECL_SCOPE(scope_50, 13);
DECL_SCOPE(scope_49, 93);
DECL_SCOPE(scope_48, 10);
DECL_SCOPE(scope_47, 5);
DECL_SCOPE(scope_46, 4);
DECL_SCOPE(scope_45, 3);
DECL_SCOPE(scope_44, 9);
DECL_SCOPE(scope_43, 11);
DECL_SCOPE(scope_42, 21);
DECL_SCOPE(scope_41, 4);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 5);
DECL_SCOPE(scope_38, 1);
DECL_SCOPE(scope_37, 2);
DECL_SCOPE(scope_36, 15);
DECL_SCOPE(scope_35, 3);
DECL_SCOPE(scope_34, 4);
DECL_SCOPE(scope_33, 3);
DECL_SCOPE(scope_32, 7);
DECL_SCOPE(scope_31, 15);
DECL_SCOPE(scope_30, 9);
DECL_SCOPE(scope_29, 7);
DECL_SCOPE(scope_28, 3);
DECL_SCOPE(scope_27, 4);
DECL_SCOPE(scope_26, 4);
DECL_SCOPE(scope_25, 2);
DECL_SCOPE(scope_24, 5);
DECL_SCOPE(scope_23, 7);
DECL_SCOPE(scope_22, 5);
DECL_SCOPE(scope_21, 3);
DECL_SCOPE(scope_20, 4);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 2);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 13);
DECL_SCOPE(scope_15, 2);
DECL_SCOPE(scope_14, 2);
DECL_SCOPE(scope_13, 2);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 2);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 3);
DECL_SCOPE(scope_8, 17);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_6, 16);
DECL_SCOPE(scope_5, 2);
DECL_SCOPE(scope_4, 7);
DECL_SCOPE(scope_3, 9);
DECL_SCOPE(scope_2, 3);
DECL_SCOPE(scope_1, 162);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_Register_SM_SSM_st_Registered_Register_SM(void* pHandle) { return *(SSM_ST_Register_SM*)pHandle == SSM_st_Registered_Register_SM; }
static int isActive_SSM_ST_Register_SM_SSM_st_Registering_Register_SM(void* pHandle) { return *(SSM_ST_Register_SM*)pHandle == SSM_st_Registering_Register_SM; }
static int isActive_SSM_ST_Register_SM_SSM_st_Reregistering_Register_SM(void* pHandle) { return *(SSM_ST_Register_SM*)pHandle == SSM_st_Reregistering_Register_SM; }
static int isActive_SSM_ST_Register_SM_SSM_st_Unregistered_Register_SM(void* pHandle) { return *(SSM_ST_Register_SM*)pHandle == SSM_st_Unregistered_Register_SM; }
static int isActive_SSM_ST_SM1_SSM_st_terminated_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_terminated_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1; }
static int isActive_SSM_ST_SM1__14_SSM_st_idle_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == _14_SSM_st_idle_SM1; }
static int isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM(void* pHandle) { return *(SSM_ST_Session_SM*)pHandle == SSM_st_establishingSession_Session_SM; }
static int isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM(void* pHandle) { return *(SSM_ST_Session_SM*)pHandle == SSM_st_maintainingSession_Session_SM; }
static int isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM(void* pHandle) { return *(SSM_ST_Session_SM*)pHandle == SSM_st_sessionTerminated_Session_SM; }
static int isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM(void* pHandle) { return *(SSM_ST_Session_SM*)pHandle == SSM_st_terminatingSession_Session_SM; }
static int isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM(void* pHandle) { return *(SSM_ST_TimerStatus_SM*)pHandle == SSM_st_Counting_TimerStatus_SM; }
static int isActive_SSM_ST_TimerStatus_SM_SSM_st_Expired_TimerStatus_SM(void* pHandle) { return *(SSM_ST_TimerStatus_SM*)pHandle == SSM_st_Expired_TimerStatus_SM; }
static int isActive_SSM_ST_TimerStatus_SM_SSM_st_Stopped_TimerStatus_SM(void* pHandle) { return *(SSM_ST_TimerStatus_SM*)pHandle == SSM_st_Stopped_TimerStatus_SM; }
static int isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_Idle_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_ST_TrainExitedFromRBCArea_SM*)pHandle == SSM_st_Idle_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_ST_TrainExitedFromRBCArea_SM*)pHandle == SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM(void* pHandle) { return *(SSM_ST_connectionStatus_SM*)pHandle == SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM; }
static int isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionUp_connectionStatus_SM(void* pHandle) { return *(SSM_ST_connectionStatus_SM*)pHandle == SSM_st_ConnectionUp_connectionStatus_SM; }
static int isActive_SSM_ST_connectionStatus_SM_SSM_st_NoConnection_connectionStatus_SM(void* pHandle) { return *(SSM_ST_connectionStatus_SM*)pHandle == SSM_st_NoConnection_connectionStatus_SM; }
static int isActive_SSM_ST_repeat_SM_SSM_st_rep_inactive_repeat_SM(void* pHandle) { return *(SSM_ST_repeat_SM*)pHandle == SSM_st_rep_inactive_repeat_SM; }
static int isActive_SSM_ST_repeat_SM_SSM_st_rep_repeatUntilStopConditionMet_repeat_SM(void* pHandle) { return *(SSM_ST_repeat_SM*)pHandle == SSM_st_rep_repeatUntilStopConditionMet_repeat_SM; }
static int isActive_SSM_ST_repeat_SM_SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM(void* pHandle) { return *(SSM_ST_repeat_SM*)pHandle == SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Registered_Registering_2_Registered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Registered_Registering_2_Registered_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Registered_Reregistering_1_Registered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Registered_Reregistering_1_Registered_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Registered_Unregistered_3_Registered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Registered_Unregistered_3_Registered_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Registering_Registered_2_Registering_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Registering_Registered_2_Registering_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Registering_Reregistering_1_Registering_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Registering_Reregistering_1_Registering_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM; }
static int isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM(void* pHandle) { return *(SSM_TR_Register_SM*)pHandle == SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM; }
static int isActive_SSM_TR_SM1_SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_terminated_idle_1_terminated_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_terminated_idle_1_terminated_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1; }
static int isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM(void* pHandle) { return *(SSM_TR_Session_SM*)pHandle == SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM; }
static int isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM(void* pHandle) { return *(SSM_TR_Session_SM*)pHandle == SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM; }
static int isActive_SSM_TR_Session_SM_SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM(void* pHandle) { return *(SSM_TR_Session_SM*)pHandle == SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM; }
static int isActive_SSM_TR_Session_SM_SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM(void* pHandle) { return *(SSM_TR_Session_SM*)pHandle == SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM; }
static int isActive_SSM_TR_Session_SM_SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM(void* pHandle) { return *(SSM_TR_Session_SM*)pHandle == SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM; }
static int isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM(void* pHandle) { return *(SSM_TR_TimerStatus_SM*)pHandle == SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM; }
static int isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_TR_TrainExitedFromRBCArea_SM*)pHandle == SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_TR_TrainExitedFromRBCArea_SM*)pHandle == SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_TR_TrainExitedFromRBCArea_SM*)pHandle == SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM(void* pHandle) { return *(SSM_TR_TrainExitedFromRBCArea_SM*)pHandle == SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM; }
static int isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM(void* pHandle) { return *(SSM_TR_connectionStatus_SM*)pHandle == SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM; }
static int isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM(void* pHandle) { return *(SSM_TR_repeat_SM*)pHandle == SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM; }
static int isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_establishingByOBU_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_establishingByRBC_SM1; }
static int isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == _12_SSM_st_idle_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByOBU_1_idle_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_idle_establishingByOBU_1_idle_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByRBC_2_idle_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_idle_establishingByRBC_2_idle_SM1; }
static int isActive__4_SSM_ST_SM1__8_SSM_st_sessionEstablished_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == _8_SSM_st_sessionEstablished_SM1; }
static int isActive__4_SSM_ST_SM1__9_SSM_st_idle_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == _9_SSM_st_idle_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_idle_sessionEstablished_1_idle_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_idle_sessionEstablished_1_idle_SM1; }
static int isActive__5_SSM_TR_SM1__10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == _10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_idle_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_idle_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_sessionEstablished_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_sessionEstablished_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_waitForSafeRadioConnectionSetUp_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_waitForSafeRadioConnectionSetUp_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_waitForSystemVersion_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_waitForSystemVersion_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */

const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL };
const MappingIterator iter_foldwi_30 = { "foldwi", 30, 30, NULL };
const MappingIterator iter_array_500 = { "array", 500, 500, NULL };
const MappingIterator iter_array_30 = { "array", 30, 30, NULL };
const MappingIterator iter_array_5 = { "array", 5, 5, NULL };
const MappingIterator iter_array_4 = { "array", 4, 4, NULL };
const MappingIterator iter_array_15 = { "array", 15, 15, NULL };
const MappingIterator iter_array_1 = { "array", 1, 1, NULL };

const MappingEntry scope_264_entries[8] = {
    /* 0 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_MESSAGE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_ifMessageToRBC, &_Type_NID_MESSAGE_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_TRAIN), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_ifMessageToRBC, &_Type_T_TRAIN_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_ifMessageToRBC, &_Type_kcg_int32_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(NID_ENGINE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_ifMessageToRBC, &_Type_NID_ENGINE_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "MoRC_Pck::Coder_Pkg::genMsgToRBC 4", NULL, sizeof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_4, NULL, &scope_255_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 7 }
};
const MappingScope scope_264 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:then:",
    scope_264_entries, 8
};

const MappingEntry scope_263_entries[8] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_MESSAGE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L4_then_else_ifMessageToRBC, &_Type_NID_MESSAGE_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_TRAIN), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L3_then_else_ifMessageToRBC, &_Type_T_TRAIN_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_ifMessageToRBC, &_Type_kcg_int32_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_ENGINE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_ifMessageToRBC, &_Type_NID_ENGINE_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "MoRC_Pck::Coder_Pkg::genMsgToRBC 3", NULL, sizeof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_3, NULL, &scope_256_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 7 }
};
const MappingScope scope_263 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:then:",
    scope_263_entries, 8
};

const MappingEntry scope_262_entries[10] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_MESSAGE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_ifMessageToRBC, &_Type_NID_MESSAGE_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_TRAIN), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_else_else_ifMessageToRBC, &_Type_T_TRAIN_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_else_else_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L16_then_else_else_ifMessageToRBC, &_Type_kcg_int32_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(NID_ENGINE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L18_then_else_else_ifMessageToRBC, &_Type_NID_ENGINE_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC, &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "MoRC_Pck::Coder_Pkg::genMsgToRBC 2", NULL, sizeof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_2, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 9 }
};
const MappingScope scope_262 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:else:then:",
    scope_262_entries, 10
};

const MappingEntry scope_261_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "radioMessage", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, radioMessage), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L2), &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L1), &_Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_MESSAGE), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L4), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(NID_ENGINE), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L6), &_Type_NID_ENGINE_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(outPackets_T_Common_Types_Pkg), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L7), &_Type_outPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_4, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(Q_MARQSTREASON), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L8), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L11), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_TRAIN), offsetof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg, _L12), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11 }
};
const MappingScope scope_261 = {
    "MoRC_Pck::Coder_Pkg::genMsgToRBC/ genMsgToRBC_MoRC_Pck_Coder_Pkg",
    scope_261_entries, 12
};

const MappingEntry scope_260_entries[8] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_TRAIN), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_else_else_ifMessageToRBC, &_Type_T_TRAIN_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_else_else_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(NID_MESSAGE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_else_else_ifMessageToRBC, &_Type_NID_MESSAGE_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_else_else_ifMessageToRBC, &_Type_kcg_int32_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, &scope_43, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_ENGINE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_else_else_ifMessageToRBC, &_Type_NID_ENGINE_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "MoRC_Pck::Coder_Pkg::genMsgToRBC 1", NULL, sizeof(outC_genMsgToRBC_MoRC_Pck_Coder_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_1, NULL, &scope_258_entries[0], isActive_kcg_bool_kcg_true, &scope_261, 1, 7 }
};
const MappingScope scope_260 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:else:else:then:",
    scope_260_entries, 8
};

const MappingEntry scope_259_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrainTrack_Message_T_Radio_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC, &_Type_Radio_TrainTrack_Message_T_Radio_Types_Pkg_Utils, &scope_258_entries[0], isActive_kcg_bool_kcg_false, &scope_2, 1, 0 }
};
const MappingScope scope_259 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:else:else:else:",
    scope_259_entries, 1
};

const MappingEntry scope_258_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_else_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_257_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_258_entries[0], isActive_kcg_bool_kcg_false, &scope_259, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_258_entries[0], isActive_kcg_bool_kcg_true, &scope_260, 1, 2 }
};
const MappingScope scope_258 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:else:else:",
    scope_258_entries, 3
};

const MappingEntry scope_257_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_256_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_false, &scope_258, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_257_entries[0], isActive_kcg_bool_kcg_true, &scope_262, 1, 2 }
};
const MappingScope scope_257 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:else:",
    scope_257_entries, 3
};

const MappingEntry scope_256_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_ifMessageToRBC, &_Type_kcg_bool_Utils, &scope_255_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_256_entries[0], isActive_kcg_bool_kcg_false, &scope_257, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_256_entries[0], isActive_kcg_bool_kcg_true, &scope_263, 1, 2 }
};
const MappingScope scope_256 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:else:",
    scope_256_entries, 3
};

const MappingEntry scope_255_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.ifMessageToRBC_clock, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_255_entries[0], isActive_kcg_bool_kcg_false, &scope_256, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_255_entries[0], isActive_kcg_bool_kcg_true, &scope_264, 1, 2 }
};
const MappingScope scope_255 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_PckifMessageToRBC:",
    scope_255_entries, 3
};

const MappingEntry scope_254_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L4_then_IfBlock1), &_Type_Q_SLEEPSESSION_Utils, &scope_250_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L5_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_250_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_254 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversionsIfBlock1:then:",
    scope_254_entries, 2
};

const MappingEntry scope_253_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L3_then_else_IfBlock1), &_Type_Q_SLEEPSESSION_Utils, &scope_251_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L5_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_251_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_253 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversionsIfBlock1:else:then:",
    scope_253_entries, 2
};

const MappingEntry scope_252_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L2_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_251_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L1_else_else_IfBlock1), &_Type_Q_SLEEPSESSION_Utils, &scope_251_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 }
};
const MappingScope scope_252 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversionsIfBlock1:else:else:",
    scope_252_entries, 2
};

const MappingEntry scope_251_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_250_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_251_entries[0], isActive_kcg_bool_kcg_false, &scope_252, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_251_entries[0], isActive_kcg_bool_kcg_true, &scope_253, 1, 2 }
};
const MappingScope scope_251 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversionsIfBlock1:else:",
    scope_251_entries, 3
};

const MappingEntry scope_250_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_250_entries[0], isActive_kcg_bool_kcg_false, &scope_251, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_250_entries[0], isActive_kcg_bool_kcg_true, &scope_254, 1, 2 }
};
const MappingScope scope_250 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversionsIfBlock1:",
    scope_250_entries, 3
};

const MappingEntry scope_249_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "q_sleepsession", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, q_sleepsession), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "q_sleepsession_in", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, q_sleepsession_in), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_250, 1, 5 }
};
const MappingScope scope_249 = {
    "TM_conversions::CAST_Int_to_Q_SLEEPSESSION/ CAST_Int_to_Q_SLEEPSESSION_TM_conversions",
    scope_249_entries, 6
};

const MappingEntry scope_248_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, Output1_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L1_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L2_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_248 = {
    "TM_conversions::CAST_Int_to_NID_RADIO/ CAST_Int_to_NID_RADIO_TM_conversions/math::NumericToInt64 1",
    scope_248_entries, 3
};

const MappingEntry scope_247_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "nid_radio", NULL, sizeof(NID_RADIO), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RADIO_TM_conversions, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_EXPANDED, "math::NumericToInt64 1", NULL, 0, 0, NULL, NULL, NULL, &scope_248, 1, 7 }
};
const MappingScope scope_247 = {
    "TM_conversions::CAST_Int_to_NID_RADIO/ CAST_Int_to_NID_RADIO_TM_conversions",
    scope_247_entries, 8
};

const MappingEntry scope_246_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "nid_rbc", NULL, sizeof(NID_RBC), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_RBC_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_246 = {
    "TM_conversions::CAST_Int_to_NID_RBC/ CAST_Int_to_NID_RBC_TM_conversions",
    scope_246_entries, 6
};

const MappingEntry scope_245_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_245 = {
    "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
    scope_245_entries, 6
};

const MappingEntry scope_244_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P042_compr_onboard_TM_conversions, nid_packet_CAST_Int_to_NID_PACKET_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L1_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L5_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L4_CAST_Int_to_NID_PACKET_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L3_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L2_CAST_Int_to_NID_PACKET_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_244 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_NID_PACKET 1",
    scope_244_entries, 6
};

const MappingEntry scope_243_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1), &_Type_Q_DIR_Utils, &scope_237_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_237_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_243 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:then:",
    scope_243_entries, 2
};

const MappingEntry scope_242_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_238_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_238_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_242 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:then:",
    scope_242_entries, 2
};

const MappingEntry scope_241_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_241 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:then:",
    scope_241_entries, 2
};

const MappingEntry scope_240_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_239_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 }
};
const MappingScope scope_240 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:else:",
    scope_240_entries, 2
};

const MappingEntry scope_239_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_238_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_false, &scope_240, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_239_entries[0], isActive_kcg_bool_kcg_true, &scope_241, 1, 2 }
};
const MappingScope scope_239 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:",
    scope_239_entries, 3
};

const MappingEntry scope_238_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, else_clock_CAST_Int_to_Q_DIR_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_237_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_238_entries[0], isActive_kcg_bool_kcg_false, &scope_239, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_238_entries[0], isActive_kcg_bool_kcg_true, &scope_242, 1, 2 }
};
const MappingScope scope_238 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:",
    scope_238_entries, 3
};

const MappingEntry scope_237_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, IfBlock1_clock_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_237_entries[0], isActive_kcg_bool_kcg_false, &scope_238, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_237_entries[0], isActive_kcg_bool_kcg_true, &scope_243, 1, 2 }
};
const MappingScope scope_237 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:",
    scope_237_entries, 3
};

const MappingEntry scope_236_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, q_dir_CAST_Int_to_Q_DIR_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, error_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, q_dir_in_CAST_Int_to_Q_DIR_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L13_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L12_CAST_Int_to_Q_DIR_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_237, 1, 5 }
};
const MappingScope scope_236 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1",
    scope_236_entries, 6
};

const MappingEntry scope_235_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_RBC), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L4_then_IfBlock1), &_Type_Q_RBC_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L5_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_235 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversionsIfBlock1:then:",
    scope_235_entries, 2
};

const MappingEntry scope_234_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_RBC), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L3_then_else_IfBlock1), &_Type_Q_RBC_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L5_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_234 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversionsIfBlock1:else:then:",
    scope_234_entries, 2
};

const MappingEntry scope_233_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L2_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_RBC), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L1_else_else_IfBlock1), &_Type_Q_RBC_Utils, &scope_232_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 }
};
const MappingScope scope_233 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversionsIfBlock1:else:else:",
    scope_233_entries, 2
};

const MappingEntry scope_232_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_231_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_false, &scope_233, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_232_entries[0], isActive_kcg_bool_kcg_true, &scope_234, 1, 2 }
};
const MappingScope scope_232 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversionsIfBlock1:else:",
    scope_232_entries, 3
};

const MappingEntry scope_231_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_false, &scope_232, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_231_entries[0], isActive_kcg_bool_kcg_true, &scope_235, 1, 2 }
};
const MappingScope scope_231 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversionsIfBlock1:",
    scope_231_entries, 3
};

const MappingEntry scope_230_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "q_rbc", NULL, sizeof(Q_RBC), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, q_rbc), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "q_rbc_in", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, q_rbc_in), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_Q_RBC_TM_conversions, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_231, 1, 5 }
};
const MappingScope scope_230 = {
    "TM_conversions::CAST_Int_to_Q_RBC/ CAST_Int_to_Q_RBC_TM_conversions",
    scope_230_entries, 6
};

const MappingEntry scope_229_entries[27] = {
    /* 0 */ { MAP_OUTPUT, "P131_onboard", NULL, sizeof(P42_SessionManagement_T_Packet_Types_Pkg), offsetof(outC_C_P042_compr_onboard_TM_conversions, P131_onboard), &_Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_227, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(P42_SessionManagement_T_Packet_Types_Pkg), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L10), &_Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_227, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_RBC), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L4), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L21), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L24), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L26), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_C), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L27), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L28), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_RBC), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L29), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_RADIO), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L31), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_C_P042_compr_onboard_TM_conversions, _L33), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_RBC 1", NULL, sizeof(outC_CAST_Int_to_Q_RBC_TM_conversions), offsetof(outC_C_P042_compr_onboard_TM_conversions, Context_CAST_Int_to_Q_RBC_1), NULL, NULL, NULL, &scope_230, 1, 20 },
    /* 21 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_236, 1, 21 },
    /* 22 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_244, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_C_P042_compr_onboard_TM_conversions, Context_CAST_Int_to_NID_C_1), NULL, NULL, NULL, &scope_245, 1, 23 },
    /* 24 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_RBC 1", NULL, sizeof(outC_CAST_Int_to_NID_RBC_TM_conversions), offsetof(outC_C_P042_compr_onboard_TM_conversions, Context_CAST_Int_to_NID_RBC_1), NULL, NULL, NULL, &scope_246, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_RADIO 1", NULL, sizeof(outC_CAST_Int_to_NID_RADIO_TM_conversions), offsetof(outC_C_P042_compr_onboard_TM_conversions, Context_CAST_Int_to_NID_RADIO_1), NULL, NULL, NULL, &scope_247, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_SLEEPSESSION 1", NULL, sizeof(outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions), offsetof(outC_C_P042_compr_onboard_TM_conversions, Context_CAST_Int_to_Q_SLEEPSESSION_1), NULL, NULL, NULL, &scope_249, 1, 26 }
};
const MappingScope scope_229 = {
    "TM_conversions::C_P042_compr_onboard/ C_P042_compr_onboard_TM_conversions",
    scope_229_entries, 27
};

const MappingEntry scope_228_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P042_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "P042_OBU_out", NULL, sizeof(P42_SessionManagement_T_Packet_Types_Pkg), offsetof(outC_Read_P042_TM, P042_OBU_out), &_Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_227, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P042_TM, _L5), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P042_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P042_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P42_SessionManagement_T_Packet_Types_Pkg), offsetof(outC_Read_P042_TM, _L166), &_Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_227, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P042_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P042_TM, Context_RECV_ReadPackets_1), NULL, NULL, NULL, &scope_107, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "TM_conversions::C_P042_compr_onboard 2", NULL, sizeof(outC_C_P042_compr_onboard_TM_conversions), offsetof(outC_Read_P042_TM, Context_C_P042_compr_onboard_2), NULL, NULL, NULL, &scope_229, 1, 8 }
};
const MappingScope scope_228 = {
    "TM::Read_P042/ Read_P042_TM",
    scope_228_entries, 9
};

const MappingEntry scope_227_entries[7] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".q_rbc", NULL, sizeof(Q_RBC), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, q_rbc), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".nid_rbc", NULL, sizeof(NID_RBC), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".q_sleepsession", NULL, sizeof(Q_SLEEPSESSION), offsetof(P42_SessionManagement_T_Packet_Types_Pkg, q_sleepsession), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_227 = {
    "P42_SessionManagement_T_Packet_Types_Pkg",
    scope_227_entries, 7
};

const MappingEntry scope_226_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "p42_sessionManagement", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, p42_sessionManagement), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L1), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L20), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L27), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(P42_SessionManagement_T_Packet_Types_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L29), &_Type_P42_SessionManagement_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_227, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L43", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L43), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L42", NULL, sizeof(NID_RADIO), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L42), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L41", NULL, sizeof(NID_RBC), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L41), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L40", NULL, sizeof(NID_C), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L40), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L39", NULL, sizeof(Q_RBC), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L39), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(Q_DIR), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L38), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L85", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L85), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L86", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, _L86), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "TM::Read_P042 1", NULL, sizeof(outC_Read_P042_TM), offsetof(outC_dec_p42_RCM_Utils_Pkg_decoders, Context_Read_P042_1), NULL, NULL, NULL, &scope_228, 1, 17 }
};
const MappingScope scope_226 = {
    "RCM_Utils_Pkg::decoders::dec_p42/ dec_p42_RCM_Utils_Pkg_decoders",
    scope_226_entries, 18
};

const MappingEntry scope_225_entries[16] = {
    /* 0 */ { MAP_OUTPUT, "m39_acknowledgementOfTerminationOfACommunicationSession", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, m39_acknowledgementOfTerminationOfACommunicationSession), &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L1), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L20), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L71), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L70", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L70), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L73", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L73), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L75), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L76", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L76), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L77", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L77), &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L78", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L78), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L79", NULL, sizeof(NID_LRBG), offsetof(outC_dec_m39_RCM_Utils_Pkg_decoders, _L79), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 15 }
};
const MappingScope scope_225 = {
    "RCM_Utils_Pkg::decoders::dec_m39/ dec_m39_RCM_Utils_Pkg_decoders",
    scope_225_entries, 16
};

const MappingEntry scope_224_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "m38_initiationOfComSession", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, m38_initiationOfComSession), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L1), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L20), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L71", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L71), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L70", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L70), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L73", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L73), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L74", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L74), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L75), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L76", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L76), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L77", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_dec_m38_RCM_Utils_Pkg_decoders, _L77), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 14 }
};
const MappingScope scope_224 = {
    "RCM_Utils_Pkg::decoders::dec_m38/ dec_m38_RCM_Utils_Pkg_decoders",
    scope_224_entries, 15
};

const MappingEntry scope_223_entries[19] = {
    /* 0 */ { MAP_OUTPUT, "m32_RBC_or_RIU_System_Version", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, m32_RBC_or_RIU_System_Version), &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L1), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L79), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L77), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L87", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L87), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L92), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L91), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L90), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L89", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L89), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L88", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L88), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L93", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L93), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_36, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L109", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L109), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L111", NULL, sizeof(kcg_bool), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L111), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L112", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L112), &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L113", NULL, sizeof(NID_MESSAGE), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L113), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L114", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L114), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L115", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L115), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L110", NULL, sizeof(M_VERSION), offsetof(outC_dec_m32_RCM_Utils_Pkg_decoders, _L110), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 18 }
};
const MappingScope scope_223 = {
    "RCM_Utils_Pkg::decoders::dec_m32/ dec_m32_RCM_Utils_Pkg_decoders",
    scope_223_entries, 19
};

const MappingEntry scope_222_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_222 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionUp:<2",
    scope_222_entries, 1
};

const MappingEntry scope_221_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_221 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionUp:<1",
    scope_221_entries, 1
};

const MappingEntry scope_220_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_NoConnection_1_ConnectionUp_connectionStatus_SM, &scope_221, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionUp_ConnectionLost_SetupFailed_2_ConnectionUp_connectionStatus_SM, &scope_222, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L1_ConnectionUp_connectionStatus_SM), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionUp_connectionStatus_SM, NULL, 1, 2 }
};
const MappingScope scope_220 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionUp:",
    scope_220_entries, 3
};

const MappingEntry scope_219_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_219 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionLost_SetupFailed:<2",
    scope_219_entries, 1
};

const MappingEntry scope_218_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_218 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionLost_SetupFailed:<1",
    scope_218_entries, 1
};

const MappingEntry scope_217_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_NoConnection_1_ConnectionLost_SetupFailed_connectionStatus_SM, &scope_218, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_ConnectionLost_SetupFailed_ConnectionUp_2_ConnectionLost_SetupFailed_connectionStatus_SM, &scope_219, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L1_ConnectionLost_SetupFailed_connectionStatus_SM), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM, NULL, 1, 2 }
};
const MappingScope scope_217 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:ConnectionLost_SetupFailed:",
    scope_217_entries, 3
};

const MappingEntry scope_216_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_216 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:NoConnection:<2",
    scope_216_entries, 1
};

const MappingEntry scope_215_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_215 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:NoConnection:<1",
    scope_215_entries, 1
};

const MappingEntry scope_214_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionUp_1_NoConnection_connectionStatus_SM, &scope_215, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_213_entries[5], isActive_SSM_TR_connectionStatus_SM_SSM_TR_NoConnection_ConnectionLost_SetupFailed_2_NoConnection_connectionStatus_SM, &scope_216, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L1_NoConnection_connectionStatus_SM), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_NoConnection_connectionStatus_SM, NULL, 1, 2 }
};
const MappingScope scope_214 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:NoConnection:",
    scope_214_entries, 3
};

const MappingEntry scope_213_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_connectionStatus_SM), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_state_act), &_Type_SSM_ST_connectionStatus_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_connectionStatus_SM), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_state_nxt), &_Type_SSM_ST_connectionStatus_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_connectionStatus_SM), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_state_sel), &_Type_SSM_ST_connectionStatus_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_connectionStatus_SM), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_fired_strong), &_Type_SSM_TR_connectionStatus_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_connectionStatus_SM), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus_SM_fired), &_Type_SSM_TR_connectionStatus_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "NoConnection:", NULL, 0, 0, NULL, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_NoConnection_connectionStatus_SM, &scope_214, 1, 7 },
    /* 8 */ { MAP_STATE, "ConnectionLost_SetupFailed:", NULL, 0, 0, NULL, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM, &scope_217, 1, 8 },
    /* 9 */ { MAP_STATE, "ConnectionUp:", NULL, 0, 0, NULL, &scope_213_entries[0], isActive_SSM_ST_connectionStatus_SM_SSM_st_ConnectionUp_connectionStatus_SM, &scope_220, 1, 9 }
};
const MappingScope scope_213 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_PkgconnectionStatus_SM:",
    scope_213_entries, 10
};

const MappingEntry scope_212_entries[81] = {
    /* 0 */ { MAP_OUTPUT, "indication", NULL, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, indication), &_Type_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_25, 1, 0 },
    /* 1 */ { MAP_LOCAL, "indicator_l", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, indicator_l), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "connectionStatusTimerExpired", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, connectionStatusTimerExpired), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "condition_ID_1", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "condition_ID_2", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "condition_ID_3", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "condition_ID_4", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "condition_ID_5", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "condition_ID_6", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "condition_ID_7", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, condition_ID_7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "safeRadioConnection_Setup", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, safeRadioConnection_Setup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "safeRadioConnection_Released", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, safeRadioConnection_Released), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "safeRadioConnection_Lost", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, safeRadioConnection_Lost), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "startOfMissionProcedureIsGoingOn", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, startOfMissionProcedureIsGoingOn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "trainfrontIsInsideAnAnnouncedRadioHole", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, trainfrontIsInsideAnAnnouncedRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "finalAttemptToSetupTheSafeRadioConnectionFailed", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, finalAttemptToSetupTheSafeRadioConnectionFailed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "requestsToSetupASafeRadioConnectionAreStopped", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, requestsToSetupASafeRadioConnectionAreStopped), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "firstRequestToSetupASafeRadioConnection", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, firstRequestToSetupASafeRadioConnection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L1", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L23", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L23), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L27", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L27), &_Type_time_Type_MoRC_Pck_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L77), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L76), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L75), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L74), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L73", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L73), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L71), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L70", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L70), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L69", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L69), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L66), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L65", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L65), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L63), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L62", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L62), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L61), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L82), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L83), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L84), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L85), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L86), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L87), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L88), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L89), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L90), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L91), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L92", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L92), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L93), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L94", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L94), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L97), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L98", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L98), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L99), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L100), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L101), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L103", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L103), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L104", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L104), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L105), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L106), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L107", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L107), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L108), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L112", NULL, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, _L112), &_Type_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_25, 1, 76 },
    /* 77 */ { MAP_AUTOMATON, "connectionStatus_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_213, 1, 77 },
    /* 78 */ { MAP_INSTANCE, "MoRC_Pck::Utils::countDownTimer 1", NULL, sizeof(outC_countDownTimer_MoRC_Pck_Utils), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_71, 1, 78 },
    /* 79 */ { MAP_INSTANCE, "digital::RisingEdge 4", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_4), NULL, NULL, NULL, &scope_70, 1, 79 },
    /* 80 */ { MAP_INSTANCE, "digital::RisingEdge 3", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_3), NULL, NULL, NULL, &scope_70, 1, 80 }
};
const MappingScope scope_212 = {
    "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2/ safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg",
    scope_212_entries, 81
};

const MappingEntry scope_211_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 0 }
};
const MappingScope scope_211 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<1",
    scope_211_entries, 1
};

const MappingEntry scope_210_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_205_entries[6], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 0 }
};
const MappingScope scope_210 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:<2",
    scope_210_entries, 1
};

const MappingEntry scope_209_entries[9] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_205_entries[6], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_2_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, &scope_210, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_WaitForOrderToTerminateTheSession_Idle_1_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, &scope_211, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L26_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L25_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L27_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_time_Type_MoRC_Pck_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L28_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L29_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L30_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM), &_Type_kcg_int32_Utils, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, NULL, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "MoRC_Pck::Utils::waitAndRepeatTimer 1", NULL, sizeof(outC_waitAndRepeatTimer_MoRC_Pck_Utils), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, Context_waitAndRepeatTimer_1), NULL, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, &scope_200, 1, 8 }
};
const MappingScope scope_209 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:WaitForOrderToTerminateTheSession:",
    scope_209_entries, 9
};

const MappingEntry scope_208_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM, NULL, 1, 0 }
};
const MappingScope scope_208 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:Idle:<2",
    scope_208_entries, 1
};

const MappingEntry scope_207_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM, NULL, 1, 0 }
};
const MappingScope scope_207 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:Idle:<1",
    scope_207_entries, 1
};

const MappingEntry scope_206_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_Idle_1_Idle_TrainExitedFromRBCArea_SM, &scope_207, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_205_entries[5], isActive_SSM_TR_TrainExitedFromRBCArea_SM_SSM_TR_Idle_WaitForOrderToTerminateTheSession_2_Idle_TrainExitedFromRBCArea_SM, &scope_208, 1, 1 }
};
const MappingScope scope_206 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:Idle:",
    scope_206_entries, 2
};

const MappingEntry scope_205_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_TrainExitedFromRBCArea_SM), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_state_act), &_Type_SSM_ST_TrainExitedFromRBCArea_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_TrainExitedFromRBCArea_SM), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_state_nxt), &_Type_SSM_ST_TrainExitedFromRBCArea_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_TrainExitedFromRBCArea_SM), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_state_sel), &_Type_SSM_ST_TrainExitedFromRBCArea_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_TrainExitedFromRBCArea_SM), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_fired_strong), &_Type_SSM_TR_TrainExitedFromRBCArea_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_TrainExitedFromRBCArea_SM), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, TrainExitedFromRBCArea_SM_fired), &_Type_SSM_TR_TrainExitedFromRBCArea_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Idle:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_Idle_TrainExitedFromRBCArea_SM, &scope_206, 1, 7 },
    /* 8 */ { MAP_STATE, "WaitForOrderToTerminateTheSession:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_SSM_ST_TrainExitedFromRBCArea_SM_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM, &scope_209, 1, 8 }
};
const MappingScope scope_205 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_PkgTrainExitedFromRBCArea_SM:",
    scope_205_entries, 9
};

const MappingEntry scope_204_entries[57] = {
    /* 0 */ { MAP_OUTPUT, "initiateTermination", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, initiateTermination), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "sendAPositionReport", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, sendAPositionReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "sTerminateTheCommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, sTerminateTheCommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "sSendAPositionReport", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, sSendAPositionReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "orderToTerminateTheSessionIsReceived", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, orderToTerminateTheSessionIsReceived), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "noReplyReceivedAfterLastRepetition", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, noReplyReceivedAfterLastRepetition), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "definedNumberOfRepetitionsHasBeenReached", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, definedNumberOfRepetitionsHasBeenReached), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "trainExitedFromAnRBCArea_l", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, trainExitedFromAnRBCArea_l), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L49", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L49), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L51), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L56", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L56), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L80", NULL, sizeof(Q_RBC), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L80), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L79", NULL, sizeof(Q_RBC), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L79), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L78), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L77), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L76", NULL, sizeof(Q_RBC), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L76), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L75", NULL, sizeof(NID_RADIO), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L75), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L74", NULL, sizeof(M_MODE), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L74), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L72", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L72), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L71", NULL, sizeof(NID_RBC), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L71), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L70", NULL, sizeof(NID_C), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L70), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L82", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L82), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L83), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L84", NULL, sizeof(NID_C), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L84), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L85", NULL, sizeof(NID_RADIO), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L85), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L86", NULL, sizeof(NID_RBC), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L86), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L87), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L88), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L89), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L90", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L90), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L91), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L92", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L92), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L93), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L95), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L97), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L98), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L99), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, _L100), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_AUTOMATON, "TrainExitedFromRBCArea_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_205, 1, 55 },
    /* 56 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2 2", NULL, sizeof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg, Context_validate_q_sleepsession_v2_2), NULL, NULL, NULL, &scope_50, 1, 56 }
};
const MappingScope scope_204 = {
    "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2/ initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_204_entries, 57
};

const MappingEntry scope_203_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, Memorized_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_MemoryBasic_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 5 }
};
const MappingScope scope_203 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_Pkg/linear::MemoryBasic 1",
    scope_203_entries, 6
};

const MappingEntry scope_202_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_terminated_idle_1_terminated_SM1, NULL, 1, 0 }
};
const MappingScope scope_202 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:terminated:<1",
    scope_202_entries, 1
};

const MappingEntry scope_201_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_terminated_idle_1_terminated_SM1, &scope_202, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_terminated_SM1), &_Type_kcg_bool_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_terminated_SM1, NULL, 1, 1 }
};
const MappingScope scope_201 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:terminated:",
    scope_201_entries, 2
};

const MappingEntry scope_200_entries[22] = {
    /* 0 */ { MAP_OUTPUT, "triggerAction", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, triggerAction), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "elapsed", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, elapsed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L3), &_Type_time_Type_MoRC_Pck_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L5), &_Type_time_Type_MoRC_Pck_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L8), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L22), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_INSTANCE, "MoRC_Pck::Utils::countDownTimer 1", NULL, sizeof(outC_countDownTimer_MoRC_Pck_Utils), offsetof(outC_waitAndRepeatTimer_MoRC_Pck_Utils, Context_countDownTimer_1), NULL, NULL, NULL, &scope_71, 1, 21 }
};
const MappingScope scope_200 = {
    "MoRC_Pck::Utils::waitAndRepeatTimer/ waitAndRepeatTimer_MoRC_Pck_Utils",
    scope_200_entries, 22
};

const MappingEntry scope_199_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 0 }
};
const MappingScope scope_199 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:waitForAckTerminationOfCommunicationSessionReceived:<1",
    scope_199_entries, 1
};

const MappingEntry scope_198_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_194_entries[6], isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 0 }
};
const MappingScope scope_198 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:waitForAckTerminationOfCommunicationSessionReceived:<2",
    scope_198_entries, 1
};

const MappingEntry scope_197_entries[9] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_194_entries[6], isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_terminated_2_waitForAckTerminationOfCommunicationSessionReceived_SM1, &scope_198, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_idle_1_waitForAckTerminationOfCommunicationSessionReceived_SM1, &scope_199, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_kcg_bool_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_kcg_bool_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_kcg_bool_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L3_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_kcg_int32_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_time_Type_MoRC_Pck_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_waitForAckTerminationOfCommunicationSessionReceived_SM1), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "MoRC_Pck::Utils::waitAndRepeatTimer 1", NULL, sizeof(outC_waitAndRepeatTimer_MoRC_Pck_Utils), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, Context_waitAndRepeatTimer_1), NULL, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, &scope_200, 1, 8 }
};
const MappingScope scope_197 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:waitForAckTerminationOfCommunicationSessionReceived:",
    scope_197_entries, 9
};

const MappingEntry scope_196_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1, NULL, 1, 0 }
};
const MappingScope scope_196 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:idle:<1",
    scope_196_entries, 1
};

const MappingEntry scope_195_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_194_entries[5], isActive_SSM_TR_SM1_SSM_TR_idle_waitForAckTerminationOfCommunicationSessionReceived_1_idle_SM1, &scope_196, 1, 0 }
};
const MappingScope scope_195 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:idle:",
    scope_195_entries, 1
};

const MappingEntry scope_194_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "idle:", NULL, 0, 0, NULL, &scope_194_entries[0], isActive_SSM_ST_SM1__14_SSM_st_idle_SM1, &scope_195, 1, 7 },
    /* 8 */ { MAP_STATE, "waitForAckTerminationOfCommunicationSessionReceived:", NULL, 0, 0, NULL, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1, &scope_197, 1, 8 },
    /* 9 */ { MAP_STATE, "terminated:", NULL, 0, 0, NULL, &scope_194_entries[0], isActive_SSM_ST_SM1_SSM_st_terminated_SM1, &scope_201, 1, 9 }
};
const MappingScope scope_194 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_PkgSM1:",
    scope_194_entries, 10
};

const MappingEntry scope_193_entries[26] = {
    /* 0 */ { MAP_OUTPUT, "send_m156_TerminationOfCommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, send_m156_TerminationOfCommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "requestReleaseOfSafeRadioConnection", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, requestReleaseOfSafeRadioConnection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "terminated", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, terminated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "notReady", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, notReady), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_SIGNAL, "sSendTerminationOfCommunicationMessage", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, sSendTerminationOfCommunicationMessage), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_SIGNAL, "sRequestReleaseOfSafeRadioConnection", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, sRequestReleaseOfSafeRadioConnection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_SIGNAL, "sNotReady", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, sNotReady), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "ackTerminationOfACommunicationSessionReceived", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, ackTerminationOfACommunicationSessionReceived), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "definedNumberOfRepetitionsHasBeenReached", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, definedNumberOfRepetitionsHasBeenReached), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L96", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L96), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L95", NULL, sizeof(NID_C), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L95), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L93", NULL, sizeof(NID_RBC), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L93), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L92", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L92), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L91", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L91), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L90", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L90), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L89", NULL, sizeof(NID_RADIO), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L89), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L88), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L97", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L97), &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L98), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L99), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L100), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_bool), offsetof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg, _L101), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_194, 1, 24 },
    /* 25 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_203, 1, 25 }
};
const MappingScope scope_193 = {
    "MoRC_Pck::Subfunc_Pkg::terminateSession_v2/ terminateSession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_193_entries, 26
};

const MappingEntry scope_192_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM, NULL, 1, 0 }
};
const MappingScope scope_192 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:terminatingSession:<1",
    scope_192_entries, 1
};

const MappingEntry scope_191_entries[14] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_terminatingSession_sessionTerminated_1_terminatingSession_Session_SM, &scope_192, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L4_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L3_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L2_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L1_terminatingSession_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, &scope_24, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L5_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L6_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L7_terminatingSession_Session_SM), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L8_terminatingSession_Session_SM), &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, &scope_46, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L9_terminatingSession_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, &scope_24, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L10_terminatingSession_Session_SM), &_Type_kcg_int32_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L11_terminatingSession_Session_SM), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L12_terminatingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, NULL, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::terminateSession_v2 1", NULL, sizeof(outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Context_terminateSession_v2_1), NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, &scope_193, 1, 13 }
};
const MappingScope scope_191 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:terminatingSession:",
    scope_191_entries, 14
};

const MappingEntry scope_190_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, Memorized_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_MemoryBasic_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_MemoryBasic_1_struct), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 5 }
};
const MappingScope scope_190 = {
    "MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/ maintainingSession_v2_MoRC_Pck_Subfunc_Pkg/linear::MemoryBasic 1",
    scope_190_entries, 6
};

const MappingEntry scope_189_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L128", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L128), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_bool), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L129), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L130", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L130), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L131", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L131), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L133", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L133), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L134), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L135", NULL, sizeof(NID_C), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L135), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L136", NULL, sizeof(NID_RBC), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L136), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L137", NULL, sizeof(NID_RADIO), offsetof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg, _L137), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_190, 1, 10 }
};
const MappingScope scope_189 = {
    "MoRC_Pck::Subfunc_Pkg::maintainingSession_v2/ maintainingSession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_189_entries, 11
};

const MappingEntry scope_188_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM, NULL, 1, 0 }
};
const MappingScope scope_188 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:maintainingSession:<1",
    scope_188_entries, 1
};

const MappingEntry scope_187_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_maintainingSession_terminatingSession_1_maintainingSession_Session_SM, &scope_188, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L1_maintainingSession_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM, &scope_24, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L2_maintainingSession_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM, &scope_24, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L3_maintainingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM, NULL, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 1", NULL, sizeof(outC_maintainingSession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Context_maintainingSession_v2_1), NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM, &scope_189, 1, 4 }
};
const MappingScope scope_187 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:maintainingSession:",
    scope_187_entries, 5
};

const MappingEntry scope_186_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_2_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_2_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_2_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_186 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 2",
    scope_186_entries, 9
};

const MappingEntry scope_185_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_181_entries[5], isActive__5_SSM_TR_SM1__10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1, NULL, 1, 0 }
};
const MappingScope scope_185 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_PkgSM1:sessionEstablished:<1",
    scope_185_entries, 1
};

const MappingEntry scope_184_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_181_entries[5], isActive__5_SSM_TR_SM1__10_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1, &scope_185, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_sessionEstablished_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_181_entries[0], isActive__4_SSM_ST_SM1__8_SSM_st_sessionEstablished_SM1, NULL, 1, 1 }
};
const MappingScope scope_184 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_PkgSM1:sessionEstablished:",
    scope_184_entries, 2
};

const MappingEntry scope_183_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_181_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_idle_sessionEstablished_1_idle_SM1, NULL, 1, 0 }
};
const MappingScope scope_183 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_PkgSM1:idle:<1",
    scope_183_entries, 1
};

const MappingEntry scope_182_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_181_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_idle_sessionEstablished_1_idle_SM1, &scope_183, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_idle_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_181_entries[0], isActive__4_SSM_ST_SM1__9_SSM_st_idle_SM1, NULL, 1, 1 }
};
const MappingScope scope_182 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_PkgSM1:idle:",
    scope_182_entries, 2
};

const MappingEntry scope_181_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_act), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_nxt), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_sel), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired_strong), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "idle:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive__4_SSM_ST_SM1__9_SSM_st_idle_SM1, &scope_182, 1, 7 },
    /* 8 */ { MAP_STATE, "sessionEstablished:", NULL, 0, 0, NULL, &scope_181_entries[0], isActive__4_SSM_ST_SM1__8_SSM_st_sessionEstablished_SM1, &scope_184, 1, 8 }
};
const MappingScope scope_181 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_PkgSM1:",
    scope_181_entries, 9
};

const MappingEntry scope_180_entries[34] = {
    /* 0 */ { MAP_OUTPUT, "send_m159_sessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, send_m159_sessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "established", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, established), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 2 },
    /* 3 */ { MAP_SIGNAL, "sSendSessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, sSendSessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_SIGNAL, "sEstablished", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, sEstablished), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "initiatedByRBC", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, initiatedByRBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "sessionEstablishCmd_mem", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, sessionEstablishCmd_mem), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 6 },
    /* 7 */ { MAP_LOCAL, "phase", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, phase), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L25), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L41), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L43), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L71", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L71), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L74", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L74), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L75", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L75), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L76", NULL, sizeof(NID_C), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L76), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L77", NULL, sizeof(NID_RBC), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L77), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L78", NULL, sizeof(NID_RADIO), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L78), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L88", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L88), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L89), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L90), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L93", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L93), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L91", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L91), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L95), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_181, 1, 32 },
    /* 33 */ { MAP_EXPANDED, "linear::Memory 2", NULL, 0, 0, NULL, NULL, NULL, &scope_186, 1, 33 }
};
const MappingScope scope_180 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2/ establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg",
    scope_180_entries, 34
};

const MappingEntry scope_179_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1, NULL, 1, 0 }
};
const MappingScope scope_179 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:establishingByRBC:<1",
    scope_179_entries, 1
};

const MappingEntry scope_178_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_establishingByRBC_idle_1_establishingByRBC_SM1, &scope_179, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L3_establishingByRBC_SM1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_24, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_establishingByRBC_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_establishingByRBC_SM1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_48, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_establishingByRBC_SM1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_23, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_establishingByRBC_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_establishingByRBC_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L8_establishingByRBC_SM1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_44, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L9_establishingByRBC_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 1", NULL, sizeof(outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, Context_establishSessionFromRBC_v2_1), NULL, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_180, 1, 9 }
};
const MappingScope scope_178 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:establishingByRBC:",
    scope_178_entries, 10
};

const MappingEntry scope_177_entries[24] = {
    /* 0 */ { MAP_OUTPUT, "valid", NULL, sizeof(kcg_bool), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "p42_SessionManagement", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, p42_SessionManagement), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L11), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L10), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L9), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_RADIO), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L8), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_RBC), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L7), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(NID_C), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L6), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(Q_RBC), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L5), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L22), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L23", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L23), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L25), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L26), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L27", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L27), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L28", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L28), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L29", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L29), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_DIR), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L30), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_DIR), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L32), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L33", NULL, sizeof(Q_DIR), offsetof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg, _L33), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 23 }
};
const MappingScope scope_177 = {
    "MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2/ sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg",
    scope_177_entries, 24
};

const MappingEntry scope_176_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_1_struct), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_176 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 1",
    scope_176_entries, 9
};

const MappingEntry scope_175_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1, NULL, 1, 0 }
};
const MappingScope scope_175 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:sessionEstablished:<1",
    scope_175_entries, 1
};

const MappingEntry scope_174_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_sessionEstablished_idle_1_sessionEstablished_SM1, &scope_175, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_sessionEstablished_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_sessionEstablished_SM1, NULL, 1, 1 }
};
const MappingScope scope_174 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:sessionEstablished:",
    scope_174_entries, 2
};

const MappingEntry scope_173_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1, NULL, 1, 0 }
};
const MappingScope scope_173 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSystemVersion:<3",
    scope_173_entries, 1
};

const MappingEntry scope_172_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1, NULL, 1, 0 }
};
const MappingScope scope_172 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSystemVersion:<2",
    scope_172_entries, 1
};

const MappingEntry scope_171_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1, NULL, 1, 0 }
};
const MappingScope scope_171 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSystemVersion:<1",
    scope_171_entries, 1
};

const MappingEntry scope_170_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_1_waitForSystemVersion_SM1, &scope_171, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_sessionEstablished_2_waitForSystemVersion_SM1, &scope_172, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSystemVersion_idle_3_waitForSystemVersion_SM1, &scope_173, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_waitForSystemVersion_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_waitForSystemVersion_SM1, NULL, 1, 3 }
};
const MappingScope scope_170 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSystemVersion:",
    scope_170_entries, 4
};

const MappingEntry scope_169_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_169 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSafeRadioConnectionSetUp:<2",
    scope_169_entries, 1
};

const MappingEntry scope_168_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_168 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSafeRadioConnectionSetUp:<1",
    scope_168_entries, 1
};

const MappingEntry scope_167_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_waitForSystemVersion_1_waitForSafeRadioConnectionSetUp_SM1, &scope_168, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_waitForSafeRadioConnectionSetUp_idle_2_waitForSafeRadioConnectionSetUp_SM1, &scope_169, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_waitForSafeRadioConnectionSetUp_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_waitForSafeRadioConnectionSetUp_SM1, NULL, 1, 2 }
};
const MappingScope scope_167 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:waitForSafeRadioConnectionSetUp:",
    scope_167_entries, 3
};

const MappingEntry scope_166_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1, NULL, 1, 0 }
};
const MappingScope scope_166 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:idle:<1",
    scope_166_entries, 1
};

const MappingEntry scope_165_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_164_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_idle_waitForSafeRadioConnectionSetUp_1_idle_SM1, &scope_166, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_idle_SM1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_idle_SM1, NULL, 1, 1 }
};
const MappingScope scope_165 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:idle:",
    scope_165_entries, 2
};

const MappingEntry scope_164_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_act), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_nxt), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_sel), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired_strong), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "idle:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_idle_SM1, &scope_165, 1, 7 },
    /* 8 */ { MAP_STATE, "waitForSafeRadioConnectionSetUp:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_waitForSafeRadioConnectionSetUp_SM1, &scope_167, 1, 8 },
    /* 9 */ { MAP_STATE, "waitForSystemVersion:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_waitForSystemVersion_SM1, &scope_170, 1, 9 },
    /* 10 */ { MAP_STATE, "sessionEstablished:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive__6_SSM_ST_SM1_SSM_st_sessionEstablished_SM1, &scope_174, 1, 10 }
};
const MappingScope scope_164 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_PkgSM1:",
    scope_164_entries, 11
};

const MappingEntry scope_163_entries[71] = {
    /* 0 */ { MAP_OUTPUT, "p42_establishSessionCmd", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, p42_establishSessionCmd), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "send_m155_initiationOfACommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, send_m155_initiationOfACommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "send_m159_sessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, send_m159_sessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "send_m154_noCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, send_m154_noCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "requestSafeRadioConnectionSetup", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, requestSafeRadioConnectionSetup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "terminateCommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, terminateCommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "infomDriverNoCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, infomDriverNoCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "established", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, established), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 8 },
    /* 9 */ { MAP_SIGNAL, "sRequestSafeRadioConnectionSetup", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sRequestSafeRadioConnectionSetup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_SIGNAL, "sendInitiationOfCommSessionToTrack", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sendInitiationOfCommSessionToTrack), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_SIGNAL, "sSendSessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sSendSessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_SIGNAL, "sSendNoCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sSendNoCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_SIGNAL, "sInformTheDriverNoCompatibleVersion", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sInformTheDriverNoCompatibleVersion), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_SIGNAL, "sTerminateComSession", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sTerminateComSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_SIGNAL, "sEstablished", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sEstablished), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "initiatedByOBU", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, initiatedByOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "safeRadioConnectionSetUp", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, safeRadioConnectionSetUp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "sessionEstablishCmd_mem", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sessionEstablishCmd_mem), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 18 },
    /* 19 */ { MAP_LOCAL, "systemVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, systemVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "systemVersionNotSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, systemVersionNotSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "phase", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, phase), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L25", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L25), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L41", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L41), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L43", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L43), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L45", NULL, sizeof(NID_RADIO), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L45), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L46", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L46), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L48", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L48), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L49", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L49), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L51", NULL, sizeof(NID_RADIO), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L51), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L53", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L53), &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L58), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L65), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L66), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L70), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L71", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L71), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L74", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L74), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L75", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L75), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L76", NULL, sizeof(NID_C), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L76), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L77", NULL, sizeof(NID_RBC), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L77), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L78", NULL, sizeof(NID_RADIO), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L78), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L79), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L80", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L80), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L84", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L84), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L83), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L86), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L87", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L87), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L89), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 67 },
    /* 68 */ { MAP_EXPANDED, "linear::Memory 1", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 68 },
    /* 69 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2 1", NULL, sizeof(outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Context_sessionCmd_2_p42_v2_1), NULL, &scope_163_entries[70], isActive_kcg_bool_kcg_true, &scope_177, 1, 69 },
    /* 70 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 70 }
};
const MappingScope scope_163 = {
    "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2/ establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg",
    scope_163_entries, 71
};

const MappingEntry scope_162_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1, NULL, 1, 0 }
};
const MappingScope scope_162 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:establishingByOBU:<1",
    scope_162_entries, 1
};

const MappingEntry scope_161_entries[15] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_establishingByOBU_idle_1_establishingByOBU_SM1, &scope_162, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L9_establishingByOBU_SM1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_24, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L8_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L3_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_establishingByOBU_SM1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_44, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L10_establishingByOBU_SM1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_48, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L11_establishingByOBU_SM1), &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_47, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L12_establishingByOBU_SM1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_23, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L13_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L14_establishingByOBU_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 1", NULL, sizeof(outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, Context_establishSessionFromOBU_v2_1), NULL, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_163, 1, 14 }
};
const MappingScope scope_161 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:establishingByOBU:",
    scope_161_entries, 15
};

const MappingEntry scope_160_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByRBC_2_idle_SM1, NULL, 1, 0 }
};
const MappingScope scope_160 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:idle:<2",
    scope_160_entries, 1
};

const MappingEntry scope_159_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByOBU_1_idle_SM1, NULL, 1, 0 }
};
const MappingScope scope_159 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:idle:<1",
    scope_159_entries, 1
};

const MappingEntry scope_158_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByOBU_1_idle_SM1, &scope_159, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_157_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_idle_establishingByRBC_2_idle_SM1, &scope_160, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_idle_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L3_idle_SM1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, &scope_44, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L9_idle_SM1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, &scope_24, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L11_idle_SM1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, &scope_24, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L12_idle_SM1), &_Type_kcg_bool_Utils, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, NULL, 1, 6 }
};
const MappingScope scope_158 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:idle:",
    scope_158_entries, 7
};

const MappingEntry scope_157_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_act), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_nxt), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_state_sel), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired_strong), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, SM1_fired), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "idle:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive__2_SSM_ST_SM1__12_SSM_st_idle_SM1, &scope_158, 1, 7 },
    /* 8 */ { MAP_STATE, "establishingByOBU:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByOBU_SM1, &scope_161, 1, 8 },
    /* 9 */ { MAP_STATE, "establishingByRBC:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive__2_SSM_ST_SM1_SSM_st_establishingByRBC_SM1, &scope_178, 1, 9 }
};
const MappingScope scope_157 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_PkgSM1:",
    scope_157_entries, 10
};

const MappingEntry scope_156_entries[26] = {
    /* 0 */ { MAP_OUTPUT, "p42_establishSessionCmd", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, p42_establishSessionCmd), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "send_m155_initiationOfACommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, send_m155_initiationOfACommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "send_m159_sessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, send_m159_sessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "send_m154_noCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, send_m154_noCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "requestSafeRadioConnectionSetup", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, requestSafeRadioConnectionSetup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "terminateCommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, terminateCommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "infomDriverNoCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, infomDriverNoCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "established", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, established), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 8 },
    /* 9 */ { MAP_LOCAL, "initiatedByOBU", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, initiatedByOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "initiatedByRBC", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, initiatedByRBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L111", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L111), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L109", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L109), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L107", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L107), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L106), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L105", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L105), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L104", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L104), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L103), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L102), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_bool), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L101), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L100", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg, _L100), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 24 },
    /* 25 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_157, 1, 25 }
};
const MappingScope scope_156 = {
    "MoRC_Pck::Subfunc_Pkg::establishSession_v2/ establishSession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_156_entries, 26
};

const MappingEntry scope_155_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM, NULL, 1, 0 }
};
const MappingScope scope_155 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:establishingSession:<2",
    scope_155_entries, 1
};

const MappingEntry scope_154_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM, NULL, 1, 0 }
};
const MappingScope scope_154 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:establishingSession:<1",
    scope_154_entries, 1
};

const MappingEntry scope_153_entries[21] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_terminatingSession_1_establishingSession_Session_SM, &scope_154, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_establishingSession_maintainingSession_2_establishingSession_Session_SM, &scope_155, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L8", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L8_establishingSession_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_24, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L7_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L6_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L5_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L4_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L3_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L2_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L1", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L1_establishingSession_Session_SM), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_44, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L9_establishingSession_Session_SM), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_48, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L10_establishingSession_Session_SM), &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_47, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L11_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L12_establishingSession_Session_SM), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_23, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L13_establishingSession_Session_SM), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_44, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L14", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L14_establishingSession_Session_SM), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_44, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L15_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L16_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L17_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L18_establishingSession_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, NULL, 1, 19 },
    /* 20 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::establishSession_v2 1", NULL, sizeof(outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Context_establishSession_v2_1), NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_156, 1, 20 }
};
const MappingScope scope_153 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:establishingSession:",
    scope_153_entries, 21
};

const MappingEntry scope_152_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM, NULL, 1, 0 }
};
const MappingScope scope_152 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:sessionTerminated:<1",
    scope_152_entries, 1
};

const MappingEntry scope_151_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_150_entries[6], isActive_SSM_TR_Session_SM_SSM_TR_sessionTerminated_establishingSession_1_sessionTerminated_Session_SM, &scope_152, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L3_sessionTerminated_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_24, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L5_sessionTerminated_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_24, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L6_sessionTerminated_Session_SM), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L7_sessionTerminated_Session_SM), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_48, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L8_sessionTerminated_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_24, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L29_sessionTerminated_Session_SM), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_C), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L30_sessionTerminated_Session_SM), &_Type_NID_C_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_RBC), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L31_sessionTerminated_Session_SM), &_Type_NID_RBC_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_RADIO), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L32_sessionTerminated_Session_SM), &_Type_NID_RADIO_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L34_sessionTerminated_Session_SM), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L35", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L35_sessionTerminated_Session_SM), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_24, 1, 11 }
};
const MappingScope scope_151 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:sessionTerminated:",
    scope_151_entries, 12
};

const MappingEntry scope_150_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Session_SM), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_state_act), &_Type_SSM_ST_Session_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Session_SM), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_state_nxt), &_Type_SSM_ST_Session_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Session_SM), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_state_sel), &_Type_SSM_ST_Session_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Session_SM), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_fired_strong), &_Type_SSM_TR_Session_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Session_SM), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, Session_SM_fired), &_Type_SSM_TR_Session_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "sessionTerminated:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_sessionTerminated_Session_SM, &scope_151, 1, 7 },
    /* 8 */ { MAP_STATE, "establishingSession:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_establishingSession_Session_SM, &scope_153, 1, 8 },
    /* 9 */ { MAP_STATE, "maintainingSession:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_maintainingSession_Session_SM, &scope_187, 1, 9 },
    /* 10 */ { MAP_STATE, "terminatingSession:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_SSM_ST_Session_SM_SSM_st_terminatingSession_Session_SM, &scope_191, 1, 10 }
};
const MappingScope scope_150 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_PkgSession_SM:",
    scope_150_entries, 11
};

const MappingEntry scope_149_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "p42_SessionManagement_out", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, p42_SessionManagement_out), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "send_m155_initiationOfACommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, send_m155_initiationOfACommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "send_m156_TerminationOfCommunicationSession", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, send_m156_TerminationOfCommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "send_m159_sessionEstablishedReport", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, send_m159_sessionEstablishedReport), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "send_m154_noCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, send_m154_noCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "requestSafeRadioConnectionSetup", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, requestSafeRadioConnectionSetup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "infomDriverNoCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, infomDriverNoCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "requestReleaseOfSafeRadioConnection", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, requestReleaseOfSafeRadioConnection), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "sessionStatus", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "notReady", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, notReady), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_SIGNAL, "sNotReady", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, sNotReady), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "sessionStatus_l", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, sessionStatus_l), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 11 },
    /* 12 */ { MAP_LOCAL, "initializeSession", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, initializeSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "terminateSession", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, terminateSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "established", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, established), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "terminated", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, terminated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_AUTOMATON, "Session_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_150, 1, 17 }
};
const MappingScope scope_149 = {
    "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2/ sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg",
    scope_149_entries, 18
};

const MappingEntry scope_148_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_148 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Reregistering:<1",
    scope_148_entries, 1
};

const MappingEntry scope_147_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Reregistering_Registering_1_Reregistering_Register_SM, &scope_148, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Reregistering_Register_SM), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Reregistering_Register_SM, NULL, 1, 1 }
};
const MappingScope scope_147 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Reregistering:",
    scope_147_entries, 2
};

const MappingEntry scope_146_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Unregistered_3_Registered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_146 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registered:<3",
    scope_146_entries, 1
};

const MappingEntry scope_145_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Registering_2_Registered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_145 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registered:<2",
    scope_145_entries, 1
};

const MappingEntry scope_144_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Reregistering_1_Registered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_144 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registered:<1",
    scope_144_entries, 1
};

const MappingEntry scope_143_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Reregistering_1_Registered_Register_SM, &scope_144, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Registering_2_Registered_Register_SM, &scope_145, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registered_Unregistered_3_Registered_Register_SM, &scope_146, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Registered_Register_SM), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Registered_Register_SM, NULL, 1, 3 }
};
const MappingScope scope_143 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registered:",
    scope_143_entries, 4
};

const MappingEntry scope_142_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registering_Registered_2_Registering_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_142 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registering:<2",
    scope_142_entries, 1
};

const MappingEntry scope_141_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registering_Reregistering_1_Registering_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_141 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registering:<1",
    scope_141_entries, 1
};

const MappingEntry scope_140_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registering_Reregistering_1_Registering_Register_SM, &scope_141, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Registering_Registered_2_Registering_Register_SM, &scope_142, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L3_Registering_Register_SM), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Registering_Register_SM, NULL, 1, 2 }
};
const MappingScope scope_140 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Registering:",
    scope_140_entries, 3
};

const MappingEntry scope_139_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_139 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Unregistered:<3",
    scope_139_entries, 1
};

const MappingEntry scope_138_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_138 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Unregistered:<2",
    scope_138_entries, 1
};

const MappingEntry scope_137_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM, NULL, 1, 0 }
};
const MappingScope scope_137 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Unregistered:<1",
    scope_137_entries, 1
};

const MappingEntry scope_136_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_1_Unregistered_Register_SM, &scope_137, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registering_2_Unregistered_Register_SM, &scope_138, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_135_entries[5], isActive_SSM_TR_Register_SM_SSM_TR_Unregistered_Registered_3_Unregistered_Register_SM, &scope_139, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_Unregistered_Register_SM), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Unregistered_Register_SM, NULL, 1, 3 }
};
const MappingScope scope_136 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:Unregistered:",
    scope_136_entries, 4
};

const MappingEntry scope_135_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Register_SM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_state_act), &_Type_SSM_ST_Register_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Register_SM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_state_nxt), &_Type_SSM_ST_Register_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Register_SM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_state_sel), &_Type_SSM_ST_Register_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Register_SM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_fired_strong), &_Type_SSM_TR_Register_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Register_SM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Register_SM_fired), &_Type_SSM_TR_Register_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Unregistered:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Unregistered_Register_SM, &scope_136, 1, 7 },
    /* 8 */ { MAP_STATE, "Registering:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Registering_Register_SM, &scope_140, 1, 8 },
    /* 9 */ { MAP_STATE, "Registered:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Registered_Register_SM, &scope_143, 1, 9 },
    /* 10 */ { MAP_STATE, "Reregistering:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_SSM_ST_Register_SM_SSM_st_Reregistering_Register_SM, &scope_147, 1, 10 }
};
const MappingScope scope_135 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_PkgRegister_SM:",
    scope_135_entries, 11
};

const MappingEntry scope_134_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "FE_Output", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, FE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_134 = {
    "digital::FallingEdge/ FallingEdge_digital",
    scope_134_entries, 6
};

const MappingEntry scope_133_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "FFS_Output", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, FFS_Output_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L10_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L4_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L5_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L6_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L11_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L12_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L13_FlipFlopSet_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_133 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg/digital::FlipFlopSet 1",
    scope_133_entries, 9
};

const MappingEntry scope_132_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_5_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_5_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_5_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_132 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 5",
    scope_132_entries, 9
};

const MappingEntry scope_131_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_4_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_4_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_4_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_131 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 4",
    scope_131_entries, 9
};

const MappingEntry scope_130_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_2_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_2_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_2_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_130 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 2",
    scope_130_entries, 9
};

const MappingEntry scope_129_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_1_struct), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_129 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 1",
    scope_129_entries, 9
};

const MappingEntry scope_128_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(NID_PACKET), offsetof(outC_C_P045_compr_onboard_TM_conversions, nid_packet_CAST_Int_to_NID_PACKET_1), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L1_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L5_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L4_CAST_Int_to_NID_PACKET_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L3_CAST_Int_to_NID_PACKET_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L2_CAST_Int_to_NID_PACKET_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_128 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_NID_PACKET 1",
    scope_128_entries, 6
};

const MappingEntry scope_127_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1), &_Type_Q_DIR_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_127 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:then:",
    scope_127_entries, 2
};

const MappingEntry scope_126_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_126 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:then:",
    scope_126_entries, 2
};

const MappingEntry scope_125_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_125 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:then:",
    scope_125_entries, 2
};

const MappingEntry scope_124_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1), &_Type_Q_DIR_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 }
};
const MappingScope scope_124 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:else:",
    scope_124_entries, 2
};

const MappingEntry scope_123_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_123_entries[0], isActive_kcg_bool_kcg_false, &scope_124, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_123_entries[0], isActive_kcg_bool_kcg_true, &scope_125, 1, 2 }
};
const MappingScope scope_123 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:else:",
    scope_123_entries, 3
};

const MappingEntry scope_122_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, else_clock_CAST_Int_to_Q_DIR_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_false, &scope_123, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_true, &scope_126, 1, 2 }
};
const MappingScope scope_122 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:else:",
    scope_122_entries, 3
};

const MappingEntry scope_121_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, IfBlock1_clock_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_false, &scope_122, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 2 }
};
const MappingScope scope_121 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1IfBlock1:",
    scope_121_entries, 3
};

const MappingEntry scope_120_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, q_dir_CAST_Int_to_Q_DIR_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, error_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, q_dir_in_CAST_Int_to_Q_DIR_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L13_CAST_Int_to_Q_DIR_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L12_CAST_Int_to_Q_DIR_1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_121, 1, 5 }
};
const MappingScope scope_120 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions/TM_conversions::CAST_Int_to_Q_DIR 1",
    scope_120_entries, 6
};

const MappingEntry scope_119_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "nid_mn", NULL, sizeof(NID_MN), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, nid_mn), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MN_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_119 = {
    "TM_conversions::CAST_Int_to_NID_MN/ CAST_Int_to_NID_MN_TM_conversions",
    scope_119_entries, 6
};

const MappingEntry scope_118_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "P045_onboard", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_C_P045_compr_onboard_TM_conversions, P045_onboard), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(NID_PACKET), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L12), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_DIR), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L11), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L10), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_MN), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L4), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L20), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L21), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L24), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_C_P045_compr_onboard_TM_conversions, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MN 1", NULL, sizeof(outC_CAST_Int_to_NID_MN_TM_conversions), offsetof(outC_C_P045_compr_onboard_TM_conversions, Context_CAST_Int_to_NID_MN_1), NULL, NULL, NULL, &scope_119, 1, 12 },
    /* 13 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 13 },
    /* 14 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_NID_PACKET 1", NULL, 0, 0, NULL, NULL, NULL, &scope_128, 1, 14 }
};
const MappingScope scope_118 = {
    "TM_conversions::C_P045_compr_onboard/ C_P045_compr_onboard_TM_conversions",
    scope_118_entries, 15
};

const MappingEntry scope_117_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, PacketOut), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L9), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L20), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L29), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L31), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 }
};
const MappingScope scope_117 = {
    "TM_lib_internal::RECV_ReadPacketKernelLoop/ RECV_ReadPacketKernelLoop_TM_lib_internal",
    scope_117_entries, 14
};

const MappingEntry scope_116_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(CompressedPacketData_T_Common_Types_Pkg), 0, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 0 }
};
const MappingScope scope_116 = {
    "array_int32_500_500",
    scope_116_entries, 1
};

const MappingEntry scope_115_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "PacketOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, PacketOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L6), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L7), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(array_int32_500_500), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L18), &_Type_array_int32_500_500_Utils, NULL, NULL, &scope_116, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L22), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L24), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernelLoop 1", &iter_mapwi_500, sizeof(outC_RECV_ReadPacketKernelLoop_TM_lib_internal), offsetof(outC_RECV_ReadPacketKernel_TM_lib_internal, Context_RECV_ReadPacketKernelLoop_1), NULL, NULL, NULL, &scope_117, 1, 11 }
};
const MappingScope scope_115 = {
    "TM_lib_internal::RECV_ReadPacketKernel/ RECV_ReadPacketKernel_TM_lib_internal",
    scope_115_entries, 12
};

const MappingEntry scope_114_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_Element_TM_lib_internal, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_114 = {
    "TM_lib_internal::T_Filter_Metadata_Element/ T_Filter_Metadata_Element_TM_lib_internal",
    scope_114_entries, 7
};

const MappingEntry scope_113_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "nid_packet", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, nid_packet), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "id", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, id), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "m_version", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, m_version), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L8), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_T_Decode_metadata_new_TM_lib_internal, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 }
};
const MappingScope scope_113 = {
    "TM_lib_internal::T_Decode_metadata_new/ T_Decode_metadata_new_TM_lib_internal",
    scope_113_entries, 13
};

const MappingEntry scope_112_entries[19] = {
    /* 0 */ { MAP_OUTPUT, "data_match", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, data_match), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L8), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_T_Filter_Metadata_TM_lib_internal, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 1", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_T_Decode_metadata_new_1), NULL, NULL, NULL, &scope_113, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "TM_lib_internal::T_Decode_metadata_new 2", NULL, sizeof(outC_T_Decode_metadata_new_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_T_Decode_metadata_new_2), NULL, NULL, NULL, &scope_113, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 1", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_T_Filter_Metadata_Element_1), NULL, NULL, NULL, &scope_114, 1, 17 },
    /* 18 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata_Element 3", NULL, sizeof(outC_T_Filter_Metadata_Element_TM_lib_internal), offsetof(outC_T_Filter_Metadata_TM_lib_internal, Context_T_Filter_Metadata_Element_3), NULL, NULL, NULL, &scope_114, 1, 18 }
};
const MappingScope scope_112 = {
    "TM_lib_internal::T_Filter_Metadata/ T_Filter_Metadata_TM_lib_internal",
    scope_112_entries, 19
};

const MappingEntry scope_111_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L4), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L31), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacketLoop_TM_lib_internal, Context_T_Filter_Metadata_1), NULL, NULL, NULL, &scope_112, 1, 11 }
};
const MappingScope scope_111 = {
    "TM_lib_internal::RECV_LookupPacketLoop/ RECV_LookupPacketLoop_TM_lib_internal",
    scope_111_entries, 12
};

const MappingEntry scope_110_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_110 = {
    "array_bool_30",
    scope_110_entries, 1
};

const MappingEntry scope_109_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(kcg_int32), 0, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_109 = {
    "array_int32_30",
    scope_109_entries, 1
};

const MappingEntry scope_108_entries[27] = {
    /* 0 */ { MAP_OUTPUT, "Found", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Found), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Index", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Index), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "HeaderFound", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, HeaderFound), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_38, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_int32_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L3), &_Type_array_int32_30_Utils, NULL, NULL, &scope_109, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L23), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(NID_PACKET), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L24), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L26), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L22), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L27), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L28), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L29), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L38", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L38), &_Type_array_bool_30_Utils, NULL, NULL, &scope_110, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L40", NULL, sizeof(array_bool_30), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L40), &_Type_array_bool_30_Utils, NULL, NULL, &scope_110, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_RECV_LookupPacket_TM_lib_internal, _L45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacketLoop 1", &iter_foldwi_30, sizeof(outC_RECV_LookupPacketLoop_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_RECV_LookupPacketLoop_1), NULL, NULL, NULL, &scope_111, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "TM_lib_internal::T_Filter_Metadata 1", NULL, sizeof(outC_T_Filter_Metadata_TM_lib_internal), offsetof(outC_RECV_LookupPacket_TM_lib_internal, Context_T_Filter_Metadata_1), NULL, NULL, NULL, &scope_112, 1, 26 }
};
const MappingScope scope_108 = {
    "TM_lib_internal::RECV_LookupPacket/ RECV_LookupPacket_TM_lib_internal",
    scope_108_entries, 27
};

const MappingEntry scope_107_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "Data", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Data), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Metadata", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Metadata), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L4), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L48), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L47", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L47), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_38, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "TM_lib_internal::RECV_LookupPacket 1", NULL, sizeof(outC_RECV_LookupPacket_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_RECV_LookupPacket_1), NULL, NULL, NULL, &scope_108, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPacketKernel 1", NULL, sizeof(outC_RECV_ReadPacketKernel_TM_lib_internal), offsetof(outC_RECV_ReadPackets_TM_lib_internal, Context_RECV_ReadPacketKernel_1), NULL, &scope_107_entries[16], isActive_kcg_bool_kcg_true, &scope_115, 1, 15 },
    /* 16 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_RECV_ReadPackets_TM_lib_internal, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 16 }
};
const MappingScope scope_107 = {
    "TM_lib_internal::RECV_ReadPackets/ RECV_ReadPackets_TM_lib_internal",
    scope_107_entries, 17
};

const MappingEntry scope_106_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "received", NULL, sizeof(kcg_bool), offsetof(outC_Read_P045_TM, received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "P045_OBU_out", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_Read_P045_TM, P045_OBU_out), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Read_P045_TM, _L5), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Read_P045_TM, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Read_P045_TM, _L30), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L166", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_Read_P045_TM, _L166), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L167", NULL, sizeof(kcg_bool), offsetof(outC_Read_P045_TM, _L167), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "TM_lib_internal::RECV_ReadPackets 1", NULL, sizeof(outC_RECV_ReadPackets_TM_lib_internal), offsetof(outC_Read_P045_TM, Context_RECV_ReadPackets_1), NULL, NULL, NULL, &scope_107, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "TM_conversions::C_P045_compr_onboard 1", NULL, sizeof(outC_C_P045_compr_onboard_TM_conversions), offsetof(outC_Read_P045_TM, Context_C_P045_compr_onboard_1), NULL, NULL, NULL, &scope_118, 1, 8 }
};
const MappingScope scope_106 = {
    "TM::Read_P045/ Read_P045_TM",
    scope_106_entries, 9
};

const MappingEntry scope_105_entries[153] = {
    /* 0 */ { MAP_OUTPUT, "memorizeTheLastRadioNetworkID", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, memorizeTheLastRadioNetworkID), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "lastReceivedRadioNetworkID", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, lastReceivedRadioNetworkID), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "rejectOrderToContactRBC_or_RIU", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, rejectOrderToContactRBC_or_RIU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "mobileRegistrationCmd", NULL, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, mobileRegistrationCmd), &_Type_mobileRegistrationCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "mobileRegistrationStatus", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, mobileRegistrationStatus), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 4 },
    /* 5 */ { MAP_SIGNAL, "sRegister", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, sRegister), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_SIGNAL, "sUnregister", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, sUnregister), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_SIGNAL, "sResetDelayedOrderFlag", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, sResetDelayedOrderFlag), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "triggerRegistrationOfMobile", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, triggerRegistrationOfMobile), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "lastReceivedRadioNetworkID_loc", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, lastReceivedRadioNetworkID_loc), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 9 },
    /* 10 */ { MAP_LOCAL, "orderRegistrationImmediately", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, orderRegistrationImmediately), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "orderRegistrationDelayed", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, orderRegistrationDelayed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "resetDelayedOrderFlag", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, resetDelayedOrderFlag), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "safeRadioConnectionReleased", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, safeRadioConnectionReleased), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "registrationStatusFromMobile", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, registrationStatusFromMobile), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "registrationStatus", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, registrationStatus), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_PROBE, "p45_registrationOrderReceived_p", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, p45_registrationOrderReceived_p), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L132", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L132), &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L148", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L148), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L149", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L149), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L147", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L147), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L150", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L150), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L151", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L151), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L153", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L153), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L154), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L164", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L164), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L163", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L163), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L165", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L165), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L131", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L131), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L175", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L175), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L174", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L174), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L173", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L173), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L176", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L176), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L178", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L178), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L177", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L177), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L180", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L180), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L181", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L181), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L182", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L182), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L183", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L183), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L184", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L184), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L199", NULL, sizeof(M_LEVEL), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L199), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L198", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L198), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L197", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L197), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L196", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L196), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L195", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L195), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L194", NULL, sizeof(M_LEVEL), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L194), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L193", NULL, sizeof(M_LEVEL), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L193), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L200", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L200), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L211", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L211), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L212", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L212), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L213), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L214", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L214), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L218), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L219), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L220", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L220), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L221", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L221), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L222", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L222), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L223", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L223), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L224", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L224), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L225", NULL, sizeof(NID_MN), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L225), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L228", NULL, sizeof(NID_MN), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L228), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L227", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L227), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L229", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L229), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L230", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L230), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L231", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L231), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L232", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L232), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L237", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L237), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L240", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L240), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L241", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L241), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L242", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L242), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L243", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L243), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L244", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L244), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L245", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L245), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L247", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L247), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L249", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L249), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L252", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L252), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L253", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L253), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L254", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L254), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L255", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L255), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L256", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L256), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L289", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L289), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L290", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L290), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L291", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L291), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L292", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L292), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L293", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L293), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L294", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L294), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L295", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L295), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L296", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L296), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L297", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L297), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90 },
    /* 91 */ { MAP_LOCAL, "_L299", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L299), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 91 },
    /* 92 */ { MAP_LOCAL, "_L300", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L300), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 92 },
    /* 93 */ { MAP_LOCAL, "_L302", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L302), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 93 },
    /* 94 */ { MAP_LOCAL, "_L303", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L303), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 94 },
    /* 95 */ { MAP_LOCAL, "_L304", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L304), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 95 },
    /* 96 */ { MAP_LOCAL, "_L305", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L305), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 96 },
    /* 97 */ { MAP_LOCAL, "_L306", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L306), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 97 },
    /* 98 */ { MAP_LOCAL, "_L307", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L307), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 98 },
    /* 99 */ { MAP_LOCAL, "_L308", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L308), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 99 },
    /* 100 */ { MAP_LOCAL, "_L309", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L309), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 100 },
    /* 101 */ { MAP_LOCAL, "_L310", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L310), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 101 },
    /* 102 */ { MAP_LOCAL, "_L311", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L311), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 102 },
    /* 103 */ { MAP_LOCAL, "_L312", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L312), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 103 },
    /* 104 */ { MAP_LOCAL, "_L313", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L313), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 104 },
    /* 105 */ { MAP_LOCAL, "_L314", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L314), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 105 },
    /* 106 */ { MAP_LOCAL, "_L315", NULL, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L315), &_Type_mobileRegistrationCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 106 },
    /* 107 */ { MAP_LOCAL, "_L316", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L316), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 107 },
    /* 108 */ { MAP_LOCAL, "_L317", NULL, sizeof(mobileRegistrationAction_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L317), &_Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 108 },
    /* 109 */ { MAP_LOCAL, "_L318", NULL, sizeof(mobileRegistrationAction_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L318), &_Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 109 },
    /* 110 */ { MAP_LOCAL, "_L319", NULL, sizeof(mobileRegistrationAction_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L319), &_Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 110 },
    /* 111 */ { MAP_LOCAL, "_L320", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L320), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 111 },
    /* 112 */ { MAP_LOCAL, "_L321", NULL, sizeof(NID_MN), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L321), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 112 },
    /* 113 */ { MAP_LOCAL, "_L324", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L324), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 113 },
    /* 114 */ { MAP_LOCAL, "_L325", NULL, sizeof(mobileHealthStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L325), &_Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 114 },
    /* 115 */ { MAP_LOCAL, "_L326", NULL, sizeof(mobileHealthStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L326), &_Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 115 },
    /* 116 */ { MAP_LOCAL, "_L327", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L327), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 116 },
    /* 117 */ { MAP_LOCAL, "_L328", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L328), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 117 },
    /* 118 */ { MAP_LOCAL, "_L331", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L331), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 118 },
    /* 119 */ { MAP_LOCAL, "_L332", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L332), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 119 },
    /* 120 */ { MAP_LOCAL, "_L333", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L333), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 120 },
    /* 121 */ { MAP_LOCAL, "_L334", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L334), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 121 },
    /* 122 */ { MAP_LOCAL, "_L335", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L335), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 122 },
    /* 123 */ { MAP_LOCAL, "_L343", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L343), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 123 },
    /* 124 */ { MAP_LOCAL, "_L345", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L345), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 124 },
    /* 125 */ { MAP_LOCAL, "_L346", NULL, sizeof(kcg_int32), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L346), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 125 },
    /* 126 */ { MAP_LOCAL, "_L347", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L347), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 126 },
    /* 127 */ { MAP_LOCAL, "_L349", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L349), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 127 },
    /* 128 */ { MAP_LOCAL, "_L353", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L353), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 128 },
    /* 129 */ { MAP_LOCAL, "_L354", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L354), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 129 },
    /* 130 */ { MAP_LOCAL, "_L355", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L355), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 130 },
    /* 131 */ { MAP_LOCAL, "_L357", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L357), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 131 },
    /* 132 */ { MAP_LOCAL, "_L358", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L358), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 132 },
    /* 133 */ { MAP_LOCAL, "_L359", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L359), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 133 },
    /* 134 */ { MAP_LOCAL, "_L360", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L360), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 134 },
    /* 135 */ { MAP_LOCAL, "_L363", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L363), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 135 },
    /* 136 */ { MAP_LOCAL, "_L364", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L364), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 136 },
    /* 137 */ { MAP_LOCAL, "_L365", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L365), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 137 },
    /* 138 */ { MAP_LOCAL, "_L366", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L366), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 138 },
    /* 139 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L367), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 139 },
    /* 140 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_bool), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L369), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 140 },
    /* 141 */ { MAP_LOCAL, "_L368", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, _L368), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 141 },
    /* 142 */ { MAP_INSTANCE, "TM::Read_P045 1", NULL, sizeof(outC_Read_P045_TM), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Context_Read_P045_1), NULL, NULL, NULL, &scope_106, 1, 142 },
    /* 143 */ { MAP_EXPANDED, "linear::Memory 1", NULL, 0, 0, NULL, NULL, NULL, &scope_129, 1, 143 },
    /* 144 */ { MAP_EXPANDED, "linear::Memory 2", NULL, 0, 0, NULL, NULL, NULL, &scope_130, 1, 144 },
    /* 145 */ { MAP_EXPANDED, "linear::Memory 4", NULL, 0, 0, NULL, NULL, NULL, &scope_131, 1, 145 },
    /* 146 */ { MAP_EXPANDED, "linear::Memory 5", NULL, 0, 0, NULL, NULL, NULL, &scope_132, 1, 146 },
    /* 147 */ { MAP_INSTANCE, "digital::RisingEdge 6", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_6), NULL, NULL, NULL, &scope_70, 1, 147 },
    /* 148 */ { MAP_INSTANCE, "digital::RisingEdge 7", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_7), NULL, NULL, NULL, &scope_70, 1, 148 },
    /* 149 */ { MAP_EXPANDED, "digital::FlipFlopSet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_133, 1, 149 },
    /* 150 */ { MAP_INSTANCE, "digital::FallingEdge 1", NULL, sizeof(outC_FallingEdge_digital), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Context_FallingEdge_1), NULL, NULL, NULL, &scope_134, 1, 150 },
    /* 151 */ { MAP_AUTOMATON, "Register_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 151 },
    /* 152 */ { MAP_INSTANCE, "digital::RisingEdge 8", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_8), NULL, NULL, NULL, &scope_70, 1, 152 }
};
const MappingScope scope_105 = {
    "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg",
    scope_105_entries, 153
};

const MappingEntry scope_104_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_104 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:then:",
    scope_104_entries, 1
};

const MappingEntry scope_103_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_103 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:then:",
    scope_103_entries, 1
};

const MappingEntry scope_102_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_102 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:then:",
    scope_102_entries, 1
};

const MappingEntry scope_101_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_101 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:then:",
    scope_101_entries, 1
};

const MappingEntry scope_100_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L1_else_else_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_100 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:else:",
    scope_100_entries, 1
};

const MappingEntry scope_99_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_false, &scope_100, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_true, &scope_101, 1, 2 }
};
const MappingScope scope_99 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:",
    scope_99_entries, 3
};

const MappingEntry scope_98_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_false, &scope_99, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_true, &scope_102, 1, 2 }
};
const MappingScope scope_98 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:",
    scope_98_entries, 3
};

const MappingEntry scope_97_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_false, &scope_98, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_true, &scope_103, 1, 2 }
};
const MappingScope scope_97 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:",
    scope_97_entries, 3
};

const MappingEntry scope_96_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_false, &scope_97, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_true, &scope_104, 1, 2 }
};
const MappingScope scope_96 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_PkgIfBlock1:",
    scope_96_entries, 3
};

const MappingEntry scope_95_entries[47] = {
    /* 0 */ { MAP_OUTPUT, "mobileConnectionCmd", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, mobileConnectionCmd), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "connectionStatus", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, connectionStatus), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "rejectOrderToContactRBC_or_RIU", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, rejectOrderToContactRBC_or_RIU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "connect", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, connect), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "disconnect", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, disconnect), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "enterHole", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, enterHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "leaveHole", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, leaveHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "action", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, action), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L354", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L354), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L355", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L355), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L356", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L356), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L357", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L357), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L358", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L358), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L359", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L359), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L360", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L360), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L362", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L362), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L363", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L363), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L364", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L364), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L365", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L365), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L366", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L366), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L367), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L368), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L370), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L371), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L372", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L372), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L373", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L373), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L374", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L374), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L375", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L375), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L376", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L376), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L377", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L377), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L379", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L379), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L380", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L380), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L381", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L381), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L382", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L382), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L383", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L383), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L384", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L384), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L385", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L385), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L386", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L386), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L387), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_bool), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L388), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L389", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L389), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int32), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L390), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L391", NULL, sizeof(NID_RADIO), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L391), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L392", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L392), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L393", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L393), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L394", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg, _L394), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 45 },
    /* 46 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_96, 1, 46 }
};
const MappingScope scope_95 = {
    "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg",
    scope_95_entries, 47
};

const MappingEntry scope_94_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Out_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L8_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L7_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L6_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L5_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L3_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L2_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_Memory_1_struct), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L9_Memory_1_struct), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_0, 1, 8 }
};
const MappingScope scope_94 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg/linear::Memory 1",
    scope_94_entries, 9
};

const MappingEntry scope_93_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L12_then_IfBlock1), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L11_then_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L7_then_IfBlock1), &_Type_NID_RADIO_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L5_then_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L4_then_IfBlock1), &_Type_kcg_int32_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L14_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_93 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:then:",
    scope_93_entries, 6
};

const MappingEntry scope_92_entries[10] = {
    /* 0 */ { MAP_LOCAL, "_L8", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L8_then_else_IfBlock1), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L5_then_else_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L3_then_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L2_then_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L4_then_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L9_then_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L10_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L11_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L12_then_else_IfBlock1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_44, 1, 9 }
};
const MappingScope scope_92 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:then:",
    scope_92_entries, 10
};

const MappingEntry scope_91_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L21", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L21_then_else_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L19", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L19_then_else_else_IfBlock1), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L16_then_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L15_then_else_else_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L14_then_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L22_then_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_91 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:then:",
    scope_91_entries, 6
};

const MappingEntry scope_90_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L10_then_else_else_else_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L8_then_else_else_else_IfBlock1), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, &scope_26, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L7_then_else_else_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L6_then_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L5_then_else_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L11_then_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 }
};
const MappingScope scope_90 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:then:",
    scope_90_entries, 6
};

const MappingEntry scope_89_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L23", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L23_else_else_else_else_IfBlock1), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, &scope_26, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L22", NULL, sizeof(NID_RADIO), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L22_else_else_else_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L21_else_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L16_else_else_else_else_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, &scope_23, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L15_else_else_else_else_IfBlock1), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L24_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_88_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5 }
};
const MappingScope scope_89 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:else:",
    scope_89_entries, 6
};

const MappingEntry scope_88_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_88_entries[0], isActive_kcg_bool_kcg_false, &scope_89, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_88_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2 }
};
const MappingScope scope_88 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:",
    scope_88_entries, 3
};

const MappingEntry scope_87_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_86_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_88, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_91, 1, 2 }
};
const MappingScope scope_87 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:",
    scope_87_entries, 3
};

const MappingEntry scope_86_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_false, &scope_87, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_86_entries[0], isActive_kcg_bool_kcg_true, &scope_92, 1, 2 }
};
const MappingScope scope_86 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:",
    scope_86_entries, 3
};

const MappingEntry scope_85_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2 }
};
const MappingScope scope_85 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_PkgIfBlock1:",
    scope_85_entries, 3
};

const MappingEntry scope_84_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_84 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Expired:<1",
    scope_84_entries, 1
};

const MappingEntry scope_83_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_83 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Expired:<2",
    scope_83_entries, 1
};

const MappingEntry scope_82_entries[3] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Counting_2_Expired_TimerStatus_SM, &scope_83, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Expired_Stopped_1_Expired_TimerStatus_SM, &scope_84, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L1_Expired_TimerStatus_SM), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Expired_TimerStatus_SM, NULL, 1, 2 }
};
const MappingScope scope_82 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Expired:",
    scope_82_entries, 3
};

const MappingEntry scope_81_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, Memorized_MemoryBasic_1_int32), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L2_MemoryBasic_1_int32), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L4_MemoryBasic_1_int32), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L5_MemoryBasic_1_int32), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L6_MemoryBasic_1_int32), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L7_MemoryBasic_1_int32), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 5 }
};
const MappingScope scope_81 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:/linear::MemoryBasic 1",
    scope_81_entries, 6
};

const MappingEntry scope_80_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_80 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:<1",
    scope_80_entries, 1
};

const MappingEntry scope_79_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_79 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:<4",
    scope_79_entries, 1
};

const MappingEntry scope_78_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_78 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:<3",
    scope_78_entries, 1
};

const MappingEntry scope_77_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_77 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:<2",
    scope_77_entries, 1
};

const MappingEntry scope_76_entries[11] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_2_Counting_TimerStatus_SM, &scope_77, 1, 0 },
    /* 1 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Counting_3_Counting_TimerStatus_SM, &scope_78, 1, 1 },
    /* 2 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_72_entries[6], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Expired_4_Counting_TimerStatus_SM, &scope_79, 1, 2 },
    /* 3 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Counting_Stopped_1_Counting_TimerStatus_SM, &scope_80, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L1_Counting_TimerStatus_SM), &_Type_time_Type_MoRC_Pck_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L4_Counting_TimerStatus_SM), &_Type_time_Type_MoRC_Pck_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(time_Type_MoRC_Pck), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L5_Counting_TimerStatus_SM), &_Type_time_Type_MoRC_Pck_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L6_Counting_TimerStatus_SM), &_Type_kcg_int32_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L7_Counting_TimerStatus_SM), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L8_Counting_TimerStatus_SM), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, NULL, 1, 9 },
    /* 10 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 10 }
};
const MappingScope scope_76 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Counting:",
    scope_76_entries, 11
};

const MappingEntry scope_75_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_75 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Stopped:<2",
    scope_75_entries, 1
};

const MappingEntry scope_74_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM, NULL, 1, 0 }
};
const MappingScope scope_74 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Stopped:<1",
    scope_74_entries, 1
};

const MappingEntry scope_73_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Stopped_1_Stopped_TimerStatus_SM, &scope_74, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_72_entries[5], isActive_SSM_TR_TimerStatus_SM_SSM_TR_Stopped_Counting_2_Stopped_TimerStatus_SM, &scope_75, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L1_Stopped_TimerStatus_SM), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Stopped_TimerStatus_SM, NULL, 1, 2 }
};
const MappingScope scope_73 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:Stopped:",
    scope_73_entries, 3
};

const MappingEntry scope_72_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_TimerStatus_SM), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_state_act), &_Type_SSM_ST_TimerStatus_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_TimerStatus_SM), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_state_nxt), &_Type_SSM_ST_TimerStatus_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_TimerStatus_SM), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_state_sel), &_Type_SSM_ST_TimerStatus_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_TimerStatus_SM), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_fired_strong), &_Type_SSM_TR_TimerStatus_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_TimerStatus_SM), offsetof(outC_countDownTimer_MoRC_Pck_Utils, TimerStatus_SM_fired), &_Type_SSM_TR_TimerStatus_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Stopped:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Stopped_TimerStatus_SM, &scope_73, 1, 7 },
    /* 8 */ { MAP_STATE, "Counting:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Counting_TimerStatus_SM, &scope_76, 1, 8 },
    /* 9 */ { MAP_STATE, "Expired:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_SSM_ST_TimerStatus_SM_SSM_st_Expired_TimerStatus_SM, &scope_82, 1, 9 }
};
const MappingScope scope_72 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_UtilsTimerStatus_SM:",
    scope_72_entries, 10
};

const MappingEntry scope_71_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "expired", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, expired), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "started", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, started), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_SIGNAL, "sStart", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, sStart), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "expired_loc", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, expired_loc), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_MoRC_Pck_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_AUTOMATON, "TimerStatus_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_72, 1, 5 }
};
const MappingScope scope_71 = {
    "MoRC_Pck::Utils::countDownTimer/ countDownTimer_MoRC_Pck_Utils",
    scope_71_entries, 6
};

const MappingEntry scope_70_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "RE_Output", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, RE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_70 = {
    "digital::RisingEdge/ RisingEdge_digital",
    scope_70_entries, 6
};

const MappingEntry scope_69_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_69 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilStopConditionMet:<2",
    scope_69_entries, 1
};

const MappingEntry scope_68_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_68 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilStopConditionMet:<1",
    scope_68_entries, 1
};

const MappingEntry scope_67_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_inactive_1_rep_repeatUntilStopConditionMet_repeat_SM, &scope_68, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilStopConditionMet_rep_repeatUntilStopConditionMet_2_rep_repeatUntilStopConditionMet_repeat_SM, &scope_69, 1, 1 }
};
const MappingScope scope_67 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilStopConditionMet:",
    scope_67_entries, 2
};

const MappingEntry scope_66_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_66 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<2",
    scope_66_entries, 1
};

const MappingEntry scope_65_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_65 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<1",
    scope_65_entries, 1
};

const MappingEntry scope_64_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_inactive_1_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM, &scope_65, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM, &scope_66, 1, 1 }
};
const MappingScope scope_64 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:",
    scope_64_entries, 2
};

const MappingEntry scope_63_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_63 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_inactive:<2",
    scope_63_entries, 1
};

const MappingEntry scope_62_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM, NULL, 1, 0 }
};
const MappingScope scope_62 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_inactive:<1",
    scope_62_entries, 1
};

const MappingEntry scope_61_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_rep_inactive_repeat_SM, &scope_62, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_60_entries[5], isActive_SSM_TR_repeat_SM_SSM_TR_rep_inactive_rep_repeatUntilStopConditionMet_2_rep_inactive_repeat_SM, &scope_63, 1, 1 }
};
const MappingScope scope_61 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:rep_inactive:",
    scope_61_entries, 2
};

const MappingEntry scope_60_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_repeat_SM), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_state_act), &_Type_SSM_ST_repeat_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_repeat_SM), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_state_nxt), &_Type_SSM_ST_repeat_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_repeat_SM), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_state_sel), &_Type_SSM_ST_repeat_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_repeat_SM), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_fired_strong), &_Type_SSM_TR_repeat_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_repeat_SM), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeat_SM_fired), &_Type_SSM_TR_repeat_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "rep_inactive:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_repeat_SM_SSM_st_rep_inactive_repeat_SM, &scope_61, 1, 7 },
    /* 8 */ { MAP_STATE, "rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_repeat_SM_SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM, &scope_64, 1, 8 },
    /* 9 */ { MAP_STATE, "rep_repeatUntilStopConditionMet:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_SSM_ST_repeat_SM_SSM_st_rep_repeatUntilStopConditionMet_repeat_SM, &scope_67, 1, 9 }
};
const MappingScope scope_60 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkgrepeat_SM:",
    scope_60_entries, 10
};

const MappingEntry scope_59_entries[111] = {
    /* 0 */ { MAP_OUTPUT, "connectionCmd", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, connectionCmd), &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 0 },
    /* 1 */ { MAP_SIGNAL, "sRepeat", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, sRepeat), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "repeatUntilSuccessfulOrADefinedNumberOfTimes", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeatUntilSuccessfulOrADefinedNumberOfTimes), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "repeatUntilStopConditionMet", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeatUntilStopConditionMet), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "repeatStopCondition", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, repeatStopCondition), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "orderToTerminateSessionReceivedFromTrack", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, orderToTerminateSessionReceivedFromTrack), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "orderToEstablishSessionWithDifferentRBCReceivedFromTrack", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, orderToEstablishSessionWithDifferentRBCReceivedFromTrack), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "triggerRepeat", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, triggerRepeat), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "successfullyConnected", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, successfullyConnected), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "orderToEstablishSessionReceivedFromOBU", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, orderToEstablishSessionReceivedFromOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "considerSessionAsTerminated", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, considerSessionAsTerminated), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "connectedAgain", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, connectedAgain), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "connectionLost", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, connectionLost), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "p42_sessionManagement_mem", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, p42_sessionManagement_mem), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L197", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L197), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L198", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L198), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L199", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L199), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L200", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L200), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L201", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L201), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L202", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L202), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L203", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L203), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L204", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L204), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L205", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L205), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L206), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L207", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L207), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L208", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L208), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L209", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L209), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L210", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L210), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L211", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L211), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L212), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L213", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L213), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L215), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L216", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L216), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L348", NULL, sizeof(Q_RBC), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L348), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L347", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L347), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L346", NULL, sizeof(NID_RBC), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L346), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L345", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L345), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L344", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L344), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L343", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L343), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L342", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L342), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L341", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L341), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L340", NULL, sizeof(Q_RBC), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L340), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L339", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L339), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L338", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L338), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L337", NULL, sizeof(Q_RBC), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L337), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L336), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L335", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L335), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L334", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L334), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L333", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L333), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L332", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L332), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L331", NULL, sizeof(NID_C), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L331), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L330", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L330), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L329", NULL, sizeof(NID_RBC), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L329), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L328", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L328), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L327", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L327), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L326", NULL, sizeof(NID_C), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L326), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L325", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L325), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L324", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L324), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L323", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L323), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L322", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L322), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L321", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L321), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L320", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L320), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L319", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L319), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L318", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L318), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L317", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L317), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L316", NULL, sizeof(M_MODE), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L316), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L349", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L349), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L350", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L350), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L351", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L351), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L352", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L352), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L353", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L353), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L354", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L354), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L355", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L355), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L361", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L361), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L368", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L368), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L369), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L370), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L371), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L372", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L372), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L373", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L373), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L397), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L395), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L396), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L394), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L393", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L393), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L392), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L391), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L390), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L389", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L389), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 90 },
    /* 91 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L388), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 91 },
    /* 92 */ { MAP_LOCAL, "_L387", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L387), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 92 },
    /* 93 */ { MAP_LOCAL, "_L385", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L385), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 93 },
    /* 94 */ { MAP_LOCAL, "_L384", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L384), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 94 },
    /* 95 */ { MAP_LOCAL, "_L381", NULL, sizeof(kcg_int32), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L381), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 95 },
    /* 96 */ { MAP_LOCAL, "_L380", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L380), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 96 },
    /* 97 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L399), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 97 },
    /* 98 */ { MAP_LOCAL, "_L400", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L400), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 98 },
    /* 99 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L401), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 99 },
    /* 100 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L402), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 100 },
    /* 101 */ { MAP_LOCAL, "_L403", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L403), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 101 },
    /* 102 */ { MAP_LOCAL, "_L404", NULL, sizeof(kcg_bool), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L404), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 102 },
    /* 103 */ { MAP_LOCAL, "_L405", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, _L405), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 103 },
    /* 104 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2 2", NULL, sizeof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Context_validate_q_sleepsession_v2_2), NULL, NULL, NULL, &scope_50, 1, 104 },
    /* 105 */ { MAP_AUTOMATON, "repeat_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_60, 1, 105 },
    /* 106 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_70, 1, 106 },
    /* 107 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Context_RisingEdge_2), NULL, NULL, NULL, &scope_70, 1, 107 },
    /* 108 */ { MAP_INSTANCE, "MoRC_Pck::Utils::countDownTimer 1", NULL, sizeof(outC_countDownTimer_MoRC_Pck_Utils), offsetof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_71, 1, 108 },
    /* 109 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_85, 1, 109 },
    /* 110 */ { MAP_EXPANDED, "linear::Memory 1", NULL, 0, 0, NULL, NULL, NULL, &scope_94, 1, 110 }
};
const MappingScope scope_59 = {
    "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg",
    scope_59_entries, 111
};

const MappingEntry scope_58_entries[17] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_IfBlock1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_44, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_then_IfBlock1), &_Type_NID_C_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_then_IfBlock1), &_Type_NID_RBC_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_then_IfBlock1), &_Type_NID_RBC_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_then_IfBlock1), &_Type_NID_RBC_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L8_then_IfBlock1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L9_then_IfBlock1), &_Type_NID_RBC_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L10_then_IfBlock1), &_Type_NID_RADIO_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L11_then_IfBlock1), &_Type_NID_RADIO_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L12_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L13_then_IfBlock1), &_Type_NID_RADIO_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L14_then_IfBlock1), &_Type_NID_RADIO_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L15", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L15_then_IfBlock1), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_41, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L16_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L17_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L18_then_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 16 }
};
const MappingScope scope_58 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:then:",
    scope_58_entries, 17
};

const MappingEntry scope_57_entries[7] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_IfBlock1), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_then_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_then_else_IfBlock1), &_Type_NID_RBC_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L5_then_else_IfBlock1), &_Type_NID_C_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L4_then_else_IfBlock1), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L3_then_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L13_then_else_IfBlock1), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_41, 1, 6 }
};
const MappingScope scope_57 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:then:",
    scope_57_entries, 7
};

const MappingEntry scope_56_entries[8] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_then_else_else_IfBlock1), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_45, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L8_then_else_else_IfBlock1), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_41, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L12_then_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L11_then_else_else_IfBlock1), &_Type_NID_RBC_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L10_then_else_else_IfBlock1), &_Type_NID_C_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L9_then_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L14_then_else_else_IfBlock1), &_Type_NID_RADIO_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L16_then_else_else_IfBlock1), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_23, 1, 7 }
};
const MappingScope scope_56 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:then:",
    scope_56_entries, 8
};

const MappingEntry scope_55_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, Output1_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L2_NumericToInt64_1_int32), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 }
};
const MappingScope scope_55 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:/math::NumericToInt64 1",
    scope_55_entries, 3
};

const MappingEntry scope_54_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L1_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L6_else_else_else_IfBlock1), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, &scope_41, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L7_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L8_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3 },
    /* 4 */ { MAP_EXPANDED, "math::NumericToInt64 1", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 4 }
};
const MappingScope scope_54 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:else:",
    scope_54_entries, 5
};

const MappingEntry scope_53_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_false, &scope_54, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_56, 1, 2 }
};
const MappingScope scope_53 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:else:",
    scope_53_entries, 3
};

const MappingEntry scope_52_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_false, &scope_53, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_57, 1, 2 }
};
const MappingScope scope_52 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:else:",
    scope_52_entries, 3
};

const MappingEntry scope_51_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_false, &scope_52, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_58, 1, 2 }
};
const MappingScope scope_51 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_PkgIfBlock1:",
    scope_51_entries, 3
};

const MappingEntry scope_50_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "execute", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, execute), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_MODE), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L2), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L1), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L3), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_SLEEPSESSION), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L4), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(M_MODE), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L9), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 }
};
const MappingScope scope_50 = {
    "MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2/ validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_50_entries, 13
};

const MappingEntry scope_49_entries[93] = {
    /* 0 */ { MAP_OUTPUT, "sessionEstablishCmd", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, sessionEstablishCmd), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 0 },
    /* 1 */ { MAP_LOCAL, "initiateSessionViaP42fromOBU", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, initiateSessionViaP42fromOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "initiateSessionFromOBU", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, initiateSessionFromOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "initiateSessionFromRBC", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, initiateSessionFromRBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "nid_c", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "nid_rbc", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "nid_radio", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 7 },
    /* 8 */ { MAP_LOCAL, "rbc_valid", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, rbc_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L96", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L96), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L97", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L97), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L99", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L99), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L106), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L107", NULL, sizeof(Q_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L107), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L108", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L108), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L109", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L109), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L112), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L113", NULL, sizeof(Q_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L113), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L114), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L115", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L115), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L116", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L116), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L117), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L126", NULL, sizeof(M_MODE), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L126), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L129), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L130", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L130), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L131), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L132", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L132), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L133), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L134), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L135", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L135), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L136), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L137", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L137), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L138", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L138), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L139), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L140), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L141), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L142), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L143), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L144), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L159", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L159), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L158", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L158), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L157", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L157), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L156", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L156), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L155", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L155), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L154), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L153", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L153), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L152", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L152), &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L185", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L185), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L184", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L184), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L183", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L183), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L182", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L182), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L181", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L181), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L187", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L187), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L188", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L188), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L194", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L194), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L193", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L193), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L192", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L192), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L190", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L190), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L189", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L189), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L196", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L196), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L197", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L197), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L199", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L199), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L200", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L200), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L201", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L201), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L202", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L202), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L203", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L203), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L204", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L204), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L205", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L205), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L206", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L206), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L207", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L207), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L208", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L208), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L209", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L209), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L210", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L210), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L211", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L211), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L212), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L215", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L215), &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L216), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L218), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L219", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L219), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L220", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L220), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L222", NULL, sizeof(Q_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L222), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L223", NULL, sizeof(NID_C), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L223), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L224", NULL, sizeof(NID_RADIO), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L224), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L225", NULL, sizeof(NID_RBC), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L225), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L226", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L226), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L227", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L227), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L228", NULL, sizeof(kcg_bool), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L228), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L229", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, _L229), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 90 },
    /* 91 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2", NULL, sizeof(outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg), offsetof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg, Context_validate_q_sleepsession_v2), NULL, NULL, NULL, &scope_50, 1, 91 },
    /* 92 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 92 }
};
const MappingScope scope_49 = {
    "MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ initiateSession_v2_MoRC_Pck_Subfunc_Pkg",
    scope_49_entries, 93
};

const MappingEntry scope_48_entries[10] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".initiatedByOBU", NULL, sizeof(kcg_bool), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, initiatedByOBU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".initiatedByRBC", NULL, sizeof(kcg_bool), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, initiatedByRBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".q_rbc", NULL, sizeof(Q_RBC), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, q_rbc), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".nid_rbc", NULL, sizeof(NID_RBC), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 7 },
    /* 8 */ { MAP_FIELD, ".m38", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, m38), &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 8 },
    /* 9 */ { MAP_FIELD, ".p42", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), offsetof(sessionCmd_T_RCM_Session_Types_Pkg, p42), &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 9 }
};
const MappingScope scope_48 = {
    "sessionCmd_T_RCM_Session_Types_Pkg",
    scope_48_entries, 10
};

const MappingEntry scope_47_entries[5] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".msgSrc", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg, msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".versionSupported", NULL, sizeof(kcg_bool), offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg, versionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 3 },
    /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_47 = {
    "m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg",
    scope_47_entries, 5
};

const MappingEntry scope_46_entries[4] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".msgSrc", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg, msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 2 },
    /* 3 */ { MAP_FIELD, ".lrbg", NULL, sizeof(NID_LRBG), offsetof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg, lrbg), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_46 = {
    "m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg",
    scope_46_entries, 4
};

const MappingEntry scope_45_entries[3] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".msgSrc", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg, msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 2 }
};
const MappingScope scope_45 = {
    "m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg",
    scope_45_entries, 3
};

const MappingEntry scope_44_entries[9] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".msgSrc", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, msgSrc), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".q_rbc", NULL, sizeof(Q_RBC), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, q_rbc), &_Type_Q_RBC_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".nid_RBC", NULL, sizeof(NID_RBC), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, nid_RBC), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".q_sleepsession", NULL, sizeof(Q_SLEEPSESSION), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, q_sleepsession), &_Type_Q_SLEEPSESSION_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".origin", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(p42_sessionManagement_T_RCM_MsgTypes_Pkg, origin), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 8 }
};
const MappingScope scope_44 = {
    "p42_sessionManagement_T_RCM_MsgTypes_Pkg",
    scope_44_entries, 9
};

const MappingEntry scope_43_entries[11] = {
    /* 0 */ { MAP_FIELD, ".radioNetworkID_Default", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, radioNetworkID_Default), &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nid_radio_shortNumberStoredOnboard", NULL, sizeof(NID_RADIO), offsetof(morc_configData_T_RCM_Session_Types_Pkg, nid_radio_shortNumberStoredOnboard), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".noOfRetriesOfSendingTerminationMessage", NULL, sizeof(kcg_int32), offsetof(morc_configData_T_RCM_Session_Types_Pkg, noOfRetriesOfSendingTerminationMessage), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".maxWaitingTimeForAckMessageReceived", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, maxWaitingTimeForAckMessageReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".maxWaitingTimeUntilTerminationOrderReceived", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, maxWaitingTimeUntilTerminationOrderReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".noOfRetriesUntilTerminationOrderIsReceived", NULL, sizeof(kcg_int32), offsetof(morc_configData_T_RCM_Session_Types_Pkg, noOfRetriesUntilTerminationOrderIsReceived), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".connectionStatusTimerInterval", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, connectionStatusTimerInterval), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".onboardPhoneNumbers", NULL, sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, onboardPhoneNumbers), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_9, 1, 7 },
    /* 8 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(NID_ENGINE), offsetof(morc_configData_T_RCM_Session_Types_Pkg, nid_engine), &_Type_NID_ENGINE_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".maxTimeToMaintainCommSession", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(morc_configData_T_RCM_Session_Types_Pkg, maxTimeToMaintainCommSession), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".noOfTriesToEstablishASafeRadioConnection", NULL, sizeof(kcg_int32), offsetof(morc_configData_T_RCM_Session_Types_Pkg, noOfTriesToEstablishASafeRadioConnection), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_43 = {
    "morc_configData_T_RCM_Session_Types_Pkg",
    scope_43_entries, 11
};

const MappingEntry scope_42_entries[21] = {
    /* 0 */ { MAP_FIELD, ".atPowerUp", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, atPowerUp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".atPowerDown", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, atPowerDown), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".atStartOfMission", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, atStartOfMission), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".modeChangeHasToBeReportedToRBC", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, modeChangeHasToBeReportedToRBC), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".driverHasManuallyChangedLevel_to_2_or_3", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, driverHasManuallyChangedLevel_to_2_or_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".trainFrontPassesStartOfAnnouncedRadioHole", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainFrontPassesStartOfAnnouncedRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".trainFrontReachesEndOfAnnouncedRadioHole", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainFrontReachesEndOfAnnouncedRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".trainFrontInsideInAnAnnouncedRadioHole", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainFrontInsideInAnAnnouncedRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".trainFrontPassesALevelTransitionBorder", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainFrontPassesALevelTransitionBorder), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".trainFrontPassesA_RBC_RBC_border", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainFrontPassesA_RBC_RBC_border), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".startOfMissionProcedureCompleted_in_level_2_or_3", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, startOfMissionProcedureCompleted_in_level_2_or_3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_FIELD, ".isPartOfAnOngoingStartOfMissionProcedure", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, isPartOfAnOngoingStartOfMissionProcedure), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".startOfMissionProcedureIsGoingOn", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, startOfMissionProcedureIsGoingOn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".endOfMissionIsExecuted", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, endOfMissionIsExecuted), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".triggerDecisionThatNoRadioNetworkIDAvailable", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, triggerDecisionThatNoRadioNetworkIDAvailable), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_FIELD, ".errorConditionRequiringTerminationDetected", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, errorConditionRequiringTerminationDetected), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_FIELD, ".trainIsRejectedByRBC_duringStartOfMission", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainIsRejectedByRBC_duringStartOfMission), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_FIELD, ".driverClosesTheDeskduringStartOfMission", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, driverClosesTheDeskduringStartOfMission), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_FIELD, ".trainExitedFromAnRBCArea", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, trainExitedFromAnRBCArea), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_FIELD, ".isInCommunicationSessionWithAnRIU", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, isInCommunicationSessionWithAnRIU), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_FIELD, ".level_1_isLeft", NULL, sizeof(kcg_bool), offsetof(obuEventsAndPhases_T_RCM_Session_Types_Pkg, level_1_isLeft), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 }
};
const MappingScope scope_42 = {
    "obuEventsAndPhases_T_RCM_Session_Types_Pkg",
    scope_42_entries, 21
};

const MappingEntry scope_41_entries[4] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(RBC_Id_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(RBC_Id_T_Common_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".rbc_id", NULL, sizeof(NID_RBC), offsetof(RBC_Id_T_Common_Types_Pkg, rbc_id), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".device_id", NULL, sizeof(kcg_int32), offsetof(RBC_Id_T_Common_Types_Pkg, device_id), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_41 = {
    "RBC_Id_T_Common_Types_Pkg",
    scope_41_entries, 4
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int32), 0, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_40 = {
    "CompressedPacketData_T_Common_Types_Pkg",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[5] = {
    /* 0 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(NID_PACKET), offsetof(MetadataElement_T_Common_Types_Pkg, nid_packet), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(MetadataElement_T_Common_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(MetadataElement_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int32), offsetof(MetadataElement_T_Common_Types_Pkg, startAddress), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int32), offsetof(MetadataElement_T_Common_Types_Pkg, endAddress), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_39 = {
    "MetadataElement_T_Common_Types_Pkg",
    scope_39_entries, 5
};

const MappingEntry scope_38_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(MetadataElement_T_Common_Types_Pkg), 0, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_39, 1, 0 }
};
const MappingScope scope_38 = {
    "Metadata_T_Common_Types_Pkg",
    scope_38_entries, 1
};

const MappingEntry scope_37_entries[2] = {
    /* 0 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_38, 1, 0 },
    /* 1 */ { MAP_FIELD, ".PacketData", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_40, 1, 1 }
};
const MappingScope scope_37 = {
    "CompressedPackets_T_Common_Types_Pkg",
    scope_37_entries, 2
};

const MappingEntry scope_36_entries[15] = {
    /* 0 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int32), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, radioDevice), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, receivedSystemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".nid_message", NULL, sizeof(NID_MESSAGE), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".t_train", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_train), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(NID_LRBG), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_lrbg), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_train_reference), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".nid_em", NULL, sizeof(NID_EM), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_em), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".d_sr", NULL, sizeof(D_SR), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_sr), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_sh_rqst), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_FIELD, ".d_ref", NULL, sizeof(D_REF), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_ref), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(D_EMERGENCYSTOP), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_36 = {
    "Radio_TrackTrain_Header_T_Radio_Types_Pkg",
    scope_36_entries, 15
};

const MappingEntry scope_35_entries[3] = {
    /* 0 */ { MAP_FIELD, ".nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".d_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_35 = {
    "LocWithInAcc_T_Obu_BasicTypes_Pkg",
    scope_35_entries, 3
};

const MappingEntry scope_34_entries[4] = {
    /* 0 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_safeNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_rawNominal), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".v_lower", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_lower), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(V_odometry_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_upper), &_Type_V_odometry_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_34 = {
    "OdometrySpeeds_T_Obu_BasicTypes_Pkg",
    scope_34_entries, 4
};

const MappingEntry scope_33_entries[3] = {
    /* 0 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".o_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_33 = {
    "OdometryLocations_T_Obu_BasicTypes_Pkg",
    scope_33_entries, 3
};

const MappingEntry scope_32_entries[7] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(odometry_T_Obu_BasicTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".timestamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".odo", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, odo), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_33, 1, 2 },
    /* 3 */ { MAP_FIELD, ".speed", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_34, 1, 3 },
    /* 4 */ { MAP_FIELD, ".acceleration", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, acceleration), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_32 = {
    "odometry_T_Obu_BasicTypes_Pkg",
    scope_32_entries, 7
};

const MappingEntry scope_31_entries[15] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(BG_Header_T_BG_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(BG_Header_T_BG_Types_Pkg, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(BG_Header_T_BG_Types_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(BG_Header_T_BG_Types_Pkg, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(BG_Header_T_BG_Types_Pkg, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT), offsetof(BG_Header_T_BG_Types_Pkg, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(BG_Header_T_BG_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(BG_Header_T_BG_Types_Pkg, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(BG_Header_T_BG_Types_Pkg, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(BG_Header_T_BG_Types_Pkg, bgPosition), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_32, 1, 9 },
    /* 10 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(BG_Header_T_BG_Types_Pkg, BG_centerDetectionInaccuraccuracies), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_35, 1, 10 },
    /* 11 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(Q_NVLOCACC), offsetof(BG_Header_T_BG_Types_Pkg, q_nvlocacc), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(BG_Header_T_BG_Types_Pkg, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(BG_Header_T_BG_Types_Pkg, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(BG_Header_T_BG_Types_Pkg, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_31 = {
    "BG_Header_T_BG_Types_Pkg",
    scope_31_entries, 15
};

const MappingEntry scope_30_entries[9] = {
    /* 0 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_30 = {
    "RadioMetadata_T_Common_Types_Pkg",
    scope_30_entries, 9
};

const MappingEntry scope_29_entries[7] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, radioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_30, 1, 2 },
    /* 3 */ { MAP_FIELD, ".BG_Common_Header", NULL, sizeof(BG_Header_T_BG_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, BG_Common_Header), &_Type_BG_Header_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_31, 1, 3 },
    /* 4 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, Radio_Common_Header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_36, 1, 4 },
    /* 5 */ { MAP_FIELD, ".packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_37, 1, 5 },
    /* 6 */ { MAP_FIELD, ".sendingRBC", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(msgFromTrack_T_RCM_MsgTypes_Pkg, sendingRBC), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_41, 1, 6 }
};
const MappingScope scope_29 = {
    "struct_19159",
    scope_29_entries, 7
};

const MappingEntry scope_28_entries[3] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".nid_mn", NULL, sizeof(NID_MN), offsetof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg, nid_mn), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_28 = {
    "P45_RadioNetworkRegistration_T_Packet_Types_Pkg",
    scope_28_entries, 3
};

const MappingEntry scope_27_entries[4] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int32), offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".action", NULL, sizeof(mobileRegistrationAction_T_RCM_Types_Pkg), offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg, action), &_Type_mobileRegistrationAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".network_id", NULL, sizeof(NID_MN), offsetof(mobileRegistrationCmd_T_RCM_Types_Pkg, network_id), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_27 = {
    "mobileRegistrationCmd_T_RCM_Types_Pkg",
    scope_27_entries, 4
};

const MappingEntry scope_26_entries[4] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileConnectionCmd_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int32), offsetof(mobileConnectionCmd_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".action", NULL, sizeof(mobileConnetionAction_T_RCM_Types_Pkg), offsetof(mobileConnectionCmd_T_RCM_Types_Pkg, action), &_Type_mobileConnetionAction_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(mobileConnectionCmd_T_RCM_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_26 = {
    "mobileConnectionCmd_T_RCM_Types_Pkg",
    scope_26_entries, 4
};

const MappingEntry scope_25_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".indicator", NULL, sizeof(safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg), offsetof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg, indicator), &_Type_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_25 = {
    "safeRadioConnectionIndication_T_RCM_Session_Types_Pkg",
    scope_25_entries, 2
};

const MappingEntry scope_24_entries[5] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".phase", NULL, sizeof(sessionPhase_T_RCM_Session_Types_Pkg), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, phase), &_Type_sessionPhase_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".nid_rbc", NULL, sizeof(NID_RBC), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_rbc), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(sessionStatus_T_RCM_Session_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_24 = {
    "sessionStatus_T_RCM_Session_Types_Pkg",
    scope_24_entries, 5
};

const MappingEntry scope_23_entries[7] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int32), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".status", NULL, sizeof(mobileConnectionStatus_T_RCM_Types_Pkg), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, status), &_Type_mobileConnectionStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".nid_radio", NULL, sizeof(NID_RADIO), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, nid_radio), &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".settingUpConnectionHasFailed", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, settingUpConnectionHasFailed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".connectionLost", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, connectionLost), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".isInRadioHole", NULL, sizeof(kcg_bool), offsetof(mobileConnectionContext_T_RCM_Types_Pkg, isInRadioHole), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_23 = {
    "mobileConnectionContext_T_RCM_Types_Pkg",
    scope_23_entries, 7
};

const MappingEntry scope_22_entries[5] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".mobileDeviceNo", NULL, sizeof(kcg_int32), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, mobileDeviceNo), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".healthStatus", NULL, sizeof(mobileHealthStatus_T_RCM_Types_Pkg), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, healthStatus), &_Type_mobileHealthStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".status", NULL, sizeof(mobileRegistrationStatus_T_RCM_Types_Pkg), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, status), &_Type_mobileRegistrationStatus_T_RCM_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".nid_mn", NULL, sizeof(NID_MN), offsetof(mobileRegistrationContext_T_RCM_Types_Pkg, nid_mn), &_Type_NID_MN_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_22 = {
    "mobileRegistrationContext_T_RCM_Types_Pkg",
    scope_22_entries, 5
};

const MappingEntry scope_21_entries[3] = {
    /* 0 */ { MAP_FIELD, ".registration", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, registration), &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 0 },
    /* 1 */ { MAP_FIELD, ".connection", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, connection), &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 1 },
    /* 2 */ { MAP_FIELD, ".session", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), offsetof(morcStatus_T_RCM_Session_Types_Pkg, session), &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 2 }
};
const MappingScope scope_21 = {
    "morcStatus_T_RCM_Session_Types_Pkg",
    scope_21_entries, 3
};

const MappingEntry scope_20_entries[4] = {
    /* 0 */ { MAP_FIELD, ".m155_initiationOfACommunicationSession", NULL, sizeof(kcg_bool), offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg, m155_initiationOfACommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".m156_terminationOfACommunicationSession", NULL, sizeof(kcg_bool), offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg, m156_terminationOfACommunicationSession), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".m159_sessionEstablished", NULL, sizeof(kcg_bool), offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg, m159_sessionEstablished), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".m154_noCompatibleVersionSupported", NULL, sizeof(kcg_bool), offsetof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg, m154_noCompatibleVersionSupported), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_20 = {
    "msgToTrackTriggers_T_RCM_MsgTypes_Pkg",
    scope_20_entries, 4
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(NID_NTC), 0, &_Type_NID_NTC_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "aNID_NTC_T_Packet_TrainTypes_Pkg",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[2] = {
    /* 0 */ { MAP_FIELD, ".m_voltage", NULL, sizeof(M_VOLTAGE), offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg, m_voltage), &_Type_M_VOLTAGE_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nid_ctraction", NULL, sizeof(NID_CTRACTION), offsetof(sTractionIdentity_T_Packet_TrainTypes_Pkg, nid_ctraction), &_Type_NID_CTRACTION_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_18 = {
    "sTractionIdentity_T_Packet_TrainTypes_Pkg",
    scope_18_entries, 2
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(sTractionIdentity_T_Packet_TrainTypes_Pkg), 0, &_Type_sTractionIdentity_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_18, 1, 0 }
};
const MappingScope scope_17 = {
    "aTractionIdentity_T_Packet_TrainTypes_Pkg",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[13] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nc_cdtrain", NULL, sizeof(NC_CDTRAIN), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, nc_cdtrain), &_Type_NC_CDTRAIN_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".nc_train", NULL, sizeof(NC_TRAIN), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, nc_train), &_Type_NC_TRAIN_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".l_train", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, l_train), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".v_maxtrain", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, v_maxtrain), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".m_loadinggoage", NULL, sizeof(M_LOADINGGAUGE), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, m_loadinggoage), &_Type_M_LOADINGGAUGE_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".m_axleloadcat", NULL, sizeof(M_AXLELOADCAT), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, m_axleloadcat), &_Type_M_AXLELOADCAT_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".m_airtight", NULL, sizeof(M_AIRTIGHT), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, m_airtight), &_Type_M_AIRTIGHT_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".n_axle", NULL, sizeof(N_AXLE), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, n_axle), &_Type_N_AXLE_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".nIter_tractionIdentity", NULL, sizeof(kcg_int32), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, nIter_tractionIdentity), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".tractionIdentity", NULL, sizeof(aTractionIdentity_T_Packet_TrainTypes_Pkg), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, tractionIdentity), &_Type_aTractionIdentity_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_17, 1, 10 },
    /* 11 */ { MAP_FIELD, ".nIter_ntc", NULL, sizeof(kcg_int32), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, nIter_ntc), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".nid_ntc", NULL, sizeof(aNID_NTC_T_Packet_TrainTypes_Pkg), offsetof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg, nid_ntc), &_Type_aNID_NTC_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_19, 1, 12 }
};
const MappingScope scope_16 = {
    "PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg",
    scope_16_entries, 13
};

const MappingEntry scope_15_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".transitionInformation", NULL, sizeof(NID_LTRBG), offsetof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg, transitionInformation), &_Type_NID_LTRBG_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_15 = {
    "PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg",
    scope_15_entries, 2
};

const MappingEntry scope_14_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".TrainRunningNumber", NULL, sizeof(NID_OPERATIONAL), offsetof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg, TrainRunningNumber), &_Type_NID_OPERATIONAL_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_14 = {
    "PT5_TrainRunningNumber_Packet_TrainTypes_Pkg",
    scope_14_entries, 2
};

const MappingEntry scope_13_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".m_error", NULL, sizeof(M_ERROR), offsetof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg, m_error), &_Type_M_ERROR_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_13 = {
    "PT4_ErrorReporting_T_Packet_TrainTypes_Pkg",
    scope_13_entries, 2
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_15, sizeof(BCD_T_Obu_BasicTypes_Pkg), 0, &_Type_BCD_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "telephoneNumber_T_Packet_TrainTypes_Pkg",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(sNID_RADIO_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".telephoneNumber", NULL, sizeof(telephoneNumber_T_Packet_TrainTypes_Pkg), offsetof(sNID_RADIO_T_Packet_TrainTypes_Pkg, telephoneNumber), &_Type_telephoneNumber_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_12, 1, 1 }
};
const MappingScope scope_11 = {
    "sNID_RADIO_T_Packet_TrainTypes_Pkg",
    scope_11_entries, 2
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(sNID_RADIO_T_Packet_TrainTypes_Pkg), 0, &_Type_sNID_RADIO_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_11, 1, 0 }
};
const MappingScope scope_10 = {
    "aNID_RADIO_T_Packet_TrainTypes_Pkg",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[3] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".number", NULL, sizeof(kcg_int32), offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg, number), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".aNID_RADIO", NULL, sizeof(aNID_RADIO_T_Packet_TrainTypes_Pkg), offsetof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg, aNID_RADIO), &_Type_aNID_RADIO_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_10, 1, 2 }
};
const MappingScope scope_9 = {
    "PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg",
    scope_9_entries, 3
};

const MappingEntry scope_8_entries[17] = {
    /* 0 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, NID_PACKET), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, L_PACKET), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, NID_LRBG), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".NID_PRVLRBG", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, NID_PRVLRBG), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, D_LRBG), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, L_DOUBTOVER), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, L_DOUBTUNDER), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, L_TRAININT), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, V_TRAIN), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int32), offsetof(Position_Report_based_on_two_balise_groups_TrainToTrack, NID_NTC), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 }
};
const MappingScope scope_8 = {
    "Position_Report_based_on_two_balise_groups_TrainToTrack",
    scope_8_entries, 17
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".packet1", NULL, sizeof(Position_Report_based_on_two_balise_groups_TrainToTrack), offsetof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg, packet1), &_Type_Position_Report_based_on_two_balise_groups_TrainToTrack_Utils, NULL, NULL, &scope_8, 1, 1 }
};
const MappingScope scope_7 = {
    "PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg",
    scope_7_entries, 2
};

const MappingEntry scope_6_entries[16] = {
    /* 0 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, NID_PACKET), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, L_PACKET), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".qscale", NULL, sizeof(Q_SCALE), offsetof(Position_Report_TrainToTrack, qscale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".NID_LRBG", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, NID_LRBG), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".D_LRBG", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, D_LRBG), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(Position_Report_TrainToTrack, dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".dlrbg", NULL, sizeof(Q_DLRBG), offsetof(Position_Report_TrainToTrack, dlrbg), &_Type_Q_DLRBG_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".L_DOUBTOVER", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, L_DOUBTOVER), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".L_DOUBTUNDER", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, L_DOUBTUNDER), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_FIELD, ".length", NULL, sizeof(Q_LENGTH), offsetof(Position_Report_TrainToTrack, length), &_Type_Q_LENGTH_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_FIELD, ".L_TRAININT", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, L_TRAININT), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_FIELD, ".V_TRAIN", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, V_TRAIN), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_FIELD, ".dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(Position_Report_TrainToTrack, dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_FIELD, ".mode", NULL, sizeof(M_MODE), offsetof(Position_Report_TrainToTrack, mode), &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_FIELD, ".level", NULL, sizeof(M_LEVEL), offsetof(Position_Report_TrainToTrack, level), &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int32), offsetof(Position_Report_TrainToTrack, NID_NTC), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 15 }
};
const MappingScope scope_6 = {
    "Position_Report_TrainToTrack",
    scope_6_entries, 16
};

const MappingEntry scope_5_entries[2] = {
    /* 0 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(PT0_PositionReport_T_Packet_TrainTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".packet0", NULL, sizeof(Position_Report_TrainToTrack), offsetof(PT0_PositionReport_T_Packet_TrainTypes_Pkg, packet0), &_Type_Position_Report_TrainToTrack_Utils, NULL, NULL, &scope_6, 1, 1 }
};
const MappingScope scope_5 = {
    "PT0_PositionReport_T_Packet_TrainTypes_Pkg",
    scope_5_entries, 2
};

const MappingEntry scope_4_entries[7] = {
    /* 0 */ { MAP_FIELD, ".p0", NULL, sizeof(PT0_PositionReport_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p0), &_Type_PT0_PositionReport_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_FIELD, ".p1", NULL, sizeof(PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p1), &_Type_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_7, 1, 1 },
    /* 2 */ { MAP_FIELD, ".p3", NULL, sizeof(PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p3), &_Type_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_9, 1, 2 },
    /* 3 */ { MAP_FIELD, ".p4", NULL, sizeof(PT4_ErrorReporting_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p4), &_Type_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_13, 1, 3 },
    /* 4 */ { MAP_FIELD, ".p5", NULL, sizeof(PT5_TrainRunningNumber_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p5), &_Type_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_14, 1, 4 },
    /* 5 */ { MAP_FIELD, ".p9", NULL, sizeof(PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p9), &_Type_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_15, 1, 5 },
    /* 6 */ { MAP_FIELD, ".p11", NULL, sizeof(PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg), offsetof(outPackets_T_Common_Types_Pkg, p11), &_Type_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg_Utils, NULL, NULL, &scope_16, 1, 6 }
};
const MappingScope scope_4 = {
    "outPackets_T_Common_Types_Pkg",
    scope_4_entries, 7
};

const MappingEntry scope_3_entries[9] = {
    /* 0 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".nid_message", NULL, sizeof(NID_MESSAGE), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".t_train", NULL, sizeof(T_TRAIN), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, t_train), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".nid_engine", NULL, sizeof(NID_ENGINE), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, nid_engine), &_Type_NID_ENGINE_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".xQ_MARQSTREASON", NULL, sizeof(Q_MARQSTREASON), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, xQ_MARQSTREASON), &_Type_Q_MARQSTREASON_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".xT_TRAIN", NULL, sizeof(T_TRAIN), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, xT_TRAIN), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".xNID_EM", NULL, sizeof(NID_EM), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, xNID_EM), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_FIELD, ".xQ_EMERGENCYSTOP", NULL, sizeof(Q_EMERGENCYSTOP), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, xQ_EMERGENCYSTOP), &_Type_Q_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_FIELD, ".xNID_TEXTMESSAGE", NULL, sizeof(NID_TEXTMESSAGE), offsetof(Radio_TrainTrack_Header_T_Radio_Types_Pkg, xNID_TEXTMESSAGE), &_Type_NID_TEXTMESSAGE_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_3 = {
    "Radio_TrainTrack_Header_T_Radio_Types_Pkg",
    scope_3_entries, 9
};

const MappingEntry scope_2_entries[3] = {
    /* 0 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(msgToTrack_T_RCM_MsgTypes_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".header", NULL, sizeof(Radio_TrainTrack_Header_T_Radio_Types_Pkg), offsetof(msgToTrack_T_RCM_MsgTypes_Pkg, header), &_Type_Radio_TrainTrack_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_3, 1, 1 },
    /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(outPackets_T_Common_Types_Pkg), offsetof(msgToTrack_T_RCM_MsgTypes_Pkg, packets), &_Type_outPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_4, 1, 2 }
};
const MappingScope scope_2 = {
    "struct_18831",
    scope_2_entries, 3
};

const MappingEntry scope_1_entries[162] = {
    /* 0 */ { MAP_OUTPUT, "msgToRBC", NULL, sizeof(msgToTrack_T_RCM_MsgTypes_Pkg), (size_t)&msgToRBC, &_Type_msgToTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "msgToTrackTriggers", NULL, sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg), (size_t)&msgToTrackTriggers, &_Type_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_20, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "sendAPositionReport", NULL, sizeof(kcg_bool), (size_t)&sendAPositionReport, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "rejectOrderToContactRBC_or_RIU", NULL, sizeof(kcg_bool), (size_t)&rejectOrderToContactRBC_or_RIU, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "infomDriverNoCompatibleVersionSupported", NULL, sizeof(kcg_bool), (size_t)&infomDriverNoCompatibleVersionSupported, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "status", NULL, sizeof(morcStatus_T_RCM_Session_Types_Pkg), (size_t)&status, &_Type_morcStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_21, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "safeRadioIndication", NULL, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg), (size_t)&safeRadioIndication, &_Type_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_25, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "mobileConnectionCmd", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), (size_t)&mobileConnectionCmd, &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "mobileRegistrationCmd", NULL, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg), (size_t)&mobileRegistrationCmd, &_Type_mobileRegistrationCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "memorizeTheLastRadioNetworkID", NULL, sizeof(kcg_bool), (size_t)&memorizeTheLastRadioNetworkID, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_OUTPUT, "lastReceivedRadioNetworkID", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&lastReceivedRadioNetworkID, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 10 },
    /* 11 */ { MAP_OUTPUT, "notReady", NULL, sizeof(kcg_bool), (size_t)&notReady, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INPUT, "msg_in", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), (size_t)&_ctx_msg_in_buffer, &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 12 },
    /* 13 */ { MAP_INPUT, "eventsAndPhases", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&_ctx_eventsAndPhases_buffer, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 13 },
    /* 14 */ { MAP_INPUT, "atPowerUpRadioNetworkID", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&_ctx_atPowerUpRadioNetworkID_buffer, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 14 },
    /* 15 */ { MAP_INPUT, "newRadioNetworkIDFromDriver", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&_ctx_newRadioNetworkIDFromDriver_buffer, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 15 },
    /* 16 */ { MAP_INPUT, "mode", NULL, sizeof(M_MODE), (size_t)&_ctx_mode_buffer, &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_INPUT, "level", NULL, sizeof(M_LEVEL), (size_t)&_ctx_level_buffer, &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_INPUT, "mobileRegistrationContext", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&_ctx_mobileRegistrationContext_buffer, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 18 },
    /* 19 */ { MAP_INPUT, "mobileConnectionContext", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&_ctx_mobileConnectionContext_buffer, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 19 },
    /* 20 */ { MAP_INPUT, "currentTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&_ctx_currentTime_buffer, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_INPUT, "reset", NULL, sizeof(kcg_bool), (size_t)&_ctx_reset_buffer, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_INPUT, "t_train", NULL, sizeof(T_TRAIN), (size_t)&_ctx_t_train_buffer, &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_INPUT, "configData", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&_ctx_configData_buffer, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 23 },
    /* 24 */ { MAP_SIGNAL, "sNotReady", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.sNotReady, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "connectionStatus_l", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 25 },
    /* 26 */ { MAP_LOCAL, "registrationStatus_l", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 26 },
    /* 27 */ { MAP_LOCAL, "sessionStatus_l", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 27 },
    /* 28 */ { MAP_LOCAL, "p42_sessionManagement", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 28 },
    /* 29 */ { MAP_LOCAL, "m38_initiationOfACommunicationSessionMsg", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg, &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 29 },
    /* 30 */ { MAP_LOCAL, "m39_AckOfTerminationOfACommunicationSession", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession, &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 30 },
    /* 31 */ { MAP_LOCAL, "m32_SystemVersion", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion, &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 31 },
    /* 32 */ { MAP_LOCAL, "m154_noCompatibleVersionSupported", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m154_noCompatibleVersionSupported, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "m159_sessionEstablished", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m159_sessionEstablished, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "m156_terminationOfACommunicationSession", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m156_terminationOfACommunicationSession, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "m155_initiationOfACommunicationSession", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m155_initiationOfACommunicationSession, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_PROBE, "p42_sessionManagementReceived_p", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagementReceived_p, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_PROBE, "m32_SystemVersionReceived_p", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersionReceived_p, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_PROBE, "m38_initiationOfACommunicationSessionMsgReceived_p", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsgReceived_p, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_PROBE, "m39_AckOfTerminationOfACommunicationSessionReceived_p", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSessionReceived_p, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L1", NULL, sizeof(sessionCmd_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L1, &_Type_sessionCmd_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_48, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L2", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L2, &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L10, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L9", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L9, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L8", NULL, sizeof(mobileConnectionCmd_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L8, &_Type_mobileConnectionCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_26, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L14", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L14, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L23", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L23, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L22", NULL, sizeof(mobileRegistrationCmd_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L22, &_Type_mobileRegistrationCmd_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_27, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L21", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L21, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L26", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L26, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L27", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L27, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L28", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L28, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L30", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L30, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L33", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L33, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L34", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L34, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L36", NULL, sizeof(M_MODE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L36, &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L37", NULL, sizeof(M_MODE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L37, &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L39", NULL, sizeof(M_LEVEL), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L39, &_Type_M_LEVEL_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L40, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L41", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L41, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L42", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L42, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L43", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L43, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L45", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L45, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L46", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L46, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L47", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L47, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L50, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L52", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L52, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L51", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L51, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L55", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L55, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L64", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L64, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L63, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L62, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L61, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L60, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L59, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L58, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L57, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L56", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L56, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L65", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L65, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L66", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L66, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L67, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L73, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L72, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L75", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L75, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L76", NULL, sizeof(M_MODE), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L76, &_Type_M_MODE_Utils, NULL, NULL, NULL, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L77", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L77, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L78", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L78, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L79, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90 },
    /* 91 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L82, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 91 },
    /* 92 */ { MAP_LOCAL, "_L83", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L83, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 92 },
    /* 93 */ { MAP_LOCAL, "_L84", NULL, sizeof(safeRadioConnectionIndication_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L84, &_Type_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_25, 1, 93 },
    /* 94 */ { MAP_LOCAL, "_L86", NULL, sizeof(obuEventsAndPhases_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L86, &_Type_obuEventsAndPhases_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_42, 1, 94 },
    /* 95 */ { MAP_LOCAL, "_L87", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L87, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 95 },
    /* 96 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L88, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 96 },
    /* 97 */ { MAP_LOCAL, "_L90", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L90, &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 97 },
    /* 98 */ { MAP_LOCAL, "_L91", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L91, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 98 },
    /* 99 */ { MAP_LOCAL, "_L92", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L92, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 99 },
    /* 100 */ { MAP_LOCAL, "_L93", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L93, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 100 },
    /* 101 */ { MAP_LOCAL, "_L94", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L94, &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 101 },
    /* 102 */ { MAP_LOCAL, "_L95", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L95, &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 102 },
    /* 103 */ { MAP_LOCAL, "_L96", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L96, &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 103 },
    /* 104 */ { MAP_LOCAL, "_L99", NULL, sizeof(p42_sessionManagement_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L99, &_Type_p42_sessionManagement_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_44, 1, 104 },
    /* 105 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L100, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 105 },
    /* 106 */ { MAP_LOCAL, "_L101", NULL, sizeof(m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L101, &_Type_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_45, 1, 106 },
    /* 107 */ { MAP_LOCAL, "_L102", NULL, sizeof(m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L102, &_Type_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_47, 1, 107 },
    /* 108 */ { MAP_LOCAL, "_L103", NULL, sizeof(m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L103, &_Type_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_46, 1, 108 },
    /* 109 */ { MAP_LOCAL, "_L104", NULL, sizeof(msgFromTrack_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L104, &_Type_msgFromTrack_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_29, 1, 109 },
    /* 110 */ { MAP_LOCAL, "_L105", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L105, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 110 },
    /* 111 */ { MAP_LOCAL, "_L106", NULL, sizeof(NID_RADIO), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L106, &_Type_NID_RADIO_Utils, NULL, NULL, NULL, 1, 111 },
    /* 112 */ { MAP_LOCAL, "_L107", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L107, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 112 },
    /* 113 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L108, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 113 },
    /* 114 */ { MAP_LOCAL, "_L110", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L110, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 114 },
    /* 115 */ { MAP_LOCAL, "_L113", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L113, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 115 },
    /* 116 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L112, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 116 },
    /* 117 */ { MAP_LOCAL, "_L111", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L111, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 117 },
    /* 118 */ { MAP_LOCAL, "_L116", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L116, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 118 },
    /* 119 */ { MAP_LOCAL, "_L115", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L115, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 119 },
    /* 120 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_int32), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L114, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 120 },
    /* 121 */ { MAP_LOCAL, "_L118", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L118, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 121 },
    /* 122 */ { MAP_LOCAL, "_L117", NULL, sizeof(P45_RadioNetworkRegistration_T_Packet_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L117, &_Type_P45_RadioNetworkRegistration_T_Packet_Types_Pkg_Utils, NULL, NULL, &scope_28, 1, 122 },
    /* 123 */ { MAP_LOCAL, "_L120", NULL, sizeof(morc_configData_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L120, &_Type_morc_configData_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_43, 1, 123 },
    /* 124 */ { MAP_LOCAL, "_L119", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L119, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 124 },
    /* 125 */ { MAP_LOCAL, "_L121", NULL, sizeof(morcStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L121, &_Type_morcStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_21, 1, 125 },
    /* 126 */ { MAP_LOCAL, "_L122", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L122, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 126 },
    /* 127 */ { MAP_LOCAL, "_L123", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L123, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 127 },
    /* 128 */ { MAP_LOCAL, "_L124", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L124, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 128 },
    /* 129 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L125, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 129 },
    /* 130 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L126, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 130 },
    /* 131 */ { MAP_LOCAL, "_L127", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L127, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 131 },
    /* 132 */ { MAP_LOCAL, "_L128", NULL, sizeof(mobileConnectionContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L128, &_Type_mobileConnectionContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_23, 1, 132 },
    /* 133 */ { MAP_LOCAL, "_L129", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L129, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 133 },
    /* 134 */ { MAP_LOCAL, "_L130", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L130, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 134 },
    /* 135 */ { MAP_LOCAL, "_L131", NULL, sizeof(mobileRegistrationContext_T_RCM_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L131, &_Type_mobileRegistrationContext_T_RCM_Types_Pkg_Utils, NULL, NULL, &scope_22, 1, 135 },
    /* 136 */ { MAP_LOCAL, "_L132", NULL, sizeof(sessionStatus_T_RCM_Session_Types_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L132, &_Type_sessionStatus_T_RCM_Session_Types_Pkg_Utils, NULL, NULL, &scope_24, 1, 136 },
    /* 137 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L133, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 137 },
    /* 138 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L134, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 138 },
    /* 139 */ { MAP_LOCAL, "_L135", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L135, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 139 },
    /* 140 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L136, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 140 },
    /* 141 */ { MAP_LOCAL, "_L137", NULL, sizeof(msgToTrackTriggers_T_RCM_MsgTypes_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L137, &_Type_msgToTrackTriggers_T_RCM_MsgTypes_Pkg_Utils, NULL, NULL, &scope_20, 1, 141 },
    /* 142 */ { MAP_LOCAL, "_L138", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L138, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 142 },
    /* 143 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L139, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 143 },
    /* 144 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L140, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 144 },
    /* 145 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L141, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 145 },
    /* 146 */ { MAP_LOCAL, "_L142", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L142, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 146 },
    /* 147 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L143, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 147 },
    /* 148 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L144, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 148 },
    /* 149 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_bool), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck._L145, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 149 },
    /* 150 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::initiateSession_v2 1", NULL, sizeof(outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateSession_v2_1, NULL, NULL, NULL, &scope_49, 1, 150 },
    /* 151 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 1", NULL, sizeof(outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_requestRadioConnectionSetupFromOBU_v2_1, NULL, NULL, NULL, &scope_59, 1, 151 },
    /* 152 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2 1", NULL, sizeof(outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1, NULL, NULL, NULL, &scope_95, 1, 152 },
    /* 153 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2 1", NULL, sizeof(outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1, NULL, NULL, NULL, &scope_105, 1, 153 },
    /* 154 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 1", NULL, sizeof(outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1, NULL, NULL, NULL, &scope_149, 1, 154 },
    /* 155 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 1", NULL, sizeof(outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1, NULL, NULL, NULL, &scope_204, 1, 155 },
    /* 156 */ { MAP_INSTANCE, "MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 1", NULL, sizeof(outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_safeRadioConnectionIndication_v2_1, NULL, NULL, NULL, &scope_212, 1, 156 },
    /* 157 */ { MAP_INSTANCE, "RCM_Utils_Pkg::decoders::dec_m32 1", NULL, sizeof(outC_dec_m32_RCM_Utils_Pkg_decoders), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m32_1, NULL, NULL, NULL, &scope_223, 1, 157 },
    /* 158 */ { MAP_INSTANCE, "RCM_Utils_Pkg::decoders::dec_m38 1", NULL, sizeof(outC_dec_m38_RCM_Utils_Pkg_decoders), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m38_1, NULL, NULL, NULL, &scope_224, 1, 158 },
    /* 159 */ { MAP_INSTANCE, "RCM_Utils_Pkg::decoders::dec_m39 1", NULL, sizeof(outC_dec_m39_RCM_Utils_Pkg_decoders), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m39_1, NULL, NULL, NULL, &scope_225, 1, 159 },
    /* 160 */ { MAP_INSTANCE, "RCM_Utils_Pkg::decoders::dec_p42 2", NULL, sizeof(outC_dec_p42_RCM_Utils_Pkg_decoders), (size_t)&Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_p42_2, NULL, NULL, NULL, &scope_226, 1, 160 },
    /* 161 */ { MAP_IF, "ifMessageToRBC:", NULL, 0, 0, NULL, NULL, NULL, &scope_255, 1, 161 }
};
const MappingScope scope_1 = {
    "MoRC_Pck::MoRC_Main_v2/ MoRC_Main_v2_MoRC_Pck",
    scope_1_entries, 162
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "MoRC_Pck::MoRC_Main_v2", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
