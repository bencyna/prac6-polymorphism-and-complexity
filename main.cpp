#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    Individual * individual = new Individual(10);
    
    Mutator * mutator;

    BitFlip * bitFlip = new BitFlip();

    mutator = bitFlip;

    cout << individual->getString() << endl;

    execute(individual, mutator, 2);

    cout << individual->getString() << endl;


    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}
