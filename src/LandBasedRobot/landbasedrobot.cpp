//!Group 10 - RWA3
//! \file landbasedrobot.cpp


#include "landbasedrobot.h" //!Includes basic LandBasedRobot header file for methods and attribute access.

void rwa3::LandBasedRobot::GoUp(int x,int y) //!X and Y positions are pulled to Up function.
{
	std::cout<<"LandBasedRobot::GoUp is called"<<std::endl; //!When up is called, cout output is activated identifying GoUp.
}
void rwa3::LandBasedRobot::GoDown(int x,int y) //!X and Y positions are pulled to Down function.
{
	std::cout<<"LandBasedRobot::GoDown is called"<<std::endl; //!When down is called, cout output is activated identifying GoDown.
}
void rwa3::LandBasedRobot::TurnLeft(int x,int y) //!X and Y positions are pulled to TurnLeft function.
{
	std::cout<<"LandBasedRobot::TurnLeft is called"<<std::endl; //!When left is called, cout output is activated identifying TurnLeft.
}
void rwa3::LandBasedRobot::TurnRight(int x,int y) //!X and Y positions are pulled to TurnRight function.
{
	std::cout<<"LandBasedRobot::TurnRight is called"<<std::endl; //!When right is called, cout output is activated identifying TurnRight.
}
void rwa3::LandBasedRobot::PickUp(std::string name) //!Item to pick up is pulled to function.
{
	std::cout<<"LandBasedRobot::PickUp is called"<<std::endl; //!When pickup is called, cout output is activated identifying PickUp.
}
void rwa3::LandBasedRobot::Release(std::string name) //!Item to pick up is pulled to function.
{
	std::cout<<"LandBasedRobot::Release is called"<<std::endl; //!When release is called, cout output is activated identifying Release.
}
