#ifndef COURSE_H
#define COURSE_H

#include "Course.h"
#include "Student.h"
#include <string>
using namespace std;

class Course
{
private:
	string courseCode;
	string courseName;
	int maxStudents;
	Student* students;
	int currentStudents;

public:
	Course(string courseCode,string courseName,int maxStudents,Student* students,int currentStudents);
	addStudent(const Student& s);
	displayCourseInfo();
};
#endif

