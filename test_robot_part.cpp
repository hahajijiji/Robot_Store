#include "robot_part.h"

int main() {
	Robot_part test(
		"Robot part",
		399403,
		25.45,
		"Robot part test"
	);
	
	cout << "Part Name:\t" << test._name() << endl;
	cout << "Model Number:\t" << test._model_number() << endl;
	cout << "Cost:\t\t$" << test._cost() << endl;
	cout << "Description:\t" << test._description() << endl;
	cout << endl;
	
	Head head_test(
		"Head",
		339828,
		34.32,
		"Head test",
		334.3
	);
	
	cout << "Part Name:\t" << head_test._name() << endl;
	cout << "Model Number:\t" << head_test._model_number() << endl;
	cout << "Cost:\t\t$" << head_test._cost() << endl;
	cout << "Description:\t" << head_test._description() << endl;
	cout << "Power:\t\t" << head_test._power() << " Watts"<< endl;
	cout << endl;
	
	Arm arm_test(
		"Arm",
		123232,
		7.32,
		"Arm test",
		80.2
	);
	
	cout << "Part Name:\t" << arm_test._name() << endl;
	cout << "Model Number:\t" << arm_test._model_number() << endl;
	cout << "Cost:\t\t$" << arm_test._cost() << endl;
	cout << "Description:\t" << arm_test._description() << endl;
	cout << "Max Power:\t" << arm_test._max_power() << " Watts"<< endl;
	cout << endl;
	
	Locomotor locomotor_test(
		"Locomoter",
		163732,
		9.87,
		"Locomoter test",
		66.3
	);
	
	cout << "Part Name:\t" << locomotor_test._name() << endl;
	cout << "Model Number:\t" << locomotor_test._model_number() << endl;
	cout << "Cost:\t\t$" << locomotor_test._cost() << endl;
	cout << "Description:\t" << locomotor_test._description() << endl;
	cout << "Max Power:\t" << locomotor_test._max_power() << " Watts"<< endl;
	cout << endl;
	
	Torso torso_test(
		"Torso",
		773863,
		10.76,
		"Torso test",
		3,
		4
	);
	
	cout << "Part Name:\t" << torso_test._name() << endl;
	cout << "Model Number:\t" << torso_test._model_number() << endl;
	cout << "Cost:\t\t$" << torso_test._cost() << endl;
	cout << "Description:\t" << torso_test._description() << endl;
	cout << "Battery Compartments:\t" << torso_test._battery_compartments() << endl;
	cout << "Max Arms:\t" << torso_test._max_arms() << endl;
	cout << endl;
	
	Battery battery_test(
		"Battery",
		888765,
		20.99,
		"Battery test",
		300.22,
		40.32
	);
	
	cout << "Part Name:\t" << battery_test._name() << endl;
	cout << "Model Number:\t" << battery_test._model_number() << endl;
	cout << "Cost:\t\t$" << battery_test._cost() << endl;
	cout << "Description:\t" << battery_test._description() << endl;
	cout << "Power Available:" << battery_test._power_available() << " Watts"<< endl;
	cout << "Max Energy:\t" << battery_test._max_energy() << " Kilowatt hours" << endl;
	cout << endl;

}
