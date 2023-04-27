#include "ListBeaders.h"
#include "notFoundException.h"
#include "emptyListException.h"
#include "Beader.h"
#include <iostream>
using namespace std;

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

bool ListBeaders::isEmpty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

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

