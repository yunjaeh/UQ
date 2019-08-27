/* Jacobians */
#include "OM_Result_model.h"
#include "OM_Result_12jac.h"

int OM_Result_initialAnalyticJacobianNLSJac15(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac15;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac14(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac14;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac13(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac13;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 7;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac12(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac12;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 7;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac11(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac11;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac10(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac10;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac9;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac8(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac8;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac7(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac7;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 7;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac6;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac5;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac4;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac3;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 7;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac2;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac1;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 1;
  data->simulationInfo->analyticJacobians[index].sizeRows = 1;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 6;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 1;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}

int OM_Result_initialAnalyticJacobianA(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_A;
  const int colPtrIndex[1+5] = {0,5,2,2,2,2};
  const int rowIndex[13] = {0,1,2,3,4,0,1,0,2,0,3,0,4};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 5;
  data->simulationInfo->analyticJacobians[index].sizeRows = 5;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 0;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(13*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 13;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 5;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 13*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[4] = 2;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[3] = 3;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[2] = 4;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[1] = 5;
  TRACE_POP
  return 0;
}
int OM_Result_initialAnalyticJacobianB(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OM_Result_initialAnalyticJacobianC(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OM_Result_initialAnalyticJacobianD(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
 equation index: 339
 type: SIMPLE_ASSIGN
 Convection_wall1_inner._Q_flow._$pDERNLSJac15._dummyVarNLSJac15 = Convection_coef_wall1_inner.k * Conduction_wall1_inner_port_b_TSeedNLSJac15
 */
void OM_Result_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,339};
  $PConvection_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15 = (data->simulationInfo->realParameter[16]) * ($PConduction_wall1_inner_port_b_TSeedNLSJac15);
  TRACE_POP
}

/*
 equation index: 340
 type: SIMPLE_ASSIGN
 Radiation_wall1_inner._Q_flow._$pDERNLSJac15._dummyVarNLSJac15 = 2.2681468e-07 * Radiation_wall1_inner.Gr * Conduction_wall1_inner.port_b.T ^ 3.0 * Conduction_wall1_inner_port_b_TSeedNLSJac15
 */
void OM_Result_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,340};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[31] /* Conduction_wall1_inner._port_b._T variable */;
  $PRadiation_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15 = (2.2681468e-07) * ((data->simulationInfo->realParameter[59]) * (((tmp0 * tmp0 * tmp0)) * ($PConduction_wall1_inner_port_b_TSeedNLSJac15)));
  TRACE_POP
}

/*
 equation index: 341
 type: SIMPLE_ASSIGN
 Conduction_wall1_inner._Q_flow._$pDERNLSJac15._dummyVarNLSJac15 = Radiation_wall1_inner.Q_flow.$pDERNLSJac15.dummyVarNLSJac15 + Convection_wall1_inner.Q_flow.$pDERNLSJac15.dummyVarNLSJac15
 */
void OM_Result_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,341};
  $PConduction_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15 = $PRadiation_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15 + $PConvection_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15;
  TRACE_POP
}

/*
 equation index: 342
 type: SIMPLE_ASSIGN
 Conduction_wall1_inner._dT._$pDERNLSJac15._dummyVarNLSJac15 = DIVISION(Conduction_wall1_inner.Q_flow.$pDERNLSJac15.dummyVarNLSJac15, Conduction_wall1_inner.G)
 */
void OM_Result_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,342};
  $PConduction_wall1_inner$PdT$P$pDERNLSJac15$PdummyVarNLSJac15 = DIVISION_SIM($PConduction_wall1_inner$PQ_flow$P$pDERNLSJac15$PdummyVarNLSJac15,data->simulationInfo->realParameter[7],"Conduction_wall1_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 343
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac15._dummyVarNLSJac15 = (-Conduction_wall1_inner_port_b_TSeedNLSJac15) - Conduction_wall1_inner.dT.$pDERNLSJac15.dummyVarNLSJac15
 */
void OM_Result_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,343};
  $P$res$P1$P$pDERNLSJac15$PdummyVarNLSJac15 = (-$PConduction_wall1_inner_port_b_TSeedNLSJac15) - $PConduction_wall1_inner$PdT$P$pDERNLSJac15$PdummyVarNLSJac15;
  TRACE_POP
}
int OM_Result_functionJacNLSJac15_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac15;
  OM_Result_eqFunction_339(data, threadData);

  OM_Result_eqFunction_340(data, threadData);

  OM_Result_eqFunction_341(data, threadData);

  OM_Result_eqFunction_342(data, threadData);

  OM_Result_eqFunction_343(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 325
 type: SIMPLE_ASSIGN
 Convection_wall1_outer._Q_flow._$pDERNLSJac14._dummyVarNLSJac14 = (-Convection_coef_wall1_outer.k) * Conduction_wall1_outer_port_a_TSeedNLSJac14
 */
void OM_Result_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,325};
  $PConvection_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14 = ((-data->simulationInfo->realParameter[17])) * ($PConduction_wall1_outer_port_a_TSeedNLSJac14);
  TRACE_POP
}

/*
 equation index: 326
 type: SIMPLE_ASSIGN
 Radiation_wall1_outer._Q_flow._$pDERNLSJac14._dummyVarNLSJac14 = -2.2681468e-07 * Radiation_wall1_outer.Gr * Conduction_wall1_outer.port_a.T ^ 3.0 * Conduction_wall1_outer_port_a_TSeedNLSJac14
 */
void OM_Result_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,326};
  modelica_real tmp1;
  tmp1 = data->localData[0]->realVars[34] /* Conduction_wall1_outer._port_a._T variable */;
  $PRadiation_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[60]) * (((tmp1 * tmp1 * tmp1)) * ($PConduction_wall1_outer_port_a_TSeedNLSJac14)));
  TRACE_POP
}

/*
 equation index: 327
 type: SIMPLE_ASSIGN
 Conduction_wall1_outer._Q_flow._$pDERNLSJac14._dummyVarNLSJac14 = Radiation_wall1_outer.Q_flow.$pDERNLSJac14.dummyVarNLSJac14 + Convection_wall1_outer.Q_flow.$pDERNLSJac14.dummyVarNLSJac14
 */
void OM_Result_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,327};
  $PConduction_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14 = $PRadiation_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14 + $PConvection_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14;
  TRACE_POP
}

/*
 equation index: 328
 type: SIMPLE_ASSIGN
 Conduction_wall1_outer._dT._$pDERNLSJac14._dummyVarNLSJac14 = DIVISION(Conduction_wall1_outer.Q_flow.$pDERNLSJac14.dummyVarNLSJac14, Conduction_wall1_outer.G)
 */
void OM_Result_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,328};
  $PConduction_wall1_outer$PdT$P$pDERNLSJac14$PdummyVarNLSJac14 = DIVISION_SIM($PConduction_wall1_outer$PQ_flow$P$pDERNLSJac14$PdummyVarNLSJac14,data->simulationInfo->realParameter[8],"Conduction_wall1_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 329
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac14._dummyVarNLSJac14 = Conduction_wall1_outer_port_a_TSeedNLSJac14 - Conduction_wall1_outer.dT.$pDERNLSJac14.dummyVarNLSJac14
 */
void OM_Result_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,329};
  $P$res$P1$P$pDERNLSJac14$PdummyVarNLSJac14 = $PConduction_wall1_outer_port_a_TSeedNLSJac14 - $PConduction_wall1_outer$PdT$P$pDERNLSJac14$PdummyVarNLSJac14;
  TRACE_POP
}
int OM_Result_functionJacNLSJac14_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac14;
  OM_Result_eqFunction_325(data, threadData);

  OM_Result_eqFunction_326(data, threadData);

  OM_Result_eqFunction_327(data, threadData);

  OM_Result_eqFunction_328(data, threadData);

  OM_Result_eqFunction_329(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 308
 type: SIMPLE_ASSIGN
 Convection_roof_outer._Q_flow._$pDERNLSJac13._dummyVarNLSJac13 = (-Convection_coef_roof_outer.k) * Conduction_roof_outer_port_a_TSeedNLSJac13
 */
void OM_Result_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,308};
  $PConvection_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 = ((-data->simulationInfo->realParameter[15])) * ($PConduction_roof_outer_port_a_TSeedNLSJac13);
  TRACE_POP
}

/*
 equation index: 309
 type: SIMPLE_ASSIGN
 Heatflow_solar_radiation._port._Q_flow._$pDERNLSJac13._dummyVarNLSJac13 = (-Heatflow_solar_radiation.Q_flow) * Heatflow_solar_radiation.alpha * Conduction_roof_outer_port_a_TSeedNLSJac13
 */
void OM_Result_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,309};
  $PHeatflow_solar_radiation$Pport$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 = ((-data->localData[0]->realVars[72] /* Heatflow_solar_radiation._Q_flow variable */)) * ((data->simulationInfo->realParameter[53]) * ($PConduction_roof_outer_port_a_TSeedNLSJac13));
  TRACE_POP
}

/*
 equation index: 310
 type: SIMPLE_ASSIGN
 Radiation_roof_outer._Q_flow._$pDERNLSJac13._dummyVarNLSJac13 = -2.2681468e-07 * Radiation_roof_outer.Gr * Conduction_roof_outer.port_a.T ^ 3.0 * Conduction_roof_outer_port_a_TSeedNLSJac13
 */
void OM_Result_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,310};
  modelica_real tmp2;
  tmp2 = data->localData[0]->realVars[28] /* Conduction_roof_outer._port_a._T variable */;
  $PRadiation_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[57]) * (((tmp2 * tmp2 * tmp2)) * ($PConduction_roof_outer_port_a_TSeedNLSJac13)));
  TRACE_POP
}

/*
 equation index: 311
 type: SIMPLE_ASSIGN
 Conduction_roof_outer._Q_flow._$pDERNLSJac13._dummyVarNLSJac13 = Convection_roof_outer.Q_flow.$pDERNLSJac13.dummyVarNLSJac13 - (Heatflow_solar_radiation.port.Q_flow.$pDERNLSJac13.dummyVarNLSJac13 - Radiation_roof_outer.Q_flow.$pDERNLSJac13.dummyVarNLSJac13)
 */
void OM_Result_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,311};
  $PConduction_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 = $PConvection_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 - ($PHeatflow_solar_radiation$Pport$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13 - $PRadiation_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13);
  TRACE_POP
}

/*
 equation index: 312
 type: SIMPLE_ASSIGN
 Conduction_roof_outer._dT._$pDERNLSJac13._dummyVarNLSJac13 = DIVISION(Conduction_roof_outer.Q_flow.$pDERNLSJac13.dummyVarNLSJac13, Conduction_roof_outer.G)
 */
void OM_Result_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,312};
  $PConduction_roof_outer$PdT$P$pDERNLSJac13$PdummyVarNLSJac13 = DIVISION_SIM($PConduction_roof_outer$PQ_flow$P$pDERNLSJac13$PdummyVarNLSJac13,data->simulationInfo->realParameter[6],"Conduction_roof_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 313
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac13._dummyVarNLSJac13 = Conduction_roof_outer_port_a_TSeedNLSJac13 - Conduction_roof_outer.dT.$pDERNLSJac13.dummyVarNLSJac13
 */
void OM_Result_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,313};
  $P$res$P1$P$pDERNLSJac13$PdummyVarNLSJac13 = $PConduction_roof_outer_port_a_TSeedNLSJac13 - $PConduction_roof_outer$PdT$P$pDERNLSJac13$PdummyVarNLSJac13;
  TRACE_POP
}
int OM_Result_functionJacNLSJac13_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac13;
  OM_Result_eqFunction_308(data, threadData);

  OM_Result_eqFunction_309(data, threadData);

  OM_Result_eqFunction_310(data, threadData);

  OM_Result_eqFunction_311(data, threadData);

  OM_Result_eqFunction_312(data, threadData);

  OM_Result_eqFunction_313(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 291
 type: SIMPLE_ASSIGN
 Convection_roof_inner._Q_flow._$pDERNLSJac12._dummyVarNLSJac12 = Convection_coef_roof_inner.k * Conduction_roof_inner_port_b_TSeedNLSJac12
 */
void OM_Result_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,291};
  $PConvection_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12 = (data->simulationInfo->realParameter[14]) * ($PConduction_roof_inner_port_b_TSeedNLSJac12);
  TRACE_POP
}

/*
 equation index: 292
 type: SIMPLE_ASSIGN
 Radiation_roof_inner._Q_flow._$pDERNLSJac12._dummyVarNLSJac12 = 2.2681468e-07 * Radiation_roof_inner.Gr * Conduction_roof_inner.port_b.T ^ 3.0 * Conduction_roof_inner_port_b_TSeedNLSJac12
 */
void OM_Result_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,292};
  modelica_real tmp3;
  tmp3 = data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */;
  $PRadiation_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12 = (2.2681468e-07) * ((data->simulationInfo->realParameter[56]) * (((tmp3 * tmp3 * tmp3)) * ($PConduction_roof_inner_port_b_TSeedNLSJac12)));
  TRACE_POP
}

/*
 equation index: 293
 type: SIMPLE_ASSIGN
 Radiation_roof_to_floor._Q_flow._$pDERNLSJac12._dummyVarNLSJac12 = 2.2681468e-07 * Radiation_roof_to_floor.Gr * Conduction_roof_inner.port_b.T ^ 3.0 * Conduction_roof_inner_port_b_TSeedNLSJac12
 */
void OM_Result_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  modelica_real tmp4;
  tmp4 = data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */;
  $PRadiation_roof_to_floor$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12 = (2.2681468e-07) * ((data->simulationInfo->realParameter[58]) * (((tmp4 * tmp4 * tmp4)) * ($PConduction_roof_inner_port_b_TSeedNLSJac12)));
  TRACE_POP
}

/*
 equation index: 294
 type: SIMPLE_ASSIGN
 Conduction_roof_inner._Q_flow._$pDERNLSJac12._dummyVarNLSJac12 = Radiation_roof_to_floor.Q_flow.$pDERNLSJac12.dummyVarNLSJac12 - ((-Convection_roof_inner.Q_flow.$pDERNLSJac12.dummyVarNLSJac12) - Radiation_roof_inner.Q_flow.$pDERNLSJac12.dummyVarNLSJac12)
 */
void OM_Result_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  $PConduction_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12 = $PRadiation_roof_to_floor$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12 - ((-$PConvection_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12) - $PRadiation_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12);
  TRACE_POP
}

/*
 equation index: 295
 type: SIMPLE_ASSIGN
 Conduction_roof_inner._dT._$pDERNLSJac12._dummyVarNLSJac12 = DIVISION(Conduction_roof_inner.Q_flow.$pDERNLSJac12.dummyVarNLSJac12, Conduction_roof_inner.G)
 */
void OM_Result_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  $PConduction_roof_inner$PdT$P$pDERNLSJac12$PdummyVarNLSJac12 = DIVISION_SIM($PConduction_roof_inner$PQ_flow$P$pDERNLSJac12$PdummyVarNLSJac12,data->simulationInfo->realParameter[5],"Conduction_roof_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 296
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac12._dummyVarNLSJac12 = (-Conduction_roof_inner_port_b_TSeedNLSJac12) - Conduction_roof_inner.dT.$pDERNLSJac12.dummyVarNLSJac12
 */
void OM_Result_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  $P$res$P1$P$pDERNLSJac12$PdummyVarNLSJac12 = (-$PConduction_roof_inner_port_b_TSeedNLSJac12) - $PConduction_roof_inner$PdT$P$pDERNLSJac12$PdummyVarNLSJac12;
  TRACE_POP
}
int OM_Result_functionJacNLSJac12_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac12;
  OM_Result_eqFunction_291(data, threadData);

  OM_Result_eqFunction_292(data, threadData);

  OM_Result_eqFunction_293(data, threadData);

  OM_Result_eqFunction_294(data, threadData);

  OM_Result_eqFunction_295(data, threadData);

  OM_Result_eqFunction_296(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 274
 type: SIMPLE_ASSIGN
 Convection_wall3_outer._Q_flow._$pDERNLSJac11._dummyVarNLSJac11 = (-Convection_coef_wall3_outer.k) * Conduction_wall3_outer_port_a_TSeedNLSJac11
 */
void OM_Result_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,274};
  $PConvection_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11 = ((-data->simulationInfo->realParameter[19])) * ($PConduction_wall3_outer_port_a_TSeedNLSJac11);
  TRACE_POP
}

/*
 equation index: 275
 type: SIMPLE_ASSIGN
 Radiation_wall3_outer._Q_flow._$pDERNLSJac11._dummyVarNLSJac11 = -2.2681468e-07 * Radiation_wall3_outer.Gr * Conduction_wall3_outer.port_a.T ^ 3.0 * Conduction_wall3_outer_port_a_TSeedNLSJac11
 */
void OM_Result_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,275};
  modelica_real tmp5;
  tmp5 = data->localData[0]->realVars[40] /* Conduction_wall3_outer._port_a._T variable */;
  $PRadiation_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[62]) * (((tmp5 * tmp5 * tmp5)) * ($PConduction_wall3_outer_port_a_TSeedNLSJac11)));
  TRACE_POP
}

/*
 equation index: 276
 type: SIMPLE_ASSIGN
 Conduction_wall3_outer._Q_flow._$pDERNLSJac11._dummyVarNLSJac11 = Radiation_wall3_outer.Q_flow.$pDERNLSJac11.dummyVarNLSJac11 + Convection_wall3_outer.Q_flow.$pDERNLSJac11.dummyVarNLSJac11
 */
void OM_Result_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,276};
  $PConduction_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11 = $PRadiation_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11 + $PConvection_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11;
  TRACE_POP
}

/*
 equation index: 277
 type: SIMPLE_ASSIGN
 Conduction_wall3_outer._dT._$pDERNLSJac11._dummyVarNLSJac11 = DIVISION(Conduction_wall3_outer.Q_flow.$pDERNLSJac11.dummyVarNLSJac11, Conduction_wall3_outer.G)
 */
void OM_Result_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,277};
  $PConduction_wall3_outer$PdT$P$pDERNLSJac11$PdummyVarNLSJac11 = DIVISION_SIM($PConduction_wall3_outer$PQ_flow$P$pDERNLSJac11$PdummyVarNLSJac11,data->simulationInfo->realParameter[10],"Conduction_wall3_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 278
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac11._dummyVarNLSJac11 = Conduction_wall3_outer_port_a_TSeedNLSJac11 - Conduction_wall3_outer.dT.$pDERNLSJac11.dummyVarNLSJac11
 */
void OM_Result_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,278};
  $P$res$P1$P$pDERNLSJac11$PdummyVarNLSJac11 = $PConduction_wall3_outer_port_a_TSeedNLSJac11 - $PConduction_wall3_outer$PdT$P$pDERNLSJac11$PdummyVarNLSJac11;
  TRACE_POP
}
int OM_Result_functionJacNLSJac11_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac11;
  OM_Result_eqFunction_274(data, threadData);

  OM_Result_eqFunction_275(data, threadData);

  OM_Result_eqFunction_276(data, threadData);

  OM_Result_eqFunction_277(data, threadData);

  OM_Result_eqFunction_278(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 261
 type: SIMPLE_ASSIGN
 Conduction_wall3_inner._Q_flow._$pDERNLSJac10._dummyVarNLSJac10 = (-Conduction_wall3_inner.G) * Conduction_wall3_inner_port_b_TSeedNLSJac10
 */
void OM_Result_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  $PConduction_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10 = ((-data->simulationInfo->realParameter[9])) * ($PConduction_wall3_inner_port_b_TSeedNLSJac10);
  TRACE_POP
}

/*
 equation index: 262
 type: SIMPLE_ASSIGN
 Radiation_wall3_inner._Q_flow._$pDERNLSJac10._dummyVarNLSJac10 = 2.2681468e-07 * Radiation_wall3_inner.Gr * Conduction_wall3_inner.port_b.T ^ 3.0 * Conduction_wall3_inner_port_b_TSeedNLSJac10
 */
void OM_Result_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_real tmp6;
  tmp6 = data->localData[0]->realVars[37] /* Conduction_wall3_inner._port_b._T variable */;
  $PRadiation_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10 = (2.2681468e-07) * ((data->simulationInfo->realParameter[61]) * (((tmp6 * tmp6 * tmp6)) * ($PConduction_wall3_inner_port_b_TSeedNLSJac10)));
  TRACE_POP
}

/*
 equation index: 263
 type: SIMPLE_ASSIGN
 Convection_wall3_inner._Q_flow._$pDERNLSJac10._dummyVarNLSJac10 = Conduction_wall3_inner.Q_flow.$pDERNLSJac10.dummyVarNLSJac10 - Radiation_wall3_inner.Q_flow.$pDERNLSJac10.dummyVarNLSJac10
 */
void OM_Result_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  $PConvection_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10 = $PConduction_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10 - $PRadiation_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10;
  TRACE_POP
}

/*
 equation index: 264
 type: SIMPLE_ASSIGN
 Convection_wall3_inner._dT._$pDERNLSJac10._dummyVarNLSJac10 = DIVISION(Convection_wall3_inner.Q_flow.$pDERNLSJac10.dummyVarNLSJac10, Convection_coef_wall3_inner.k)
 */
void OM_Result_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  $PConvection_wall3_inner$PdT$P$pDERNLSJac10$PdummyVarNLSJac10 = DIVISION_SIM($PConvection_wall3_inner$PQ_flow$P$pDERNLSJac10$PdummyVarNLSJac10,data->simulationInfo->realParameter[18],"Convection_coef_wall3_inner.k",equationIndexes);
  TRACE_POP
}

/*
 equation index: 265
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac10._dummyVarNLSJac10 = Conduction_wall3_inner_port_b_TSeedNLSJac10 - Convection_wall3_inner.dT.$pDERNLSJac10.dummyVarNLSJac10
 */
void OM_Result_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  $P$res$P1$P$pDERNLSJac10$PdummyVarNLSJac10 = $PConduction_wall3_inner_port_b_TSeedNLSJac10 - $PConvection_wall3_inner$PdT$P$pDERNLSJac10$PdummyVarNLSJac10;
  TRACE_POP
}
int OM_Result_functionJacNLSJac10_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac10;
  OM_Result_eqFunction_261(data, threadData);

  OM_Result_eqFunction_262(data, threadData);

  OM_Result_eqFunction_263(data, threadData);

  OM_Result_eqFunction_264(data, threadData);

  OM_Result_eqFunction_265(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 245
 type: SIMPLE_ASSIGN
 Convection_wall4_outer._Q_flow._$pDERNLSJac9._dummyVarNLSJac9 = (-Convection_coef_wall4_outer.k) * Conduction_wall4_outer_port_a_TSeedNLSJac9
 */
void OM_Result_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  $PConvection_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9 = ((-data->simulationInfo->realParameter[21])) * ($PConduction_wall4_outer_port_a_TSeedNLSJac9);
  TRACE_POP
}

/*
 equation index: 246
 type: SIMPLE_ASSIGN
 Radiation_wall4_outer._Q_flow._$pDERNLSJac9._dummyVarNLSJac9 = -2.2681468e-07 * Radiation_wall4_outer.Gr * Conduction_wall4_outer.port_a.T ^ 3.0 * Conduction_wall4_outer_port_a_TSeedNLSJac9
 */
void OM_Result_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  modelica_real tmp7;
  tmp7 = data->localData[0]->realVars[46] /* Conduction_wall4_outer._port_a._T variable */;
  $PRadiation_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[64]) * (((tmp7 * tmp7 * tmp7)) * ($PConduction_wall4_outer_port_a_TSeedNLSJac9)));
  TRACE_POP
}

/*
 equation index: 247
 type: SIMPLE_ASSIGN
 Conduction_wall4_outer._Q_flow._$pDERNLSJac9._dummyVarNLSJac9 = Radiation_wall4_outer.Q_flow.$pDERNLSJac9.dummyVarNLSJac9 + Convection_wall4_outer.Q_flow.$pDERNLSJac9.dummyVarNLSJac9
 */
void OM_Result_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  $PConduction_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9 = $PRadiation_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9 + $PConvection_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9;
  TRACE_POP
}

/*
 equation index: 248
 type: SIMPLE_ASSIGN
 Conduction_wall4_outer._dT._$pDERNLSJac9._dummyVarNLSJac9 = DIVISION(Conduction_wall4_outer.Q_flow.$pDERNLSJac9.dummyVarNLSJac9, Conduction_wall4_outer.G)
 */
void OM_Result_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  $PConduction_wall4_outer$PdT$P$pDERNLSJac9$PdummyVarNLSJac9 = DIVISION_SIM($PConduction_wall4_outer$PQ_flow$P$pDERNLSJac9$PdummyVarNLSJac9,data->simulationInfo->realParameter[12],"Conduction_wall4_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 249
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac9._dummyVarNLSJac9 = Conduction_wall4_outer_port_a_TSeedNLSJac9 - Conduction_wall4_outer.dT.$pDERNLSJac9.dummyVarNLSJac9
 */
void OM_Result_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  $P$res$P1$P$pDERNLSJac9$PdummyVarNLSJac9 = $PConduction_wall4_outer_port_a_TSeedNLSJac9 - $PConduction_wall4_outer$PdT$P$pDERNLSJac9$PdummyVarNLSJac9;
  TRACE_POP
}
int OM_Result_functionJacNLSJac9_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac9;
  OM_Result_eqFunction_245(data, threadData);

  OM_Result_eqFunction_246(data, threadData);

  OM_Result_eqFunction_247(data, threadData);

  OM_Result_eqFunction_248(data, threadData);

  OM_Result_eqFunction_249(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 232
 type: SIMPLE_ASSIGN
 Convection_wall4_inner._Q_flow._$pDERNLSJac8._dummyVarNLSJac8 = Convection_coef_wall4_inner.k * Conduction_wall4_inner_port_b_TSeedNLSJac8
 */
void OM_Result_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  $PConvection_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8 = (data->simulationInfo->realParameter[20]) * ($PConduction_wall4_inner_port_b_TSeedNLSJac8);
  TRACE_POP
}

/*
 equation index: 233
 type: SIMPLE_ASSIGN
 Radiation_wall4_inner._Q_flow._$pDERNLSJac8._dummyVarNLSJac8 = 2.2681468e-07 * Radiation_wall4_inner.Gr * Conduction_wall4_inner.port_b.T ^ 3.0 * Conduction_wall4_inner_port_b_TSeedNLSJac8
 */
void OM_Result_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  modelica_real tmp8;
  tmp8 = data->localData[0]->realVars[43] /* Conduction_wall4_inner._port_b._T variable */;
  $PRadiation_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8 = (2.2681468e-07) * ((data->simulationInfo->realParameter[63]) * (((tmp8 * tmp8 * tmp8)) * ($PConduction_wall4_inner_port_b_TSeedNLSJac8)));
  TRACE_POP
}

/*
 equation index: 234
 type: SIMPLE_ASSIGN
 Conduction_wall4_inner._Q_flow._$pDERNLSJac8._dummyVarNLSJac8 = Radiation_wall4_inner.Q_flow.$pDERNLSJac8.dummyVarNLSJac8 + Convection_wall4_inner.Q_flow.$pDERNLSJac8.dummyVarNLSJac8
 */
void OM_Result_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  $PConduction_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8 = $PRadiation_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8 + $PConvection_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8;
  TRACE_POP
}

/*
 equation index: 235
 type: SIMPLE_ASSIGN
 Conduction_wall4_inner._dT._$pDERNLSJac8._dummyVarNLSJac8 = DIVISION(Conduction_wall4_inner.Q_flow.$pDERNLSJac8.dummyVarNLSJac8, Conduction_wall4_inner.G)
 */
void OM_Result_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  $PConduction_wall4_inner$PdT$P$pDERNLSJac8$PdummyVarNLSJac8 = DIVISION_SIM($PConduction_wall4_inner$PQ_flow$P$pDERNLSJac8$PdummyVarNLSJac8,data->simulationInfo->realParameter[11],"Conduction_wall4_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 236
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac8._dummyVarNLSJac8 = (-Conduction_wall4_inner_port_b_TSeedNLSJac8) - Conduction_wall4_inner.dT.$pDERNLSJac8.dummyVarNLSJac8
 */
void OM_Result_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  $P$res$P1$P$pDERNLSJac8$PdummyVarNLSJac8 = (-$PConduction_wall4_inner_port_b_TSeedNLSJac8) - $PConduction_wall4_inner$PdT$P$pDERNLSJac8$PdummyVarNLSJac8;
  TRACE_POP
}
int OM_Result_functionJacNLSJac8_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac8;
  OM_Result_eqFunction_232(data, threadData);

  OM_Result_eqFunction_233(data, threadData);

  OM_Result_eqFunction_234(data, threadData);

  OM_Result_eqFunction_235(data, threadData);

  OM_Result_eqFunction_236(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 146
 type: SIMPLE_ASSIGN
 Convection_roof_outer._Q_flow._$pDERNLSJac7._dummyVarNLSJac7 = (-Convection_coef_roof_outer.k) * Conduction_roof_outer_port_a_TSeedNLSJac7
 */
void OM_Result_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  $PConvection_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 = ((-data->simulationInfo->realParameter[15])) * ($PConduction_roof_outer_port_a_TSeedNLSJac7);
  TRACE_POP
}

/*
 equation index: 147
 type: SIMPLE_ASSIGN
 Heatflow_solar_radiation._port._Q_flow._$pDERNLSJac7._dummyVarNLSJac7 = (-Heatflow_solar_radiation.Q_flow) * Heatflow_solar_radiation.alpha * Conduction_roof_outer_port_a_TSeedNLSJac7
 */
void OM_Result_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  $PHeatflow_solar_radiation$Pport$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 = ((-data->localData[0]->realVars[72] /* Heatflow_solar_radiation._Q_flow variable */)) * ((data->simulationInfo->realParameter[53]) * ($PConduction_roof_outer_port_a_TSeedNLSJac7));
  TRACE_POP
}

/*
 equation index: 148
 type: SIMPLE_ASSIGN
 Radiation_roof_outer._Q_flow._$pDERNLSJac7._dummyVarNLSJac7 = -2.2681468e-07 * Radiation_roof_outer.Gr * Conduction_roof_outer.port_a.T ^ 3.0 * Conduction_roof_outer_port_a_TSeedNLSJac7
 */
void OM_Result_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  modelica_real tmp9;
  tmp9 = data->localData[0]->realVars[28] /* Conduction_roof_outer._port_a._T variable */;
  $PRadiation_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[57]) * (((tmp9 * tmp9 * tmp9)) * ($PConduction_roof_outer_port_a_TSeedNLSJac7)));
  TRACE_POP
}

/*
 equation index: 149
 type: SIMPLE_ASSIGN
 Conduction_roof_outer._Q_flow._$pDERNLSJac7._dummyVarNLSJac7 = Convection_roof_outer.Q_flow.$pDERNLSJac7.dummyVarNLSJac7 - (Heatflow_solar_radiation.port.Q_flow.$pDERNLSJac7.dummyVarNLSJac7 - Radiation_roof_outer.Q_flow.$pDERNLSJac7.dummyVarNLSJac7)
 */
void OM_Result_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  $PConduction_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 = $PConvection_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 - ($PHeatflow_solar_radiation$Pport$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7 - $PRadiation_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7);
  TRACE_POP
}

/*
 equation index: 150
 type: SIMPLE_ASSIGN
 Conduction_roof_outer._dT._$pDERNLSJac7._dummyVarNLSJac7 = DIVISION(Conduction_roof_outer.Q_flow.$pDERNLSJac7.dummyVarNLSJac7, Conduction_roof_outer.G)
 */
void OM_Result_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,150};
  $PConduction_roof_outer$PdT$P$pDERNLSJac7$PdummyVarNLSJac7 = DIVISION_SIM($PConduction_roof_outer$PQ_flow$P$pDERNLSJac7$PdummyVarNLSJac7,data->simulationInfo->realParameter[6],"Conduction_roof_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 151
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac7._dummyVarNLSJac7 = Conduction_roof_outer_port_a_TSeedNLSJac7 - Conduction_roof_outer.dT.$pDERNLSJac7.dummyVarNLSJac7
 */
void OM_Result_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,151};
  $P$res$P1$P$pDERNLSJac7$PdummyVarNLSJac7 = $PConduction_roof_outer_port_a_TSeedNLSJac7 - $PConduction_roof_outer$PdT$P$pDERNLSJac7$PdummyVarNLSJac7;
  TRACE_POP
}
int OM_Result_functionJacNLSJac7_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac7;
  OM_Result_eqFunction_146(data, threadData);

  OM_Result_eqFunction_147(data, threadData);

  OM_Result_eqFunction_148(data, threadData);

  OM_Result_eqFunction_149(data, threadData);

  OM_Result_eqFunction_150(data, threadData);

  OM_Result_eqFunction_151(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 129
 type: SIMPLE_ASSIGN
 Convection_wall1_outer._Q_flow._$pDERNLSJac6._dummyVarNLSJac6 = (-Convection_coef_wall1_outer.k) * Conduction_wall1_outer_port_a_TSeedNLSJac6
 */
void OM_Result_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,129};
  $PConvection_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6 = ((-data->simulationInfo->realParameter[17])) * ($PConduction_wall1_outer_port_a_TSeedNLSJac6);
  TRACE_POP
}

/*
 equation index: 130
 type: SIMPLE_ASSIGN
 Radiation_wall1_outer._Q_flow._$pDERNLSJac6._dummyVarNLSJac6 = -2.2681468e-07 * Radiation_wall1_outer.Gr * Conduction_wall1_outer.port_a.T ^ 3.0 * Conduction_wall1_outer_port_a_TSeedNLSJac6
 */
void OM_Result_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,130};
  modelica_real tmp10;
  tmp10 = data->localData[0]->realVars[34] /* Conduction_wall1_outer._port_a._T variable */;
  $PRadiation_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[60]) * (((tmp10 * tmp10 * tmp10)) * ($PConduction_wall1_outer_port_a_TSeedNLSJac6)));
  TRACE_POP
}

/*
 equation index: 131
 type: SIMPLE_ASSIGN
 Conduction_wall1_outer._Q_flow._$pDERNLSJac6._dummyVarNLSJac6 = Radiation_wall1_outer.Q_flow.$pDERNLSJac6.dummyVarNLSJac6 + Convection_wall1_outer.Q_flow.$pDERNLSJac6.dummyVarNLSJac6
 */
void OM_Result_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  $PConduction_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6 = $PRadiation_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6 + $PConvection_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6;
  TRACE_POP
}

/*
 equation index: 132
 type: SIMPLE_ASSIGN
 Conduction_wall1_outer._dT._$pDERNLSJac6._dummyVarNLSJac6 = DIVISION(Conduction_wall1_outer.Q_flow.$pDERNLSJac6.dummyVarNLSJac6, Conduction_wall1_outer.G)
 */
void OM_Result_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  $PConduction_wall1_outer$PdT$P$pDERNLSJac6$PdummyVarNLSJac6 = DIVISION_SIM($PConduction_wall1_outer$PQ_flow$P$pDERNLSJac6$PdummyVarNLSJac6,data->simulationInfo->realParameter[8],"Conduction_wall1_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 133
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac6._dummyVarNLSJac6 = Conduction_wall1_outer_port_a_TSeedNLSJac6 - Conduction_wall1_outer.dT.$pDERNLSJac6.dummyVarNLSJac6
 */
void OM_Result_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  $P$res$P1$P$pDERNLSJac6$PdummyVarNLSJac6 = $PConduction_wall1_outer_port_a_TSeedNLSJac6 - $PConduction_wall1_outer$PdT$P$pDERNLSJac6$PdummyVarNLSJac6;
  TRACE_POP
}
int OM_Result_functionJacNLSJac6_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac6;
  OM_Result_eqFunction_129(data, threadData);

  OM_Result_eqFunction_130(data, threadData);

  OM_Result_eqFunction_131(data, threadData);

  OM_Result_eqFunction_132(data, threadData);

  OM_Result_eqFunction_133(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 113
 type: SIMPLE_ASSIGN
 Convection_wall4_outer._Q_flow._$pDERNLSJac5._dummyVarNLSJac5 = (-Convection_coef_wall4_outer.k) * Conduction_wall4_outer_port_a_TSeedNLSJac5
 */
void OM_Result_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,113};
  $PConvection_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5 = ((-data->simulationInfo->realParameter[21])) * ($PConduction_wall4_outer_port_a_TSeedNLSJac5);
  TRACE_POP
}

/*
 equation index: 114
 type: SIMPLE_ASSIGN
 Radiation_wall4_outer._Q_flow._$pDERNLSJac5._dummyVarNLSJac5 = -2.2681468e-07 * Radiation_wall4_outer.Gr * Conduction_wall4_outer.port_a.T ^ 3.0 * Conduction_wall4_outer_port_a_TSeedNLSJac5
 */
void OM_Result_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,114};
  modelica_real tmp11;
  tmp11 = data->localData[0]->realVars[46] /* Conduction_wall4_outer._port_a._T variable */;
  $PRadiation_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[64]) * (((tmp11 * tmp11 * tmp11)) * ($PConduction_wall4_outer_port_a_TSeedNLSJac5)));
  TRACE_POP
}

/*
 equation index: 115
 type: SIMPLE_ASSIGN
 Conduction_wall4_outer._Q_flow._$pDERNLSJac5._dummyVarNLSJac5 = Radiation_wall4_outer.Q_flow.$pDERNLSJac5.dummyVarNLSJac5 + Convection_wall4_outer.Q_flow.$pDERNLSJac5.dummyVarNLSJac5
 */
void OM_Result_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,115};
  $PConduction_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5 = $PRadiation_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5 + $PConvection_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5;
  TRACE_POP
}

/*
 equation index: 116
 type: SIMPLE_ASSIGN
 Conduction_wall4_outer._dT._$pDERNLSJac5._dummyVarNLSJac5 = DIVISION(Conduction_wall4_outer.Q_flow.$pDERNLSJac5.dummyVarNLSJac5, Conduction_wall4_outer.G)
 */
void OM_Result_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,116};
  $PConduction_wall4_outer$PdT$P$pDERNLSJac5$PdummyVarNLSJac5 = DIVISION_SIM($PConduction_wall4_outer$PQ_flow$P$pDERNLSJac5$PdummyVarNLSJac5,data->simulationInfo->realParameter[12],"Conduction_wall4_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 117
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac5._dummyVarNLSJac5 = Conduction_wall4_outer_port_a_TSeedNLSJac5 - Conduction_wall4_outer.dT.$pDERNLSJac5.dummyVarNLSJac5
 */
void OM_Result_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,117};
  $P$res$P1$P$pDERNLSJac5$PdummyVarNLSJac5 = $PConduction_wall4_outer_port_a_TSeedNLSJac5 - $PConduction_wall4_outer$PdT$P$pDERNLSJac5$PdummyVarNLSJac5;
  TRACE_POP
}
int OM_Result_functionJacNLSJac5_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac5;
  OM_Result_eqFunction_113(data, threadData);

  OM_Result_eqFunction_114(data, threadData);

  OM_Result_eqFunction_115(data, threadData);

  OM_Result_eqFunction_116(data, threadData);

  OM_Result_eqFunction_117(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 97
 type: SIMPLE_ASSIGN
 Convection_wall3_outer._Q_flow._$pDERNLSJac4._dummyVarNLSJac4 = (-Convection_coef_wall3_outer.k) * Conduction_wall3_outer_port_a_TSeedNLSJac4
 */
void OM_Result_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,97};
  $PConvection_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4 = ((-data->simulationInfo->realParameter[19])) * ($PConduction_wall3_outer_port_a_TSeedNLSJac4);
  TRACE_POP
}

/*
 equation index: 98
 type: SIMPLE_ASSIGN
 Radiation_wall3_outer._Q_flow._$pDERNLSJac4._dummyVarNLSJac4 = -2.2681468e-07 * Radiation_wall3_outer.Gr * Conduction_wall3_outer.port_a.T ^ 3.0 * Conduction_wall3_outer_port_a_TSeedNLSJac4
 */
void OM_Result_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,98};
  modelica_real tmp12;
  tmp12 = data->localData[0]->realVars[40] /* Conduction_wall3_outer._port_a._T variable */;
  $PRadiation_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4 = (-2.2681468e-07) * ((data->simulationInfo->realParameter[62]) * (((tmp12 * tmp12 * tmp12)) * ($PConduction_wall3_outer_port_a_TSeedNLSJac4)));
  TRACE_POP
}

/*
 equation index: 99
 type: SIMPLE_ASSIGN
 Conduction_wall3_outer._Q_flow._$pDERNLSJac4._dummyVarNLSJac4 = Radiation_wall3_outer.Q_flow.$pDERNLSJac4.dummyVarNLSJac4 + Convection_wall3_outer.Q_flow.$pDERNLSJac4.dummyVarNLSJac4
 */
void OM_Result_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,99};
  $PConduction_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4 = $PRadiation_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4 + $PConvection_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4;
  TRACE_POP
}

/*
 equation index: 100
 type: SIMPLE_ASSIGN
 Conduction_wall3_outer._dT._$pDERNLSJac4._dummyVarNLSJac4 = DIVISION(Conduction_wall3_outer.Q_flow.$pDERNLSJac4.dummyVarNLSJac4, Conduction_wall3_outer.G)
 */
void OM_Result_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,100};
  $PConduction_wall3_outer$PdT$P$pDERNLSJac4$PdummyVarNLSJac4 = DIVISION_SIM($PConduction_wall3_outer$PQ_flow$P$pDERNLSJac4$PdummyVarNLSJac4,data->simulationInfo->realParameter[10],"Conduction_wall3_outer.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 101
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac4._dummyVarNLSJac4 = Conduction_wall3_outer_port_a_TSeedNLSJac4 - Conduction_wall3_outer.dT.$pDERNLSJac4.dummyVarNLSJac4
 */
void OM_Result_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,101};
  $P$res$P1$P$pDERNLSJac4$PdummyVarNLSJac4 = $PConduction_wall3_outer_port_a_TSeedNLSJac4 - $PConduction_wall3_outer$PdT$P$pDERNLSJac4$PdummyVarNLSJac4;
  TRACE_POP
}
int OM_Result_functionJacNLSJac4_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac4;
  OM_Result_eqFunction_97(data, threadData);

  OM_Result_eqFunction_98(data, threadData);

  OM_Result_eqFunction_99(data, threadData);

  OM_Result_eqFunction_100(data, threadData);

  OM_Result_eqFunction_101(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 67
 type: SIMPLE_ASSIGN
 Convection_roof_inner._Q_flow._$pDERNLSJac3._dummyVarNLSJac3 = Convection_coef_roof_inner.k * Conduction_roof_inner_port_b_TSeedNLSJac3
 */
void OM_Result_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,67};
  $PConvection_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3 = (data->simulationInfo->realParameter[14]) * ($PConduction_roof_inner_port_b_TSeedNLSJac3);
  TRACE_POP
}

/*
 equation index: 68
 type: SIMPLE_ASSIGN
 Radiation_roof_to_floor._Q_flow._$pDERNLSJac3._dummyVarNLSJac3 = 2.2681468e-07 * Radiation_roof_to_floor.Gr * Conduction_roof_inner.port_b.T ^ 3.0 * Conduction_roof_inner_port_b_TSeedNLSJac3
 */
void OM_Result_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,68};
  modelica_real tmp13;
  tmp13 = data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */;
  $PRadiation_roof_to_floor$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3 = (2.2681468e-07) * ((data->simulationInfo->realParameter[58]) * (((tmp13 * tmp13 * tmp13)) * ($PConduction_roof_inner_port_b_TSeedNLSJac3)));
  TRACE_POP
}

/*
 equation index: 69
 type: SIMPLE_ASSIGN
 Radiation_roof_inner._Q_flow._$pDERNLSJac3._dummyVarNLSJac3 = 2.2681468e-07 * Radiation_roof_inner.Gr * Conduction_roof_inner.port_b.T ^ 3.0 * Conduction_roof_inner_port_b_TSeedNLSJac3
 */
void OM_Result_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,69};
  modelica_real tmp14;
  tmp14 = data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */;
  $PRadiation_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3 = (2.2681468e-07) * ((data->simulationInfo->realParameter[56]) * (((tmp14 * tmp14 * tmp14)) * ($PConduction_roof_inner_port_b_TSeedNLSJac3)));
  TRACE_POP
}

/*
 equation index: 70
 type: SIMPLE_ASSIGN
 Conduction_roof_inner._Q_flow._$pDERNLSJac3._dummyVarNLSJac3 = Radiation_roof_to_floor.Q_flow.$pDERNLSJac3.dummyVarNLSJac3 - ((-Convection_roof_inner.Q_flow.$pDERNLSJac3.dummyVarNLSJac3) - Radiation_roof_inner.Q_flow.$pDERNLSJac3.dummyVarNLSJac3)
 */
void OM_Result_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,70};
  $PConduction_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3 = $PRadiation_roof_to_floor$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3 - ((-$PConvection_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3) - $PRadiation_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3);
  TRACE_POP
}

/*
 equation index: 71
 type: SIMPLE_ASSIGN
 Conduction_roof_inner._dT._$pDERNLSJac3._dummyVarNLSJac3 = DIVISION(Conduction_roof_inner.Q_flow.$pDERNLSJac3.dummyVarNLSJac3, Conduction_roof_inner.G)
 */
void OM_Result_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,71};
  $PConduction_roof_inner$PdT$P$pDERNLSJac3$PdummyVarNLSJac3 = DIVISION_SIM($PConduction_roof_inner$PQ_flow$P$pDERNLSJac3$PdummyVarNLSJac3,data->simulationInfo->realParameter[5],"Conduction_roof_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 72
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac3._dummyVarNLSJac3 = (-Conduction_roof_inner_port_b_TSeedNLSJac3) - Conduction_roof_inner.dT.$pDERNLSJac3.dummyVarNLSJac3
 */
void OM_Result_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,72};
  $P$res$P1$P$pDERNLSJac3$PdummyVarNLSJac3 = (-$PConduction_roof_inner_port_b_TSeedNLSJac3) - $PConduction_roof_inner$PdT$P$pDERNLSJac3$PdummyVarNLSJac3;
  TRACE_POP
}
int OM_Result_functionJacNLSJac3_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac3;
  OM_Result_eqFunction_67(data, threadData);

  OM_Result_eqFunction_68(data, threadData);

  OM_Result_eqFunction_69(data, threadData);

  OM_Result_eqFunction_70(data, threadData);

  OM_Result_eqFunction_71(data, threadData);

  OM_Result_eqFunction_72(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 53
 type: SIMPLE_ASSIGN
 Convection_wall1_inner._Q_flow._$pDERNLSJac2._dummyVarNLSJac2 = Convection_coef_wall1_inner.k * Conduction_wall1_inner_port_b_TSeedNLSJac2
 */
void OM_Result_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  $PConvection_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2 = (data->simulationInfo->realParameter[16]) * ($PConduction_wall1_inner_port_b_TSeedNLSJac2);
  TRACE_POP
}

/*
 equation index: 54
 type: SIMPLE_ASSIGN
 Radiation_wall1_inner._Q_flow._$pDERNLSJac2._dummyVarNLSJac2 = 2.2681468e-07 * Radiation_wall1_inner.Gr * Conduction_wall1_inner.port_b.T ^ 3.0 * Conduction_wall1_inner_port_b_TSeedNLSJac2
 */
void OM_Result_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  modelica_real tmp15;
  tmp15 = data->localData[0]->realVars[31] /* Conduction_wall1_inner._port_b._T variable */;
  $PRadiation_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2 = (2.2681468e-07) * ((data->simulationInfo->realParameter[59]) * (((tmp15 * tmp15 * tmp15)) * ($PConduction_wall1_inner_port_b_TSeedNLSJac2)));
  TRACE_POP
}

/*
 equation index: 55
 type: SIMPLE_ASSIGN
 Conduction_wall1_inner._Q_flow._$pDERNLSJac2._dummyVarNLSJac2 = Radiation_wall1_inner.Q_flow.$pDERNLSJac2.dummyVarNLSJac2 + Convection_wall1_inner.Q_flow.$pDERNLSJac2.dummyVarNLSJac2
 */
void OM_Result_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  $PConduction_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2 = $PRadiation_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2 + $PConvection_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2;
  TRACE_POP
}

/*
 equation index: 56
 type: SIMPLE_ASSIGN
 Conduction_wall1_inner._dT._$pDERNLSJac2._dummyVarNLSJac2 = DIVISION(Conduction_wall1_inner.Q_flow.$pDERNLSJac2.dummyVarNLSJac2, Conduction_wall1_inner.G)
 */
void OM_Result_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  $PConduction_wall1_inner$PdT$P$pDERNLSJac2$PdummyVarNLSJac2 = DIVISION_SIM($PConduction_wall1_inner$PQ_flow$P$pDERNLSJac2$PdummyVarNLSJac2,data->simulationInfo->realParameter[7],"Conduction_wall1_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 57
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac2._dummyVarNLSJac2 = (-Conduction_wall1_inner_port_b_TSeedNLSJac2) - Conduction_wall1_inner.dT.$pDERNLSJac2.dummyVarNLSJac2
 */
void OM_Result_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  $P$res$P1$P$pDERNLSJac2$PdummyVarNLSJac2 = (-$PConduction_wall1_inner_port_b_TSeedNLSJac2) - $PConduction_wall1_inner$PdT$P$pDERNLSJac2$PdummyVarNLSJac2;
  TRACE_POP
}
int OM_Result_functionJacNLSJac2_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac2;
  OM_Result_eqFunction_53(data, threadData);

  OM_Result_eqFunction_54(data, threadData);

  OM_Result_eqFunction_55(data, threadData);

  OM_Result_eqFunction_56(data, threadData);

  OM_Result_eqFunction_57(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 40
 type: SIMPLE_ASSIGN
 Convection_wall3_inner._Q_flow._$pDERNLSJac1._dummyVarNLSJac1 = Convection_coef_wall3_inner.k * Conduction_wall3_inner_port_b_TSeedNLSJac1
 */
void OM_Result_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,40};
  $PConvection_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1 = (data->simulationInfo->realParameter[18]) * ($PConduction_wall3_inner_port_b_TSeedNLSJac1);
  TRACE_POP
}

/*
 equation index: 41
 type: SIMPLE_ASSIGN
 Radiation_wall3_inner._Q_flow._$pDERNLSJac1._dummyVarNLSJac1 = 2.2681468e-07 * Radiation_wall3_inner.Gr * Conduction_wall3_inner.port_b.T ^ 3.0 * Conduction_wall3_inner_port_b_TSeedNLSJac1
 */
void OM_Result_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,41};
  modelica_real tmp16;
  tmp16 = data->localData[0]->realVars[37] /* Conduction_wall3_inner._port_b._T variable */;
  $PRadiation_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1 = (2.2681468e-07) * ((data->simulationInfo->realParameter[61]) * (((tmp16 * tmp16 * tmp16)) * ($PConduction_wall3_inner_port_b_TSeedNLSJac1)));
  TRACE_POP
}

/*
 equation index: 42
 type: SIMPLE_ASSIGN
 Conduction_wall3_inner._Q_flow._$pDERNLSJac1._dummyVarNLSJac1 = Radiation_wall3_inner.Q_flow.$pDERNLSJac1.dummyVarNLSJac1 + Convection_wall3_inner.Q_flow.$pDERNLSJac1.dummyVarNLSJac1
 */
void OM_Result_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,42};
  $PConduction_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1 = $PRadiation_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1 + $PConvection_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1;
  TRACE_POP
}

/*
 equation index: 43
 type: SIMPLE_ASSIGN
 Conduction_wall3_inner._dT._$pDERNLSJac1._dummyVarNLSJac1 = DIVISION(Conduction_wall3_inner.Q_flow.$pDERNLSJac1.dummyVarNLSJac1, Conduction_wall3_inner.G)
 */
void OM_Result_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,43};
  $PConduction_wall3_inner$PdT$P$pDERNLSJac1$PdummyVarNLSJac1 = DIVISION_SIM($PConduction_wall3_inner$PQ_flow$P$pDERNLSJac1$PdummyVarNLSJac1,data->simulationInfo->realParameter[9],"Conduction_wall3_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 44
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac1._dummyVarNLSJac1 = (-Conduction_wall3_inner_port_b_TSeedNLSJac1) - Conduction_wall3_inner.dT.$pDERNLSJac1.dummyVarNLSJac1
 */
void OM_Result_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,44};
  $P$res$P1$P$pDERNLSJac1$PdummyVarNLSJac1 = (-$PConduction_wall3_inner_port_b_TSeedNLSJac1) - $PConduction_wall3_inner$PdT$P$pDERNLSJac1$PdummyVarNLSJac1;
  TRACE_POP
}
int OM_Result_functionJacNLSJac1_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac1;
  OM_Result_eqFunction_40(data, threadData);

  OM_Result_eqFunction_41(data, threadData);

  OM_Result_eqFunction_42(data, threadData);

  OM_Result_eqFunction_43(data, threadData);

  OM_Result_eqFunction_44(data, threadData);
  
  TRACE_POP
  return 0;
}

/*
 equation index: 27
 type: SIMPLE_ASSIGN
 Convection_wall4_inner._Q_flow._$pDERNLSJac0._dummyVarNLSJac0 = Convection_coef_wall4_inner.k * Conduction_wall4_inner_port_b_TSeedNLSJac0
 */
void OM_Result_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,27};
  $PConvection_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0 = (data->simulationInfo->realParameter[20]) * ($PConduction_wall4_inner_port_b_TSeedNLSJac0);
  TRACE_POP
}

/*
 equation index: 28
 type: SIMPLE_ASSIGN
 Radiation_wall4_inner._Q_flow._$pDERNLSJac0._dummyVarNLSJac0 = 2.2681468e-07 * Radiation_wall4_inner.Gr * Conduction_wall4_inner.port_b.T ^ 3.0 * Conduction_wall4_inner_port_b_TSeedNLSJac0
 */
void OM_Result_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,28};
  modelica_real tmp17;
  tmp17 = data->localData[0]->realVars[43] /* Conduction_wall4_inner._port_b._T variable */;
  $PRadiation_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0 = (2.2681468e-07) * ((data->simulationInfo->realParameter[63]) * (((tmp17 * tmp17 * tmp17)) * ($PConduction_wall4_inner_port_b_TSeedNLSJac0)));
  TRACE_POP
}

/*
 equation index: 29
 type: SIMPLE_ASSIGN
 Conduction_wall4_inner._Q_flow._$pDERNLSJac0._dummyVarNLSJac0 = Radiation_wall4_inner.Q_flow.$pDERNLSJac0.dummyVarNLSJac0 + Convection_wall4_inner.Q_flow.$pDERNLSJac0.dummyVarNLSJac0
 */
void OM_Result_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,29};
  $PConduction_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0 = $PRadiation_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0 + $PConvection_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0;
  TRACE_POP
}

/*
 equation index: 30
 type: SIMPLE_ASSIGN
 Conduction_wall4_inner._dT._$pDERNLSJac0._dummyVarNLSJac0 = DIVISION(Conduction_wall4_inner.Q_flow.$pDERNLSJac0.dummyVarNLSJac0, Conduction_wall4_inner.G)
 */
void OM_Result_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,30};
  $PConduction_wall4_inner$PdT$P$pDERNLSJac0$PdummyVarNLSJac0 = DIVISION_SIM($PConduction_wall4_inner$PQ_flow$P$pDERNLSJac0$PdummyVarNLSJac0,data->simulationInfo->realParameter[11],"Conduction_wall4_inner.G",equationIndexes);
  TRACE_POP
}

/*
 equation index: 31
 type: SIMPLE_ASSIGN
 $res._1._$pDERNLSJac0._dummyVarNLSJac0 = (-Conduction_wall4_inner_port_b_TSeedNLSJac0) - Conduction_wall4_inner.dT.$pDERNLSJac0.dummyVarNLSJac0
 */
void OM_Result_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,31};
  $P$res$P1$P$pDERNLSJac0$PdummyVarNLSJac0 = (-$PConduction_wall4_inner_port_b_TSeedNLSJac0) - $PConduction_wall4_inner$PdT$P$pDERNLSJac0$PdummyVarNLSJac0;
  TRACE_POP
}
int OM_Result_functionJacNLSJac0_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_NLSJac0;
  OM_Result_eqFunction_27(data, threadData);

  OM_Result_eqFunction_28(data, threadData);

  OM_Result_eqFunction_29(data, threadData);

  OM_Result_eqFunction_30(data, threadData);

  OM_Result_eqFunction_31(data, threadData);
  
  TRACE_POP
  return 0;
}
int OM_Result_functionJacA_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OM_Result_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}
int OM_Result_functionJacB_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OM_Result_functionJacC_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OM_Result_functionJacD_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


