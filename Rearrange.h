#ifndef REARRANGE_H
#define REARRANGE_H

#pragma once

#include "Mutator.h"
#include "Individual.h"

class Rearrange : public Mutator
{
public:
    Individual * mutate(Individual *individual, int k);

private:

};
#endif