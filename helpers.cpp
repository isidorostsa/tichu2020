#include "helpers.h"
#include "player.h"

int numberOfPlayersThatHaveNoCardsLeft(Player players[]){
   int count = 0; 
   for(int i = 0; i < 4; i++){
        if(players[i].hasNoCardsLeft) count ++; 
   }
   return count; 
}

bool lastThreePlayersPassedOrHaveNoCardsLeft(Player players[], int playerTurn){
    // TODO: Implement this function
}
