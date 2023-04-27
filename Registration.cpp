#include "Registration.h"
#include <iostream>
using namespace std;

Registration::Registration() {
}

Registration::Registration(Beader b, Course c) {
	user = b;
	regCourse = c;
}


bool Registration::canRegister() {
	if (user.getBudget() <= regCourse.getCost() && user.getBSkill() >= regCourse.getSkill() && regCourse.getCurrentSize() < regCourse.getMaxSize()) {
		cout << user.getName() << " can register for " << regCourse.getTitle() << endl;
		return true;
	}
	else {
		if (user.getBudget() > regCourse.getCost()) {
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


void Registration::signUp() {
	if (canRegister()) {
		regCourse.setCurrentSize(regCourse.getCurrentSize() + 1);
		regCourse.enrollBeader(user);
	}
	else {
		cout << "Could not register for this course." << endl;
	}
}




void Registration::printCourses() {
	int size = courseVector.size();
	if (size == 0) {
		cout << "No courses in vector." << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << courseVector[i].getTitle() << endl;
		}
	}
}

void Registration::addCourse(Course c) {
	courseVector.push_back(c);
}

void Registration::printSize() {
	cout << courseVector.size() << endl;
}

bool Registration::isEmpty() {
	return courseVector.empty();
}


void Registration::sortByBudget() {
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

void Registration::sortBySkill() {
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

void Registration::sortByTitle() {
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