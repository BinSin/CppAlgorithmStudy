#include <iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
	virtual void getdata() {
		cin >> this->name >> this->age;
	}
	virtual void putdata() {
		cout << this->name << " " << this->age << endl;
	}
};

class Professor : public Person {
public:
	static int id;
	int cur_id;
	int publications;
	Professor() {
		this->cur_id = ++id;
	}
	void getdata() {
		cin >> this->name >> this->age >> this->publications;
	}
	void putdata() {
		cout << this->name << " " << this->age << " "
			<< this->publications << " " << this->cur_id << endl;
	}
};
int Professor::id = 0;

class Student : public Person {
#define NUMBER_OF_MARKS 6
public:
	static int id;
	int cur_id;
	int marks;
	int marksSum = 0;
	Student() {
		this->cur_id = ++id;
	}
	void getdata() {
		cin >> this->name >> this->age;
		for (int i = 0; i < NUMBER_OF_MARKS; i++) {
			cin >> this->marks;
			marksSum += this->marks;
		}
	}
	void putdata() {
		cout << this->name << " " << this->age << " "
			<< this->marksSum << " " << this->cur_id << endl;
	}
};
int Student::id = 0;

int main() {

	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person* per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i < n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}