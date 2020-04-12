#include "card.h"

void Card::setValue(int theValue){
    value = theValue;
}

void Card::setSuit(string theSuit){
    suit = theSuit;
}

string Card::getSuit(){
    return suit;
}
// TODO: Implement here the methods of Card