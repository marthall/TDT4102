#include <iostream>
using namespace std;

int main() {
	float i, j;
	cout << "Skriv inn to tall:" << endl;
	cout << "Tall 1: ";
	cin >> i;
	cout << "Tall 2: ";
	cin >> j;
	cout << "Det største tallet er " << max(i,j) << endl;

	return 0;
}