#include <iostream>
#include <cmath>

using namespace std;

int callByValue(int);
bool isPrime(int);

int main() {
	int number = 42;
	cout << callByValue(number) << endl;
	return 0;
}

int callByValue(int number) {
	int highestPrime = 1;
	for (int i = 1; i < sqrt(number) + 1; i++) {
		if ((number % i == 0) && isPrime(i)) {
			highestPrime = i;
		}
	}
	return highestPrime;
}

bool isPrime(int number) {
	for (int i = 1; i < sqrt(number); i++) {
		if (!(number % i == 0))
			return false;
	}
	return true;
}
