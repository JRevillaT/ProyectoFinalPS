//
// Created by USUARIO on 24/7/2021.
//

#include "Boleta.h"


Boleta::Boleta(Usuario u, Avion a, int as) {
    nombre=u.nombre;
    apellido=u.apellido;
    asiento=as;
    aerolinea=a.aerolinea;
    fechaV=a.fVuelo;
    horaPartida=a.hPartida;
    horaLlegada=a.hLlegada;
    costo=a.preBol;
    generarBoleta();
}

void Boleta::generarBoleta() {
    cout<<"Nombre del Usuario: "<<nombre<<" "<<apellido<<endl;
    cout<<"Numero de asiento : "<<asiento<<endl;
    cout<<"Aerolinea: "<<aerolinea<<endl;
    cout<<"Fecha de Vuelo: "<<fechaV.dia<<"/"<<fechaV.mes<<"/"<<fechaV.anio<<endl;
    cout<<"Hora de Partida: "<<horaPartida.hora<<":"<<horaPartida.minuto<<endl;
    cout<<"Hora de Llegada: "<<horaLlegada.hora<<":"<<horaLlegada.minuto<<endl;
    cout<<"Costo de Vuelo: "<<costo<<endl;
}

