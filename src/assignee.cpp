#include "../header/assignee.hpp"
#include <iostream>

using namespace std;

Assignee::Assignee(){
	name = "";
}

Assignee::Assignee(string n){
	this->name = n;
}

void Assignee::setName(string n){
	this->name = n;
}

string Assignee::getName(){
	return this->name;
}

void Assignee::displayAssignee(){
	cout << "Assignee: " << this->name << endl;
}
