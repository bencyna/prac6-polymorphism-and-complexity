#include "BitFlip.h"

Individual BitFlip::mutate(Individual individual, int k) {

    int pos = k % individual.getLength(); 

    // S: O(1)
    // T: O(1)

    if (pos == 0) {
        pos = individual.getLength();
    } 

    individual.flipBit(pos);

    return individual;
}