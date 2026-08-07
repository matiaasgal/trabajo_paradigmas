#ifndef LAGO_H
#define LAGO_H

#include "./SegmentoCosta.h"
#include <string>
#include <vector>

using namespace std;

class Lago {
    private:
        string nombre;
        string tipo;
        
    public:
        vector<SegmentoCosta> perimetros;
        Lago();
        Lago(string nom, string tipo);
        ~Lago();

        // getters
        string getNombre() const;
        string getTipo() const;

        // setters
        void setNombre(string nom);
        void setTipo(string tipo);
        void setPerimetro(vector<SegmentoCosta> seg);

        // metodos extra
        void agregarSegmento(const SegmentoCosta& segmento);

        // sobrecarga de operadores
        bool operator==(const Lago& otro) const;
};

#endif