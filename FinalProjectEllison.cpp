/***************************************************************
* Name : FinalProjectEllison.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : An app that searches for appropriate courses and
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
#include "Beader.h"
#include "ListBeaders.h"

#include <iostream>

int main(){
    Beader testBeader;
	testBeader.setBSkill(1);
	testBeader.setName("Tester");
	testBeader.setBudget(50);

	
	Beader beaderTest;
	beaderTest.setBSkill(2);
	beaderTest.setName("Example");
	beaderTest.setBudget(100);
	
	//cout << testBeader.getName() << testBeader.getBSkill() << testBeader.getBudget() << endl;

	ListBeaders testList;
	testList.insertBeader(testBeader);
	testList.insertBeader(beaderTest);
	testList.printList();

	Course testCourse;
	testCourse.setTitle("Testing");
	testCourse.setCost(50);
	testCourse.setCurrentSize(0);
	testCourse.setMaxSize(20);
	testCourse.setSkill(1);
	
	Course courseTest;
	courseTest.setTitle("Course");
	courseTest.setCost(100);
	courseTest.setCurrentSize(0);
	courseTest.setMaxSize(20);
	courseTest.setSkill(2);
	
	//cout << testCourse.getTitle() << testCourse.getCost() << testCourse.getCurrentSize() << testCourse.getMaxSize() << testCourse.getSkill() << endl;

	Registration testReg = Registration(testBeader, testCourse);

	testReg.signUp();
	
	Registration regTest = Registration(beaderTest, courseTest);

	regTest.signUp();
	


	testCourse.enrollBeader(testBeader);
	courseTest.enrollBeader(beaderTest);
	cout << "Enrolling beader in course (testCourse.enrollBeader(testBeader)" << endl;
	cout << "Enrolling beader in course (courseTest.enrollBeader(beaderTest)" << endl;
	cout << "Size of testCourse: " << testCourse.getCurrentSize() << endl;
	cout << "testBeader.getBudget(): " << testBeader.getBudget() << endl;
	cout << "Enrolled Queue for testCourse: " << endl;
	testCourse.getEnrolledQueue();
	//testCourse.getEnrolledQueue(); <- this was to test to make sure the function did not remove items from the queue

	cout << "Size of list of registration courses and the courses in the list before adding to it: " << endl;
	testReg.printSize();
		
	testReg.printCourses();

	cout << "1 if empty list, 0 if not empty: " << endl;
	cout << testReg.isEmpty() << endl;

	testReg.addCourse(testCourse);
	cout << "added course to testReg, then print size of list and list itself and 1 if empty, 0 if not:" << endl;
	testReg.printSize();

	testReg.printCourses();

	cout << testReg.isEmpty() << endl;

    return 0;
}
