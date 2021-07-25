//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_AVION_H
#define PROYECTOFINAL_PS_AVION_H
#include <iostream>
#include <cstring>
#include "Fecha.h"
#include "Hora.h"
using namespace std;

class Avion {
public:
    int cantPas=0; //numero de pasajeros actuales
    bool  asientos [100]; // # de asientos en total (80 sc y 20 pc)
    string aerolinea; //nombre de la aerolinea a la que pertenece
    int preBol; // precio de boleto
    void verNombre();
    void agregarPasajero(int n);
    void retirarPasajero(int n);
    int verCantidadDePasajeros();
    Fecha fVuelo;
    Hora hPartida;
    Hora hLlegada;
};


#endif //PROYECTOFINAL_PS_AVION_H
