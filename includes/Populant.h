//
// Created by adele on 10/24/18.
//

#ifndef GENETUS_POPULANT_H
#define GENETUS_POPULANT_H

template<class T>
class Population;
#include <vector>

class Populant {
public:
    virtual Populant * Child() = 0;
    virtual float Score() = 0;
    virtual Population<Populant*> CreatePopulation(int size) = 0;
private:
};


#endif //GENETUS_POPULANT_H
