#pragma once

#include <IterativeRobot.h>

#include <PWMTalonSRX.h>
#include <Drive/DifferentialDrive.h>
#include <XboxController.h>
#include <BuiltInAccelerometer.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  PWMTalonSRX motor_left {0};
  PWMTalonSRX motor_right {1};
  DifferentialDrive drive {motor_left, motor_right};
  XboxController controller {0};
  BuiltInAccelerometer accelerometer;
};
