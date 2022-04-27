#include "Rearrange.h"
#include <iostream>

Individual Rearrange::mutate(Individual individual, int k) {
    int stringLength = individual.getLength();
    int startingPos = (k-1) % stringLength; 

    if (startingPos == 0) {
       startingPos = individual.getLength() - 1;
    } 

    std::string placeholder = ""; 
    for (int i = startingPos; i < stringLength; i++) {
        char bit = individual.getBit(i);
        placeholder = placeholder + bit;
    }

    for (int j = 0; j < startingPos; j++) {
        char bit = individual.getBit(j);
        placeholder = placeholder + bit;
    }

    for (int m = 0; m < stringLength; m++) {
        char bit = individual.getBit(m);
        if (bit != placeholder.at(m)) {
            individual.flipBit(m);
        }
    }

    return individual;
}