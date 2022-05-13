//
// Created by botko on 3/30/2021.
//

#ifndef VACCINATION_VACCINATION_H
#define VACCINATION_VACCINATION_H

#include <iostream>

class Vaccination {
    std::string vaccine;
    int nrPeople;

public:
    Vaccination(const std::string &vaccine, int nrPeople);

    void print() const;
};


#endif //VACCINATION_VACCINATION_H
