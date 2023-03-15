#pragma once
#include "Bloque.h"
class BloqueConvencional :
    public Bloque
{
public:
    void rotar(float _grados) {
        cout << "Se ha rotado el Bloque convencional" << endl;
    }
};

