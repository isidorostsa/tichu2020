#include "hand.h"
// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){ 
    for(int startingIndex = 0; startingIndex < currentNumberOfCards; startingIndex ++){ 
        Combination single = Combination();
        single.addCard(cards[startingIndex]);
        allCombinations[allCombinationsSize++] = single;  
        for(int loopingIndex = startingIndex + 1; loopingIndex < currentNumberOfCards; loopingIndex ++){
            if(cards[startingIndex].getValue() == cards[loopingIndex].getValue()){
                Combination doubles = Combination();
                doubles.addCard(cards[startingIndex]);
                doubles.addCard(cards[loopingIndex]);
                allCombinations[allCombinationsSize++] = doubles; 
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
//        Combination single = Combination();
//        allCombinations[allCombinationsSize++] = single;
//        single.addCard(tempHand[i]);
//        for(int j = 0; j < currentNumberOfCards; j++){
//            if(tempHand[j].canBeInCombination() == false) continue; 
//            if(tempHand[i].getValue() == tempHand[j].getValue()){
//                Combination doubles = Combination();
//                doubles.addCard(cards[i]);
//				doubles.addCard(cards[j]);
//                allCombinations[allCombinationsSize++] = doubles;
//            }
//        }
//        
//    }
//}

