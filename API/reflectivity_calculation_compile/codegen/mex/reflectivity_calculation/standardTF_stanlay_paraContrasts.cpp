//
//  Non-Degree Granting Education License -- for use at non-degree
//  granting, nonprofit, educational organizations only. Not for
//  government, commercial, or other organizational use.
//
//  standardTF_stanlay_paraContrasts.cpp
//
//  Code generation for function 'standardTF_stanlay_paraContrasts'
//


// Include files
#include "standardTF_stanlay_paraContrasts.h"
#include "allocateLayersForContrast.h"
#include "allocateParamsToLayers.h"
#include "backSort.h"
#include "mwmathutil.h"
#include "reflectivity_calculation.h"
#include "rt_nonfinite.h"
#include "standardTF_layers_core.h"
#include "standardTF_stanlay_paraAll.h"
#include "sum.h"

// Variable Definitions
static emlrtRSInfo eg_emlrtRSI = { 45, // lineNo
  "standardTF_stanlay_paraContrasts",  // fcnName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pathName 
};

static emlrtRSInfo fg_emlrtRSI = { 54, // lineNo
  "standardTF_stanlay_paraContrasts",  // fcnName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pathName 
};

static emlrtRSInfo gg_emlrtRSI = { 59, // lineNo
  "standardTF_stanlay_paraContrasts",  // fcnName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pathName 
};

static emlrtRSInfo hg_emlrtRSI = { 78, // lineNo
  "standardTF_stanlay_paraContrasts",  // fcnName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pathName 
};

static emlrtRTEInfo yb_emlrtRTEI = { 26,// lineNo
  9,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo ac_emlrtRTEI = { 31,// lineNo
  9,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo bc_emlrtRTEI = { 36,// lineNo
  9,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtDCInfo kb_emlrtDCI = { 48, // lineNo
  14,                                  // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  1                                    // checkKind
};

static emlrtRTEInfo cc_emlrtRTEI = { 48,// lineNo
  12,                                  // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtBCInfo uh_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  63,                                  // lineNo
  24,                                  // colNo
  "params",                            // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo vh_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  65,                                  // lineNo
  29,                                  // colNo
  "resample",                          // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo wh_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  68,                                  // lineNo
  35,                                  // colNo
  "dataPresent",                       // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo xh_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  71,                                  // lineNo
  31,                                  // colNo
  "backsType",                         // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo yh_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  64,                                  // lineNo
  37,                                  // colNo
  "repeatLayers",                      // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ai_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  67,                                  // lineNo
  24,                                  // colNo
  "allData",                           // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo bi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  69,                                  // lineNo
  33,                                  // colNo
  "dataLimits",                        // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ci_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  70,                                  // lineNo
  31,                                  // colNo
  "simLimits",                         // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtDCInfo lb_emlrtDCI = { 12, // lineNo
  16,                                  // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  1                                    // checkKind
};

static emlrtBCInfo di_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  27,                                  // lineNo
  5,                                   // colNo
  "reflectivity",                      // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ei_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  32,                                  // lineNo
  5,                                   // colNo
  "Simulation",                        // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo fi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  37,                                  // lineNo
  5,                                   // colNo
  "allLayers",                         // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo gi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  77,                                  // colNo
  "cBacks",                            // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo hi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  87,                                  // colNo
  "cShifts",                           // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ii_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  98,                                  // colNo
  "cScales",                           // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ji_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  109,                                 // colNo
  "cNbas",                             // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ki_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  118,                                 // colNo
  "cNbss",                             // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo li_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  54,                                  // lineNo
  127,                                 // colNo
  "cRes",                              // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo mi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  59,                                  // lineNo
  52,                                  // colNo
  "contrastLayers",                    // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ni_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  5,                                   // colNo
  "outSsubs",                          // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo oi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  89,                                  // lineNo
  5,                                   // colNo
  "sldProfiles",                       // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo pi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  5,                                   // colNo
  "reflectivity",                      // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo qi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  5,                                   // colNo
  "Simulation",                        // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ri_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  92,                                  // lineNo
  5,                                   // colNo
  "shifted_data",                      // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo si_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  93,                                  // lineNo
  5,                                   // colNo
  "layerSlds",                         // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ti_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  94,                                  // lineNo
  5,                                   // colNo
  "chis",                              // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo ui_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  95,                                  // lineNo
  5,                                   // colNo
  "backgs",                            // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo vi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  5,                                   // colNo
  "qshifts",                           // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo wi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  97,                                  // lineNo
  5,                                   // colNo
  "sfs",                               // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo xi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  98,                                  // lineNo
  5,                                   // colNo
  "nbas",                              // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo yi_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  99,                                  // lineNo
  5,                                   // colNo
  "nbss",                              // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo aj_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  5,                                   // colNo
  "resols",                            // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo bj_emlrtBCI = { -1, // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  5,                                   // colNo
  "allRoughs",                         // aName
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m",// pName 
  0                                    // checkKind
};

static emlrtRTEInfo ei_emlrtRTEI = { 3,// lineNo
  26,                                  // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo fi_emlrtRTEI = { 27,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo gi_emlrtRTEI = { 32,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo hi_emlrtRTEI = { 37,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo ii_emlrtRTEI = { 19,// lineNo
  12,                                  // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo ji_emlrtRTEI = { 89,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo ki_emlrtRTEI = { 90,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo li_emlrtRTEI = { 91,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo mi_emlrtRTEI = { 92,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

static emlrtRTEInfo ni_emlrtRTEI = { 93,// lineNo
  5,                                   // colNo
  "standardTF_stanlay_paraContrasts",  // fName
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"// pName 
};

// Function Definitions
void c_standardTF_stanlay_paraContra(const emlrtStack *sp, const coder::array<
  real_T, 2U> &resample, real_T numberOfContrasts, const coder::array<char_T, 2U>
  &geometry, const coder::array<cell_wrap_0, 2U> &repeatLayers, const coder::
  array<real_T, 2U> &cBacks, const coder::array<real_T, 2U> &cShifts, const
  coder::array<real_T, 2U> &cScales, const coder::array<real_T, 2U> &cNbas,
  const coder::array<real_T, 2U> &cNbss, const coder::array<real_T, 2U> &cRes,
  const coder::array<real_T, 2U> &backs, const coder::array<real_T, 2U> &shifts,
  const coder::array<real_T, 2U> &sf, const coder::array<real_T, 2U> &nba, const
  coder::array<real_T, 2U> &nbs, const coder::array<real_T, 2U> &res, const
  coder::array<real_T, 2U> &dataPresent, const coder::array<cell_wrap_12, 2U>
  &allData, const coder::array<cell_wrap_0, 2U> &dataLimits, const coder::array<
  cell_wrap_0, 2U> &simLimits, real_T nParams, const coder::array<real_T, 2U>
  &params, const coder::array<cell_wrap_12, 2U> &contrastLayers, const coder::
  array<cell_wrap_12, 1U> &layersDetails, const coder::array<real_T, 2U>
  &backsType, real_T calcSld, coder::array<real_T, 1U> &outSsubs, coder::array<
  real_T, 1U> &backgs, coder::array<real_T, 1U> &qshifts, coder::array<real_T,
  1U> &sfs, coder::array<real_T, 1U> &nbas, coder::array<real_T, 1U> &nbss,
  coder::array<real_T, 1U> &resols, coder::array<real_T, 1U> &chis, coder::array<
  cell_wrap_6, 1U> &reflectivity, coder::array<cell_wrap_6, 1U> &Simulation,
  coder::array<cell_wrap_12, 1U> &shifted_data, coder::array<cell_wrap_7, 1U>
  &layerSlds, coder::array<cell_wrap_12, 1U> &sldProfiles, coder::array<
  cell_wrap_11, 1U> &allLayers, coder::array<real_T, 1U> &allRoughs)
{
  int32_T ub_loop;
  int32_T i;
  int32_T b_i;
  int32_T i1;
  int32_T i2;
  coder::array<cell_wrap_17, 2U> outParameterisedLayers;
  int32_T c_i;
  coder::array<real_T, 2U> thisContrastLayers;
  coder::array<real_T, 2U> sldProfile;
  coder::array<real_T, 2U> reflect;
  coder::array<real_T, 2U> Simul;
  coder::array<real_T, 2U> thisData;
  coder::array<real_T, 2U> layerSld;
  real_T thisSsubs;
  real_T thisChiSquared;
  real_T thisResol;
  real_T thisNbs;
  real_T thisNba;
  real_T thisSf;
  real_T thisQshift;
  real_T thisBackground;
  int32_T i3;
  int32_T loop_ub;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  //  Allocate the memory for the output arrays before the main loop
  //    --- Begin memory allocation ---
  ub_loop = static_cast<int32_T>(muDoubleScalarFloor(numberOfContrasts));
  if (numberOfContrasts != ub_loop) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &lb_emlrtDCI, sp);
  }

  i = static_cast<int32_T>(numberOfContrasts);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
    static_cast<int32_T>(numberOfContrasts), &yb_emlrtRTEI, sp);
  reflectivity.set_size((&ei_emlrtRTEI), sp, i);
  for (b_i = 0; b_i < i; b_i++) {
    i1 = reflectivity.size(0) - 1;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1.set_size((&fi_emlrtRTEI), sp, 2, reflectivity[b_i].
      f1.size(1));
    i1 = reflectivity.size(0) - 1;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1.set_size((&fi_emlrtRTEI), sp, reflectivity[b_i].f1.size
      (0), 2);
    i1 = reflectivity.size(0) - 1;
    i2 = reflectivity.size(0) - 1;
    if (b_i > i2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &di_emlrtBCI, sp);
    }

    i2 = reflectivity.size(0) - 1;
    if (b_i > i2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &di_emlrtBCI, sp);
    }

    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1[0] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1[1] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1[2] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &di_emlrtBCI, sp);
    }

    reflectivity[b_i].f1[3] = 1.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
    static_cast<int32_T>(numberOfContrasts), &ac_emlrtRTEI, sp);
  Simulation.set_size((&ei_emlrtRTEI), sp, i);
  for (b_i = 0; b_i < i; b_i++) {
    i1 = Simulation.size(0) - 1;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1.set_size((&gi_emlrtRTEI), sp, 2, Simulation[b_i].f1.size
      (1));
    i1 = Simulation.size(0) - 1;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1.set_size((&gi_emlrtRTEI), sp, Simulation[b_i].f1.size(0),
      2);
    i1 = Simulation.size(0) - 1;
    i2 = Simulation.size(0) - 1;
    if (b_i > i2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &ei_emlrtBCI, sp);
    }

    i2 = Simulation.size(0) - 1;
    if (b_i > i2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &ei_emlrtBCI, sp);
    }

    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1[0] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1[1] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1[2] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ei_emlrtBCI, sp);
    }

    Simulation[b_i].f1[3] = 1.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
    static_cast<int32_T>(numberOfContrasts), &bc_emlrtRTEI, sp);
  allLayers.set_size((&ei_emlrtRTEI), sp, i);
  for (b_i = 0; b_i < i; b_i++) {
    i1 = allLayers.size(0) - 1;
    i2 = allLayers.size(0) - 1;
    if (b_i > i2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &fi_emlrtBCI, sp);
    }

    allLayers[b_i].f1.set_size((&hi_emlrtRTEI), sp, 2);
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &fi_emlrtBCI, sp);
    }

    allLayers[b_i].f1[0] = 1.0;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &fi_emlrtBCI, sp);
    }

    allLayers[b_i].f1[1] = 1.0;
  }

  //    --- End memory allocation ---
  //  First we need to allocate the absolute values of the input
  //  parameters to all the layers in the layers list. This only needs
  //  to be done once, and so is done outside the contrasts loop
  st.site = &eg_emlrtRSI;
  allocateParamsToLayers(&st, params, layersDetails, outParameterisedLayers);
  if (static_cast<int32_T>(numberOfContrasts) != ub_loop) {
    emlrtIntegerCheckR2012b(numberOfContrasts, &kb_emlrtDCI, sp);
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numberOfContrasts, mxDOUBLE_CLASS,
    static_cast<int32_T>(numberOfContrasts), &cc_emlrtRTEI, sp);
  outSsubs.set_size((&ii_emlrtRTEI), sp, i);
  sldProfiles.set_size((&ei_emlrtRTEI), sp, i);
  reflectivity.set_size((&ei_emlrtRTEI), sp, i);
  Simulation.set_size((&ei_emlrtRTEI), sp, i);
  shifted_data.set_size((&ei_emlrtRTEI), sp, i);
  layerSlds.set_size((&ei_emlrtRTEI), sp, i);
  chis.set_size((&ii_emlrtRTEI), sp, i);
  backgs.set_size((&ii_emlrtRTEI), sp, i);
  qshifts.set_size((&ii_emlrtRTEI), sp, i);
  sfs.set_size((&ii_emlrtRTEI), sp, i);
  nbas.set_size((&ii_emlrtRTEI), sp, i);
  nbss.set_size((&ii_emlrtRTEI), sp, i);
  resols.set_size((&ii_emlrtRTEI), sp, i);
  allRoughs.set_size((&ii_emlrtRTEI), sp, i);
  ub_loop = static_cast<int32_T>(numberOfContrasts) - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(thisContrastLayers,sldProfile,reflect,Simul,thisData,layerSld,thisSsubs,thisChiSquared,thisResol,thisNbs,thisNba,thisSf,thisQshift,thisBackground,c_st,i3,c_i,loop_ub,i4) \
 firstprivate(b_st,emlrtHadParallelError)

  {
    try {
      b_st.prev = sp;
      b_st.tls = emlrtAllocTLS((emlrtStack *)sp, omp_get_thread_num());
      b_st.site = NULL;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (c_i = 0; c_i <= ub_loop; c_i++) {
      if (emlrtHadParallelError)
        continue;
      try {
        //  Parallel Loop over all the contrasts
        //  Extract the relevant parameter values for this contrast
        //  from the input arrays.
        //  First need to decide which values of the backrounds, scalefactors
        //  data shifts and bulk contrasts are associated with this contrast
        i3 = static_cast<int32_T>(c_i + 1U);
        if ((i3 < 1) || (i3 > cBacks.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cBacks.size(1), &gi_emlrtBCI,
            &b_st);
        }

        if (i3 > cShifts.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cShifts.size(1), &hi_emlrtBCI,
            &b_st);
        }

        if (i3 > cScales.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cScales.size(1), &ii_emlrtBCI,
            &b_st);
        }

        if (i3 > cNbas.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cNbas.size(1), &ji_emlrtBCI,
            &b_st);
        }

        if (i3 > cNbss.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cNbss.size(1), &ki_emlrtBCI,
            &b_st);
        }

        if (i3 > cRes.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, cRes.size(1), &li_emlrtBCI, &b_st);
        }

        c_st.site = &fg_emlrtRSI;
        backSort(&c_st, cBacks[i3 - 1], cShifts[i3 - 1], cScales[i3 - 1],
                 cNbas[i3 - 1], cNbss[i3 - 1], cRes[i3 - 1], backs, shifts, sf,
                 nba, nbs, res, &thisBackground, &thisQshift, &thisSf, &thisNba,
                 &thisNbs, &thisResol);

        //  Also need to determine which layers from the overall layers list
        //  are required for this contrast, and put them in the correct order
        //  according to geometry
        i3 = contrastLayers.size(1) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &mi_emlrtBCI, &b_st);
        }

        c_st.site = &gg_emlrtRSI;
        allocateLayersForContrast(&c_st, contrastLayers[c_i].f1,
          outParameterisedLayers, thisContrastLayers);

        //  For the other parameters, we extract the correct ones from the input 
        //  arrays
        if (1 > params.size(1)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, params.size(1), &uh_emlrtBCI,
            &b_st);
        }

        //  Substrate roughness is always first parameter for standard layers
        i3 = repeatLayers.size(1) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &yh_emlrtBCI, &b_st);
        }

        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > resample.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, resample.size(1), &vh_emlrtBCI,
            &b_st);
        }

        i3 = allData.size(1) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &ai_emlrtBCI, &b_st);
        }

        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > dataPresent.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, dataPresent.size(1), &wh_emlrtBCI,
            &b_st);
        }

        i3 = dataLimits.size(1) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &bi_emlrtBCI, &b_st);
        }

        i3 = simLimits.size(1) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &ci_emlrtBCI, &b_st);
        }

        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > backsType.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, backsType.size(1), &xh_emlrtBCI,
            &b_st);
        }

        //  Now call the core standardTF_stanlay reflectivity calculation
        //  In this case we are single cored  over points.
        //  Call the calculation
        c_st.site = &hg_emlrtRSI;
        standardTF_layers_core(&c_st, thisContrastLayers, params[0], geometry,
          thisNba, thisNbs, resample[c_i], calcSld, thisSf, thisQshift,
          dataPresent[c_i], allData[c_i].f1, dataLimits[c_i].f1, simLimits[c_i].
          f1, repeatLayers[c_i].f1, thisBackground, thisResol, backsType[c_i],
          nParams, sldProfile, reflect, Simul, thisData, layerSld,
          &thisChiSquared, &thisSsubs);

        //  Store returned values for this contrast in the output arrays.
        //  As well as the calculated profiles, we also store a record of
        //  the other values (background, scalefactors etc) for each contrast
        //  for future use.
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > outSsubs.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, outSsubs.size(0), &ni_emlrtBCI,
            &b_st);
        }

        outSsubs[i3 - 1] = thisSsubs;
        loop_ub = sldProfile.size(0) * sldProfile.size(1);
        i3 = sldProfiles.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &oi_emlrtBCI, &b_st);
        }

        sldProfiles[c_i].f1.set_size((&ji_emlrtRTEI), (&b_st), sldProfile.size(0),
          sldProfiles[c_i].f1.size(1));
        i3 = sldProfiles.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &oi_emlrtBCI, &b_st);
        }

        sldProfiles[c_i].f1.set_size((&ji_emlrtRTEI), (&b_st), sldProfiles[c_i].
          f1.size(0), sldProfile.size(1));
        i3 = sldProfiles.size(0) - 1;
        i4 = sldProfiles.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &oi_emlrtBCI, &b_st);
        }

        i4 = sldProfiles.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &oi_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < loop_ub; i4++) {
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &oi_emlrtBCI, &b_st);
          }

          sldProfiles[c_i].f1[i4] = sldProfile[i4];
        }

        loop_ub = reflect.size(0) * reflect.size(1);
        i3 = reflectivity.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &pi_emlrtBCI, &b_st);
        }

        reflectivity[c_i].f1.set_size((&ki_emlrtRTEI), (&b_st), reflect.size(0),
          reflectivity[c_i].f1.size(1));
        i3 = reflectivity.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &pi_emlrtBCI, &b_st);
        }

        reflectivity[c_i].f1.set_size((&ki_emlrtRTEI), (&b_st), reflectivity[c_i]
          .f1.size(0), 2);
        i3 = reflectivity.size(0) - 1;
        i4 = reflectivity.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &pi_emlrtBCI, &b_st);
        }

        i4 = reflectivity.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &pi_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < loop_ub; i4++) {
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &pi_emlrtBCI, &b_st);
          }

          reflectivity[c_i].f1[i4] = reflect[i4];
        }

        loop_ub = Simul.size(0) * Simul.size(1);
        i3 = Simulation.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &qi_emlrtBCI, &b_st);
        }

        Simulation[c_i].f1.set_size((&li_emlrtRTEI), (&b_st), Simul.size(0),
          Simulation[c_i].f1.size(1));
        i3 = Simulation.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &qi_emlrtBCI, &b_st);
        }

        Simulation[c_i].f1.set_size((&li_emlrtRTEI), (&b_st), Simulation[c_i].
          f1.size(0), 2);
        i3 = Simulation.size(0) - 1;
        i4 = Simulation.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &qi_emlrtBCI, &b_st);
        }

        i4 = Simulation.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &qi_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < loop_ub; i4++) {
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &qi_emlrtBCI, &b_st);
          }

          Simulation[c_i].f1[i4] = Simul[i4];
        }

        loop_ub = thisData.size(0) * thisData.size(1);
        i3 = shifted_data.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &ri_emlrtBCI, &b_st);
        }

        shifted_data[c_i].f1.set_size((&mi_emlrtRTEI), (&b_st), thisData.size(0),
          shifted_data[c_i].f1.size(1));
        i3 = shifted_data.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &ri_emlrtBCI, &b_st);
        }

        shifted_data[c_i].f1.set_size((&mi_emlrtRTEI), (&b_st), shifted_data[c_i]
          .f1.size(0), thisData.size(1));
        i3 = shifted_data.size(0) - 1;
        i4 = shifted_data.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &ri_emlrtBCI, &b_st);
        }

        i4 = shifted_data.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &ri_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < loop_ub; i4++) {
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &ri_emlrtBCI, &b_st);
          }

          shifted_data[c_i].f1[i4] = thisData[i4];
        }

        loop_ub = layerSld.size(0) * layerSld.size(1);
        i3 = layerSlds.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &si_emlrtBCI, &b_st);
        }

        layerSlds[c_i].f1.set_size((&ni_emlrtRTEI), (&b_st), layerSld.size(0),
          layerSlds[c_i].f1.size(1));
        i3 = layerSlds.size(0) - 1;
        if (c_i > i3) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &si_emlrtBCI, &b_st);
        }

        layerSlds[c_i].f1.set_size((&ni_emlrtRTEI), (&b_st), layerSlds[c_i].
          f1.size(0), 3);
        i3 = layerSlds.size(0) - 1;
        i4 = layerSlds.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &si_emlrtBCI, &b_st);
        }

        i4 = layerSlds.size(0) - 1;
        if (c_i > i4) {
          emlrtDynamicBoundsCheckR2012b(c_i, 0, i4, &si_emlrtBCI, &b_st);
        }

        for (i4 = 0; i4 < loop_ub; i4++) {
          if (c_i > i3) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, i3, &si_emlrtBCI, &b_st);
          }

          layerSlds[c_i].f1[i4] = layerSld[i4];
        }

        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > chis.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, chis.size(0), &ti_emlrtBCI, &b_st);
        }

        chis[i3 - 1] = thisChiSquared;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > backgs.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, backgs.size(0), &ui_emlrtBCI,
            &b_st);
        }

        backgs[i3 - 1] = thisBackground;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > qshifts.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, qshifts.size(0), &vi_emlrtBCI,
            &b_st);
        }

        qshifts[i3 - 1] = thisQshift;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > sfs.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, sfs.size(0), &wi_emlrtBCI, &b_st);
        }

        sfs[i3 - 1] = thisSf;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > nbas.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, nbas.size(0), &xi_emlrtBCI, &b_st);
        }

        nbas[i3 - 1] = thisNba;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > nbss.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, nbss.size(0), &yi_emlrtBCI, &b_st);
        }

        nbss[i3 - 1] = thisNbs;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > resols.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, resols.size(0), &aj_emlrtBCI,
            &b_st);
        }

        resols[i3 - 1] = thisResol;
        i3 = c_i + 1;
        if ((i3 < 1) || (i3 > allRoughs.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, allRoughs.size(0), &bj_emlrtBCI,
            &b_st);
        }

        allRoughs[i3 - 1] = params[0];
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&b_st, 6);
    }
  }

  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

// End of code generation (standardTF_stanlay_paraContrasts.cpp)
