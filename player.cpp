#include "player.h"

Player::Player(int idx){
    index = idx;
}

void Player::setStatus(string newStatus){
    status = newStatus;
}

bool Player::hasStatus(string checkStatus){
    if(status == checkStatus){
        return true;
    }
    return false;
}

string Player::getName(){
    return name;
}

bool Player::hasNoCardsLeft(){
    // Do it at the end
}




// TODO: Implement here the methods of Player
// Do not implement the methods addCardToHand, removeCardFromHand, addCardsToBucket
// createHandCombinations, findNumberOfPlayableCombinations, playAnyCombination, play
// These are already implemented in file playercombinations.cpp
// Implement the rest of the methods of Player
