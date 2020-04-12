#include "combination.h"

Combination::Combination(){
    numberOfCards = 0; 
}

void Combination::addCard(Card card){
    cards[numberOfCards++] = card;
}

Card Combination::getCard(){
    
}


// TODO: Implement here the methods of Combination

Combination::Combination(){
  numberOfCards = 0;
}

void Combination::addCard(Card card){
  numberOfCards += 1;
  cards[numberofCards-1] = card;
}

Card Combination::getCard(int index){
  return cards[index];
}

int Combination::getValue(){
  return cards[0].getvalue();
}

int Combination::getNumberOfCards(){
  return numberOfCards;
}

bool Combination::canBePlayed(Combination last){
  return numberOfCards == last.getnumberOfCards() && cards[0].value >= last.getValue();
}
