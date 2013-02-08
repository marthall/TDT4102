#include <iostream>

using namespace std;

bool isSameCase(char, char);

int main() {
    // isSameCase
    char a = 'a';
    char b = 5;
    cout << isSameCase(a, b) << endl;

    return 0;
}

bool isSameCase(char a, char b) {
    if ((isupper(a) && isupper(b)) || (islower(a) && islower(b)))
        return true;
    return false;
}