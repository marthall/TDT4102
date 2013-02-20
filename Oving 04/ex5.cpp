#include <iostream>
#include <string>
#include <cmath>
#include "CardDeck.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    CardDeck cardDeck;
    Card card = cardDeck.cards[2];
    cout << card.getFace();
    return 0;
}
