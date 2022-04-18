#include "BitFlip.h"
#include <iostream>

Individual * BitFlip::mutate(Individual * individual, int k) {

    int pos = k % individual->getLength(); 

    if (pos == 0) {
        if (k < individual->getLength()) {
            pos = k;
        }
        else {
            pos = individual->getLength();
        }
    } 

    individual->flipBit(pos-1);

    return individual;
}