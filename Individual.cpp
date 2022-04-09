#include "Individual.h"
#include <iostream>

using namespace std;

Individual::Individual(int length) {

}

Individual::Individual(string binaryString) {
    
}

string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{

    return binaryString.at(pos) - '0';
}

void Individual::flipBit(int pos)
{
    return;
}

int Individual::getMaxOnes()
{
    return 0;
}

int Individual::getLength()
{
    return 0;
}