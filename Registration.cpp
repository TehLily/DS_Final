/***************************************************************
* Name : FinalProjectEllison.cpp -> Registration.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Registration in FinalProjectEllison:
*				An app that searches for appropriate courses and
*               registers users when conditions are met.
*            Input: User information: name, skill level
*                   and budget
*                   Course information: title, cost, skill level,
*                   max and current capacity
*            Ouput: User information, course information, any errors,
*                   successful registration messages
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/

#include "Registration.h"
#include <iostream>
using namespace std;

//registers beaders for courses and updates course attributes
Registration::Registration() {
}

Registration::Registration(Beader b, Course c) {
	user = b;
	regCourse = c;
}

//checks for room in course, required budget, and required skill
bool Registration::canRegister() {
	if (user.getBudget() >= regCourse.getCost() && user.getBSkill() >= regCourse.getSkill() && regCourse.getCurrentSize() < regCourse.getMaxSize()) {
		cout << user.getName() << " can register for " << regCourse.getTitle() << endl;
		return true;
	}
	else {
		if (user.getBudget() < regCourse.getCost()) {
			cout << "Course cost is beyond user's budget." << endl;
		}
		if (user.getBSkill() < regCourse.getSkill()) {
			cout << "Course required skill is beyond user's skill." << endl;
		}
		if (regCourse.getCurrentSize() >= regCourse.getMaxSize()) {
			cout << "Course full." << endl;
		}
		return false;
	}

}

//adjusts course current size and enrolls the beader or alerts unable to register
void Registration::signUp() {
	if (canRegister()) {
		regCourse.setCurrentSize(regCourse.getCurrentSize() + 1);
		regCourse.enrollBeader(user);
	}
	else {
		cout << "Could not register for this course." << endl;
	}
}


