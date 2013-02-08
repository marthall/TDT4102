#include <iostream>
#include <cmath>

using namespace std;
int printTime(int, int, int);
int getTime(int);

int main() {
    int hours, minutes, seconds;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;
    printTime(hours, minutes, seconds);

    cout << "Convert seconds to hours and minutes. Seconds: ";
    cin >> seconds;
    getTime(seconds);

    return 0;
}

int printTime(int hours, int minutes, int seconds) {
    cout << hours << " hours, " << minutes << " minutes and "
        << seconds << " seconds" << endl;
    return 0;
}

int getTime(int seconds) {
    int hours, minutes;
    hours = seconds / (60*60);
    minutes = (seconds / 60) % 60;
    seconds %= 60;
    printTime(hours, minutes, seconds);
    return 0;
}