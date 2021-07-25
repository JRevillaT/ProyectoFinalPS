//
// Created by USUARIO on 24/7/2021.
//

#include "Avion.h"

void Avion::verNombre() {
    cout<<aerolinea<<endl;
}

void Avion::agregarPasajero(int n) {
    if(asientos[n-1]==true){
        cout<<"Este asiento ya esta ocupado, Seleccione otro"<<endl;
    }else{
        cout<<"Asiento registrado exitosamente"<<endl;
        asientos[n-1]=true;
        cantPas++;
    }
}

void Avion::retirarPasajero(int n) {
    if(asientos[n-1]==false){
        cout<<"Este asiento actualmente se encuentra vacio, operacion no valida"<<endl;
    }else{
        cout<<"Se retiro el registro del asiento exitosamente"<<endl;
        asientos[n-1]=false;
        cantPas--;
    }
}

int Avion::verCantidadDePasajeros() {
    return cantPas;
}
