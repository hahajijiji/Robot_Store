#ifndef __ROBOT_PART_H
#define __ROBOT_PART_H

#include <iostream>
#include <string>

using namespace std;

class Robot_part {
	protected:
		string name;
		int model_number;
		double cost;
		string description;
	public:
		Robot_part(	string _name, 
					int _model_number, 
					double _cost, 
					string _description) : 
					
					name(_name),
					model_number(_model_number),
					cost(_cost),
					description(_description) { }
		
		friend ostream& operator<<(ostream& os, const Robot_part& robot_part);
		
		string _name() {
			return name;
		}
		
		int _model_number() {
			return model_number;
		}
		
		double _cost() {
			return cost;
		}
		
		string _description() {
			return description;
		}
		
};

class Head : public Robot_part {
	private:
		double power;
	public:
		Head( 	string _name, 
				int _model_number, 
				double _cost, 
				string _description,
				double _power) :
				
				Robot_part(_name,_model_number,_cost,_description),
				power(_power) { }
		
		double _power(){
			return power;
		}
};

class Arm : public Robot_part {
	private:
		double max_power;
	public:
		Arm(		string _name,
				int _model_number,
				double _cost,
				string _description,
				double _max_power) :
				
				Robot_part(_name,_model_number,_cost,_description),
				max_power(_max_power) { }
				
		
		double _max_power() {
			return max_power;
		}
};

class Locomotor : public Robot_part {
	private:
		double max_power;
	public:
		Locomotor(string _name,
				int _model_number,
				double _cost,
				string _description,
				double _max_power) :
				
				Robot_part(_name,_model_number,_cost,_description),
				max_power(_max_power) { }
	
		double _max_power(){
			return max_power;
		}
};

class Torso : public Robot_part {
	private:
		int battery_compartments;
		int max_arms;
	public:
		Torso(	string _name,
				int _model_number,
				double _cost,
				string _description,
				int _battery_compartments,
				int _max_arms) :
				
				Robot_part(_name,_model_number,_cost,_description),
				battery_compartments(_battery_compartments),
				max_arms(_max_arms) { }
		
		int _battery_compartments() {
			return battery_compartments;
		}
		
		int _max_arms() {
			return max_arms;
		}
};

class Battery : public Robot_part {
	private:
		double power_available;
		double max_energy;
	public:
		Battery(	string _name,
				int _model_number,
				double _cost,
				string _description,
				double _power_available,
				double _max_energy) :
				
				Robot_part(_name,_model_number,_cost,_description),
				power_available(_power_available),
				max_energy(_max_energy) { }
	
		double _power_available() {
			return power_available;
		}
		
		double _max_energy() {
			return max_energy;
		}
};
#endif
