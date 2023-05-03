/***************************************************************
* Name : FinalProjectEllison.cpp -> Course.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Course class in FinalProjectEllison:
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

#include "Course.h"
#include "Registration.h"

//class to hold course info
Course::Course(){
}

void Course::setTitle(string t) {
	title = t;
}
string Course::getTitle() {
	return title;
}
void Course::setCost(int c) {
	cost = c;
}
int Course::getCost() {
	return cost;
}
void Course::setMaxSize(int ms) {
	maxSize = ms;
}
int Course::getMaxSize() {
	return maxSize;
}
void Course::setCurrentSize(int cs) {
	currentSize = cs;
}
int Course::getCurrentSize() {
	return currentSize;
}
void Course::setSkill(int s) {
	skill = s;
}
int Course::getSkill() {
	return skill;
}

//add beaders to the enrolled queue
void Course::enrollBeader(Beader& b) {
	Course::enrolled.push(b);
	b.subBudget(Course::cost);
	Course::currentSize++;
	cout << b.getName() << " is now enrolled in " << Course::title << endl;
	
}

//displays enrolled queue by making a copy of the enrolled queue so that the beaders can be popped off to view and still have a usable queue
void Course::getEnrolledQueue() {
	queue<Beader> copyEnrolled;
	for (int i = 0; i < Course::enrolled.size(); i++) {
		Beader b = Course::enrolled.front();
		copyEnrolled.push(b);
		cout << i+1 << ". " << b.getName() << endl;
		Course::enrolled.pop();
	}
	for (int j = 0; j < copyEnrolled.size(); j++) {
		Beader c = copyEnrolled.front();
		Course::enrolled.push(c);
		copyEnrolled.pop();
	}
}
