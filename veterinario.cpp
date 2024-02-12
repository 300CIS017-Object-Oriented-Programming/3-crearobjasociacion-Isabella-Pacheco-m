// veterinario.cpp

#include "Veterinario.h"

Veterinario::Veterinario() {
    // Constructor por defecto
}

Veterinario::Veterinario(std::string nombre, int aniosExperiencia)
    : nombre(nombre), aniosExperiencia(aniosExperiencia) {
}

std::string Veterinario::getNombre() {
    return nombre;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}
