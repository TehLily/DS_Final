/***************************************************************
* Name : FinalProjectEllison.cpp -> CourseVector.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : CourseVector in FinalProjectEllison:
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

#include "CourseVector.h"

//stores courses in a vector
CourseVector::CourseVector() {

}

//print courses in vector:
void CourseVector::printCourses() {
	int size = courseVector.size();
	//checks if empty:
	if (size == 0) {
		cout << "No courses in vector." << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << "Title:" << courseVector[i].getTitle() << " Skill level: " << courseVector[i].getSkill() << " Cost: " << courseVector[i].getCost() << endl;
		}
	}
}

//add courses to vector:
void CourseVector::addCourse(Course c) {
	courseVector.push_back(c);
}

//displays size of vector:
void CourseVector::printSize() {
	cout << courseVector.size() << endl;
}

//Checks if empty:
bool CourseVector::isEmpty() {
	return courseVector.empty();
}

//sorts by budget/cost attribute using a swap sort:
void CourseVector::sortByBudget() {
	int size = courseVector.size();
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (courseVector[j].getCost() > courseVector[j + 1].getCost()) {
				swap(courseVector[j], courseVector[j + 1]);
			}
		}
	}
}

//sorts by skill attribute:
void CourseVector::sortBySkill() {
	int size = courseVector.size();
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (courseVector[j].getSkill() > courseVector[j + 1].getSkill()) {
				swap(courseVector[j], courseVector[j + 1]);
			}
		}
	}
}

//sorts alphabetically by title:
void CourseVector::sortByTitle() {
	int size = courseVector.size();
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (courseVector[j].getTitle() > courseVector[j + 1].getTitle()) {
				swap(courseVector[j], courseVector[j + 1]);
			}
		}
	}
}