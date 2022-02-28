/*
 * File: flightControlSystem.h
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 4.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 28 14:35:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rt_logging.h"
#endif                                /* flightControlSystem_COMMON_INCLUDES_ */

#include "flightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "conversionYUV.h"
#define stateEstimator_MDLREF_HIDE_CHILD_
#include "stateEstimator.h"
#define flightController_MDLREF_HIDE_CHILD_
#include "flightController.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<S1>/Logging' */
typedef struct {
  real32_T TmpSignalConversionAtToWorkspace2Inport1[12];
  real32_T TmpSignalConversionAtToWorkspace6Inport1[10];
  real32_T TmpSignalConversionAtToWorkspace3Inport1[9];
} B_Logging_flightControlSystem_T;

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S4>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S4>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S4>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S4>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S4>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S4>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S4>/To Workspace1' */
} DW_Logging_flightControlSystem_T;

/* Block signals for system '<Root>/Flight Control System' */
typedef struct {
  statesEstim_t estimator;             /* '<S1>/estimator' */
  sensordata_t BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1;
  real32_T controller_o2[8];           /* '<S1>/controller' */
  CommandBus Switch_o;                 /* '<S5>/Switch' */
  real32_T rtb_x_m;
  real32_T rtb_y_c;
  real32_T rtb_z_k;
  real32_T rtb_x_c_c;
  real32_T rtb_y_n_b;
  real32_T rtb_z_p_p;
  real32_T rtb_altitude_c;
  real32_T rtb_pressure_f;
  real32_T rtb_vbat_V_g;
  uint32_T rtb_vbat_percentage_g;
  B_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} B_FlightControlSystem_flightControlSystem_T;

/* Block states (default storage) for system '<Root>/Flight Control System' */
typedef struct {
  statesEstim_t Memory_PreviousInput;  /* '<S5>/Memory' */
  DW_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_FlightControlSystem_flightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  uint8_T Y1UY2VtoYUV_o2[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o3[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o1[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T ColorSpaceConversion_o3[19200];
  uint8_T ColorSpaceConversion_o2[19200];
  uint8_T ColorSpaceConversion_o1[19200];
  boolean_T RelationalOperator1[19200];/* '<S2>/Relational Operator1' */
  int32_T rtb_BlobAnalysis_o3_m[200];
  real32_T rtb_BlobAnalysis_o2_c[100];
  int32_T rtb_BlobAnalysis_o1_k[50];
  real_T Switch;                       /* '<S2>/Switch' */
  real_T rtb_RateTransition_c;
  int32_T loop;
  int32_T idx;
  int32_T n;
  uint32_T pos;
  uint32_T neg;
  uint32_T yDiff;
  B_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} B_flightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T BlobAnalysis_STACK_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_N_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_M_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  uint8_T BlobAnalysis_PAD_DW[19764];  /* '<S2>/Blob Analysis' */
  uint32_T BlobAnalysis_NUM_PIX_DW[50];/* '<S2>/Blob Analysis' */
  volatile real_T RateTransition_Buffer[2];/* '<Root>/Rate Transition' */
  volatile int8_T RateTransition_ActiveBufIdx;/* '<Root>/Rate Transition' */
  uint8_T ColorSpaceConversion_DWORK1[19200];/* '<S2>/Color Space  Conversion' */
  MdlrefDW_conversionYUV_T Y1UY2VtoYUV_InstanceData;/* '<S2>/Y1UY2V to YUV' */
  DW_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} DW_flightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_flightControlSystem_T;

/* Parameters for system: '<S3>/Geofencing error' */
struct P_Geofencingerror_flightControlSystem_T_ {
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S13>/Constant'
                                        */
};

/* Parameters for system: '<Root>/Flight Control System' */
struct P_FlightControlSystem_flightControlSystem_T_ {
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S16>/Constant'
                                       */
  real32_T CompareToConstant_const_o;
                                    /* Mask Parameter: CompareToConstant_const_o
                                     * Referenced by: '<S7>/Constant'
                                     */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S8>/Constant'
                                      */
  real32_T CompareToConstant2_const; /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S9>/Constant'
                                      */
  real32_T CompareToConstant4_const; /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S11>/Constant'
                                      */
  real32_T CompareToConstant3_const; /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S10>/Constant'
                                      */
  real32_T CompareToConstant5_const; /* Mask Parameter: CompareToConstant5_const
                                      * Referenced by: '<S12>/Constant'
                                      */
  statesEstim_t Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S5>/Memory'
                                   */
  real32_T Constant3_Value[3];         /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S3>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S3>/Gain1'
                                        */
  boolean_T Constant1_Value;           /* Expression: true
                                        * Referenced by: '<S5>/Constant1'
                                        */
  uint8_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S3>/Merge'
                                       */
  P_Geofencingerror_flightControlSystem_T Normalcondition;/* '<S3>/Normal condition' */
  P_Geofencingerror_flightControlSystem_T estimatorOpticalflowerror;
                                      /* '<S3>/estimator//Optical flow error' */
  P_Geofencingerror_flightControlSystem_T Geofencingerror;/* '<S3>/Geofencing error' */
};

/* Parameters (default storage) */
struct P_flightControlSystem_T_ {
  real_T One1_Value;                   /* Expression: 211
                                        * Referenced by: '<S2>/One1'
                                        */
  real_T One2_Value;                   /* Expression: 0
                                        * Referenced by: '<S2>/One2'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint8_T One_Value;                   /* Computed Parameter: One_Value
                                        * Referenced by: '<S2>/One'
                                        */
  P_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
};

/* Real-time Model Data Structure */
struct tag_RTM_flightControlSystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    struct {
      uint32_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_flightControlSystem_T flightControlSystem_P;

/* Block signals (default storage) */
extern B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
extern DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_flightControlSystem_T flightControlSystem_Y;

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by: '<S1>/estimator'
                                                 */
extern real32_T rtP_landingAltitude;   /* Variable: landingAltitude
                                        * Referenced by: '<S5>/Constant2'
                                        */
extern boolean_T rtP_enableLanding;    /* Variable: enableLanding
                                        * Referenced by: '<S5>/Constant'
                                        */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CommandBus cmd_inport;          /* '<Root>/AC cmd' */
extern SensorsBus sensor_inport;       /* '<Root>/Sensors' */
extern real32_T motors_outport[4];     /* '<S1>/controller' */
extern uint8_T flag_outport;           /* '<S3>/Merge' */

/* External function called from main */
extern void flightControlSystem_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void flightControlSystem_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void flightControlSystem_initialize(void);
extern void flightControlSystem_step0(void);
extern void flightControlSystem_step1(void);
extern void flightControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_flightControlSystem_T *const flightControlSystem_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flightControlSystem'
 * '<S1>'   : 'flightControlSystem/Flight Control System'
 * '<S2>'   : 'flightControlSystem/Image Processing System'
 * '<S3>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S4>'   : 'flightControlSystem/Flight Control System/Logging'
 * '<S5>'   : 'flightControlSystem/Flight Control System/landing logic'
 * '<S6>'   : 'flightControlSystem/Flight Control System/sensordata_group'
 * '<S7>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant'
 * '<S8>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant1'
 * '<S9>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant2'
 * '<S10>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant3'
 * '<S11>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant4'
 * '<S12>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant5'
 * '<S13>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Geofencing error'
 * '<S14>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Normal condition'
 * '<S15>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/estimator//Optical flow error'
 * '<S16>'  : 'flightControlSystem/Flight Control System/landing logic/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_flightControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
