#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

#include <iostream>

class Punto {
    private:
        // coordenadas
        double E;
        double N;

    public:
        // constructores
        Punto();
        Punto(double E, double N);
        virtual ~Punto(); //destructor

        // Get
        double getE() const;
        double getN() const;

        // Set
        void setE(double E);
        void setN(double N);

        // sobrecarga de operador q pedia :v
        bool operator==(const Punto& p) const;
};

#endif // PUNTO_H_INCLUDED
