/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_f_solve_fdvy_theta_p_x_info.c
 *
 * Code generation for function 'f_solve_fdvy_theta_p_x'
 *
 */

/* Include files */
#include "_coder_f_solve_fdvy_theta_p_x_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  static const int32_T iv[2] = {0, 1};
  const mxArray *m;
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtAssign(&nameCaptureInfo, m);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[6] = {
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  const char_T *propFieldName[5] = {"Version", "ResolvedFunctions",
                                    "EntryPoints", "CoverageInfo",
                                    "IsPolymorphic"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, (const char_T *)"Name",
                emlrtMxCreateString((const char_T *)"f_solve_fdvy_theta_p_x"));
  emlrtSetField(xEntryPoints, 0, (const char_T *)"NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, (const char_T *)"NumberOfOutputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, (const char_T *)"ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, (const char_T *)"FullPath",
      emlrtMxCreateString(
          (const char_T *)"/Users/kaganakar/Documents/MATLAB/"
                          "CollinearMecanumDrive/Feedback_Linearisation/"
                          "generatedFunctions/f_solve_fdvy_theta_p_x.m"));
  emlrtSetField(xEntryPoints, 0, (const char_T *)"TimeStamp",
                emlrtMxCreateDoubleScalar(738812.957650463));
  xResult =
      emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&propFieldName[0]);
  emlrtSetField(
      xResult, 0, (const char_T *)"Version",
      emlrtMxCreateString((const char_T *)"9.11.0.1873467 (R2021b) Update 3"));
  emlrtSetField(xResult, 0, (const char_T *)"ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, (const char_T *)"EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_f_solve_fdvy_theta_p_x_info.c) */
