#include <iostream>
#include "LectorLagos.h"
#include "LectorComunas.h"
#include "SegmentoCosta.h"
#include "Lago.h"
#include "Comuna.h"

using namespace std;

int main() {
    string rutaLagos = "masas_lacustres.txt"; 
    string rutaComunas = "comunas.txt";

    vector<Lago> lagos = LectorLagos::extraerDatos(rutaLagos);
    vector<Comuna> comunas = LectorComunas::extraerDatos(rutaComunas);

    return 0;
}