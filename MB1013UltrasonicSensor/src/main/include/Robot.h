#pragma once

#include <iostream>

#include <IterativeRobot.h>

#include <Ultrasonic.h>

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
  //                {Pinh Channel, Echo Channel}
  Ultrasonic sensor {0, 1};
};
