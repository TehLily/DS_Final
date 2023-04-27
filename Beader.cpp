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
void Beader::subBudget(int courseCost) {
	Beader::budget -= courseCost;
	Beader::setBudget(budget);
}

