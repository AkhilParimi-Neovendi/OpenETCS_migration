#ifndef TESTBENCH_INTEGRATION_INTERFACE_H_
#define TESTBENCH_INTEGRATION_INTERFACE_H_

#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "ROOT_Integration_Testbench_Integration.h"

/* context */

extern kcg_bool _ctx_GUI_reset_buffer;
extern kcg_float64 _ctx_GUI_targetSpeed_buffer;
extern kcg_float64 _ctx_GUI_traction_buffer;
extern kcg_float64 _ctx_GUI_brake_buffer;
extern kcg_float64 _ctx_GUI_initialPosition_buffer;
extern kcg_float64 _ctx_GUI_initialVelocity_buffer;
extern kcg_int64 _ctx_GUI_mode_buffer;
extern kcg_int64 _ctx_GUI_level_buffer;
extern kcg_int64 _ctx_GUI_mobileHWStatus_buffer;
extern kcg_bool _ctx_GUI_openDesk_buffer;
extern kcg_bool _ctx_DMI_MousePressed_buffer;
extern kcg_bool _ctx_DMI_startRequest_buffer;
extern kcg_bool _ctx_DMI_openTrainRN_buffer;
extern kcg_bool _ctx_DMI_traindataYesAck_buffer;
extern kcg_bool _ctx_DMI_TrainRN_Ack_buffer;
extern array_bool_12 _ctx_DMI_keypad_buffer;
extern kcg_bool _ctx_DMI_openTrainDataWindow_buffer;
extern kcg_bool _ctx_DMI_openDriverID_buffer;
extern kcg_bool _ctx_DMI_DriverID_Ack_buffer;
extern kcg_bool _ctx_DMI_traindataNoAck_buffer;
extern kcg_bool _ctx_DMI_traindataAck_buffer;
extern kcg_bool _ctx_DMI_OverD9_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_closeButton_buffer;
extern kcg_bool _ctx_DMI_confirmTrainData_buffer;
extern kcg_bool _ctx_DMI_textMsgAck_buffer;
extern kcg_bool _ctx_DMI_openLevelMenu_buffer;
extern kcg_bool _ctx_DMI_InputFieldAck_buffer;
extern kcg_bool _ctx_DMI_openMainMenu_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_OverD12_frpmDisplay_buffer;
extern kcg_bool _ctx_DMI_HidePlanningArea_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_ShowPlanningArea_fromDisplay_buffer;
extern kcg_bool _ctx_DMI_closeButtonMain_buffer;
extern kcg_bool _ctx_DMI_C1AreaAck_buffer;
extern kcg_bool _ctx_DMI_ScrollUp_buffer;
extern kcg_bool _ctx_DMI_ScrollDown_buffer;

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

#endif /* TESTBENCH_INTEGRATION_INTERFACE_H_ */