//
// Created by adele on 10/24/18.
//

#ifndef GENETUS_RULE_H
#define GENETUS_RULE_H

#include "Populant.h"
#include "Population.h"

class Rule {
public:
    Rule(Population<Populant> base, int iterations = 0, int popsize = 0, int fittest = 0, int result = 0, int children = 0);
    Rule(Population<Populant> base);
    Population<Populant> Execute();

    Population<Populant> activePopulation;
    int numFittest;
    int numChildren;
    int popSize;
    int numIterations;
    int resultSize;
};


#endif //GENETUS_RULE_H
