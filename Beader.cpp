/***************************************************************
* Name : FinalProjectEllison.cpp -> Beader.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Beader class in FinalProjectEllison:
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

#include "Beader.h"
#include <iostream>
using namespace std;
//constructor
Beader::Beader() {

}

Beader::Beader(std::string n, int b, int bs) {
	Beader::setName(n);
	Beader::setBudget(b);
	Beader::setBSkill(bs);
}
void Beader::setName(string n) {
	name = n;
}
string Beader::getName() {
	return name;
}
void Beader::setBSkill(int bs) {
	bskill = bs;
}
int Beader::getBSkill() {
	return bskill;
}
void Beader::setBudget(int b) {
	budget = b;
}
int Beader::getBudget() {
	return budget;
}
//adjusts budget after beader registers for a course
void Beader::subBudget(int courseCost) {
	Beader::budget -= courseCost;
	Beader::setBudget(budget);
}

