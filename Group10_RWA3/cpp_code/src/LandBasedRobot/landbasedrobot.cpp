#include "landbasedrobot.h"

rwa3::LandBasedRobot::LandBasedRobot(std::string name, int x, int y, double speed, double width, double length, double height, double capacity)
: name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x}, y_{y}
{std::cout << "LandBasedRobot::LandBasedRobot is called\n";}

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
