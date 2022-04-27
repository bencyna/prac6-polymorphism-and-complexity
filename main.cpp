#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    Individual individual("1010");

    cout << " " << individual.getLength() << endl;

    individual.getString();



    // individual.getString();


    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    

    return indPtr;
}

// idnividual contructor
// mutator 
// bitflip 
// rearrange
// individual getString
// indiviudal getMaxOnes
