#include <iostream>
#pragma once
using namespace std;
class notFoundException {
private:
	string msg_;
public:
	notFoundException(const string& msg) :
		msg_(msg) {
	}
	notFoundException();
	~notFoundException() {
	}
	string getMessage() const {
		return (msg_);
	}
};