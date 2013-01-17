#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x;
    cout << "Skriv inn en x-verdi: ";
    cin >> x;
    float y = pow(x, 2) + (6*x - 2)/3;
    cout << y << endl;

    return 0;
}