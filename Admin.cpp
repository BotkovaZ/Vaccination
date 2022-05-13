//
// Created by botko on 3/30/2021.
//

#include "Admin.h"

void Admin::addLocation(std::shared_ptr<Location> location) {
    for (auto const &l: locations) {
        if (l->getStreet() == location->getStreet()) {
            throw std::runtime_error("Location already exists.");
        }
    }
    locations.push_back(location);
}

void Admin::print() const {
    std::cout << "GGD administration for 25th of March 2021" << std::endl;
    for (auto const &l: locations) {
        l->print();
    }
    int totalTests = 0;
    int totalPositives = 0;
    for (auto const &l: locations) {
        totalTests += l->getTotalTests();
        totalPositives += l->getTotalPositives();
    }
    std::cout << "Total tests " << totalTests << ", total positives " << totalPositives << std::endl;
    std::cout << "The following number of vaccines are left: " << std::ednl;
}