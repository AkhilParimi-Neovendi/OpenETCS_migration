#ifndef MORC_INTERFACE_H_
#define MORC_INTERFACE_H_

#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

/* context */

extern msgFromTrack_T_RCM_MsgTypes_Pkg _ctx_msg_in_buffer;
extern obuEventsAndPhases_T_RCM_Session_Types_Pkg _ctx_eventsAndPhases_buffer;
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg _ctx_atPowerUpRadioNetworkID_buffer;
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg _ctx_newRadioNetworkIDFromDriver_buffer;
extern M_MODE _ctx_mode_buffer;
extern M_LEVEL _ctx_level_buffer;
extern mobileRegistrationContext_T_RCM_Types_Pkg _ctx_mobileRegistrationContext_buffer;
extern mobileConnectionContext_T_RCM_Types_Pkg _ctx_mobileConnectionContext_buffer;
extern T_internal_Type_Obu_BasicTypes_Pkg _ctx_currentTime_buffer;
extern kcg_bool _ctx_reset_buffer;
extern T_TRAIN _ctx_t_train_buffer;
extern morc_configData_T_RCM_Session_Types_Pkg _ctx_configData_buffer;

#ifdef __cplusplus
extern "C" {
#endif

extern SimSimulator * pSimulator;

/* simulation */

#ifdef EXTENDED_SIM
    void BeforeSimInit();
    void AfterSimInit();
    void BeforeSimStep();
    void AfterSimStep();
    void ExtendedSimStop();
    void ExtendedGatherDumpData(char * pData);
    void ExtendedRestoreDumpData(const char * pData);
    int ExtendedGetDumpSize();
    void UpdateValues();
    extern void UpdateSimulatorValues();
    extern int GraphicalInputsConnected;
#endif

/* logging */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* MORC_INTERFACE_H_ */
