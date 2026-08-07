#include "Lago.h"

using namespace std;

// constructores y destructor
Lago::Lago() : nombre(""), tipo(""){}

Lago::Lago(string nom, string tipo) 
    : nombre(nom), tipo(tipo){}

Lago::~Lago() {
    perimetros.clear();
}

// getters
string Lago::getTipo() const { return tipo; }
string Lago::getNombre() const { return nombre; }

// setters
void Lago::setTipo(string tipo) { this->tipo = tipo; }
void Lago::setNombre(string nom) { this->nombre = nom; }
void Lago::setPerimetro(vector<SegmentoCosta> seg) { this->perimetros = seg; }

// metodos extra
void Lago::agregarSegmento(const SegmentoCosta& segmento) {
    perimetros.push_back(segmento);
}

bool Lago::operator==(const Lago& otro) const {
    return this->tipo == otro.tipo;
}
