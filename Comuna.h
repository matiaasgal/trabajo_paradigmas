#ifndef COMUNA_H_INCLUDED
#define COMUNA_H_INCLUDED

#include <iostream>
#include <string>
#include "../Punto.h"

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
        Comuna(const Comuna& c);// Constructor de copia
        Comuna& operator=(const Comuna& c); // Sobrecarga del operador de asignaci¢n

        // Get
        int getCodComuna() const;
        string getNombre() const;
        string getProvincia() const;
        Punto* getLimitePoligono() const; // retorna puntero
        int getCantidadPuntos() const;    // coso para saber el tama¤o actual

        // Set
        void setCodComuna(int cod);
        void setNombre(string nom);
        void setProvincia(string prov);

        void agregarPunto(const Punto& p);
        bool operator==(const Comuna& c) const;
};

#endif // COMUNA_H_INCLUDED
