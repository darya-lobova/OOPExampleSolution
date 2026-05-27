#include "Manager.h"

double Manager::calculateAverageMark(Group* group) {
	double sum = 0;
	int count = 0;

	for (int i = 0; i < group->getSize(); i++)
	{
		Student* student = group->getStudent(i);
		count += student->getCount();
		for (int j = 0; j < student->getCount(); j++)
		{
			sum += *(student->getMarks() + j);
			//sum +=student->getMarks()[j];
		}
	}

	return sum / count;
}
