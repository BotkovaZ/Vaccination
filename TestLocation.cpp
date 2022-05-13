//
// Created by botko on 3/30/2021.
//

#include "TestLocation.h"

TestLocation::TestLocation(int id, const std::string &street, const std::string &city, int totalTests,
                           int totalPositives) : Location(id, street, city), totalTests(totalTests),
                                                 totalPositives(totalPositives) {}

int TestLocation::getTotalTests() {
    return totalTests;
}

int TestLocation::getTotalPositives() {
    return totalPositives;
}

void TestLocation::print() const {
    Location::print();
    std::cout << "Test location " << getStreet() << ", " << getCity() << std::endl;
    std::cout << "  - Tests: " << totalTests << ", positives: " << totalPositives << std::endl;
}
