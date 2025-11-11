#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Instructor.h"
#include <string>
using namespace std;

class Instructor
{
private:
	string department
	int experienceYears;

public:
	Instructor(string department,int experienceYears);
	void display();
};

#endif
