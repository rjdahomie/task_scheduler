#ifndef ASSIGNEE_HPP
#define ASSIGNEE_HPP

#include <string>

using namespace std;

class Assignee{
	private:
		string name;
	public:
		Assignee();
		Assignee(string n);

		void setName(string n);
		string getName();
		void displayAssignee();
};

#endif // ASSIGNEE_HPP
