//
// Created by adele on 10/24/18.
//

#ifndef GENETUS_POPULATION_H
#define GENETUS_POPULATION_H

#include <vector>

template<class T>
class Population {
public:
    Population(); //Empty population
    Population(Population<T> first, Population<T> second); //Combine populations
    explicit Population(std::vector<T> population);
    std::vector<T> Populants;
    std::vector<T> Top(int x, bool asc);
};

class Populant {
public:
    virtual Populant * Child() = 0;
    virtual float Score() = 0;
    virtual Population<Populant*> CreatePopulation(int n) = 0;
private:
};

template class Population<Populant*>;

#endif //GENETUS_POPULATION_H
