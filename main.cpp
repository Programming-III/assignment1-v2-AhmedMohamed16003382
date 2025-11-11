#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

Person::Person(string name=" ",int id=0) {
	this->name = name;
	this->id = id;
}


void Person::display() {
	cout << "Name: " << name << "Id: " << id;
}

Student::Student(int yearLevel = 0, string major="NA") {
	this->yearLevel = yearLevel;
	this->major = major;
}

void Student::display() {
	cout << "Year level: " << yearLevel << "Major: " << major;
}






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
