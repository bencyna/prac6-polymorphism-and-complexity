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
    
    cout << individual.getString() << endl;

    cout << individual.getBit(0) << endl;
    individual.flipBit(0);

    cout << individual.getMaxOnes() << endl;

    cout << individual.getString() << endl;

    cout << individual.getLength() << endl;

    ///////////////


    Individual * individual = new Individual("111000");
    
    Mutator * mutator;

    Rearrange * bitFlip = new Rearrange();

    mutator = bitFlip;

    cout << individual->getString() << endl;

    execute(individual, mutator, 3);

    cout << individual->getString() << endl;

    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);