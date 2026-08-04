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

Punto SegmentoCosta::getInicio() { return inicio; }
Punto SegmentoCosta::getFin() { return fin; }

void SegmentoCosta::setInicio(Punto inicio) { this->inicio = inicio; }
void SegmentoCosta::setFin(Punto fin) { this->fin = fin; }

void SegmentoCosta::operator=(SegmentoCosta s) {

    this->inicio = s.getInicio();
    this->fin = s.getFin();
}
