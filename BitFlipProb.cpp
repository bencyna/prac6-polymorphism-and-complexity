#include "BitFlipProb.h"
#include <string>

BitFlipProb::BitFlipProb(double p) {
    if (p > 0 && p < 1){
        this->p = p;
    }
    else {
        this->p = 0.0;
    }
}

Individual BitFlipProb::mutate(Individual individual, int k) {
    // int probability = p * 100;
    // int length = individual.getLength();
    // auto iterator = individual.getBit(0);

    // while (iterator != individual.getBit(length)) {
    //         if (*iterator == '1') {
    //             currentOnes++;
    //             maxOnes = max(currentOnes, maxOnes);
    //         }
    //         else {
    //             currentOnes = 0;
    //         }
    //         iterator = next(iterator, 1);
    //     }


    // for (unsigned int i=0; i < individualString.length(); i++) {
    //     bool TrueFalse = (rand() % 100) < probability;
        
    //     if (TrueFalse) {
    //         individual.flipBit(i);
    //     }
    // }


    return individual;
}