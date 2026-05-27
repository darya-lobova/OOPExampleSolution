#include "Student.h"

class Group
{
private:
	string name; //P13025
	Student** list;
	int size;

public:
	Group();
	Group(string name, Student** list, int size);
	Group(string name);
	Group(const Group& group);
	~Group();

	string getName();
	void setName(string name);
	int getSize();
	Student* getStudent(int index);
	void addStudent(Student * student);
	void removeStudent(int index);
	//void removeStudent(Student * student);

	string toString();

};

