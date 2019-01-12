#include "Robot.h"

#include <cmath>

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {
  // Drive Motion
  drive.ArcadeDrive(controller.GetRawAxis(0), controller.GetRawAxis(3));

  // Feedback
  double x = accelerometer.GetX();
  double y = accelerometer.GetY();
  controller.SetRumble(controller.kRightRumble, hypot(x, y));
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
