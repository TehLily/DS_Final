/***************************************************************
* Name : FinalProjectEllison.cpp -> ListBeaders.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : ListBeaders in FinalProjectEllison:
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


#include "ListBeaders.h"
#include "notFoundException.h"
#include "emptyListException.h"
#include "Beader.h"
#include <iostream>
using namespace std;

//Remove a node from the linked list - this is based off BeaderID, which I ended up not using. Not sure if this would work now
void ListBeaders::deleteBeader(int BeaderID) {
	if (!isEmpty()) {
		LBNode* temp1 = head, * temp2 = NULL;
		int listLen = 0;
		while (temp1 != NULL) {
			temp1 = temp1->next; //finds length of list by counting for every present node in list
			listLen++;
		}

		if (listLen < (1000 - BeaderID)) {
			throw(notFoundException("Beader ID not found!")); 
		}

		temp1 = head;

		if (BeaderID == 1001) {
			head = head->next;
			delete temp1;
			return;
		}

		while (BeaderID > 1001) {
			temp2 = temp1; //shifts temp2 to temp1
			temp1 = temp1->next; //shifts temp1 to the next item in list
		}
		temp2->next = temp1->next; //updates pointers of nodes
		delete temp1;
	}
	else {
		throw(emptyListException("The list is empty!")); 
	}
}

//adds beader to linked list
void ListBeaders::insertBeader(Beader newBeader) {
	LBNode* newNode = new LBNode(newBeader);

	if (head == NULL) {
		head = newNode;
		return;
	}
	LBNode* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

//prints a list of beaders
void ListBeaders::printList() {
	LBNode* temp = head;
	if (head == NULL) {
		throw(emptyListException("The list is empty!"));
	}

	while (temp != NULL) {

		cout << " Name: " << temp->beader.getName() << " Skill Level: " << temp->beader.getBSkill() << " Budget: " << temp->beader.getBudget() << endl;
		temp = temp->next;
	}
}

//checks if list is empty
bool ListBeaders::isEmpty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

//finds how many beaders in list
int ListBeaders::findSize() {
	int size = 0;
	LBNode* temp = head;
	if (head == NULL) {
		throw(emptyListException("List is empty!"));
	}
	while (temp != NULL) {
		++size;
		temp = temp->next;
	}
	return size;
}

//sort by name:
void ListBeaders::sortByName(LBNode** head) {
	LBNode* prev = (*head);
	LBNode* curr = (*head)->next;
	while (curr != NULL) {
		if (curr->beader.getName() < prev->beader.getName()) {
			prev->next = (*head);
			curr->next = (*head);
			(*head) = curr;
			curr = prev;
		}
		else {
			prev = curr;
		}
		curr = curr->next;
	}
}

