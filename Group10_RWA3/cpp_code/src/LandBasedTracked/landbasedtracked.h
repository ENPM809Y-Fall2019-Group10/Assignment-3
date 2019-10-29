#pragma once

#include <iostream>
#include "landbasedrobot.h"

namespace rwa3{
	
class LandBasedTracked : public LandBasedRobot
{
	public:
		// Constructor
		LandBasedTracked(std::string* track_type=nullptr, std::string name="none", int x=0, int y=0);
		
		// Setters / Mutators
		void set_track_type(std::string*);
		
		// Getters / accessors
		std::string* get_track_type() const{return track_type_;};
		
		// Members declaration
		virtual void GoUp(int, int) override;      	 // Move the robot up in the maze.
		virtual void GoDown(int, int) override;      // Move the robot down in the maze.
		virtual void TurnLeft(int, int) override;    // Move the robot left in the maze.
		virtual void TurnRight(int, int) override;   // Move the robot right in the maze.
		virtual void PickUp(std::string) override;   // Arm picks up an object.
		virtual void Release(std::string) override;  // Arm releases an object.
		
		//	Destructor
//		~LandBasedTracked();
		virtual ~LandBasedTracked();
		
	protected:
		// Attributes
		std::string* track_type_;		// Type of track mounted on the robot
};
}