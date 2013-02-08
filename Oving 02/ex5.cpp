#include <iostream>
#include <cmath>

using namespace std;

int callByValue(int);
void callByReference(int&);

int main() {
	int a = 10;
	int b = 10;
	int c = callByValue(a);
	callByReference(b);
	cout << a << endl << b << endl << c << endl;
	return 0;
}

int callByValue(int number) {
	return (pow(number, 2) + 10)*2;
}

void callByReference(int &number) {
	number = (pow(number, 2) + 10)*2;
}
