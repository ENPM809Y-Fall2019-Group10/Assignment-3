#pragma once

#include <iostream>
#include "landbasedrobot.h"

namespace rwa3{
	
class LandBasedTracked : public LandBasedRobot
{
	public:
		// Constructor
		LandBasedTracked(std::string* trackType=nullptr);
		
		// Members declaration
		virtual void GoUp(int, int) override;      	 // Move the robot up in the maze.
		virtual void GoDown(int, int) override;      // Move the robot down in the maze.
		virtual void TurnLeft(int, int) override;    // Move the robot left in the maze.
		virtual void TurnRight(int, int) override;   // Move the robot right in the maze.
		virtual void PickUp(std::string) override;   // Arm picks up an object.
		virtual void Release(std::string) override;  // Arm releases an object.
		
		//	Destructor
		~LandBasedTracked();
	
	protected:
		// Attributes
		std::string* track_type;		// Type of track mounted on the robot
};
}