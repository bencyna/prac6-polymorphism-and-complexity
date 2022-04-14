#include "Rearrange.h"

Individual * Rearrange::mutate(Individual * individual, int k) {
    int startingPos = k % individual->getLength(); 

    if (startingPos == 0) {
        startingPos = k;
    } 

    for (int i = startingPos-1; i < individual->getLength(); i++)
        individual->flipBit(i);


    return individual;
}