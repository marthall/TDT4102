#include <iostream>
using namespace std;

int main() {
	int years = 10;
	int loan;
	float intRate;
	cout << "Skriv inn lånebeløpet: ";
	cin >> loan;
	cout << "Skriv inn renten i %: ";
	cin >> intRate;
	for(int i = 0; i < years; i++)
	{
		cout << "Innbetaling: " << (loan/years) + (intRate/100)*(loan - (loan/years)*i) << endl;
	}

	return 0;
}