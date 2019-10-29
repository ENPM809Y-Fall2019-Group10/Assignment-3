#include "landbasedrobot.h"

rwa3::LandBasedRobot::LandBasedRobot(std::string name, int x, int y, double width, double height, double length, double capacity, double speed)
: name_{name}, x_{x}, y_{y}, width_{width}, height_{height}, length_{length}, capacity_{capacity}, speed_{speed} 
{std::cout << "LandBasedRobot::LandBasedRobot is called\n";};

void rwa3::LandBasedRobot::GoUp(int x, int y)
{
	std::cout << "LandBasedRobot::GoUp is called\n";
}

void rwa3::LandBasedRobot::GoDown(int x, int y)
{
	std::cout << "LandBasedRobot::GoDown is called\n";
}

void rwa3::LandBasedRobot::TurnLeft(int x, int y)
{
	std::cout << "LandBasedRobot::TurnLeft is called\n";
}

void rwa3::LandBasedRobot::TurnRight(int x, int y)
{
	std::cout << "LandBasedRobot::TurnRight is called\n";
}

void rwa3::LandBasedRobot::PickUp(std::string str)
{
	std::cout << "LandBasedRobot::PickUp is called\n";
}

void rwa3::LandBasedRobot::Release(std::string str)
{
	std::cout << "LandBasedRobot::Release is called\n";
}

rwa3::LandBasedRobot::~LandBasedRobot()
{
	std::cout << "LandBasedRobot::~LandBasedRobot is called\n";
}

