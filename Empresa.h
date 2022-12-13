#ifndef TEMPLATECPP_EMPRESA_H
#define TEMPLATECPP_EMPRESA_H
#include <iostream>
#include <list>
#include "Camion.h"
#include "Estacion.h"

using namespace std;
class Empresa {

private:
    string nombre;
    list<Camion> listaCamiones;
    list<Combustible> listaCombustibles;
    list<Estacion> listaEstaciones;
public:
    Empresa(string nombre, list<Camion> listaCamiones, list<Combustible> listaCombustibles, list<Estacion> listaEstaciones);
    ~Empresa();
    void cargar();
    void totalVentaCombustible();
    void cantidadPorCombustible();
    void camionMasCombustible();
    void cantCamionesSinDiesel();

};



#endif //TEMPLATECPP_EMPRESA_H
