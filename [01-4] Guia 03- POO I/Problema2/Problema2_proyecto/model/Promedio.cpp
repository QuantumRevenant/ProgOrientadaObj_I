#include <iostream>
#include <string>
#include "Promedio.h"

using namespace std;

Promedio::Promedio()
{
}

Promedio::Promedio(float valores[])
{
    for (int i = 0; i < 7; i++)
        calificaciones[i]=valores[i];
    
}

Promedio::~Promedio()
{
}

float Promedio::getPromedio()
{
    float salida=0;
    int cantidad=0;

    for(int i=0;i<7;i++)
    {
        salida+=calificaciones[i];
        cantidad++;
    }

    if(cantidad==0)
        salida=1;
    else
        salida=salida/cantidad;
    
    return salida;
}