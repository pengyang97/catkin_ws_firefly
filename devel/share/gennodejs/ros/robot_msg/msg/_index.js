
"use strict";

let SlamStatus = require('./SlamStatus.js');
let LocalizationState = require('./LocalizationState.js');
let FeedBack = require('./FeedBack.js');
let ActionState = require('./ActionState.js');
let Humidifier = require('./Humidifier.js');
let StringOccupancyGrid = require('./StringOccupancyGrid.js');
let BaseInfo = require('./BaseInfo.js');
let LeanMap = require('./LeanMap.js');
let MapNotify = require('./MapNotify.js');
let ScoredPose = require('./ScoredPose.js');
let DockingState = require('./DockingState.js');
let auto_dockActionResult = require('./auto_dockActionResult.js');
let auto_dockGoal = require('./auto_dockGoal.js');
let auto_dockActionFeedback = require('./auto_dockActionFeedback.js');
let auto_dockActionGoal = require('./auto_dockActionGoal.js');
let auto_dockAction = require('./auto_dockAction.js');
let auto_dockResult = require('./auto_dockResult.js');
let auto_dockFeedback = require('./auto_dockFeedback.js');

module.exports = {
  SlamStatus: SlamStatus,
  LocalizationState: LocalizationState,
  FeedBack: FeedBack,
  ActionState: ActionState,
  Humidifier: Humidifier,
  StringOccupancyGrid: StringOccupancyGrid,
  BaseInfo: BaseInfo,
  LeanMap: LeanMap,
  MapNotify: MapNotify,
  ScoredPose: ScoredPose,
  DockingState: DockingState,
  auto_dockActionResult: auto_dockActionResult,
  auto_dockGoal: auto_dockGoal,
  auto_dockActionFeedback: auto_dockActionFeedback,
  auto_dockActionGoal: auto_dockActionGoal,
  auto_dockAction: auto_dockAction,
  auto_dockResult: auto_dockResult,
  auto_dockFeedback: auto_dockFeedback,
};
