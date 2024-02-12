// perro.h

#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h" // Incluir la nueva clase Veterinario

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario; // Nuevo atributo de tipo Veterinario

public:
    Perro();
    Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio);
    ~Perro();
    void ladrar();
    Propietario* getPropietario();
    void agregarPropietario(std::string nombre, std::string docIdentidad, int edad);
    void setPropietario(Propietario* pPropietario);
    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);

    // Nuevo método para asociar un veterinario al perro
    void asociarVeterinario(std::string nombreVeterinario, int aniosExperiencia);
};

#endif // PERRO_H

