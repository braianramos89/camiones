
#ifndef TEMPLATECPP_COMBUSTIBLE_H
#define TEMPLATECPP_COMBUSTIBLE_H
#include <iostream>

using namespace std;

class Combustible {

private:
    string tipo;
    float precio;
    float cantidad;

public:
    Combustible(string tipo, float precio);
    ~Combustible();
    void setCantidad(float cantidad);
    float getCantidad();
    float getPrecio();
    string getTipo();
};

inline void Combustible::setCantidad(float cantidad) {
    this->cantidad = cantidad;
}
inline float Combustible::getCantidad(){
    return this->cantidad;
}

inline float Combustible::getPrecio() {
    return this->precio;
}
inline string Combustible::getTipo() {
    return this->tipo;
}



#endif //TEMPLATECPP_COMBUSTIBLE_H
