//
// Created by botko on 3/30/2021.
//

#ifndef VACCINATION_ADMIN_H
#define VACCINATION_ADMIN_H

#include <memory>
#include <vector>
#include "Location.h"

class Admin {
    std::vector<std::shared_ptr<Location>> locations;
    int nextLocationId = 0;

public:
    void addLocation(std::shared_ptr<Location> location);

    void print() const;

    int getNextLocationId() {
        nextLocationId++;
        return nextLocationId;
    }
};


#endif //VACCINATION_ADMIN_H
