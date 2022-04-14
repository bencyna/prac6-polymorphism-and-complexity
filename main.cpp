#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

int main() {

    Individual * individual = new Individual(10);
    
    Mutator * mutator;

    Rearrange * bitFlip = new Rearrange();

    mutator = bitFlip;

    cout << individual->getString() << endl;

    execute(individual, mutator, 5);

    cout << individual->getString() << endl;


    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}
