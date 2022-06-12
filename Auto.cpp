//
// Created by HP on 09/06/2022.
//

#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto() {};

Auto::~Auto() {};

Auto::Auto(string nombre, string marca, int modelo) {
    this->marca = marca;
    this->modelo = modelo;
    this->nombrePropietario = nombre;
}

void Auto::MostrarValores() {
    cout<<"Nombre del propietario: "<< this->nombrePropietario <<endl;
    cout<<"Marca: "<< this->marca <<endl;
    cout<<"Modelo: "<< this->modelo <<endl;
    return;
}



