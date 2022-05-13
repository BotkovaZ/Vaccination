//
// Created by botko on 3/30/2021.
//

#ifndef VACCINATION_TESTLOCATION_H
#define VACCINATION_TESTLOCATION_H

#include "Location.h"

class TestLocation : public Location {
    int totalTests;
    int totalPositives;

public:
    TestLocation(int id, const std::string &street, const std::string &city, int totalTests, int totalPositives);

    int getTotalTests() override;

    int getTotalPositives() override;

    void print() const override;
};


#endif //VACCINATION_TESTLOCATION_H
