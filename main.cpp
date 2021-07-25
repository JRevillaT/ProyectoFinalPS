#include <iostream>
#include "Avion.h"
#include "Fecha.h"
#include "Hora.h"
#include "Boleta.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Avion a;
    a.aerolinea="Lan";
    a.verNombre();
    a.agregarPasajero(12);
    cout<<a.verCantidadDePasajeros()<<endl;
    Boleta b("Jimy", "Revilla", 10, "LAN", new Fecha(24,7,2021), new Hora(15,30), new Hora(18,15), 100);
    return 0;
}
