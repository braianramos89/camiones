//
// Created by braian on 13/12/2022.
//

#include "Empresa.h"

Empresa::Empresa(string nombre,list<Camion> listaCamiones,list<Combustible> listaCombustibles,list<Estacion> listaEstaciones) : listaCamiones(listaCamiones),listaCombustibles(listaCombustibles),listaEstaciones(listaEstaciones) {
    this->nombre = nombre;
}

Empresa::~Empresa() {

}

void Empresa::cargar() {

    for(auto camion : listaCamiones){
        float cant = 0;
        for(auto combustible : listaCombustibles){
            cout<<"Ingrese la cantidad de Combustible "<< combustible.getTipo() << " camion "<< camion.getnroCamion()<< endl;
            cin>>cant;
            combustible.setCantidad(cant);
        }
    }

}

void Empresa::totalVentaCombustible() {

    for()

}

