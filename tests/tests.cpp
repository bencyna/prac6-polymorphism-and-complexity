#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"

using namespace std;

int main() {

    Individual individual(10);
    
    cout << individual.getString() << endl;

    cout << individual.getBit(0) << endl;
    individual.flipBit(0);

    cout << individual.getMaxOnes() << endl;

    cout << individual.getString() << endl;

    cout << individual.getLength() << endl;

    ///////////////


    Individual individual(10);
    

    BitFlip bitFlip;

    cout << individual.getString() << endl;


    individual = bitFlip.mutate(individual, 2);
    
    cout << individual.getString() << endl;


    return 0; 
}