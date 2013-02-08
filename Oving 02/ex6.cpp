#include <iostream>

using namespace std;

int add(int, int);
double add(double, double);
void add(int&, int&, int&, int&);

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

int add(int number1, int number2) {
	return number1 + number2;
}

double add(double number1, double number2) {
	return number1 + number2;
}

void add(int &number1, int &number2, int &number3, int &number4) {
	number4 = number1 + number2 + number3 + number4;
	number3 = number1 + number2 + number3;
	number2 = number1 + number2;
}
