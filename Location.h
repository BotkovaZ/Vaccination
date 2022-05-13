//
// Created by botko on 3/30/2021.
//

#ifndef VACCINATION_LOCATION_H
#define VACCINATION_LOCATION_H

#include <iostream>

class Location {
    int id;
    std::string street;
    std::string city;

public:
    Location(int id, const std::string &street, std::string const &city);
};


#endif //VACCINATION_LOCATION_H
