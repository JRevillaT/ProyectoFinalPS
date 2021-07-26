//
// Created by USUARIO on 24/7/2021.
//

#ifndef PROYECTOFINAL_PS_USUARIO_H
#define PROYECTOFINAL_PS_USUARIO_H

#include <iostream>
#include <string>
#include "Boleta.h"
using namespace std;


class Usuario {
public:
    Usuario();
    Usuario(string n, string a, string c);
    string nombre;
    string apellido;
    string contrasenia;
    int cantReservas=0;
    Boleta reservas [10];
    void crearReserva(int n, Avion a);
    void eliminarReserva(int p);
    void mostrarReservas();
};


#endif //PROYECTOFINAL_PS_USUARIO_H
