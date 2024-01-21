#include "subsystems/drivebase.h"

#include <cstdint>

Drivebase::Drivebase(std::int8_t topLeftPort, std::int8_t TopRightPort, std::int8_t botLeftPort, std::int8_t botRightPort) :
    m_TopLeftMotor{topLeftPort},
    m_TopRightMotor{TopRightPort},

    m_BotLeftMotor{botLeftPort, true},
    m_BotRightMotor{botRightPort, true} {}

//java equivalent - public void AracadeDrive( , )
void Drivebase::ArcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisTurn) {
    std::int32_t left  = xAxisSpeed + zAxisTurn;
    std::int32_t right = xAxisSpeed - zAxisTurn;

    m_TopLeftMotor.move(left);
    m_BotLeftMotor.move(left);
    
    m_TopRightMotor.move(right);
    m_BotRightMotor.move(right);