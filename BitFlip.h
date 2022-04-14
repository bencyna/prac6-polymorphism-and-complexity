#ifndef BITFLIP_H
#define BITFLIP_H

#pragma once

#include "Mutator.h"
#include "Individual.h"

class BitFlip : public Mutator
{
public:
    Individual mutate(Individual *individual, int k);

private:

};

#endif