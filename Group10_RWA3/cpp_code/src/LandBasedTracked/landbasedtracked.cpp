#include "landbasedtracked.h"

rwa3::LandBasedTracked::LandBasedTracked(std::string name, int x, int y) 
: LandBasedRobot(name, x, y){
	std::cout << "LandBasedTracked::LandBasedTracked is called\n";
	track_type_ = new std::string;
}

void rwa3::LandBasedTracked::GoUp(int x, int y)
{
	std::cout << "LandBasedTracked::GoUp is called\n";
}

void rwa3::LandBasedTracked::GoDown(int x, int y)
{
	std::cout << "LandBasedTracked::GoDown is called\n";
}

void rwa3::LandBasedTracked::TurnLeft(int x, int y)
{
	std::cout << "LandBasedTracked::TurnLeft is called\n";
}

void rwa3::LandBasedTracked::TurnRight(int x, int y)
{
	std::cout << "LandBasedTracked::TurnRight is called\n";
}

void rwa3::LandBasedTracked::PickUp(std::string str)
{
	std::cout << "LandBasedTracked::PickUp is called\n";
}

void rwa3::LandBasedTracked::Release(std::string str)
{
	std::cout << "LandBasedTracked::Release is called\n";
}

rwa3::LandBasedTracked::~LandBasedTracked()
{
	delete track_type_;
	std::cout << "LandBasedTracked::~LandBasedTracked is called\n";
}
