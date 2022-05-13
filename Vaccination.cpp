//
// Created by botko on 3/30/2021.
//

#include "Vaccination.h"

Vaccination::Vaccination(const std::string &vaccine, int nrPeople) : vaccine(vaccine), nrPeople(nrPeople) {}

void Vaccination::print() const {
    std::cout << "  " << "- Vaccinated: " << nrPeople << " persons with " << vaccine << std::endl;
}
