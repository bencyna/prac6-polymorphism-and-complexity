#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#pragma once

#include <list>
#include <string>

class Individual
{
public:
    Individual(int length);
    Individual(std::string binaryString);
    void getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

private:
    std::list<char> binaryString;
};

#endif