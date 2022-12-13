
#ifndef TEMPLATECPP_CAMION_H
#define TEMPLATECPP_CAMION_H
#include <iostream>
#include "Combustible.h"
#include <list>

using namespace std;
class Camion {

private:
    int nroCamion;
    list<Combustible> listaCombustibles;
public:

    Camion(int nroCamion, list<Combustible> listaCombustibles);
    ~Camion();
    int getnroCamion();
    list<Combustible> *getlistaCombustibles();



};
inline int Camion::getnroCamion() {
    return this->nroCamion;
}

inline list<Combustible> * Camion::getlistaCombustibles() {
    return &this->listaCombustibles;
}


#endif //TEMPLATECPP_CAMION_H
