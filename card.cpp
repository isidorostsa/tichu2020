#include "card.h"

void Card::setValue(int theValue){
    value = theValue;
}

void Card::setSuit(string theSuit){
    suit = theSuit;
}

int Card::getValue(){
    return value; 
}

string Card::getSuit(){
    return suit;
}

bool Card::hasSuit(string theSuit){
    return suit == theSuit; 
}
// TODO: Implement here the methods of Card