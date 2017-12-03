#include <iostream>
	using namespace std;
	
	class Student {
	private:
	string first_name;
	string last_name;
	double gpa;
//	string uniqname;
//	int id;
//	int status;
//	int year_entry;
	void printName() {
	cout << first_name << " "
	<< last_name << endl;
	
	}

	};


	int main(void){
	//cout << "Hello world!" << endl;
	//cout << endl;
		
	//unsigned int numZ = 20;
	//cout << "Number of Zombies you want to kill?" << endl;
	
	//unsigned int numK;
	//cin >> numK;

	//cout  << "Number of zombies left:" << endl;
	//cout  << numZ - numK << endl;
	Student kevin = {"Kevin","Lee", 1.2};
	kevin.printName();
	cout << kevin.gpa << endl;
	kevin.gpa = 4.0;
	cout << kevin.gpa << endl;
	return 0;
	}
