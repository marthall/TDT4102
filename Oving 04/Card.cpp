#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Card.h"

using namespace std;

int Card::getValue(){ 
    return value;
}

string Card::getSuit(){
    return suit;
}

string Card::getFace(){
    string valueString;
    stringstream ss;
    ss << value;
    valueString = ss.str();

    return suit + valueString;
}

void Card::setValue(int value){
    if (1 <= value && value <= 13){
        this->value = value;
    } else {
    cout << "Illegal value" << endl;
    exit(1);
    }
}

void Card::setSuit(string suit){
    string str = "SHCD";
    if (str.find(suit) != string::npos){
        this->suit = suit;
    } else {
        cout << "Illegal suit" << endl;
        exit(1);
    }
}
