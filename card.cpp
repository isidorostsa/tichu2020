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
    return (suit == "DRAGON" || suit == "DOG") == false; 
}

bool Card::canBeInBomb(){
    return true; 
}




// TODO: Implement here the methods of Card
//TEST
// TODO: Implement here the methods of Card
