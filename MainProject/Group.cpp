#include "Group.h"

Group::Group() : Group("no name", nullptr, 0){

}
Group::Group(string name, Student** list, int size) {
	this->name = name;
	if (list != nullptr && size > 0) {
		this->list = list;
		this->size = size;
	}
}
Group::Group(string name) :Group(name, nullptr, 0) {

}
Group::Group(const Group& group):Group(group.name) {
	if (group.list != nullptr && group.size > 0) {
		size = group.size;
		list = new Student * [group.size];
		for (int i = 0; i < size; i++)
		{
			list[i] = new Student(*group.list[i]);
		}
	}
}
Group::~Group() {
	if (list != nullptr) {
		for (int i = 0; i < size; i++)
		{
			delete list[i];
		}
		delete[]list;
	}
}

string Group::getName() {
	return name;
}

void Group::setName(string name) {
	this->name = name;
}

int Group::getSize() {
	return size;
}

Student* Group::getStudent(int index) {
	if (size != 0 && index >= 0 && index < size) {
		return list[index];
	}
	return NULL;
}

void Group::addStudent(Student* student) {
	if (list != nullptr) {
		Student** temp = new Student * [size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = student;
		delete[] list;
		list = temp;
	}
	else {
		list = new Student * [1];
		size = 1;
		list[0] = student;
	}
}

void Group::removeStudent(int index) {
	if (list != nullptr && index >= 0 && index < size) {
		Student** temp = new Student * [size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}
		delete list[index];
		delete[]list;
		list = temp;
		size--;
	}
}

//void removeStudent(Student * student);

string Group::toString() {
	string s = "Group: " + name;
	if (size == 0) {
		s += "empty";
	}
	else {
		for (int i = 0; i < size; i++)
		{
			s += "\n" + list[i]->toString();
		}
	}
	return s;
}
