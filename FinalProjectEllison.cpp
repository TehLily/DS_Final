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
#include "CourseVector.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

	/* Testing:
    Beader testBeader;
	testBeader.setBSkill(1);
	testBeader.setName("Tester");
	testBeader.setBudget(50);
		
	Beader beaderTest;
	beaderTest.setBSkill(2);
	beaderTest.setName("Example");
	beaderTest.setBudget(100);
	
	ListBeaders testList;
	testList.insertBeader(testBeader);
	testList.insertBeader(beaderTest);
	testList.printList();

	Registration testReg = Registration(testBeader, StringingDesign);

	testReg.signUp();

	testList.printList();

	Registration regTest = Registration(beaderTest, BasicBW);

	regTest.signUp();

	//StringingDesign.enrollBeader(testBeader);
	//BasicBW.enrollBeader(beaderTest);

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


	cout << "\nRegistration list as entered: \n";
	AllCourses.printCourses();

	AllCourses.sortByBudget();

	cout << "\nRegistration list sorted by budget: \n";

	AllCourses.printCourses();

	AllCourses.sortBySkill();

	cout << "\nRegistration list sorted by skill: \n";

	AllCourses.printCourses();

	AllCourses.sortByTitle();

	cout << "\nRegistration list sorted by title: \n";

	AllCourses.printCourses();


	//cout << testReg.isEmpty() << endl;


	*/

	//Adding courses to the course vector:

	Course StringingDesign;
	StringingDesign.setTitle("Stringing and Design");
	StringingDesign.setCost(50);
	StringingDesign.setCurrentSize(0);
	StringingDesign.setMaxSize(20);
	StringingDesign.setSkill(1);
		
	Course BasicBW;
	BasicBW.setTitle("Basic Beadweaving");
	BasicBW.setCost(50);
	BasicBW.setCurrentSize(0);
	BasicBW.setMaxSize(20);
	BasicBW.setSkill(1);

	Course IntBW;
	IntBW.setTitle("Intermediate Beadweaving");
	IntBW.setCost(100);
	IntBW.setCurrentSize(0);
	IntBW.setMaxSize(20);
	IntBW.setSkill(2);
	
	Course AdvBW;
	AdvBW.setTitle("Advanced Beadweaving");
	AdvBW.setCost(150);
	AdvBW.setCurrentSize(0);
	AdvBW.setMaxSize(10);
	AdvBW.setSkill(3);

	Course Embroid;
	Embroid.setTitle("Embroidery");
	Embroid.setCost(100);
	Embroid.setCurrentSize(0);
	Embroid.setMaxSize(10);
	Embroid.setSkill(2);

	Course Vessels;
	Vessels.setTitle("Beaded Vessels");
	Vessels.setCost(100);
	Vessels.setCurrentSize(0);
	Vessels.setMaxSize(10);
	Vessels.setSkill(2);

	Course AdvShapes;
	AdvShapes.setTitle("Advanced 3D Shapes");
	AdvShapes.setCost(150);
	AdvShapes.setCurrentSize(0);
	AdvShapes.setMaxSize(10);
	AdvShapes.setSkill(3);

	CourseVector AllCourses;
	AllCourses.addCourse(StringingDesign);
	AllCourses.addCourse(BasicBW);
	AllCourses.addCourse(IntBW);
	AllCourses.addCourse(AdvBW);
	AllCourses.addCourse(Embroid);
	AllCourses.addCourse(Vessels);
	AllCourses.addCourse(AdvShapes);


	//Program output/input:
	ListBeaders newList;
	Beader newBeader;
	string uName = "";
	int uSkill = 0;
	int uBudget = 0;
	const int MAX_NAME_LEN = 20;
	//char u_name[MAX_NAME_LEN];
	//bool valid_name = false;
	bool valid_budget = false;
	bool valid_skill = false;
	//string valid_letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ- ";

	std::cout << "Welcome! \nPlease enter your name: ";
	getline(cin, uName);

	/*
	* Failed input validation: I couldn't figure out how to do this. I know I've done it in the past, but I couldn't remember and ran out of time to relearn it.
	while (valid_name == false){
		try {
			cin.getline(u_name, MAX_NAME_LEN);
			int name_len = sizeof(u_name);
			cout << name_len <<endl;
			//getline(cin, uName);
			for (int i = 0; i < name_len-2; i++) {
				
				cout << isalpha(u_name[i])<<u_name[i]<<endl;
				if (isalpha(u_name[i])==0) {
					if(u_name == " " || u_name == "-") {
						uName += u_name[i];
						cout << uName;
					}
					else if (u_name == NULL) {
						break;
					}
					else {
						throw 505;
					}
				}
				else {
					
					uName += u_name[i];
				}
			}
			valid_name = true;
		}
		catch (...) {
			cout << "Invalid input. Letters only.\n";
		}
	}
	*/
	
	//Getting budget and skill info from user:
	std::cout << "Hello, " << uName << "! \n";
	std::cout << "What is your budget? Please select: \n[1] for $50\n[2] for $100\n[3] for $150\n";

	while (valid_budget == false) {
		cin >> uBudget;
		//input validation for the number at least!
		if (uBudget > 0 && uBudget < 4) {
			valid_budget = true;
		}
		else {
			std::cout << "Invalid input. Please enter a number: 1, 2, or 3:\n";
			cin.clear(); //clear cin from errors
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear cin buffer for answers outside range
		}
	}

	std::cout << "What is your skill level? Please select: \n[1] for novice\n[2] for intermediate\n[3] for master\n";

	while (valid_skill == false) {
		cin >> uSkill;
		if (uSkill > 0 && uSkill < 4) {
			valid_skill = true;
		}
		else {
			std::cout << "Invalid input. Please enter a number: 1, 2, or 3:\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear cin buffer
		}
	}

	//add new beader info to beader class:
	newBeader.setBSkill(uSkill);
	newBeader.setName(uName);
	newBeader.setBudget(uBudget);

	//add new beader to beader list:
	newList.insertBeader(newBeader);
	
	newList.printList(); //for testing
	
	std::cout << "Thank you! You can now register for classes!\n";
	
	//Had plans to have the user search and select courses, but couldn't get that far. This would have enrolled:
	//uCourse.enrollBeader(newBeader)
	
    return 0;
}
