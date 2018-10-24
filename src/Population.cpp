//
// Created by adele on 10/24/18.
//
#include "../includes/Population.h"
#include <algorithm>

template<class T>
Population<T>::Population() {
    Populants = *new std::vector<T>();
}

template<class T>
Population<T>::Population(Population<T> first, Population<T> second) {
    Populants = *new std::vector<T>();
    Populants.insert(Populants.end(), first.Populants.begin(), first.Populants.end());
    Populants.insert(Populants.end(), second.Populants.begin(), second.Populants.end());
}

template<class T>
Population<T>::Population(std::vector<T> population) {
    Populants = population;
}

template<class T>
bool sortByScore(T i, T j) {
    return i->Score() > j->Score();
}

template<class T>
bool sortByScoreDesc(T i, T j) {
    return i->Score() < j->Score();
}

template<class T>
std::vector<T> Population<T>::Top(int x, bool asc) {
    if(asc)
        std::sort(Populants.begin(), Populants.end(), sortByScore<T>);
    else
        std::sort(Populants.begin(), Populants.end(), sortByScoreDesc<T>);
    auto * output = new std::vector<T>();
    for(int i = 1; i <= x; i++) {
        output->push_back(Populants[i-1]);
    }
    return *output;
}