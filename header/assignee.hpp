#ifndef ASSIGNEE_HPP
#define ASSIGNEE_HPP

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
