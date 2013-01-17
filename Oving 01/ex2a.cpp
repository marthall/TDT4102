#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int input;
    cout << "Skriv antall sekunder: ";
    cin >> input;
    int timer = floor(input / (60*60));
    int minutter = floor((input - 60*60*timer) / 60);
    int sekunder = input - 60*60*timer - 60*minutter;
    cout << timer << " time[r], " << minutter << " minutt[er] og " << sekunder << " sekund[er]" << endl;

    return 0;
}