#include "ex7lib.h"

int add(int number1, int number2) {
    return number1 + number2;
}

double add(double number1, double number2) {
    return number1 + number2;
}

void add(int &number1, int &number2, int &number3, int &number4) {
    number4 += number1 + number2 + number3;
    number3 += number1 + number2;
    number2 += number1;
}
