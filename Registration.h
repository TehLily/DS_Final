#include "Beader.h"
#include "Course.h"
#include <iostream>
#include <vector>
using namespace std;
#pragma once
#define MAX 5
class Registration {
	Beader user;
	Course regCourse;
	vector<Course> courseVector;

public:
	Registration();
	Registration(Beader, Course);
	bool canRegister();
	void signUp();
	void printCourses();
	void printSize();
	void addCourse(Course);
	bool isEmpty();
	void sortByBudget();
	void sortBySkill();
	void sortByTitle();
};

