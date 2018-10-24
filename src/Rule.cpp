//
// Created by adele on 10/24/18.
//

#include "../includes/Rule.h"
#include <vector>

Rule::Rule(Population<Populant> base)
{
    activePopulation = base;
}

Rule::Rule(Population<Populant> base, int iterations, int popsize, int fittest, int result, int children)
{
    activePopulation = base;
    numIterations = iterations;
    popSize = popsize;
    numFittest = fittest;
    resultSize = result;
    numChildren = children;
}

Population<Populant> Rule::Execute()
{
    for(int iterations = numIterations; iterations > 0; iterations--)
    {
        std::vector<Populant*> basePop = activePopulation.Top(numFittest);
        auto newPop = Population<Populant>();
        for(int child = 1; child <= numChildren; child++)
        {
            newPop.Populants->push_back(basePop[(child - 1) % basePop.size()]->Child());
        }

        unsigned long remainingPop = popSize - newPop.Populants->size();
        auto randPop = basePop[0]->CreatePopulation(remainingPop);
        activePopulation = *new Population<Populant>(newPop, *new Population<Populant>(basePop));
    }

    return *new Population<Populant>(activePopulation.Top(resultSize));
}