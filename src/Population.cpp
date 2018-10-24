//
// Created by adele on 10/24/18.
//

#include "../includes/Population.h"
#include <algorithm>

template<class T>
Population<T>::Population() {
    Populants = new std::vector<Populant>();
}

template<class T>
Population<T>::Population(Population<T> first, Population<T> second) {
    Populants = new std::vector<Populant>();
    Populants->insert(Populants->end(), first.Populants->begin(), first.Populants->end());
    Populants->insert(Populants->end(), second.Populants->begin(), second.Populants->end());
}

template<class T>
Population<T>::Population(std::vector<T*> population) {
    Populants = population;
}

bool sortByScore(Populant * i, Populant * j) {
    return i->Score() > j->Score();
}

bool sortByScoreDesc(Populant * i, Populant * j) {
    return i->Score() < j->Score();
}

template<class T>
std::vector<T*> Population<T>::Top(int x, bool asc) {
    if(asc)
        std::sort(Populants->begin(), Populants->end(), sortByScore);
    else
        std::sort(Populants->begin(), Populants->end(), sortByScoreDesc);
    auto * output = new std::vector<Populant>();
    std::copy_n(Populants, x, output->begin());
    return output;
}