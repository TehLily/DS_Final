#include <iostream>
#include "Beader.h"
#pragma once
using namespace std;

struct LBNode {
	Beader beader;
	LBNode* next;
	LBNode(Beader beader) {
		this->beader = beader;
		this->next = NULL;
	}
};

class ListBeaders {
	LBNode* head;

public:
	void insertBeader(Beader);
	void printList();
	void deleteBeader(int);
	bool isEmpty();
	int findSize();
	ListBeaders() {
		head = NULL;
	}
	void sortByName(LBNode** head);
};

