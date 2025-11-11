#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;




Student::Student(int yearLevel = 0, string major = "NA") {
	this->yearLevel = yearLevel;
	this->major = major;
}

void Student::display() {
	cout << "Year level: " << yearLevel << "Major: " << major;
}

Person::Person(string name = " ", int id = 0) {
	this->name = name;
	this->id = id;
}


void Person::display() {
	cout << "Name: " << name << "Id: " << id;
}

Instructor::Instructor(string department=" ", int experienceYears=0) {
	this->department = department;
	this->experienceYears = experienceYears;
}

void Instructor::display() {
	cout << "Department: " << department << "Experience Years: " << experienceYears;
}

Course:Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents) {
this->courseCode = courseCode;
this->courseName = courseName;
this->maxStudents = maxStudents;
this->students = students;
this->currentStudents = currentStudents;
}

Course:display() {
cout << "Course: " << courseCode << " - " << courseName << "\n" << "Max Students: " << maxStudents<<"\n"<<;

}


int main() {
Student* S1= new Student(3,"CS");
Instructor* I1 = new Instructor("CS",6);
Course* C1 = new Course("CS101","Programming",50,S1,30);

	return 0;
}

