
#include <iostream>
#include "Empresa.h"
#include "Camion.h"
#include "Combustible.h"
#include "Estacion.h"


int main() {

    Estacion estacion("Estacion 1");
    Estacion estacion1("Estacion 2");

    list<Estacion> listaEstaciones;
    listaEstaciones.push_back(estacion);
    listaEstaciones.push_back(estacion1);

    Combustible combustible("Diesel", 150);
    Combustible combustible2("NaftaSuper", 100);
    Combustible combustible3("NaftaPremium", 200);

    list<Combustible> listaCombustibles;
    listaCombustibles.push_back(combustible);
    listaCombustibles.push_back(combustible2);
    listaCombustibles.push_back(combustible3);

    Camion camion(1, listaCombustibles);
    Camion camion1(2, listaCombustibles);

    list<Camion> listaCamiones;
    listaCamiones.push_back(camion);
    listaCamiones.push_back(camion1);
    Empresa empresa("Empresa", listaCamiones, listaCombustibles, listaEstaciones);

    empresa.cargar();


    return 0;
}
