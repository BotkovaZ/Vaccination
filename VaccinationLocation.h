//
// Created by botko on 3/30/2021.
//

#ifndef VACCINATION_VACCINATIONLOCATION_H
#define VACCINATION_VACCINATIONLOCATION_H

#include <memory>
#include <vector>
#include "Location.h"
#include "Vaccination.h"

class VaccinationLocation : public Location {
    std::vector<std::shared_ptr<Vaccination>> vaccinations;

public:
    VaccinationLocation(int id, const std::string &street, const std::string &city);

    int getTotalTests() override;

    int getTotalPositives() override;

    void addVaccination(std::shared_ptr<Vaccination> vaccination);

    void print() const;
};


#endif //VACCINATION_VACCINATIONLOCATION_H
