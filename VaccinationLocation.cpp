//
// Created by botko on 3/30/2021.
//

#include "VaccinationLocation.h"

VaccinationLocation::VaccinationLocation(int id, const std::string &street, const std::string &city) : Location(id,
                                                                                                                street,
                                                                                                                city) {}

int VaccinationLocation::getTotalTests() {
    return 0;
}

int VaccinationLocation::getTotalPositives() {
    return 0;
}

void VaccinationLocation::addVaccination(std::shared_ptr<Vaccination> vaccination) {
    vaccinations.push_back(vaccination);
}

void VaccinationLocation::print() const {
    Location::print();
    std::cout << "Vaccination location " << getStreet() << ", " << getCity() << std::endl;
    for (auto const &v: vaccinations) {
        v->print();
    }
}
