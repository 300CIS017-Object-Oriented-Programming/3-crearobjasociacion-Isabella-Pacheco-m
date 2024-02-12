// perro.cpp

#include "Perro.h"
#include <iostream>

Perro::Perro() {
    // Constructor por defecto
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
    this->pPropietario = nullptr;
    this->pVeterinario = nullptr; // Inicializar el puntero a nullptr
}

Perro::Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio)
    : nombre(nombre), edad(edad), raza(raza), color(color), tamanio(tamanio), pPropietario(nullptr), pVeterinario(nullptr) {
    // Constructor con parámetros usando lista de inicialización
}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad, int edad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad, edad);
}

void Perro::setPropietario(Propietario* pPropietario) {
    this->pPropietario = pPropietario;
}

Propietario* Perro::getPropietario() {
    return this->pPropietario;
}

void Perro::asociarVeterinario(std::string nombreVeterinario, int aniosExperiencia) {
    // Asocia a la variable de instancia pVeterinario un nuevo Veterinario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pVeterinario = new Veterinario(nombreVeterinario, aniosExperiencia);
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
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

