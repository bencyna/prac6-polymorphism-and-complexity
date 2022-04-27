#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    Individual individual(10);

    cout << " " << individual.getBit(3) << endl;



    // individual.getString();


    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    // Individual &individual = *indPtr;
    // Individual * pOffspring;
    // Individual offspring = mPtr->mutate(individual, k);
    // pOffspring = &offspring;
    // return pOffspring; 
    return indPtr;
}

// idnividual contructor
// mutator 
// bitflip 
// rearrange
// individual getString
// indiviudal getMaxOnes
