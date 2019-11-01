#pragma once
#include<iostream>
#include"src/LandBasedRobot/landbasedrobot.h"
//#include"landbasedrobot.h"
#include<string>

namespace rwa3
{

class LandBasedWheeled : public LandBasedRobot
{
	public:
		void SpeedUp(int); //The robot can increase it's speed, which is 
		//translated by the number of cells in the maze that the robot can
		//traverse in each step
		LandBasedWheeled(std::string name="none",int x=0, int y=0,int wheel_number=0,std::string* wheel_type=nullptr)
		:LandBasedRobot(name,x,y),wheel_number_{wheel_number},wheel_type_{wheel_type}{
//			std::cout<<"This is the LandBasedWHEELED's CONSTRUCTOR \n"<<std::endl;
		}
		//copy constructor
		LandBasedWheeled(const LandBasedWheeled& s): LandBasedWheeled{*s.wheel_type_}{
//			std::cout<<"This is the LandBasedWHEELED's <<COPY>> CONSTRUCTOR \n"<<std::endl;
		}
		//getters
		//for pointer
		std::string* get_wheel_type() const{
			return wheel_type_;
		};
		//for wheel number
		int get_wheel_number() const{
			return wheel_number_;
		}
		//setters
		//for pointer
		void set_wheel_type(std::string *wheel_type){
		}
		//for wheel number
		void set_wheel_number(int wheel_number){
			wheel_number_=wheel_number;
			return;
		}	
		//Function Prototyping
		virtual void GoUp(int,int) override;
		virtual void GoDown(int, int) override;//Move the robot down in the maze
		virtual void TurnLeft(int, int) override; //Move the robot left in the maze
		virtual void TurnRight(int, int) override; //Move the robot right in the maze
		virtual void PickUp(std::string) override; //Arm picks up an object
		virtual void Release(std::string) override; //Arm releases an object
		
		virtual ~LandBasedWheeled(){
//			std::cout<<"This is the LandBasedWHEELED's DESTRUCTOR \n"<<std::endl;
		}
		
	protected:
		int wheel_number_;//Number of wheels mounted on the robot
		std::string* wheel_type_; //Type of wheels mounted on the robot
		
};//end of the class

}//end of namespace rwa3

