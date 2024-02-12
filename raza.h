// raza.h

#ifndef RAZA_H
#define RAZA_H

#include <string>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;

public:
    Raza(); // Constructor por defecto
    Raza(std::string nombre, std::string paisOrigen); // Constructor con 
parámetros
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getPaisOrigen();
    void setPaisOrigen(std::string paisOrigen);
};

#endif // RAZA_H

