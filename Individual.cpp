#include "Individual.h"

#include<iostream>
#include<algorithm>
#include <list>
#include <iterator>

using namespace std;

Individual::Individual(int length) {
    for (int i = 0; i < length; i++) {
        binaryString.push_back('0');
    }
}

Individual::Individual(string binaryString) {
    for (int i = 0; i < binaryString.length(); i++) {
        this->binaryString.push_back(binaryString.at(i));
    }
    // create a new indiviudal with a copy of this individuals list
}

void Individual::getString()
{
     for (auto const &i: binaryString) {
        cout << i;
    }
}

int Individual::getBit(int pos)
{
    int pos2 = pos;
    if (pos < 0 || pos2 >= binaryString.size()) {
        return -1;
    }

    auto iterator = binaryString.begin();
    auto bitVal = next(iterator, pos-1);
    int bitNum = *bitVal - '0';
    return bitNum;
}

void Individual::flipBit(int pos)
{   
    auto iterator = binaryString.begin();
   
    auto bitVal = next(iterator, pos-1);
     if (*bitVal == '1') {
        *bitVal = '0';
    }
    else {
        *bitVal = '1';
    }
}

int Individual::getMaxOnes()
{
    int maxOnes = 0;
    int currentOnes = 0;
    auto iterator = binaryString.begin();

    while (iterator != binaryString.end()) {
        if (*iterator == '1') {
            currentOnes++;
            maxOnes = max(currentOnes, maxOnes);
        }
        else {
            currentOnes = 0;
        }
        iterator = next(iterator, 1);
    }

    return maxOnes;
}

int Individual::getLength()
{
    return binaryString.size();
}