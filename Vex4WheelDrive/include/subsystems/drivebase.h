#pragma once

#ifndef _SUBSYSTEMS_DRIVEBASE_H_
#define _SUBSYSTEMS_DRIVEBASE_H_

#include "api.h" //pros api library
#include "constants.h"

class Drivebase {
 public:
    Drivebase(  std::int8_t topLeftPort, 
                std::int8_t TopRightPort, 
                std::int8_t botLeftPort, 
                std::int8_t botRightPort);
    void ArcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisTurn);
    
    pros::Motor m_TopLeftMotor;   //PROBLEM: pros::Motor has no default constructor
    pros::Motor m_TopRightMotor;

    pros::Motor m_BotLeftMotor;
    pros::Motor m_BotRightMotor;
 private:
 //by default, if no value is provided for an object, then c++ 
 //will call the default constuctor for you
    // pros::Motor m_TopLeftMotor;   //PROBLEM: pros::Motor has no default constructor
    // pros::Motor m_TopRightMotor;

    // pros::Motor m_BotLeftMotor;
    // pros::Motor m_BotRightMotor;
};




#endif