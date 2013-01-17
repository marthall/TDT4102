#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Skriv inn et tall: ";
    cin >> i;
    if ( i % 2 == 0) {
        cout << "Tallet er et partall" << endl;
    } else {
        cout << "Tallet er et oddetall" << endl;
    }

    return 0;
}