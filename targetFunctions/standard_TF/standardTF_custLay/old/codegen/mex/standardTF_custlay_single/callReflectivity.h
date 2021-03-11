/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * callReflectivity.h
 *
 * Code generation for function 'callReflectivity'
 *
 */

#ifndef CALLREFLECTIVITY_H
#define CALLREFLECTIVITY_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "standardTF_custlay_single_types.h"

/* Function Declarations */
extern void callReflectivity(const emlrtStack *sp, real_T nbairs, real_T nbsubs,
  const real_T simLimits[2], const real_T repeatLayers[2], const real_T
  this_data_data[], const int32_T this_data_size[2], const emxArray_real_T
  *layers, real_T ssubs, real_T backgrounds, real_T res, real_T
  reflectivity_data[], int32_T reflectivity_size[2], emxArray_real_T *Simulation);

#endif

/* End of code generation (callReflectivity.h) */