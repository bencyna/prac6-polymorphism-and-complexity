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
    int probability = p * 100;
    int length = individual.getLength();

    // S: O(1)
    // T: O(n)

    for (int i=1; i <= length; i++) {
        bool TrueFalse = (rand() % 100) < probability;
        
        if (TrueFalse) {
            individual.flipBit(i);
        }
    }


    return individual;
}