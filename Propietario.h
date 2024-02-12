//
//
// Created by lufe y Gonzo Feb2024.
//

// propietario.h

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;

public:
    Propietario(); // Constructor por defecto
    Propietario(std::string nombre, std::string docIdentidad, int edad); 
// Constructor con parámetros
    void mostrarInfo(); // Método para mostrar información
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getDocIdentidad();
    void setDocIdentidad(std::string docIdentidad);
    int getEdad();
    void setEdad(int edad);
};

#endif //PROPIETARIO_H

