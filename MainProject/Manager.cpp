#include "Manager.h"

double Manager::calculateAverageMark(Student** group, int size) {
	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		Student* student = group[i];
		count += student->getCount();
		for (int j = 0; j < student->getCount(); j++)
		{
			sum += *(student->getMarks() + j);
			//sum +=student->getMarks()[j];
		}
	}

	return sum / count;
}
