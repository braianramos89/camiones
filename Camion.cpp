//
// Created by braian on 13/12/2022.
//

#include "Camion.h"

Camion::Camion(int nroCamion, list<Combustible> listaCombustibles) : listaCombustibles(listaCombustibles) {
    this->nroCamion = nroCamion;
}

Camion::~Camion() {

}
