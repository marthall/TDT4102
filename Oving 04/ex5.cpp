#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "CardDeck.h"
#include "Card.h"

using namespace std;

int main(){
    srand(time(NULL));
    CardDeck cardDeck(true);

    //for(int i = 0; i < 52; i++){
    //    cout << cardDeck.cards[i].getFace() << endl;
    //}

    int numberOfCards = 5;
    Card hand[numberOfCards];

    for(int i = 0; i < 11; i++){
        cardDeck.dealHand(hand, numberOfCards);
        for(int i = 0; i < numberOfCards; i++){
            cout << hand[i].getFace() << endl;
        }
        cout << "---" << endl;
    }
    return 0;
}
