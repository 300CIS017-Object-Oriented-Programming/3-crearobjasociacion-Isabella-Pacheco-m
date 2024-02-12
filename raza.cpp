// raza.cpp

#include "Raza.h"

Raza::Raza() {
    // Constructor por defecto
}

Raza::Raza(std::string nombre, std::string paisOrigen)
    : nombre(nombre), paisOrigen(paisOrigen) {
    // Constructor con parámetros usando lista de inicialización
}

std::string Raza::getNombre() {
    return nombre;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setPaisOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}

