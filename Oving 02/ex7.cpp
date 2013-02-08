#include <iostream>
#include "ex7lib.h"


using namespace std;

int main() {
	int int1 = 1;
	int int2 = 2;
	double double1 = 1.5;
	double double2 = 2.6;
	int number1 = 1;
	int number2 = 2;
	int number3 = 5;
	int number4 = 1;

	int intResult = add(int1, int2);
	double doubleResult = add(double1, double2);
	add(number1, number2, number3, number4);

	cout << intResult << endl;
	cout << doubleResult << endl;
	cout << number1 << "\n" << number2 << "\n" << number3 << "\n" << number4 << "\n";

	return 0;
}
