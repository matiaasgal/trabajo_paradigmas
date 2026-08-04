#ifndef SEGMENTOCOSTA_H_INCLUDED
#define SEGMENTOCOSTA_H_INCLUDED

#include <iostream>
#include "Punto.h"

class SegmentoCosta {
    private:
        Punto inicio;
        Punto fin;

    public:
        // constructores
        SegmentoCosta();
        SegmentoCosta(Punto inicio, Punto fin);
        virtual ~SegmentoCosta(); // destructor

        // Get
        Punto getInicio();
        Punto getFin();

        // Set
        void setInicio(Punto inicio);
        void setFin(Punto fin);

        void operator=(SegmentoCosta s);
};

#endif // SEGMENTOCOSTA_H_INCLUDED
