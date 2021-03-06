//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: sldFunc.h
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 24-Feb-2021 09:21:20
//
#ifndef SLDFUNC_H
#define SLDFUNC_H

// Include Files
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "omp.h"
#include "reflectivity_calculation_types.h"
#define MAX_THREADS                    omp_get_max_threads()

// Function Declarations
extern void sldFunc(double x, const coder::array<double, 2U> &SLD, coder::array<
                    double, 1U> &sldVal);

#endif

//
// File trailer for sldFunc.h
//
// [EOF]
//
