#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"

using namespace std;

int main() {

    Individual individual(10);
    

    BitFlip bitFlip;

    cout << individual.getString() << endl;


    individual = bitFlip.mutate(individual, 2);
    
    cout << individual.getString() << endl;


    return 0; 
}