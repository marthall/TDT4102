#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

class Card{

    private:
        int value;
        string suit; 

    public:
        int getValue();
        void setValue(int value);
        
        string getSuit();
        void setSuit(string suit);

        string getFace();
};

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
    if (str.find(suit) != -1){
        this->suit = suit;
    } else {
        cout << "Illegal suit" << endl;
        exit(1);
    }
}

int main(){
    Card card;
    card.setValue(13);
    card.setSuit("S");
    cout << card.getValue() << endl;
    cout << card.getSuit() << endl;
    cout << card.getFace() << endl;
    return 0;
}
