#pragma once

#include <iostream>
#include "landbasedrobot.h"

namespace rwa3{
	
class LandBasedWheeled : public LandBasedRobot
{
	public:
		// Constructor
		LandBasedWheeled(int wheel_number=0, std::string* wheel_type=nullptr, std::string name="none", int x=0, int y=0);
		
		// Mutators / Setters
		void set_wheel_number(int);
		void set_wheel_type(std::string*);
		
		// Accessors / Getters
		int get_wheel_number() const{return wheel_number_;};
		std::string* get_wheel_type() const{return wheel_type_;};
		
		// Members declaration
		void SpeedUp(int);							 //The robot can increase its speed, which is translated by the number of cells in the maze that the robot can traverse in each step.
		virtual void GoUp(int, int) override;      	 // Move the robot up in the maze.
		virtual void GoDown(int, int) override;      // Move the robot down in the maze.
		virtual void TurnLeft(int, int) override;    // Move the robot left in the maze.
		virtual void TurnRight(int, int) override;   // Move the robot right in the maze.
		virtual void PickUp(std::string) override;   // Arm picks up an object.
		virtual void Release(std::string) override;  // Arm releases an object.
		
		// Destructor
//		~LandBasedWheeled();
		virtual ~LandBasedWheeled();
		
	protected:
		int wheel_number_;			// Number of wheels mounted on the robot
		std::string* wheel_type_;	// Type of wheels mounted on the robot
};
}