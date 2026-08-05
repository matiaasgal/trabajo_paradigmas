#include <iostream>
#include "SegmentoCosta.h"

// constructor default
SegmentoCosta::SegmentoCosta() {
    // iniciamos con dos puntos en la coordenada 0,0
    Punto pVacio(0.0, 0.0);
    inicio = pVacio;
    fin = pVacio;
}

// constructor parametrizado
SegmentoCosta::SegmentoCosta(Punto inicio, Punto fin) {
    this->inicio = inicio;
    this->fin = fin;
}

SegmentoCosta::~SegmentoCosta() {

}

Punto SegmentoCosta::getInicio() const { return inicio; }
Punto SegmentoCosta::getFin() const { return fin; }

void SegmentoCosta::setInicio(Punto inicio) { this->inicio = inicio; }
void SegmentoCosta::setFin(Punto fin) { this->fin = fin; }

SegmentoCosta& SegmentoCosta::operator=(const SegmentoCosta& s) {
    // Evitar auto-asignaci¢n
    if (this == &s) {
        return *this;
    }

    this->inicio = s.getInicio();
    this->fin = s.getFin();

    return *this;
}
