#include "landbasedwheeled.h"

void rwa3::LandBasedWheeled::GoUp(int x, int y){
	std::cout<<"LandBasedRobot::GoUp is called"<<std::endl;
}
void rwa3::LandBasedWheeled::GoDown(int x,int y)
{
	std::cout<<"LandBasedRobot::GoDown is called"<<std::endl;
}
void rwa3::LandBasedWheeled::TurnLeft(int x,int y)
{
	std::cout<<"LandBasedRobot::TurnLeft is called"<<std::endl;
}
void rwa3::LandBasedWheeled::TurnRight(int x,int y)
{
	std::cout<<"LandBasedRobot::TurnRight is called"<<std::endl;
}
void rwa3::LandBasedWheeled::PickUp(std::string name)
{
	std::cout<<"LandBasedRobot::PickUp is called"<<std::endl;
}
void rwa3::LandBasedWheeled::Release(std::string name)
{
	std::cout<<"LandBasedRobot::Release is called"<<std::endl;
}

//FUCNTION ONLY IN LANDBASEDWHEELED
void rwa3::LandBasedWheeled::SpeedUp(int){
	std::cout<<"LandBasedWheeled::SpeedUp is called"<<std::endl;
}