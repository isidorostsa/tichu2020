#include "player.h"

void Player::Player(int idx){
    index = idx;
}

void Player::setStatus(string newStatus){
    status = newStatus;
}

bool Player::hasStatus(string checkStatus){
    return (status == checkStatus);
}

string Player::getName(){
    return name;
}

bool Player::hasNoCardsLeft(){
    return (bucketSize == 0);
}




// TODO: Implement here the methods of Player
// Do not implement the methods addCardToHand, removeCardFromHand, addCardsToBucket
// createHandCombinations, findNumberOfPlayableCombinations, playAnyCombination, play
// These are already implemented in file playercombinations.cpp
// Implement the rest of the methods of Player
