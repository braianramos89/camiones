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

    for(auto camion = listaCamiones.begin(); camion!=listaCamiones.end(); camion++){
        float cant = 0;
        for(auto combustible = camion->getlistaCombustibles()->begin(); combustible!=camion->getlistaCombustibles()->end(); combustible++){
            cout<<"Ingrese la cantidad de Combustible "<< combustible->getTipo() << " camion "<< camion->getnroCamion()<< endl;
            cin>>cant;
            combustible->setCantidad(cant);
        }
    }

}

void Empresa::totalVentaCombustible() {
    float total = 0;

        for(auto itCamion =  listaCamiones.begin(); itCamion!=listaCamiones.end(); itCamion++){
            for(auto itCombustible = itCamion->getlistaCombustibles()->begin(); itCombustible!=itCamion->getlistaCombustibles()->end(); itCombustible++){
                total += itCombustible->getCantidad() * itCombustible->getPrecio();
            }
        }

cout<<"El total de venta de combustible es: "<< total<<" $" << endl;
}

void Empresa::cantidadPorCombustible(){
    float total = 0;
    for(auto itCombustible = listaCombustibles.begin(); itCombustible!=listaCombustibles.end(); itCombustible++){
        for(auto itCamion = listaCamiones.begin(); itCamion!=listaCamiones.end(); itCamion++){
            for(auto itCombustibleCamion = itCamion->getlistaCombustibles()->begin(); itCombustibleCamion!=itCamion->getlistaCombustibles()->end(); itCombustibleCamion++){
                if(itCombustible->getTipo() == itCombustibleCamion->getTipo()){
                    total += itCombustibleCamion->getCantidad();
                }
            }
        }
        cout<<"La cantidad de combustible "<< itCombustible->getTipo() << " es: "<< total << endl;
        total = 0;
    }
}


void Empresa::camionMasCombustible() {

    float totalNaftaSuper = 0;
    float totalNaftaPremium = 0;
    float totalDiesel = 0;
    float total = 0;
    float totalmax = 0;
    int camionmax = 0;

    for (auto itCamion = listaCamiones.begin(); itCamion != listaCamiones.end(); itCamion++) {
        float totalNaftaSuper = 0;
        float totalNaftaPremium = 0;
        float totalDiesel = 0;
        float total = 0;


        for (auto itCombustible = itCamion->getlistaCombustibles()->begin();
        itCombustible != itCamion->getlistaCombustibles()->end(); itCombustible++) {
            if (itCombustible->getTipo() == "NaftaSuper") {
                totalNaftaSuper += itCombustible->getCantidad();
            }
            if (itCombustible->getTipo() == "NaftaPremium") {
                totalNaftaPremium += itCombustible->getCantidad();
            }
            if (itCombustible->getTipo() == "Diesel") {
                totalDiesel += itCombustible->getCantidad();
            }

        }
            total = totalNaftaSuper + totalNaftaPremium + totalDiesel;

            if (total > totalmax) {
                totalmax = total;
                camionmax = itCamion->getnroCamion();
            }


        }

        cout << "El camion " << camionmax << " transporto un total de: " << totalmax <<" litros"<< endl;
}


void Empresa::cantCamionesSinDiesel() {
    int cant = 0;
    for(auto itCamion = listaCamiones.begin(); itCamion!=listaCamiones.end(); itCamion++){
        for(auto itCombustible = itCamion->getlistaCombustibles()->begin(); itCombustible!=itCamion->getlistaCombustibles()->end(); itCombustible++){
            if(itCombustible->getTipo() == "Diesel"){
                if(itCombustible->getCantidad() == 0){
                    cant++;
                }
            }
        }
    }
    cout<<"La cantidad de camiones que no transportan Diesel es: "<<  cant << endl;
}
