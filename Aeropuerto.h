//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_AEROPUERTO_H
#define PROYECTOFINAL_PS_AEROPUERTO_H

#include "Avion.h"
#include <cstring>
class Aeropuerto {
public:
    Avion avion[10];
    string nombre;
    void verTodos();
};


#endif //PROYECTOFINAL_PS_AEROPUERTO_H
