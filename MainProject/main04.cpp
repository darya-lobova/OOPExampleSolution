#include "Manager.h"

int main() {
	Student* st1 = new Student("Alex", 15);
	Student* st2 = new Student("Peter", 9);
	Student* st3 = new Student("Harry", 13);

	int* marks = new int[5] {10, 10, 9, 8, 7};
	st1->setMarks(marks, 5);

	marks = new int[3] {9, 8, 7};
	st2->setMarks(marks, 3);

	marks = new int[6] {9, 9, 9, 9, 8, 7};
	st3->setMarks(marks, 6);

	Student** group = new Student * [3] {st1, st2, st3};

	Manager* manager = new Manager();

	double avg = manager->calculateAverageMark(group, 3);

	cout << "Average mark of student group is " << avg << ".\n";

	return 0;
}