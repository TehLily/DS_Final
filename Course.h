/***************************************************************
* Name : FinalProjectEllison.cpp -> Course.h
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Header for Course in FinalProjectEllison:
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
#include <queue>
#pragma once
using namespace std;

class Course {
	queue <Beader> enrolled; //holds enrolled beaders in a queue
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

