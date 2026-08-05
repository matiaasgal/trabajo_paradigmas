#include <iostream>
#include "../Punto.h"

using namespace std;

// constructor default(cuando se crea un punto sin darle coordenadas)
Punto::Punto() {
    E = 0.0;
    N = 0.0;
}

// constructor parametrizado (cuando se crea un punto dandole los datos)
Punto::Punto(double E, double N) {
    this->E = E;
    this->N = N;
}

// destructor
Punto::~Punto() { // segun el gemini esta wea puede quedar vacia nomas pq no hay punteros

}

// metodos Get, que lee los datos protegidos
double Punto::getE() const {
    return E;
}

double Punto::getN() const {
    return N;
}

// metodos Set, que modifica los datos protegidos
void Punto::setE(double E) {
    this->E = E;
}

void Punto::setN(double N) {
    this->N = N;
}

bool Punto::operator==(const Punto& p) const {
    if (this->E == p.getE() && this->N == p.getN()) {
        return true;
    } else {
        return false;
    }
}
