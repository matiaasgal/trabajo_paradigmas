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

// constructor de Copia
Comuna::Comuna(const Comuna& c) {
    codComuna = c.codComuna;
    nombre = c.nombre;
    provincia = c.provincia;
    cantidadPuntos = c.cantidadPuntos;
    capacidadMaxima = c.capacidadMaxima;

    // pedimos un arreglo nuevo en memoria.
    limitePoligono = new Punto[capacidadMaxima];

    // copiamos los puntos uno por uno desde el objeto original al nuevo.
    for (int i = 0; i < cantidadPuntos; i++) {
        limitePoligono[i] = c.limitePoligono[i];
    }
}

// operador de asignaci¢n
Comuna& Comuna::operator=(const Comuna& c) {
    if (this == &c) { // esto de aca evita la auto-asignaci¢n (ej: comunaA = comunaA;), si la direcci¢n de memoria de este objeto es igual a la del objeto recibido, no hacemos nada.

        return *this;
    }

    codComuna = c.codComuna; // copiamos las variables est ticas
    nombre = c.nombre;
    provincia = c.provincia;
    cantidadPuntos = c.cantidadPuntos;
    capacidadMaxima = c.capacidadMaxima;

    delete[] limitePoligono;

    // pedimos la nueva memoria (Deep copy)
    limitePoligono = new Punto[capacidadMaxima];

    // copiamos los datos
    for (int i = 0; i < cantidadPuntos; i++) {
        limitePoligono[i] = c.limitePoligono[i];
    }

    // retornamos una referencia a nosotros mismos para permitir
    // asignaciones en cadena (ej: c1 = c2 = c3;)
    return *this;
}

// metodos Get
int Comuna::getCodComuna() const {
    return codComuna;
}

string Comuna::getNombre() const { return nombre; }
string Comuna::getProvincia() const { return provincia; }
Punto* Comuna::getLimitePoligono() const { return limitePoligono; }
int Comuna::getCantidadPuntos() const { return cantidadPuntos; }

// m¨etodos Set
void Comuna::setCodComuna(int cod) { this->codComuna = cod; }
void Comuna::setNombre(string nom) { this->nombre = nom; }
void Comuna::setProvincia(string prov) { this->provincia = prov; }

void Comuna::agregarPunto(const Punto& p) { // esta cosa es para que el arreglo crezca hasta donde sea requerido dependiendo de la cantidad de puntos que haya
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

bool Comuna::operator==(const Comuna& c) const {
    if (this->codComuna == c.getCodComuna()) {
        return true;
    } else {
        return false;
    }
}
