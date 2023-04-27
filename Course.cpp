#include "Course.h"
#include "Registration.h"

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

void Course::enrollBeader(Beader& b) {
	Course::enrolled.push(b);
	b.subBudget(Course::cost);
	Course::currentSize++;
	cout << b.getName() << " is now enrolled in " << Course::title << endl;
	
}

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
