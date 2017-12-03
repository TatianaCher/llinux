#include <iostream>
	using namespace std;

 class Student(string first, string last) {
	public:
	first_name = first;
	last_name = last;
	}
	string getFirstName(){
		return first_name;
	}
	private:
	string first_name;
	string last_name;
};
	int main() {
	Student kevin ("Kevin","Lee");
	cout <<kevin.getfirstName() <<endl;
}
