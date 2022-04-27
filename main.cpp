#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    string binarystr1, binarystr2;
    int k1, k2;

    cin >> binarystr1 >> k1 >> binarystr2 >> k2;

    Individual * individual1 = new Individual(binarystr1);

    Individual * individual2 = new Individual(binarystr2);


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