// perro.cpp

#include "Perro.h"
#include <iostream>

Perro::Perro() {
    // Constructor por defecto
    this->edad = 0;
    this->tamanio = "";
    this->color = "";
    this->pPropietario = nullptr;
    this->pVeterinario = nullptr;
    this->pRaza = nullptr;
}

Perro::Perro(std::string nombre, int edad, Raza* pRaza, std::string color, std::string tamanio)
    : nombre(nombre), edad(edad), pRaza(pRaza), color(color), tamanio(tamanio), pPropietario(nullptr), pVeterinario(nullptr) {
    // Constructor con parámetros usando lista de inicialización
}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad, int edad) {
    this->pPropietario = new Propietario(nombre, docIdentidad, edad);
}

void Perro::setPropietario(Propietario* pPropietario) {
    this->pPropietario = pPropietario;
}

void Perro::asociarVeterinario(std::string nombreVeterinario, int aniosExperiencia) {
    this->pVeterinario = new Veterinario(nombreVeterinario, aniosExperiencia);
}

void Perro::asociarRaza(Raza* pRaza) {
    this->pRaza = pRaza;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRazaNombre() {
    if (pRaza != nullptr) {
        return pRaza->getNombre();
    } else {
        return "No definida";
    }
}

std::string Perro::getRazaPais() {
    if (pRaza != nullptr) {
        return pRaza->getPaisOrigen();
    } else {
        return "No definido";
    }
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
    delete pVeterinario;
}

