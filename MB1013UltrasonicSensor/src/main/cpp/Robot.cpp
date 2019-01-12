#include "Robot.h"

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {
  using namespace std;
  cout << "Ultrasonic Reading: " << sensor.GetRangeMM() << "mm" << endl;
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
