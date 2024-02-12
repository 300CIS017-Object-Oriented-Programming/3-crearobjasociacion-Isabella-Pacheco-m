//
// Created by lufe0 y Gonzo Feb2024.
// propietario.cpp

#include "Propietario.h"
#include <iostream>

Propietario::Propietario() {
    // Constructor por defecto
}

Propietario::Propietario(std::string nombre, std::string docIdentidad, int 
edad)
    : nombre(nombre), docIdentidad(docIdentidad), edad(edad) {
    // Constructor con parámetros usando lista de inicialización
}

void Propietario::mostrarInfo() {
    // Método para mostrar información
    std::cout << "Nombre: " << nombre << ", Documento de Identidad: " << 
docIdentidad << ", Edad: " << edad << std::endl;
}

std::string Propietario::getNombre() {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Propietario::getDocIdentidad() {
    return docIdentidad;
}

void Propietario::setDocIdentidad(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}

int Propietario::getEdad() {
    return edad;
}

void Propietario::setEdad(int edad) {
    this->edad = edad;
}

