#ifndef COMPRACLASS_H
#define COMPRACLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Compra
{
private:
    string codigo="null";
    int cantidad;
public:
    Compra();
    Compra(string, int);
    ~Compra();
    float getPrecioPorLitro();
    float getDescuento();
    float getPrecioBase();
    float getPrecioDescontar();
    float getPrecioFinal();
};


#endif