#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	int age;
	int* marks;
	int classNumber;
	char classLetter;
	bool alive;


public:


	//default constructor / constructor without arguments
	Student() {
		cout << "Default costructor" << endl;
		id = 0;
		name = "";
		age = 0;
		classNumber = 0;
		classLetter = '\0';
		marks = new int [3] {10, 9, 7};
		alive = false;
	}

	//canonical constructor / constructor with arguments
	Student(int i, string nm, int ag, int number, char letter, bool a) {
		cout << "Student canonical constructor" << endl;
		id = i;
		name = nm;
		age = ag;
		classNumber = number;
		classLetter = letter;
		marks = new int [3] {10, 9, 7};
		alive = a;
	}

	//constructor with arguments
	Student(int ag, string nm) {
		cout << "Student constructor with arguments" << endl;
		id = 0;
		name = nm;
		age = ag;
		classNumber = 0;
		classLetter = '\0';
		marks = new int [3] {10, 9, 7};
		alive = true;
	}

	//copy-constructor / constructor with arguments
	Student(const Student& student) {
		cout << "Student copy-constructor" << endl;
		id = student.id;
		name = student.name;
		age = student.age;
		classNumber = student.classNumber;
		classLetter = student.classLetter;
		marks = new int[3] {student.marks[0],
			student.marks[1],
			student.marks[2]};
		alive = student.alive;
	}

	~Student() {
		cout << "Student destructor" << endl;
		if (marks != NULL) {
			delete[] marks;
		}
	}

	int getID() {
		return id;
	}

	void setID(int i) {
		id = i;
	}

	string getName() {
		return name;
	}

	void setName(string nm) {
		name = nm;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 10) {
			age = a;
		}
	}

	int getClassNumber() {
		return classNumber;
	}

	void setClassNumber(int number) {
		if (number >= 1 && number <= 11) {
			classNumber = number;
		}
	}

	char gerClassLetter() {
		return classLetter;
	}

	char setClassLetter(char letter) {
		letter = toupper(letter);

		if (letter >= 'A' && letter <= 'Z') {
			classLetter = letter;
		}
	}

	bool isAlive() {
		return alive;
	}

	void setAlive(bool a) {
		alive = a;
	}

	int* getMarks() {
		return marks;
	}

	void setMarks(int* ms, int c) {
		if (marks != NULL) {
			delete[] marks;
			marks = new int[c];

			for (int i = 0; i < c; i++)
			{
				marks[i] = ms[i];
			}
		}

	}

	string toString() {
		string s = "Student: ";
		s += "id = " + to_string(id);
		s += ", name = " + name;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(classNumber) + to_string(classLetter);
		s += ", marks = {" + to_string(marks[0]) + ", " + to_string(marks[1])
			+ ", " + to_string(marks[2]) + "}";
		s += ", alive = ";
		s += (alive ? "yes" : "no");

		return s;
	}
};