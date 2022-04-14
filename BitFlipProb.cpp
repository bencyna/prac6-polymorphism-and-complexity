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

Individual * BitFlipProb::mutate(Individual * individual, int k) {
    std::string individualString = individual->getString();
    int probability = p * 100;

    for (int i=0; i < individualString.length(); i++) {
        bool TrueFalse = (rand() % 100) < probability;
        
        if (TrueFalse) {
            individual->flipBit(i);
        }
    }


    return individual;
}