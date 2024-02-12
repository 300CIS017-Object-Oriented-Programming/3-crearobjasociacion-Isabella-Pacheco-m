// main.cpp

#include <iostream>
#include "Perro.h"

int main() {
    // Crear objeto de la clase Perro con el constructor con parámetros
    Perro* miPerro = new Perro("Buddy", 3, "Labrador", "Dorado", 
"Mediano");

    // Llamar al método ladrar
    miPerro->ladrar();

    // Crear objeto de la clase Propietario con el constructor con un solo 
parámetro
    Propietario* nuevoPropietario = new Propietario("TuNombre", 
"123456789", 30);

    // Usar los sets para definir el resto de atributos
    nuevoPropietario->setNombre("TuNombre");
    nuevoPropietario->setDocIdentidad("123456789");
    nuevoPropietario->setEdad(30);

    // Imprimir información del propietario usando el método mostrarInfo
    nuevoPropietario->mostrarInfo();

    // Relacionar el Perro con el nuevo Propietario usando 
agregarPropietario
    miPerro->agregarPropietario("TuNombre", "123456789", 30);

    // Consultar el documento de identidad del propietario del Perro
    std::cout << "Documento de identidad del propietario del perro: " << 
miPerro->getPropietario()->getDocIdentidad() << std::endl;

    // Liberar la memoria asignada dinámicamente
    delete miPerro;
    delete nuevoPropietario;

    return 0;
}

