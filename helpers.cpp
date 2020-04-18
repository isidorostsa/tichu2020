#include "helpers.h"
#include "player.h"

int numberOfPlayersThatHaveNoCardsLeft(Player players[]){
   int count = 0;   
   for(int i = 0; i < 4; i++){// loop over the players
        if(players[i].hasNoCardsLeft()) count ++; 
   }
   return count; 
}


bool lastThreePlayersPassedOrHaveNoCardsLeft(Player players[], int playerTurn){
    int count = 0;
    for(int i = 0; i < 4; i++){ // loop over the players, skip current player
        if(i == playerTurn) continue; 
        if(players[i].hasNoCardsLeft() || players[i].hasStatus("PASSED")) count++; 
    }
    return count == 3; 
}
