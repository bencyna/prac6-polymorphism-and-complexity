#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#pragma once

#include "Mutator.h"
#include "Individual.h"

class BitFlipProb : public Mutator
{
public:
    BitFlipProb();
    Individual * mutate(Individual *individual, int k);

private:

};

#endif