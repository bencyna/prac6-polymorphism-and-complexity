#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    Individual * individual = new Individual(10);
    
    Mutator * mutator = new Mutator();

    BitFlip * bitFlip;

    mutator = bitFlip;

    

    


    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return indPtr;
}
