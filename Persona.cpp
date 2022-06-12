//
// Created by HP on 09/06/2022.
//

#include "Persona.h"

Persona::~Persona() {};

Persona::Persona(string nombre, int edad) {
    this->edad = edad;
    this->nombre = nombre;
    this->tel.laboral = "";
    this->tel.personal = "";
}

Persona::Persona(string nombre, int edad, telefono tel) {
    this->edad = edad;
    this->nombre = nombre;
    this->tel.laboral = tel.laboral;
    this->tel.personal = tel.personal;
}