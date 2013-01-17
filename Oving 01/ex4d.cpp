#include <iostream>
using namespace std;

int main() {
	int COL, ROW;
	cout << "Skriv inn antall kolonner: ";
	cin >> COL;
	cout << "Skriv inn antall rader: ";
	cin >> ROW;
	for(int i = 1; i <= ROW; i++) {
		for(int j = 1; j <= COL; j++) {
			cout << i*j << "\t";
		}
		cout << endl;
	}
	return 0;
}