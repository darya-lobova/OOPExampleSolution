#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	int age;
	int* marks;
	int count;
	int classNumber;
	char classLetter;
	bool alive;


public:

	//default constructor / constructor without arguments
	Student();
	//canonical constructor / constructor with arguments
	Student(int id, string name, int age, int number, char letter, bool alive);
	//constructor with arguments
	Student(string name, int age);
	//constructor with arguments
	Student(int age, string name);
	//copy-constructor / constructor with arguments
	Student(const Student& student);
	~Student();

	int getID();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	bool isAlive();
	void setAlive(bool alive);
	int* getMarks();
	void setMarks(int* marks, int count);
	int getCount();

	string toString();
};