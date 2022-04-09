#include <iostream>
#include "Individual.h"

using namespace std;

int main() {

    Individual individual("1010101");
    
    cout << individual.getString() << endl;

    cout << individual.getBit(0) << endl;
    individual.flipBit(0);

    cout << individual.getString() << endl;


    return 0; 
}