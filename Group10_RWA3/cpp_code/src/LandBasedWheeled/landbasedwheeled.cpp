#include "landbasedwheeled.h"

rwa3::LandBasedWheeled::LandBasedWheeled(std::string name, int x, int y)
: LandBasedRobot(name, x, y){
	std::cout << "LandBasedWheeled::LandBasedWheeled is called\n";
	wheel_type_ = new std::string;
}

void rwa3::LandBasedWheeled::SpeedUp(int delta)
{
	std::cout << "LandBasedWheeled::SpeedUp is called\n";
}

void rwa3::LandBasedWheeled::GoUp(int x, int y)
{
	std::cout << "LandBasedWheeled::GoUp is called\n";
}

void rwa3::LandBasedWheeled::GoDown(int x, int y)
{
	std::cout << "LandBasedWheeled::GoDown is called\n";
}

void rwa3::LandBasedWheeled::TurnLeft(int x, int y)
{
	std::cout << "LandBasedWheeled::TurnLeft is called\n";
}

void rwa3::LandBasedWheeled::TurnRight(int x, int y)
{
	std::cout << "LandBasedWheeled::TurnRight is called\n";
}

void rwa3::LandBasedWheeled::PickUp(std::string str)
{
	std::cout << "LandBasedWheeled::PickUp is called\n";
}

void rwa3::LandBasedWheeled::Release(std::string str)
{
	std::cout << "LandBasedWheeled::Release is called\n";
}

rwa3::LandBasedWheeled::~LandBasedWheeled()
{
	delete wheel_type_;
	std::cout << "LandBasedWheeled::~LandBasedWheeled is called\n";
}
