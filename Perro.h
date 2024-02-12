// perro.h

#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h" // Incluir la nueva clase Raza

class Perro {
private:
    int edad;
    std::string nombre;
    Raza* pRaza; // Nuevo atributo de tipo Raza
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;

public:
    Perro();
    Perro(std::string nombre, int edad, Raza* pRaza, std::string color, std::string tamanio);
    ~Perro();
    void ladrar();
    Propietario* getPropietario();
    void agregarPropietario(std::string nombre, std::string docIdentidad, int edad);
    void setPropietario(Propietario* pPropietario);
    void asociarVeterinario(std::string nombreVeterinario, int aniosExperiencia);
    void asociarRaza(Raza* pRaza); // Nuevo método para asociar una raza al perro
    int getEdad();
    void setEdad(int edad);
    std::string getRazaNombre(); // Nuevo método para obtener el nombre de la raza
    std::string getRazaPais(); // Nuevo método para obtener el país de origen de la raza
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};

#endif // PERRO_H

