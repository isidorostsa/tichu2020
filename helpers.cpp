#include "helpers.h"
#include "player.h"

int numberOfPlayersThatHaveNoCardsLeft(Player players[]){
   int count = 0; 
   for(int i = 0; i < 4; i++){
        if(players[i].hasNoCardsLeft()) count ++; 
   }
   return count; 
}

bool lastThreePlayersPassedOrHaveNoCardsLeft(Player players[], int playerTurn){
    int count = 0;
    for(int i = 1; i < 4; i++){
        if(i == playerTurn) continue; 
        if(players[i].hasNoCardsLeft || players[i].hasStatus("PASSED")) count++; 
    }
    return count == 3; 
}
