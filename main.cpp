// main.cpp

#include <iostream>
#include "Perro.h"
#include "Raza.h"

int main() {
    // Crear objetos de la clase Raza
    Raza* mastinNapolitano = new Raza("Mastin Napolitano", "Italia");
    Raza* maltes = new Raza("Maltes", "Italia");

    // Crear objeto de la clase Perro con la asociación a la Raza
    Perro* firulais = new Perro("Firulais", 5, mastinNapolitano, "Negro", "Grande");

    // Imprimir información del perro y su raza
    std::cout << "Información de Firulais:" << std::endl;
    std::cout << "Nombre: " << firulais->getNombre() << std::endl;
    std::cout << "Edad: " << firulais->getEdad() << std::endl;
    std::cout << "Color: " << firulais->getColor() << std::endl;
    std::cout << "Tamaño: " << firulais->getTamanio() << std::endl;
    std::cout << "Raza: " << firulais->getRazaNombre() << std::endl;
    std::cout << "País de Origen de la Raza: " << firulais->getRazaPais() << std::endl;

    // Liberar la memoria asignada dinámicamente
    delete mastinNapolitano;
    delete maltes;
    delete firulais;

    return 0;
}

