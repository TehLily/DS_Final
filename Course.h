#include "Beader.h"
#include <iostream>
#include <queue>
#pragma once
using namespace std;

class Course {
	queue <Beader> enrolled;
	string title;
	int cost;
	int maxSize;
	int currentSize;
	int skill;

public:
	Course();

	void setTitle(string);
	string getTitle();
	void setCost(int);
	int getCost();
	void setMaxSize(int);
	int getMaxSize();
	void setCurrentSize(int);
	int getCurrentSize();
	void setSkill(int);
	int getSkill();
	void enrollBeader(Beader&);
	void getEnrolledQueue();
};

