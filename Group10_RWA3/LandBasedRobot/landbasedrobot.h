#pragma once
#include <iostream>

namespace rwa3{
	
class LandBasedRobot
{
	public:
		// Constructor
		LandBasedRobot(std::string name="none", int x=0, int y=0, double width=0, 
			double height=0, double length=0, double capacity=0, double speed=0);
		
		// Mutators / Setters
		void set_name();		// set the name of the robot
		void set_x();			// set the x-coordinate of the robot
		void set_y();			// set the y-coordinate of the robot
		void set_speed();		// set the speed of the robot
		void set_width();		// set the width of the robot
		void set_length();		// set the length of the robot
		void set_height();		// set the height of the robot
		void set_capacity();	// set the capacity of the robot
		
		// Accessors / Getters
		std::string get_name() const;	// Get the name of the robot
		int get_x() const;				// Get the x-coordinate of the robot
		int get_y() const;				// Get the y-coordinate of the robot
		double get_speed() const;		// Get the speed of the robot
		double get_width() const;		// Get the width of the robot
		double get_length() const;		// Get the length of the robot
		double get_height() const;		// Get the height of the robot
		double get_capacity() const;	// Get the capacity of the robot
		
		// Members declaration
		virtual void GoUp(int, int);      	// Move the robot up in the maze.
		virtual void GoDown(int, int);      // Move the robot down in the maze.
		virtual void TurnLeft(int, int);    // Move the robot left in the maze.
		virtual void TurnRight(int, int);   // Move the robot right in the maze.
		virtual void PickUp(std::string);   // Arm picks up an object.
		virtual void Release(std::string);  // Arm releases an object.

		// Destructor
		~LandBasedRobot();
	
	protected:
		// Attributes
		std::string name_;      // Name of the robot.
		double speed_;      	// Driving speed of the robot.
		double width_;      	// Width of the base of the robot.
		double length_;      	// Length of the base of the robot.
		double height_;      	// Height of the base of the robot.
		double capacity_;       // Payload of the arm.
		int x_;      			// X coordinate of the robot in the maze.
		int y_;      			// Y coordinate of the robot in the maze.
};
}
