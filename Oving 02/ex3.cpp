#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int randomTenToFifty();
float checkTrigonometry(float);
char changeCase(char);

int main() {
    // randomTenToFifty
    srand(time(NULL));
    cout << randomTenToFifty() << endl;

    // check Trigonometry
    float pi = M_PI;
    float xValue = pi/2;
    cout << checkTrigonometry(xValue) << endl;

    // changeCase
    char letter = 'A';
    cout << changeCase(letter) << endl; 
    
    return 0;
}

int randomTenToFifty() {
    int min = 10;
    int max = 50;
    int randInt = rand() % (max - min) + min;
    return randInt;
}

float checkTrigonometry(float x) {
    return tan(x) - (sin(x) / cos(x));
}

char changeCase(char letter) {
    if (isupper(letter))
        letter = tolower(letter);
    else
        letter = toupper(letter);
    return letter;
}