#include <iostream>

using namespace std;

int printArray(int array[], int len);

int main() {
	int phoneNumbers[5] = {111, 222, 333, 444, 555};
	int len = sizeof(phoneNumbers);

	printArray(phoneNumbers, len);

	return 0;
}

void printArray(int array[], int len) {
	for (int i = 0; i < len; i+) 
		cout << array[i] << endl;
}