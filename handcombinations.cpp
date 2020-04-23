#include "hand.h"
// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){ 
    for(int startingIndex = 0; startingIndex < currentNumberOfCards; startingIndex ++){ 
        Combination SINGLE = Combination();
        SINGLE.addCard(cards[startingIndex]);
        allCombinations[allCombinationsSize ++] = SINGLE;  
        for(int loopingIndex = startingIndex + 1; loopingIndex < currentNumberOfCards; loopingIndex ++){
            if(cards[startingIndex].getValue() == cards[loopingIndex].getValue()){
                Combination PAIR = Combination();
                PAIR.addCard(cards[startingIndex]);
                PAIR.addCard(cards[loopingIndex]);
                allCombinations[allCombinationsSize++] = PAIR; 
            }
        }
    }
}


//    for(int i = 0; i < currentNumberOfCards; i++){
//		for(int j = 0; j < currentNumberOfCards - 1 - i; j++){
//			if(cards[j].getValue() > cards[j + 1].getValue()){
//				Card temp = cards[j];
//				cards[j] = cards[j + 1];
//				cards[j] = temp; 
//			}
//		}
//	}
//	for(int i = 0; i < currentNumberOfCards; i++){
//        Combination SINGLE = Combination();
//        allCombinations[allCombinationsSize++] = SINGLE;
//        SINGLE.addCard(tempHand[i]);
//        for(int j = 0; j < currentNumberOfCards; j++){
//            if(tempHand[j].canBeInCombination() == false) continue; 
//            if(tempHand[i].getValue() == tempHand[j].getValue()){
//                Combination PAIR = Combination();
//                PAIR.addCard(cards[i]);
//				PAIR.addCard(cards[j]);
//                allCombinations[allCombinationsSize++] = PAIR;
//            }
//        }
//        
//    }
//}

