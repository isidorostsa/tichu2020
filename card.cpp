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

bool Card::equals(Card otherCard){
    return suit == otherCard.getSuit() && value == otherCard.getValue();
}

bool Card::canBeInCombination(){
    return suit != "DRAGON" && suit != "DOG"; 
}

bool Card::canBeInBomb(){
    return suit != "DRAGON" && suit != "DOG" && suit != "PHOENIX" && suit != "MAHJONG"; 
}

// TODO: Implement here the methods of Card