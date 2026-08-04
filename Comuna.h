#ifndef COMUNA_H_INCLUDED
#define COMUNA_H_INCLUDED

#include <iostream>
#include <string>
#include "Punto.h"

using namespace std;

class Comuna {
    private:
        int codComuna;
        string nombre;
        string provincia;
        Punto* limitePoligono; // apunta al inicio del arreglo
        int cantidadPuntos;    // contador de cu ntos puntos hemos guardado
        int capacidadMaxima;   // contador de cu nto espacio total hemos pedido a la memoria

    public:
        Comuna();
        Comuna(int cod, string nom, string prov);
        virtual ~Comuna(); // destructor

        // Get
        int getCodComuna();
        string getNombre();
        string getProvincia();
        Punto* getLimitePoligono(); // retorna puntero
        int getCantidadPuntos();    // coso para saber el tama¤o actual

        // Set
        void setCodComuna(int cod);
        void setNombre(string nom);
        void setProvincia(string prov);

        void agregarPunto(Punto p);
        bool operator==(Comuna c);
};

#endif // COMUNA_H_INCLUDED
