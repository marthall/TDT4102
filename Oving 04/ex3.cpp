#include <iostream>
#include <string>

using namespace std;

string nameFixer(){
    string firstName, lastName;
    cout << "Input: ";
    cin >> firstName >> lastName;
    cout << "Output: " << lastName << ", " << firstName << endl;
}

int main(){
    nameFixer();
    return 0;
}
