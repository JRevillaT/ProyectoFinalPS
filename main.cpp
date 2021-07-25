#include "Avion.h"
#include "Aeropuerto.h"
#include <iostream>
using namespace std;

int main() {
    Avion a("LAN", 100, new Fecha(23,12,2021), new Hora(12,30), new Hora(2,15));
    Aeropuerto afr("Alfredo Rodriguez");
    afr.addAvion(a);
    afr.verNombre();
    return 0;
}
