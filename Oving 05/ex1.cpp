#include <iostream>
#include "Matrix2x2.h"

using namespace std;

int main(){
    double numbers[4] = {1,2,3,4};
    Matrix2x2 myMatrix;
    myMatrix.setMatrix2x2(numbers);
    myMatrix.printMatrix2x2();

    return 0;
}
