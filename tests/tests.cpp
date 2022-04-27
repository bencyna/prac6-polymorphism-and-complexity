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

     ////////////////////////////////////////////////////////////////

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

    Individual * offspring1 = execute(individual1, mutator1, k1);
    Individual * offspring2 = execute(individual2, mutator2, k2);

}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);