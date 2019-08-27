/* Asserts */
#include "OM_Result_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 440
 type: ALGORITHM
 
   assert(Conduction_wall1_inner.port_b.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall1_inner.port_b.T, has value: " + String(Conduction_wall1_inner.port_b.T, "g"));
 */
void OM_Result_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,86,"Variable violating min constraint: 0.0 <= Conduction_wall1_inner.port_b.T, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[31] /* Conduction_wall1_inner._port_b._T variable */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* Conduction_wall1_inner._port_b._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall1_inner.port_b.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 441
 type: ALGORITHM
 
   assert(Conduction_wall1_outer.port_a.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall1_outer.port_a.T, has value: " + String(Conduction_wall1_outer.port_a.T, "g"));
 */
void OM_Result_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,86,"Variable violating min constraint: 0.0 <= Conduction_wall1_outer.port_a.T, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[34] /* Conduction_wall1_outer._port_a._T variable */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* Conduction_wall1_outer._port_a._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall1_outer.port_a.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 442
 type: ALGORITHM
 
   assert(Conduction_roof_outer.port_a.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_roof_outer.port_a.T, has value: " + String(Conduction_roof_outer.port_a.T, "g"));
 */
void OM_Result_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,85,"Variable violating min constraint: 0.0 <= Conduction_roof_outer.port_a.T, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->localData[0]->realVars[28] /* Conduction_roof_outer._port_a._T variable */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* Conduction_roof_outer._port_a._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_roof_outer.port_a.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 443
 type: ALGORITHM
 
   assert(Conduction_roof_inner.port_b.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_roof_inner.port_b.T, has value: " + String(Conduction_roof_inner.port_b.T, "g"));
 */
void OM_Result_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,85,"Variable violating min constraint: 0.0 <= Conduction_roof_inner.port_b.T, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* Conduction_roof_inner._port_b._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_roof_inner.port_b.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 444
 type: ALGORITHM
 
   assert(Conduction_wall3_outer.port_a.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall3_outer.port_a.T, has value: " + String(Conduction_wall3_outer.port_a.T, "g"));
 */
void OM_Result_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,86,"Variable violating min constraint: 0.0 <= Conduction_wall3_outer.port_a.T, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->localData[0]->realVars[40] /* Conduction_wall3_outer._port_a._T variable */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* Conduction_wall3_outer._port_a._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall3_outer.port_a.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 445
 type: ALGORITHM
 
   assert(Conduction_wall3_inner.port_b.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall3_inner.port_b.T, has value: " + String(Conduction_wall3_inner.port_b.T, "g"));
 */
void OM_Result_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,86,"Variable violating min constraint: 0.0 <= Conduction_wall3_inner.port_b.T, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[37] /* Conduction_wall3_inner._port_b._T variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* Conduction_wall3_inner._port_b._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall3_inner.port_b.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 446
 type: ALGORITHM
 
   assert(Conduction_wall4_outer.port_a.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall4_outer.port_a.T, has value: " + String(Conduction_wall4_outer.port_a.T, "g"));
 */
void OM_Result_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,86,"Variable violating min constraint: 0.0 <= Conduction_wall4_outer.port_a.T, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[46] /* Conduction_wall4_outer._port_a._T variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* Conduction_wall4_outer._port_a._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall4_outer.port_a.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 447
 type: ALGORITHM
 
   assert(Conduction_wall4_inner.port_b.T >= 0.0, "Variable violating min constraint: 0.0 <= Conduction_wall4_inner.port_b.T, has value: " + String(Conduction_wall4_inner.port_b.T, "g"));
 */
void OM_Result_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,86,"Variable violating min constraint: 0.0 <= Conduction_wall4_inner.port_b.T, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[43] /* Conduction_wall4_inner._port_b._T variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* Conduction_wall4_inner._port_b._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",2989,7,2989,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nConduction_wall4_inner.port_b.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 448
 type: ALGORITHM
 
   assert(Capacitor_roof.T >= 0.0, "Variable violating min constraint: 0.0 <= Capacitor_roof.T, has value: " + String(Capacitor_roof.T, "g"));
 */
void OM_Result_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,71,"Variable violating min constraint: 0.0 <= Capacitor_roof.T, has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[1] /* Capacitor_roof._T STATE(1,Capacitor_roof.der_T) */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* Capacitor_roof._T STATE(1,Capacitor_roof.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",541,7,542,33,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCapacitor_roof.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 449
 type: ALGORITHM
 
   assert(Capacitor_wall1.T >= 0.0, "Variable violating min constraint: 0.0 <= Capacitor_wall1.T, has value: " + String(Capacitor_wall1.T, "g"));
 */
void OM_Result_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,72,"Variable violating min constraint: 0.0 <= Capacitor_wall1.T, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[2] /* Capacitor_wall1._T STATE(1,Capacitor_wall1.der_T) */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* Capacitor_wall1._T STATE(1,Capacitor_wall1.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",541,7,542,33,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCapacitor_wall1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 450
 type: ALGORITHM
 
   assert(Capacitor_wall3.T >= 0.0, "Variable violating min constraint: 0.0 <= Capacitor_wall3.T, has value: " + String(Capacitor_wall3.T, "g"));
 */
void OM_Result_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,72,"Variable violating min constraint: 0.0 <= Capacitor_wall3.T, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[3] /* Capacitor_wall3._T STATE(1,Capacitor_wall3.der_T) */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* Capacitor_wall3._T STATE(1,Capacitor_wall3.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",541,7,542,33,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCapacitor_wall3.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 451
 type: ALGORITHM
 
   assert(Capacitor_wall4.T >= 0.0, "Variable violating min constraint: 0.0 <= Capacitor_wall4.T, has value: " + String(Capacitor_wall4.T, "g"));
 */
void OM_Result_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,72,"Variable violating min constraint: 0.0 <= Capacitor_wall4.T, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[4] /* Capacitor_wall4._T STATE(1,Capacitor_wall4.der_T) */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* Capacitor_wall4._T STATE(1,Capacitor_wall4.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",541,7,542,33,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCapacitor_wall4.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 452
 type: ALGORITHM
 
   assert(Capacitor_indoor_air.T >= 0.0, "Variable violating min constraint: 0.0 <= Capacitor_indoor_air.T, has value: " + String(Capacitor_indoor_air.T, "g"));
 */
void OM_Result_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,77,"Variable violating min constraint: 0.0 <= Capacitor_indoor_air.T, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[0] /* Capacitor_indoor_air._T STATE(1,Capacitor_indoor_air.der_T) */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* Capacitor_indoor_air._T STATE(1,Capacitor_indoor_air.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",541,7,542,33,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCapacitor_indoor_air.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 453
 type: ALGORITHM
 
   assert(Data_outdoor_temperature.y[1] >= 0.0, "Variable violating min constraint: 0.0 <= Data_outdoor_temperature.y[1], has value: " + String(Data_outdoor_temperature.y[1], "g"));
 */
void OM_Result_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,84,"Variable violating min constraint: 0.0 <= Data_outdoor_temperature.y[1], has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[66] /* Data_outdoor_temperature._y[1] variable */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[66] /* Data_outdoor_temperature._y[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Interfaces.mo",314,5,315,56,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nData_outdoor_temperature.y[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 454
 type: ALGORITHM
 
   assert(Temperature_sky.T >= 0.0, "Variable violating min constraint: 0.0 <= Temperature_sky.T, has value: " + String(Temperature_sky.T, "g"));
 */
void OM_Result_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,72,"Variable violating min constraint: 0.0 <= Temperature_sky.T, has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[98] /* Temperature_sky._T variable */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* Temperature_sky._T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Thermal/HeatTransfer.mo",1739,7,1740,47,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nTemperature_sky.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
int OM_Result_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  OM_Result_eqFunction_440(data, threadData);

  OM_Result_eqFunction_441(data, threadData);

  OM_Result_eqFunction_442(data, threadData);

  OM_Result_eqFunction_443(data, threadData);

  OM_Result_eqFunction_444(data, threadData);

  OM_Result_eqFunction_445(data, threadData);

  OM_Result_eqFunction_446(data, threadData);

  OM_Result_eqFunction_447(data, threadData);

  OM_Result_eqFunction_448(data, threadData);

  OM_Result_eqFunction_449(data, threadData);

  OM_Result_eqFunction_450(data, threadData);

  OM_Result_eqFunction_451(data, threadData);

  OM_Result_eqFunction_452(data, threadData);

  OM_Result_eqFunction_453(data, threadData);

  OM_Result_eqFunction_454(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

