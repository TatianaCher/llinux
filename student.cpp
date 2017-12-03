#include <iostream>
#include "student.h"

using namespace std;
	Student::Student(string first, string last){
		first_name = first;
		last_name = last;
	}
	
	string Student::getFirstName(){
		return first_name;
	}
	void Student::setFirstName(string first){
		first_name = first;
	}
	void Student::printName(){
	cout <<first_name<< " "<<last_name<<endl;
	}
