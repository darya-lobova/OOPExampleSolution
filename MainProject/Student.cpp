#include "Student.h"



//default constructor / constructor without arguments
Student::Student() : Student(0, "no name", 10, 0, '\0', true) {
	cout << "Student default costructor" << endl;
	marks = NULL;
	count =0;
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
Student::Student(string name, int age) : Student() {
	cout << "Student constructor with arguments" << endl;
	this->name = name;
	this->age = age;
}

//constructor with arguments
Student::Student(int age, string name) : Student(name, age) {
	cout << "Student constructor with arguments" << endl;
	
}


//copy-constructor / constructor with arguments
Student::Student(const Student& student) : Student(student.id, student.name,
	student.age, student.classNumber, student.classLetter, student.alive) {
	cout << "Student copy-constructor" << endl;

	if (student.marks != NULL && student.count > 0) {
		count = student.count;
		marks = new int [count];
		for (int i = 0; i < count; i++)
		{
			marks[i] = student.marks[i];
		}
	}
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
