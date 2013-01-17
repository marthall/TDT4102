#include <iostream>
using namespace std;

int main() {
    float EURO = 9.22;
    float i = 0;
    while(i <= 0) {
        cout << "Skriv inn antall kroner: ";
        cin >> i;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << i << " NOK er det samme som " << (i/EURO) << " EURO" << endl;

    return 0;
}