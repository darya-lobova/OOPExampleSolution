#include "Student.h"

int main() {
	Student alex(123, "Alex", 15, 9, 'A', 10, true);
	Student polina(124, "Polina", 14, 9, 'B', 9, true);

	Student vlad(alex);
	Student nikita(alex);

	//Student* ptr = new Student(123, "Alex", 15, 9, 'A', 10, true);

	cout << alex.toString() << endl;
	cout << vlad.toString() << endl;

	return 0;
}