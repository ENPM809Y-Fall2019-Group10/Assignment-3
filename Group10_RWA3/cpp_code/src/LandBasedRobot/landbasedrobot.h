#pragma once
#include <iostream>

namespace rwa3{
class LandBasedRobot
{
	public:
		// Constructor
		LandBasedRobot(std::string name="none", double speed=0, double width=0, double length=0, double height=0, double capacity=0, int x=0, int y=0);
		
		// Mutators / Setters
		void set_name(std::string name);		// set the name of the robot
		void set_x(int);						// set the x-coordinate of the robot
		void set_y(int);						// set the y-coordinate of the robot
		void set_speed(double);					// set the speed of the robot
		void set_width(double);					// set the width of the robot
		void set_length(double);				// set the length of the robot
		void set_height(double);				// set the height of the robot
		void set_capacity(double);				// set the capacity of the robot
		
		// Accessors / Getters
		std::string get_name() const{return name_;};	// Get the name of the robot
		int get_x() const{return x_;};					// Get the x-coordinate of the robot
		int get_y() const{return y_;};					// Get the y-coordinate of the robot
		double get_speed() const{return speed_;};		// Get the speed of the robot
		double get_width() const{return width_;};		// Get the width of the robot
		double get_length() const{return length_;};		// Get the length of the robot
		double get_height() const{return height_;};		// Get the height of the robot
		double get_capacity() const{return capacity_;};	// Get the capacity of the robot
		
		// Members declaration
		virtual void GoUp(int, int)=0;      	// Move the robot up in the maze.
		virtual void GoDown(int, int)=0;      	// Move the robot down in the maze.
		virtual void TurnLeft(int, int)=0;    	// Move the robot left in the maze.
		virtual void TurnRight(int, int)=0;   	// Move the robot right in the maze.
		virtual void PickUp(std::string);   	// Arm picks up an object.
		virtual void Release(std::string);  	// Arm releases an object.

		// Destructor
//		~LandBasedRobot();
		virtual ~LandBasedRobot();
	
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