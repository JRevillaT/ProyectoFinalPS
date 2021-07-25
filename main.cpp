#include "Avion.h"
#include <iostream>
using namespace std;

int main() {
    Avion arr [10];
    arr[0] = new Avion("LAN", 100, new Fecha(23,12,2021), new Hora(12,30), new Hora(2,15));
    arr[0].verNombre();
    return 0;
}
