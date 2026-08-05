#ifndef SEGMENTOCOSTA_H_INCLUDED
#define SEGMENTOCOSTA_H_INCLUDED

#include <iostream>
#include "../Punto.h"

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
        Punto getInicio() const;
        Punto getFin() const;

        // Set
        void setInicio(Punto inicio);
        void setFin(Punto fin);

        SegmentoCosta& operator=(const SegmentoCosta& s);
};

#endif // SEGMENTOCOSTA_H_INCLUDED
