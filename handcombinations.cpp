#include "hand.h"
// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){
    Card tempHand[14];
    for(int i = 0; i <= currentNumberOfCards; i++){
        tempHand[i] = cards[i];
    }
//    for(int i = 0; i < currentNumberOfCards; i++){
//		for(int j = 0; j < currentNumberOfCards - 1 - i; j++){
//			if(tempHand[j].getValue() > tempHand[j + 1].getValue()){
//				Card temp = tempHand[j];
//				tempHand[j] = tempHand[j + 1];
//				tempHand[j] = temp; 
//			}
//		}
//	}
	for(int i = 0; i < currentNumberOfCards; i++){
        Combination single = Combination();
        allCombinations[allCombinationsSize++] = single;
        single.addCard(tempHand[i]);
        for(int j = 0; j < currentNumberOfCards; j++){
            if(tempHand[j].canBeInCombination() == false) continue; 
            if(tempHand[i].getValue() == tempHand[j].getValue()){
                Combination doubles = Combination();
                doubles.addCard(cards[i]);
				doubles.addCard(cards[j]);
                allCombinations[allCombinationsSize++] = doubles;
            }
        }
        
    }
}

