#include "BitFlipProb.h"

BitFlipProb::BitFlipProb() {
    
}

Individual * BitFlipProb::mutate(Individual * individual, int k) {
    int pos = k % individual->getLength(); 

    if (pos == 0) {
        pos = k;
    } 

    individual->flipBit(pos-1);


    return individual;
}