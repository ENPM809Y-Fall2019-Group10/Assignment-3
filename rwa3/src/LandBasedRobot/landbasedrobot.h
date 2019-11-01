#pragma once
#include<iostream>
#include<string>

namespace rwa3
{
class LandBasedRobot
{
	public:
		
		//accessor or getter
			//to get x
		int get_x() const{
			return x_;
		}
			//to get y
		int get_y() const{
			return y_;
		}
			//to get the string
		std::string get_string() const{
			return name_;
		}
		
		//mutator or setter 
			//to set x
		void set_x(int x){
			x_=x;
			return;
		}
			//to set y
		void set_y(int y){
			y_=y;
			return;
		}
			//to set the string
		void set_string(std::string name){
			name_=name;
			return;
		}

		//Function Prototyping
		virtual void GoUp(int x_,int y_) =0; //Move the robot up in the maze
		virtual void GoDown(int x_,int y_) =0;//Move the robot down in the maze
		virtual void TurnLeft(int x_,int y_) =0; //Move the robot left in the maze
		virtual void TurnRight(int x_,int y_) =0; //Move the robot right in the maze
		virtual void PickUp(std::string) =0; //Arm picks up an object
		virtual void Release(std::string) =0; //Arm releases an object

		//constructor 
		LandBasedRobot(std::string name="name",int x=0, int y=0){
//			std::cout<<"This is the LandBasedROBOT's CONSTRUCTOR \n"<<std::endl;
		}
		//destructor 
		virtual ~LandBasedRobot(){
//			std::cout<<"This is the LandBasedROBOT's DESTRUCTOR \n"<<std::endl;
		}
	
	protected:
	
		std::string name_; //Name of the Robot
		double speed_; //Driving speed of the Robot
		double width_; //Width of the base of the Robot
		double length_; //Lengh of the base of the Robot
		double height_; //Height of the base of the robot
		double capacity_; //Payload of the arm
		int x_; //X coordinate of the robot in the maze
		int y_; //Y coordinate of the robot in the maze
};//end of the class
}//end of namespace rwa3

