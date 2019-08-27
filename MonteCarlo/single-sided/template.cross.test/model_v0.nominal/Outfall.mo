model Outfall
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor Temperature_Indoor annotation(
    Placement(visible = true, transformation(origin = {88, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall1_inner(G = 33.10 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-94, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall1_outer(G = 33.10 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-134, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_roof_outer(G = 122861.25 * CONDUCTIVITY_ROOF) annotation(
    Placement(visible = true, transformation(origin = {-142, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_roof_inner(G = 122861.25 * CONDUCTIVITY_ROOF) annotation(
    Placement(visible = true, transformation(origin = {-94, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall3_outer(G = 30.86 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-134, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall3_inner(G = 30.86 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-94, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall4_outer(G = 23.73 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-134, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Conduction_wall4_inner(G = 23.73 * CONDUCTIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-94, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor Capacitor_roof(C = 22427, T(fixed = true, start = 298.15)) annotation(
    Placement(visible = true, transformation(origin = {-114, 110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor Capacitor_wall1(C = 1134864, T(fixed = true, start = 298.15)) annotation(
    Placement(visible = true, transformation(origin = {-114, 52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor Capacitor_wall3(C = 1058112, T(fixed = true, start = 298.15)) annotation(
    Placement(visible = true, transformation(origin = {-114, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor Capacitor_wall4(C = 813600, T(fixed = true, start = 298.15)) annotation(
    Placement(visible = true, transformation(origin = {-114, -38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_roof_inner annotation(
    Placement(visible = true, transformation(origin = {-54, 118}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall1_inner annotation(
    Placement(visible = true, transformation(origin = {-54, 52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall3_inner annotation(
    Placement(visible = true, transformation(origin = {-54, 6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall4_inner annotation(
    Placement(visible = true, transformation(origin = {-54, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_roof_outer annotation(
    Placement(visible = true, transformation(origin = {-174, 114}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall1_outer annotation(
    Placement(visible = true, transformation(origin = {-174, 52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall4_outer annotation(
    Placement(visible = true, transformation(origin = {-174, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_wall3_outer annotation(
    Placement(visible = true, transformation(origin = {-174, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_roof_outer(Gr = 7.335 * EMISSIVITY_ROOF) annotation(
    Placement(visible = true, transformation(origin = {-174, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall1_outer(Gr = 7.881 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-174, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall3_outer(Gr = 7.348 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-174, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall4_outer(Gr = 5.650 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-174, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor Capacitor_indoor_air(C = 21841, T(fixed = true, start = 298.15)) annotation(
    Placement(visible = true, transformation(origin = {70, 108}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalCollector thermalCollector1(m = 12) annotation(
    Placement(visible = true, transformation(origin = {46, 84}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Thermal.HeatTransfer.Components.Convection Convection_floor annotation(
    Placement(visible = true, transformation(origin = {-50, -94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Heatflow_solar_radiation annotation(
    Placement(visible = true, transformation(origin = {-170, 152}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature Temperature_outdoor annotation(
    Placement(visible = true, transformation(origin = {-250, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature Temperature_floor annotation(
    Placement(visible = true, transformation(origin = {-132, -116}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Infiltration(k = 4.75 * 17.74 / 3600 * 1005 * 1.225 * INFILTRATION) annotation(
    Placement(visible = true, transformation(origin = {70, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Math.Product product1 annotation(
    Placement(visible = true, transformation(origin = {48, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Heatflow_infiltration annotation(
    Placement(visible = true, transformation(origin = {48, 14}, extent = {{10, 10}, {-10, -10}}, rotation = -90)));
  Modelica.Blocks.Sources.CombiTimeTable Data_solar_radiation(fileName = "/home/yunjaeh/OpenFOAM/yunjaeh-4.0/run/UQ/uq_2019/weather_input/DATA_DATE.mat", tableName = "RADIATION", tableOnFile = true, timeScale = 60) annotation(
    Placement(visible = true, transformation(origin = {-266, 166}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable Data_outdoor_temperature(fileName = "/home/yunjaeh/OpenFOAM/yunjaeh-4.0/run/UQ/uq_2019/weather_input/DATA_DATE.mat", tableName = "TEMPERATURE", tableOnFile = true, timeScale = 60) annotation(
    Placement(visible = true, transformation(origin = {-336, -96}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_roof_inner(k = 7.335 * CONVECTION_COEF_INNER) annotation(
    Placement(visible = true, transformation(origin = {-80, 140}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_roof_outer(k = 7.335 * CONVECTION_COEF_OUTER) annotation(
    Placement(visible = true, transformation(origin = {-202, 134}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall4_outer(k = 5.650 * CONVECTION_COEF_OUTER) annotation(
    Placement(visible = true, transformation(origin = {-196, -34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall4_inner(k = 5.650 * CONVECTION_COEF_INNER) annotation(
    Placement(visible = true, transformation(origin = {-74, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_floor(k = 7.316 * CONVECTION_COEF_INNER) annotation(
    Placement(visible = true, transformation(origin = {-100, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_roof_inner(Gr = 7.335 * EMISSIVITY_ROOF) annotation(
    Placement(visible = true, transformation(origin = {-54, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall1_inner(Gr = 7.881 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-54, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall3_inner(Gr = 7.348 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-54, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_wall4_inner(Gr = 5.650 * EMISSIVITY_WALL) annotation(
    Placement(visible = true, transformation(origin = {-54, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.BodyRadiation Radiation_floor(Gr = 7.316 * 0.85) annotation(
    Placement(visible = true, transformation(origin = {-50, -124}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall1_inner(k = 7.881 * CONVECTION_COEF_INNER) annotation(
    Placement(visible = true, transformation(origin = {-80, 72}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall3_inner(k = 7.348 * CONVECTION_COEF_INNER) annotation(
    Placement(visible = true, transformation(origin = {-86, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall1_outer(k = 7.881 * CONVECTION_COEF_OUTER) annotation(
    Placement(visible = true, transformation(origin = {-200, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Convection_coef_wall3_outer(k = 7.348 * CONVECTION_COEF_OUTER) annotation(
    Placement(visible = true, transformation(origin = {-198, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Product product2 annotation(
    Placement(visible = true, transformation(origin = {-232, 152}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant roof_emissivity(k = 7.3162 * EMISSIVITY_ROOF) annotation(
    Placement(visible = true, transformation(origin = {-266, 138}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature Temperature_sky annotation(
    Placement(visible = true, transformation(origin = {-248, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant Floor_temperature(k = 298.15) annotation(
    Placement(visible = true, transformation(origin = {-184, -112}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Sqrt sqrt1 annotation(
    Placement(visible = true, transformation(origin = {-302, 6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.0552) annotation(
    Placement(visible = true, transformation(origin = {-308, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.MultiProduct multiProduct1(nu = 3) annotation(
    Placement(visible = true, transformation(origin = {-274, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable Data_wind_speed(fileName = "/home/yunjaeh/OpenFOAM/yunjaeh-4.0/run/UQ/uq_2019/weather_input/DATA_DATE.mat", tableName = "WIND", tableOnFile = true, timeScale = 60) annotation(
    Placement(visible = true, transformation(origin = {-92, -142}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add Temperature_difference(k1 = +1, k2 = -1)  annotation(
    Placement(visible = true, transformation(origin = {42, -78}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Two_single_ventilation two_single_ventilation1 annotation(
    Placement(visible = true, transformation(origin = {10, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
equation
  connect(Temperature_outdoor.port, Radiation_roof_outer.port_a) annotation(
    Line(points = {{-240, -56}, {-222, -56}, {-222, 90}, {-184, 90}, {-184, 90}}, color = {191, 0, 0}));
  connect(Data_outdoor_temperature.y[1], multiProduct1.u[3]) annotation(
    Line(points = {{-325, -96}, {-304.5, -96}, {-304.5, -96}, {-284, -96}, {-284, -2}, {-284, -2}, {-284, 90}}, color = {0, 0, 127}, thickness = 0.5));
  connect(multiProduct1.y, Temperature_sky.T) annotation(
    Line(points = {{-262.3, 90}, {-260, 90}}, color = {0, 0, 127}));
  connect(sqrt1.y, multiProduct1.u[2]) annotation(
    Line(points = {{-291, 6}, {-287.5, 6}, {-287.5, 6}, {-284, 6}, {-284, 49}, {-284, 49}, {-284, 90}}, color = {0, 0, 127}));
  connect(Data_outdoor_temperature.y[1], sqrt1.u) annotation(
    Line(points = {{-325, -96}, {-319.5, -96}, {-319.5, -96}, {-314, -96}, {-314, -44}, {-314, -44}, {-314, 6}}, color = {0, 0, 127}, thickness = 0.5));
  connect(Conduction_roof_inner.port_b, Convection_roof_inner.solid) annotation(
    Line(points = {{-84, 100}, {-74, 100}, {-74, 118}, {-64, 118}}, color = {191, 0, 0}));
  connect(Convection_coef_roof_inner.y, Convection_roof_inner.Gc) annotation(
    Line(points = {{-69, 140}, {-53, 140}, {-53, 128}, {-54, 128}}, color = {0, 0, 127}));
  connect(Convection_roof_inner.fluid, thermalCollector1.port_a[1]) annotation(
    Line(points = {{-44, 118}, {-8, 118}, {-8, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Data_wind_speed.y[1], two_single_ventilation1.U) annotation(
    Line(points = {{-80, -142}, {4, -142}, {4, -50}}, color = {0, 0, 127}, thickness = 0.5));
  connect(Data_outdoor_temperature.y[1], two_single_ventilation1.Port_outdoor) annotation(
    Line(points = {{-324, -96}, {-278, -96}, {-278, -160}, {14, -160}, {14, -55}}, color = {0, 0, 127}, thickness = 0.5));
  connect(two_single_ventilation1.Port_indoor, thermalCollector1.port_a[11]) annotation(
    Line(points = {{18, -21}, {16, -21}, {16, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Temperature_Indoor.T, Temperature_difference.u2) annotation(
    Line(points = {{98, 80}, {110, 80}, {110, -108}, {48, -108}, {48, -90}}, color = {0, 0, 127}));
  connect(Data_outdoor_temperature.y[1], Temperature_difference.u1) annotation(
    Line(points = {{-325, -96}, {-278, -96}, {-278, -160}, {36, -160}, {36, -90}}, color = {0, 0, 127}, thickness = 0.5));
  connect(Temperature_difference.y, product1.u1) annotation(
    Line(points = {{42, -67}, {42, -30}}, color = {0, 0, 127}));
  connect(Capacitor_indoor_air.port, Temperature_Indoor.port) annotation(
    Line(points = {{70, 98}, {70, 88}, {78, 88}, {78, 80}}, color = {191, 0, 0}));
  connect(Convection_coef_floor.y, Convection_floor.Gc) annotation(
    Line(points = {{-89, -80}, {-65.5, -80}, {-65.5, -84}, {-50, -84}}, color = {0, 0, 127}));
  connect(Floor_temperature.y, Temperature_floor.T) annotation(
    Line(points = {{-173, -112}, {-144, -112}, {-144, -116}}, color = {0, 0, 127}));
  connect(Temperature_floor.port, Convection_floor.solid) annotation(
    Line(points = {{-122, -116}, {-91, -116}, {-91, -94}, {-60, -94}}, color = {191, 0, 0}));
  connect(Temperature_floor.port, Radiation_floor.port_a) annotation(
    Line(points = {{-122, -116}, {-60, -116}, {-60, -124}}, color = {191, 0, 0}));
  connect(Infiltration.y, product1.u2) annotation(
    Line(points = {{70, -44}, {54, -44}, {54, -30}, {54, -30}}, color = {0, 0, 127}));
  connect(product1.y, Heatflow_infiltration.Q_flow) annotation(
    Line(points = {{48, -7}, {48, 4}}, color = {0, 0, 127}));
  connect(Heatflow_infiltration.port, thermalCollector1.port_a[12]) annotation(
    Line(points = {{48, 24}, {36, 24}, {36, 84}}, color = {191, 0, 0}));
  connect(Convection_coef_roof_outer.y, Convection_roof_outer.Gc) annotation(
    Line(points = {{-191, 134}, {-174, 134}, {-174, 124}}, color = {0, 0, 127}));
  connect(Radiation_floor.port_b, thermalCollector1.port_a[10]) annotation(
    Line(points = {{-40, -124}, {-8, -124}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Convection_floor.fluid, thermalCollector1.port_a[9]) annotation(
    Line(points = {{-40, -94}, {-8, -94}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Radiation_wall4_inner.port_b, thermalCollector1.port_a[8]) annotation(
    Line(points = {{-44, -68}, {-8, -68}, {-8, 86}, {36, 86}, {36, 84}}, color = {191, 0, 0}));
  connect(Convection_wall4_inner.fluid, thermalCollector1.port_a[7]) annotation(
    Line(points = {{-44, -48}, {-8, -48}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Radiation_wall3_inner.port_b, thermalCollector1.port_a[6]) annotation(
    Line(points = {{-44, -18}, {-8, -18}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Convection_wall3_inner.fluid, thermalCollector1.port_a[5]) annotation(
    Line(points = {{-44, 6}, {-8, 6}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Radiation_wall1_inner.port_b, thermalCollector1.port_a[4]) annotation(
    Line(points = {{-44, 32}, {-8, 32}, {-8, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Convection_wall1_inner.fluid, thermalCollector1.port_a[3]) annotation(
    Line(points = {{-44, 52}, {-8, 52}, {-8, 84}, {36, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(Radiation_roof_inner.port_b, thermalCollector1.port_a[2]) annotation(
    Line(points = {{-44, 90}, {-16, 90}, {-16, 84}, {36, 84}, {36, 84}}, color = {191, 0, 0}));
  connect(thermalCollector1.port_b, Capacitor_indoor_air.port) annotation(
    Line(points = {{56, 84}, {70, 84}, {70, 98}}, color = {191, 0, 0}));
  connect(const.y, multiProduct1.u[1]) annotation(
    Line(points = {{-297, 90}, {-284, 90}}, color = {0, 0, 127}));
  connect(roof_emissivity.y, product2.u2) annotation(
    Line(points = {{-255, 138}, {-252.75, 138}, {-252.75, 138}, {-250.5, 138}, {-250.5, 146}, {-247.25, 146}, {-247.25, 146}, {-244, 146}}, color = {0, 0, 127}));
  connect(product2.y, Heatflow_solar_radiation.Q_flow) annotation(
    Line(points = {{-221, 152}, {-180, 152}}, color = {0, 0, 127}));
  connect(Data_solar_radiation.y[1], product2.u1) annotation(
    Line(points = {{-255, 166}, {-254.75, 166}, {-254.75, 166}, {-254.5, 166}, {-254.5, 158}, {-244, 158}}, color = {0, 0, 127}, thickness = 0.5));
  connect(Convection_coef_wall3_outer.y, Convection_wall3_outer.Gc) annotation(
    Line(points = {{-187, 20}, {-181, 20}, {-181, 20}, {-173, 20}, {-173, 12}, {-175, 12}, {-175, 12}, {-175, 12}}, color = {0, 0, 127}));
  connect(Convection_coef_wall1_outer.y, Convection_wall1_outer.Gc) annotation(
    Line(points = {{-189, 74}, {-173, 74}, {-173, 62}, {-175, 62}, {-175, 62}, {-175, 62}}, color = {0, 0, 127}));
  connect(Convection_coef_wall3_inner.y, Convection_wall3_inner.Gc) annotation(
    Line(points = {{-75, 18}, {-64.5, 18}, {-64.5, 18}, {-54, 18}, {-54, 18}, {-54, 18}, {-54, 16}}, color = {0, 0, 127}));
  connect(Convection_coef_wall1_inner.y, Convection_wall1_inner.Gc) annotation(
    Line(points = {{-69, 72}, {-53, 72}, {-53, 62}, {-55, 62}}, color = {0, 0, 127}));
  connect(Conduction_wall4_inner.port_b, Radiation_wall4_inner.port_a) annotation(
    Line(points = {{-84, -48}, {-74, -48}, {-74, -68}, {-64, -68}, {-64, -68}}, color = {191, 0, 0}));
  connect(Conduction_wall3_inner.port_b, Radiation_wall3_inner.port_a) annotation(
    Line(points = {{-84, -8}, {-79, -8}, {-79, -8}, {-74, -8}, {-74, -18}, {-64, -18}, {-64, -17}, {-64, -17}, {-64, -18}}, color = {191, 0, 0}));
  connect(Conduction_wall1_inner.port_b, Radiation_wall1_inner.port_a) annotation(
    Line(points = {{-84, 42}, {-74, 42}, {-74, 32}, {-64, 32}, {-64, 32}}, color = {191, 0, 0}));
  connect(Conduction_roof_inner.port_b, Radiation_roof_inner.port_a) annotation(
    Line(points = {{-84, 100}, {-74, 100}, {-74, 90}, {-64, 90}, {-64, 90}}, color = {191, 0, 0}));
  connect(Convection_coef_wall4_inner.y, Convection_wall4_inner.Gc) annotation(
    Line(points = {{-63, -32}, {-59, -32}, {-59, -32}, {-53, -32}, {-53, -38}, {-55, -38}}, color = {0, 0, 127}));
  connect(Convection_coef_wall4_outer.y, Convection_wall4_outer.Gc) annotation(
    Line(points = {{-185, -34}, {-179, -34}, {-179, -34}, {-171, -34}, {-171, -38}, {-174, -38}, {-174, -38}, {-175, -38}}, color = {0, 0, 127}));
  connect(Data_outdoor_temperature.y[1], Temperature_outdoor.T) annotation(
    Line(points = {{-325, -96}, {-307.25, -96}, {-307.25, -96}, {-289.5, -96}, {-289.5, -56}, {-275.75, -56}, {-275.75, -56}, {-262, -56}}, color = {0, 0, 127}, thickness = 0.5));
  connect(Temperature_outdoor.port, Convection_roof_outer.solid) annotation(
    Line(points = {{-240, -56}, {-230, -56}, {-230, 114}, {-207, 114}, {-207, 114}, {-184, 114}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Convection_wall4_outer.solid) annotation(
    Line(points = {{-240, -56}, {-227.5, -56}, {-227.5, -56}, {-215, -56}, {-215, -48}, {-199.5, -48}, {-199.5, -48}, {-184, -48}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Convection_wall3_outer.solid) annotation(
    Line(points = {{-240, -56}, {-227.5, -56}, {-227.5, -56}, {-215, -56}, {-215, 2}, {-184, 2}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Convection_wall1_outer.solid) annotation(
    Line(points = {{-240, -56}, {-235, -56}, {-235, -56}, {-230, -56}, {-230, 52}, {-207, 52}, {-207, 52}, {-184, 52}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Radiation_wall1_outer.port_a) annotation(
    Line(points = {{-240, -56}, {-230, -56}, {-230, -56}, {-220, -56}, {-220, 32}, {-184, 32}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Radiation_wall3_outer.port_a) annotation(
    Line(points = {{-240, -56}, {-227.5, -56}, {-227.5, -56}, {-215, -56}, {-215, -16}, {-199.5, -16}, {-199.5, -16}, {-184, -16}}, color = {191, 0, 0}));
  connect(Temperature_outdoor.port, Radiation_wall4_outer.port_a) annotation(
    Line(points = {{-240, -56}, {-218, -56}, {-218, -68}, {-184, -68}}, color = {191, 0, 0}));
  connect(Heatflow_solar_radiation.port, Conduction_roof_outer.port_a) annotation(
    Line(points = {{-160, 152}, {-155, 152}, {-155, 152}, {-150, 152}, {-150, 127}, {-150, 127}, {-150, 100}}, color = {191, 0, 0}));
  connect(Radiation_wall4_outer.port_b, Conduction_wall4_outer.port_a) annotation(
    Line(points = {{-164, -68}, {-154, -68}, {-154, -68}, {-144, -68}, {-144, -48}, {-144, -48}, {-144, -48}, {-144, -48}}, color = {191, 0, 0}));
  connect(Radiation_wall3_outer.port_b, Conduction_wall3_outer.port_a) annotation(
    Line(points = {{-164, -16}, {-144, -16}, {-144, -8}, {-144, -8}, {-144, -8}, {-144, -8}}, color = {191, 0, 0}));
  connect(Radiation_wall1_outer.port_b, Conduction_wall1_outer.port_a) annotation(
    Line(points = {{-164, 32}, {-155, 32}, {-155, 32}, {-146, 32}, {-146, 42}, {-145, 42}, {-145, 42}, {-144, 42}}, color = {191, 0, 0}));
  connect(Radiation_roof_outer.port_b, Conduction_roof_outer.port_a) annotation(
    Line(points = {{-164, 90}, {-157, 90}, {-157, 100}, {-150, 100}}, color = {191, 0, 0}));
  connect(Convection_wall3_outer.fluid, Conduction_wall3_outer.port_a) annotation(
    Line(points = {{-164, 2}, {-144, 2}, {-144, -8}, {-144, -8}}, color = {191, 0, 0}));
  connect(Convection_wall4_outer.fluid, Conduction_wall4_outer.port_a) annotation(
    Line(points = {{-164, -48}, {-144, -48}, {-144, -48}, {-144, -48}}, color = {191, 0, 0}));
  connect(Convection_wall1_outer.fluid, Conduction_wall1_outer.port_a) annotation(
    Line(points = {{-164, 52}, {-154, 52}, {-154, 52}, {-144, 52}, {-144, 42}, {-144, 42}}, color = {191, 0, 0}));
  connect(Convection_roof_outer.fluid, Conduction_roof_outer.port_a) annotation(
    Line(points = {{-164, 114}, {-150, 114}, {-150, 100}}, color = {191, 0, 0}));
  connect(Conduction_wall4_inner.port_b, Convection_wall4_inner.solid) annotation(
    Line(points = {{-84, -48}, {-64, -48}, {-64, -48}, {-64, -48}, {-64, -48}, {-64, -48}}, color = {191, 0, 0}));
  connect(Conduction_wall3_inner.port_b, Convection_wall3_inner.solid) annotation(
    Line(points = {{-84, -8}, {-79, -8}, {-79, -8}, {-74, -8}, {-74, 6}, {-69, 6}, {-69, 6}, {-64, 6}}, color = {191, 0, 0}));
  connect(Conduction_wall1_inner.port_b, Convection_wall1_inner.solid) annotation(
    Line(points = {{-84, 42}, {-74, 42}, {-74, 52}, {-62, 52}}, color = {191, 0, 0}));
  connect(Conduction_wall4_outer.port_b, Capacitor_wall4.port) annotation(
    Line(points = {{-124, -48}, {-114, -48}, {-114, -48}, {-114, -48}}, color = {191, 0, 0}));
  connect(Capacitor_wall4.port, Conduction_wall4_inner.port_a) annotation(
    Line(points = {{-114, -48}, {-104, -48}, {-104, -48}, {-104, -48}}, color = {191, 0, 0}));
  connect(Conduction_wall3_outer.port_b, Capacitor_wall3.port) annotation(
    Line(points = {{-124, -8}, {-114, -8}, {-114, -8}, {-114, -8}, {-114, -8}, {-114, -8}}, color = {191, 0, 0}));
  connect(Capacitor_wall3.port, Conduction_wall3_inner.port_a) annotation(
    Line(points = {{-114, -8}, {-110, -8}, {-110, -8}, {-106, -8}, {-106, -8}, {-105, -8}, {-105, -8}, {-104, -8}}, color = {191, 0, 0}));
  connect(Conduction_wall1_outer.port_b, Capacitor_wall1.port) annotation(
    Line(points = {{-124, 42}, {-119, 42}, {-119, 42}, {-114, 42}, {-114, 42}, {-114, 42}, {-114, 42}, {-114, 42}}, color = {191, 0, 0}));
  connect(Capacitor_wall1.port, Conduction_wall1_inner.port_a) annotation(
    Line(points = {{-114, 42}, {-109, 42}, {-109, 42}, {-104, 42}, {-104, 42}, {-104, 42}, {-104, 42}, {-104, 42}}, color = {191, 0, 0}));
  connect(Capacitor_roof.port, Conduction_roof_inner.port_a) annotation(
    Line(points = {{-114, 100}, {-109, 100}, {-109, 100}, {-104, 100}, {-104, 100}, {-104, 100}, {-104, 100}, {-104, 100}}, color = {191, 0, 0}));
  connect(Conduction_roof_outer.port_b, Capacitor_roof.port) annotation(
    Line(points = {{-132, 100}, {-116, 100}}, color = {191, 0, 0}));
  annotation(
    uses(Modelica(version = "3.2.2")),
    experiment(StartTime = 0, StopTime = 86400, Tolerance = 1e-6, Interval = 173.494),
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Outfall;