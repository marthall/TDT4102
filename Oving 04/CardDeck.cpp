#include <string>
#include <cmath>
#include "Card.h"
#include <ctime>

using namespace std;

//Card cards[52];

void CardDeck::CardDeck(){
    buildDeck();
}

void CardDeck::CardDeck(bool shouldShuffle){
    if(shouldShuffle){
        shuffle();
    }
}

void CardDeck::buildDeck(){
    string suits[] = {"S", "D", "H", "C"};
    for(int i = 1; i <= 52; i++){
        cards[i].setValue(i%13);
        cards[i].setSuit(suits[floor(i/13)]);
    }
void CardDeck::shuffle{
    for(int i = 0; i < 1000; i++){
        randIndex = rand() % 51;
        tmp = cards[randIndex];
        cards[randIndex] = cards[randIndex + 1];
        cards[randIndex + 1] = tmp;
    }
}
