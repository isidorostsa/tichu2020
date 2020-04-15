#include "hand.h"
// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){
	for(int i = 0; i < currentNumberOfCards; i++){
		for(int j = 0; j < currentNumberOfCards - 1 - i; j++){
			if(cards[j].getValue() > cards[j + 1].getValue()){
				Card temp = cards[j];
				cards[j] = cards[j + 1];
				cards[j] = temp; 
			}
		}
	}
	for(int i = 0; i < currentNumberOfCards; i++){
        Combination single = Combination();
        allCombinations[i] = single;
        single.addCard(cards[i]);
        for(int j = 0; j < currentNumberOfCards; j++){
            if(j == i || cards[j].canBeInCombination() == false) continue; 
            if(cards[i].getValue() == cards[j].getValue){
                Combination doubles = Combination();
                doubles.addCard(cards[i]);
				doubles.addCard(cards[j]);
            }

        }
    }
}

