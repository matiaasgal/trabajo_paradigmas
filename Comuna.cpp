#include <iostream>
#include <string>
#include "Comuna.h"

// constructor default
Comuna::Comuna() {
    codComuna = 0;
    nombre = "";
    provincia = "";
    cantidadPuntos = 0;
    capacidadMaxima = 10; // espacio base para 10 puntos
    limitePoligono = new Punto[capacidadMaxima];
}

// constructor parametrizado
Comuna::Comuna(int cod, string nom, string prov) {
    this->codComuna = cod;
    this->nombre = nom;
    this->provincia = prov;
    this->cantidadPuntos = 0;
    this->capacidadMaxima = 10;
    this->limitePoligono = new Punto[capacidadMaxima];
}

// destructor
Comuna::~Comuna() {
    delete[] limitePoligono;
}

// metodos Get
int Comuna::getCodComuna() { return codComuna; }
string Comuna::getNombre() { return nombre; }
string Comuna::getProvincia() { return provincia; }
Punto* Comuna::getLimitePoligono() { return limitePoligono; }
int Comuna::getCantidadPuntos() { return cantidadPuntos; }

// m¨etodos Set
void Comuna::setCodComuna(int cod) { this->codComuna = cod; }
void Comuna::setNombre(string nom) { this->nombre = nom; }
void Comuna::setProvincia(string prov) { this->provincia = prov; }

void Comuna::agregarPunto(Punto p) { // esta cosa es para que el arreglo crezca hasta donde sea requerido dependiendo de la cantidad de puntos que haya
    if (cantidadPuntos == capacidadMaxima) {
        capacidadMaxima = capacidadMaxima * 2;
        Punto* arregloTemporal = new Punto[capacidadMaxima];

        for (int i = 0; i < cantidadPuntos; i++) { // se copian todos los puntos a un nuevo arreglo mas grande
            arregloTemporal[i] = limitePoligono[i];
        }

        delete[] limitePoligono;
        limitePoligono = arregloTemporal;
    }

    limitePoligono[cantidadPuntos] = p; // guardamos el nuevo punto en el primer espacio libre disponible
    cantidadPuntos++;
}

bool Comuna::operator==(Comuna c) {
    // si los identificadores num‚ricos son iguales, la comuna es la misma
    if (this->codComuna == c.getCodComuna()) {
        return true;
    } else {
        return false;
    }
}
