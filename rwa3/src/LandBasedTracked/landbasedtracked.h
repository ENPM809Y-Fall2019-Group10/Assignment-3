#pragma once
#include<iostream>
#include"src/LandBasedRobot/landbasedrobot.h"
#include<string>
namespace rwa3
{
class LandBasedTracked : public LandBasedRobot
{
	public:
		// constructor
		LandBasedTracked(std::string name="none",int x=0, int y=0,std::string* track_type=nullptr)
		:LandBasedRobot(name,x,y),track_type_{track_type}{
//			std::cout<<"This is the LandBasedTRACKED's CONSTRUCTOR \n"<<std::endl;
		}
		//copy constructor
		LandBasedTracked(const LandBasedTracked& s): LandBasedTracked{*s.track_type_}{
//			std::cout<<"This is the LandBasedTRACKED's <<COPY>> CONSTRUCTOR \n"<<std::endl;
			}

		//getter for the pointer
		std::string* get_track_type() const{
			return track_type_;
		};
		//setter for the pointer
		void set_track_type(std::string *track_type){
		}
		//Function Prototyping
		virtual void GoUp(int,int) override;
		virtual void GoDown(int, int) override;//Move the robot down in the maze
		virtual void TurnLeft(int, int) override; //Move the robot left in the maze
		virtual void TurnRight(int, int) override; //Move the robot right in the maze
		virtual void PickUp(std::string) override; //Arm picks up an object
		virtual void Release(std::string) override; //Arm releases an object
		//destructor 
		virtual ~LandBasedTracked(){
//			std::cout<<"This is the LandBasedTRACKED's DESTRUCTOR \n"<<std::endl;
			delete track_type_;
		}
	protected:
		std::string* track_type_; //Type of track mounted on the robot
};//end of the class
}//end of namespace rwa3

