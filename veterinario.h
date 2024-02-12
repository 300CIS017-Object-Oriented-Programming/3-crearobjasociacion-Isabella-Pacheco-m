// veterinario.h

#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>

class Veterinario {
private:
    std::string nombre;
    int aniosExperiencia;

public:
    Veterinario(); // Constructor por defecto
    Veterinario(std::string nombre, int aniosExperiencia); // Constructor 
con parámetros
    std::string getNombre();
    void setNombre(std::string nombre);
    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);
};

#endif // VETERINARIO_H

