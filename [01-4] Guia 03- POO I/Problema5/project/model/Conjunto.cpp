#include <iostream>
#include <string>
#include "Conjunto.h"

using namespace std;

Conjunto::Conjunto()
{
}

Conjunto::Conjunto(double *valores, int cantidad)
{
    numeros=new double[cantidad];
    this->cantidad=cantidad;
    for (int i = 0; i < cantidad; i++)
        *(numeros+i)=*(valores+i);    
}

Conjunto::~Conjunto()
{
    delete[] numeros;
}

double Conjunto::getMayor()
{
    double salida=*(numeros+0);

    for(int i=0;i<cantidad;i++)
    {
        if(salida<*(numeros+i))
            salida=*(numeros+i);
    }

    return salida;
}

double Conjunto::getMenor()
{
    double salida=*(numeros+0);

    for(int i=0;i<cantidad;i++)
    {
        if(salida>*(numeros+i))
            salida=*(numeros+i);
    }

    return salida;
}