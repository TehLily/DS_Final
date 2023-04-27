#include <iostream>
#pragma once
using namespace std;
class Beader{
	string name;
	int bskill;
	int budget;

public:
	Beader();
	Beader(std::string name, int budget, int bskill);
	void setBSkill(int);
	int getBSkill();
	void setName(string);
	string getName();
	void setBudget(int);
	int getBudget();
	void subBudget(int);
};



