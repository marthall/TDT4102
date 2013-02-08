#include <iostream>
#include <cmath>

using namespace std;
double hypotenouse(double, double);
int sum(int, int, int);
int instructions();
double intToDouble(int);

int main() {


    int side1, side2;
    cout << "Skriv inn to sider for å få hypotenusen" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << hypotenouse(side1, side2) << endl;

    int x, y, z;
    cout << "Tall 1: ";
    cin >> x;
    cout << "Tall 2: ";
    cin >> y;
    cout << "Tall 3: ";
    cin >> z;

    instructions();

    int number = 5;
    cout << intToDouble(number) << endl;
    return 0;
}

double hypotenouse(double side1, double side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

int sum(int x, int y, int z) {
    return x + y + z;
}

int instructions() {
    cout << "Dette er instruksjoner" << endl;
    return 0;
}

double intToDouble(int a) {
    return (double)a;
}