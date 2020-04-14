
"use strict";

let AGVControl = require('./AGVControl.js')
let PopulationControl = require('./PopulationControl.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let SubmitTray = require('./SubmitTray.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')

module.exports = {
  AGVControl: AGVControl,
  PopulationControl: PopulationControl,
  VacuumGripperControl: VacuumGripperControl,
  SubmitTray: SubmitTray,
  ConveyorBeltControl: ConveyorBeltControl,
  GetMaterialLocations: GetMaterialLocations,
};
