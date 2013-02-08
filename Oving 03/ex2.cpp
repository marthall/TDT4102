#include <iostream>

using namespace std;

void printNumbers(int weekdays[], int size);

int weekdays[5][7];
int size = sizeof(weekdays)/sizeof(weekdays[0]);

int main() {
	printNumbers(weekdays[]*, size);
	return 0;
}

void printNumbers(int weekdays[]*, int size) {
	for (int i = 0; i < size; ){
		for (int j = 0; j < 7; j++) {
			cout << weekdays << "\t";
		}
		cout << "\n"
	}
}
