#include <iostream>
#include "Individual.h"

using namespace std;

int main() {

    Individual individual(10);
    
    cout << individual.getString() << endl;

    cout << individual.getBit(0) << endl;
    individual.flipBit(0);

    cout << individual.getMaxOnes() << endl;

    cout << individual.getString() << endl;

    cout << individual.getLength() << endl;


    return 0; 
}