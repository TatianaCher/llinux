#include <iostream>
#include "student.h"

using namespace std;

int main(void){
	Student helen ("Helen", "Smith");
	helen.printName();
	//cout << helen.getFirstName() << endl;
	string name;
	name = helen.getFirstName();
	cout << name << endl;
	return 0;

}
