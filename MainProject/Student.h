#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id;
	string name;
	int age;
	double* marks;
	int class_number;
	char class_letter;
	bool alive;

	//default constructor / constructor without arguments
	Student() {
		//cout << "Default costructor" << endl;
		id = 0;
		name = "";
		age = 0;
		class_number = 0;
		class_letter = '\0';
		marks = new double [3] {10, 9, 7};
		alive = false;
	}

	//canonical constructor / constructor with arguments
	Student(int i, string nm, int ag, int number, char letter, bool a) {
		cout << "Student canonical constructor" << endl;
		id = i;
		name = nm;
		age = ag;
		class_number = number;
		class_letter = letter;
		marks = new double [3] {10, 9, 7};
		alive = a;
	}

	//constructor with arguments
	Student(string nm, int ag) {
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		marks = new double [3] {10, 9, 7};
		alive = true;
	}

	//copy-constructor / constructor with arguments
	Student(const Student& student) {
		cout << "Student copy-constructor" << endl;
		id = student.id;
		name = student.name;
		age = student.age;
		class_number = student.class_number;
		class_letter = student.class_letter;

		marks = new double[3] {student.marks[0], 
			student.marks[1], 
			student.marks[2]};

		alive = student.alive;
	}

	string toString() {
		string s = "Student: ";
		s += "id = " + to_string(id);
		s += ", name = " + name;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(class_number) + to_string(class_letter);
		s += ", marks = {" + to_string(marks[0]) + ", " + to_string(marks[1]) 
			+ ", " + to_string(marks[2]) + "}";
		s += ", alive = ";
		s += (alive ? "yes" : "no");

		return s;
	}
};