#include "hand.h"
// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){
    Card tempHand[14];
    for(int i = 0; i <= currentNumberOfCards; i++){
        tempHand[i] = cards[i];
    }
    for(int i = 0; i < currentNumberOfCards; i++){
		for(int j = 0; j < currentNumberOfCards - 1 - i; j++){
			if(tempHand[j].getValue() > tempHand[j + 1].getValue()){
				Card temp = tempHand[j];
				tempHand[j] = tempHand[j + 1];
				tempHand[j] = temp; 
			}
		}
	}
	for(int i = 0; i < currentNumberOfCards; i++){
        Combination single = Combination();
        allCombinations[i] = single;
        single.addCard(tempHand[i]);
        for(int j = i; j <= i + 3; j++){
            if(cards[j].canBeInCombination() == false) continue; 
            if(cards[i].getValue() == cards[j].getValue){
                Combination doubles = Combination();
                doubles.addCard(cards[i]);
				doubles.addCard(cards[j]);
            }
        }
        tempHand[i].canBeInCombination // isws Hand tempHand? (removeCard)  
    }
}

