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
	Student(int i, string nm, int ag, int number, char letter, bool a);
	//constructor with arguments
	Student(int ag, string nm);
	//copy-constructor / constructor with arguments
	Student(const Student& student);
	~Student();

	int getID();
	string getName();
	void setName(string nm);
	int getAge();
	void setAge(int a);
	int getClassNumber();
	void setClassNumber(int number);
	char gerClassLetter();
	char setClassLetter(char letter);
	bool isAlive();
	void setAlive(bool a);
	int* getMarks();
	void setMarks(int* ms, int c);
	int getCount();

	string toString();
};