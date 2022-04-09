#include "Individual.h"
#include <iostream>

using namespace std;

Individual::Individual(int length) {

}

Individual::Individual(string binaryString) {
    this->binaryString = binaryString;
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
    if (binaryString.at(pos) == '1') {
        binaryString.at(pos) = '0';
    }
    else {
        binaryString.at(pos) = '1';
    }
}

int Individual::getMaxOnes()
{
    return 0;
}

int Individual::getLength()
{
    return 0;
}