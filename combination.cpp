#include "combination.h"

Combination::Combination(){
  numberOfCards = 0;
}

void Combination::addCard(Card card){
  cards[numberOfCards++] = card;
}

Card Combination::getCard(int index){
  return cards[index];
}

int Combination::getValue(){
  return cards[0].getValue();
}

int Combination::getNumberOfCards(){
  return numberOfCards;
}

bool Combination::canBePlayed(Combination last){
  return numberOfCards == last.getNumberOfCards() && cards[0].getValue() > last.getValue();
}
