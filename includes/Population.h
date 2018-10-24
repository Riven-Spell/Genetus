//
// Created by adele on 10/24/18.
//
#ifndef GENETUS_POPULATION_H
#define GENETUS_POPULATION_H

#include <vector>
#include "Populant.h"

template<class T>
class Population {
public:
    Population(); //Empty population
    Population(Population<T> first, Population<T> second); //Combine populations
    explicit Population(std::vector<T*> population);
    std::vector<T*> * Populants;
    std::vector<T*> Top(int x);
};


#endif //GENETUS_POPULATION_H
