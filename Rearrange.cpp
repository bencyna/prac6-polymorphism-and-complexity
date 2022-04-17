#include "Rearrange.h"
#include <iostream>


Individual * Rearrange::mutate(Individual * individual, int k) {
    int stringLength = individual->getLength();
    std::string binaryString = individual->getString();
    int startingPos = k % stringLength; 

    if (startingPos == 0) {
        startingPos = k;
    } 

    // 1110000, 2
    // = 1000011

    // 1011010, 6
    // 0101101

    // time = O(n^2)
    // space = O(n)

    std::string placeholder = "";
    for (int i = k; i < stringLength; i++) {
        placeholder = placeholder + binaryString.at(i);
    }
    for (int j = 0; j < k; j++) {
        placeholder = placeholder + binaryString.at(j);
    }

    for (int m = 0; m < stringLength; m++) {
        if (binaryString.at(m) != placeholder.at(m)) {
            individual->flipBit(m);
        }
    }

    return individual;
}