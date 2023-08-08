#include <iostream>

using namespace std;
class Person {
	char* name;
	int age;
public:
	int operator>(Person&);
	Person& operator=(Person&);
};

Person& Person::operator=(Person& p) {
	this->name = new char[strlen(p.name)+1];
	strcpy(name, p.name);
	this->age = p.age;
	return *this;
}

int main() {
	Person p1, p2;
	p1 = p2;
	if (p1 > p2) {

	}
	return 1;
}

int Person::operator>(Person& p) {
	return strcmp(name, p.name);
}
