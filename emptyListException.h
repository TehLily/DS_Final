#include <iostream>
#pragma once
using namespace std;
class emptyListException{
private:
	string msg_;
public:
	emptyListException(const string& msg) :
		msg_(msg) {
	}
	emptyListException();
	~emptyListException() {
	}
	string getMessage() const {
		return (msg_);
	}
};

