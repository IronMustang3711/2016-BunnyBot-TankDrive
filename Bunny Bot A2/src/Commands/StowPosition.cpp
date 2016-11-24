// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "StowPosition.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

StowPosition::StowPosition(double setpoint): Command() {
    m_setpoint = setpoint;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::nabberArm.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void StowPosition::Initialize() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
    Robot::nabberArm->Enable();
    Robot::nabberArm->SetSetpoint(m_setpoint);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
}

// Called repeatedly when this Command is scheduled to run
void StowPosition::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool StowPosition::IsFinished() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
    return Robot::nabberArm->OnTarget();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
}

// Called once after isFinished returns true
void StowPosition::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StowPosition::Interrupted() {

}
