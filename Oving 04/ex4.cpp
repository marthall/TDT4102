#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "Card.h"

using namespace std;

int main(){
    Card card;
    card.setValue(13);
    card.setSuit("S");
    cout << card.getValue() << endl;
    cout << card.getSuit() << endl;
    cout << card.getFace() << endl;
    return 0;
}
