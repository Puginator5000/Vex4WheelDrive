#include "subsystems/drivebase.h"

#include <cstdint>

using namespace DriveConstants;

Drivebase::Drivebase(std::int8_t topLeftPort, std::int8_t TopRightPort, std::int8_t botLeftPort, std::int8_t botRightPort) {
    m_TopLeftMotor  = pros::Motor(topLeftPort, false);
    m_TopRightMotor = pros::Motor(topRightPort, true);

    m_BotLeftMotor  = pros::Motor(botLeftPort, false);
    m_BotRightMotor = pros::Motor(botRightPort, true);
};


Drivebase::ArcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisTurn) {
    std::int32_t left  = xAxisSpeed + zAxisTurn;
    std::int32_t right = xAxisSpeed - zAxisTurn;

    m_TopLeftMotor.move(left);
    m_BotLeftMotor.move(left);
    
    m_TopRightMotor.move(right);
    m_BotRightMotor.move(right);
}