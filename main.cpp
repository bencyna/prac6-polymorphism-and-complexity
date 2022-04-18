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
    
    Mutator * mutator1;

    Mutator * mutator2;

    Rearrange * rearrange = new Rearrange();

    BitFlip * bitflip = new BitFlip();

    mutator1 = bitflip;

    mutator2 = rearrange;

    execute(individual1, mutator1, k1);
    execute(individual2, mutator2, k2);

    cout << individual1->getString() << " " << individual2->getString() << " " <<  individual2->getMaxOnes() << endl;

    return 0; 
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}
