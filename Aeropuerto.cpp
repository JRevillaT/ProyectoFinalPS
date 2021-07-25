//
// Created by USUARIO on 24/7/2021.
//

#include "Aeropuerto.h"

void Aeropuerto::verTodos() {
    for(int i=0;i<10;i++){
        cout<<"Avion "<<i<<endl;
        cout<<"Aerolinea: "<<avion[i].aerolinea<<endl;
        cout<<"Fecha de partida: "<<avion[i].fVuelo.dia<<"/"<<avion[i].fVuelo.mes<<"/"<<avion[i].fVuelo.anio<<endl;
        cout<<"Hora de Partida: "<<avion[i].hPartida.hora<<":"<<avion[i].hPartida.minuto<<endl;
        cout<<"Hora de Llegada: "<<avion[i].hLlegada.hora<<":"<<avion[i].hLlegada.minuto<<endl;
        cout<<"Precio por boleto: "<<avion[i].preBol<<endl;
        cout<<"Cantidad de pasajeros: "<<avion[i].cantPas<<endl;
        cout<<"======================================="<<endl;
    }
}
