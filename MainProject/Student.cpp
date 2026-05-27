#include "Student.h"



//default constructor / constructor without arguments
Student::Student() {
	cout << "Default costructor" << endl;
	id = 0;
	name = "";
	age = 0;
	classNumber = 0;
	classLetter = '\0';
	marks = new int [3] {10, 9, 7};
	count = 3;
	alive = false;
}

//canonical constructor / constructor with arguments
Student::Student(int id, string name, int age, int number, char letter, bool alive) {
	cout << "Student canonical constructor" << endl;
	this->id = id;
	this->name = name;
	this->age = age;
	classNumber = number;
	classLetter = letter;
	marks = new int [3] {10, 9, 7};
	count = 3;
	this->alive = alive;
}

//constructor with arguments
Student::Student(string name, int age) {
	cout << "Student constructor with arguments" << endl;
	id = 0;
	this->name = name;
	this->age = age;
	classNumber = 0;
	classLetter = '\0';
	marks = new int [3] {10, 9, 7};
	count = 3;
	alive = true;
}

//copy-constructor / constructor with arguments
Student::Student(const Student& student) {
	cout << "Student copy-constructor" << endl;
	id = student.id;
	name = student.name;
	age = student.age;
	classNumber = student.classNumber;
	classLetter = student.classLetter;
	marks = new int[3] {student.marks[0],
		student.marks[1],
		student.marks[2]};
	count = 3;
	alive = student.alive;
}

Student::~Student() {
	cout << "Student destructor" << endl;
	if (marks != NULL) {
		delete[] marks;
	}
}

int Student::getID() {
	return id;
}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (this->age > 10) {
		this->age = age;
	}
}

int Student::getClassNumber() {
	return classNumber;
}

void Student::setClassNumber(int number) {
	if (number >= 1 && number <= 11) {
		classNumber = number;
	}
}

char Student::getClassLetter() {
	return classLetter;
}

void Student::setClassLetter(char letter) {
	letter = toupper(letter);

	if (letter >= 'A' && letter <= 'Z') {
		classLetter = letter;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	if (marks != NULL && count > 0) {
		delete[] this->marks;
		this->marks = new int[count];

		for (int i = 0; i < count; i++)
		{
			this->marks[i] = marks[i];
		}
		this->count = count;
	}
}

int Student::getCount() {
	return count;
}

string Student::toString() {
	string s = "Student: ";
	s += "id = " + to_string(id);
	s += ", name = " + name;
	s += ", age = " + to_string(age);
	s += ", class = " + to_string(classNumber) + to_string(classLetter);
	s += ", marks = {";
	for (int i = 0; i < count; i++)
	{
		s += " " + to_string(marks[i]);
	}
	s+="}";
	s += ", alive = ";
	s += (alive ? "yes" : "no");

	return s;
}
