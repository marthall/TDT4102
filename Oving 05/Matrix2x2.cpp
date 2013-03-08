#include <iostream>
#include "Matrix2x2.h"

using namespace std;

void Matrix2x2::setMatrix2x2(double num1, double num2, double num3, double num4){
    numbers[0][0] = num1;
    numbers[0][1] = num2;
    numbers[1][0] = num3;
    numbers[1][1] = num4;
}

double Matrix2x2::getMatrix2x2(){
    return numbers;
}

void Matrix2x2::printMatrix2x2(){
    cout << numbers[0][0] << " " << numbers[0][1] << "\n"
    	<< numbers[1][0] << " " << numbers[1][1] << endl;
}
