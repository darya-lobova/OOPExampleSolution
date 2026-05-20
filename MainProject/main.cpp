#include "Student.h"

int main() {
	Student alex(123, "Alex", 15, 9, 'A', 10, true);
	Student vlad;

	vlad = alex;

	cout << "Before: ";
	cout << alex.toString() << endl;
	cout << vlad.toString() << endl;

	alex.id = 1;

	cout << "After: ";
	cout << alex.toString() << endl;
	cout << vlad.toString() << endl;

	return 0;
}