#include "Individual.h"

#include<iostream>
#include<algorithm>

using namespace std;

Individual::Individual(int length) {
    for (int i = 0; i < length; i++) {
        binaryString.push_back('0');
    }
}

Individual::Individual(string binaryString) {
    // create a new individual with an identical list. 
    // Note that this involves creating a new copy of the list.
    this->binaryString = binaryString;
}

string Individual::getString()
{
    cout << binaryString << endl;
}

int Individual::getBit(int pos)
{
    unsigned int pos2 = pos;
    if (pos < 0 || pos2 >= binaryString.size()) {
        return -1;
    }
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
    int maxOnes = 0;
    int currentOnes = 0;
    for (unsigned int i = 0; i < binaryString.size(); i++) {
        if (binaryString.at(i) == '1') {
            currentOnes++;
            maxOnes = max(currentOnes, maxOnes);
        }
        else {
            currentOnes = 0;
        }
    }

    return maxOnes;
}

int Individual::getLength()
{
    return binaryString.size();
}