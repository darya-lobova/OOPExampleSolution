#include "Student.h"

int main() {
	int number{ };
	cout << "number = " << number << endl;

	int* array = new int[3] {1};
	cout << array[0] << ", " << array[1] << ", " << array[1] << endl;

	Student alex{10, "Alex", 14, 9, 'A', true};
	cout << alex.toString() << endl;

	delete[] array;
}