#include <string>
#include <cmath>
#include <cstdlib>
#include "Card.h"
#include "CardDeck.h"
#include <iostream>

using namespace std;


CardDeck::CardDeck(){
    buildDeck();
}

CardDeck::CardDeck(bool shouldShuffle){
    buildDeck();
    if(shouldShuffle){
        shuffle();
    }
}

void CardDeck::buildDeck(){
    string suits[] = {"S", "D", "H", "C"};
    for(int i = 0; i < 52; i++){
        cards[i].setValue(i%13 + 1);
        cards[i].setSuit(suits[i/13]);
        numberDealt = 0;
    }
}

void CardDeck::shuffle(){
    for(int i = 0; i < 1000000; i++){
        int randIndex = rand() % 51;
        Card tmp = cards[randIndex];
        cards[randIndex] = cards[randIndex + 1];
        cards[randIndex + 1] = tmp;
        numberDealt = 0;
    }
}

void CardDeck::dealHand(Card hand[], int numberOfCards){
    if(numberOfCards <= (52-numberDealt)){
        for(int i = 0; i < numberOfCards; i++){
            hand[i] = cards[i + numberDealt];
        }
        numberDealt += numberOfCards;
    }
}
