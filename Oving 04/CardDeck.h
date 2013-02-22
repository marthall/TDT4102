#ifndef CARDDECK_H
#define CARDDECK_H

#include "Card.h"

class CardDeck {
    
    private:

    public:
        int numberDealt;
        void shuffle();
        void buildDeck();
        CardDeck();
        CardDeck(bool shouldShuffle);
        Card cards[52];
        void dealHand(Card hand[], int numberOfCards);

};

#endif
