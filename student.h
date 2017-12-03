#include <string>
using namespace std;

	class Student {
	public:
		Student(string first, string last);
		string getFirstName();
		void setFirstName(string first);
		void printName();
	private:
		string first_name;
		string last_name;
	};
