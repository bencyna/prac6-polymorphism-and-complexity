#include "BitFlip.h"

Individual BitFlip::mutate(Individual individual, int k) {

    int pos = k % individual.getLength(); 

    if (pos == 0) {
        pos = individual.getLength();
    } 

    individual.flipBit(pos-1);

    return individual;
}