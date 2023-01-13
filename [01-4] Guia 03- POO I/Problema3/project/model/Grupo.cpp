#include <iostream>
#include <string>
#include "Grupo.h"

using namespace std;

Grupo::Grupo()
{
}

Grupo::Grupo(float *notas, int cantidad)
{
    Alumnos = new float[cantidad];
    for (int i = 0; i < cantidad; i++)
        *(Alumnos + i) = *(notas + i);
    cantidadAlumnos=cantidad;
}

Grupo::~Grupo()
{
    delete Alumnos;
}

float Grupo::getCalificacionMayor()
{
    float salida=*(Alumnos+0);
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        if(salida<*(Alumnos+i))
            salida=*(Alumnos+i);
    }
    return salida;
}

float Grupo::getCalificacionMedia()
{
    float salida=0;
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        salida+=*(Alumnos+i);
    }
    if(cantidadAlumnos!=0)
        salida/=cantidadAlumnos;
    else
        salida=1;
    return salida;
}

float Grupo::getCalificacionMenor()
{
    float salida=*(Alumnos+0);
    for (int i = 0; i < cantidadAlumnos; i++)
    {
        if(salida>*(Alumnos+i))
            salida=*(Alumnos+i);
    }
    return salida;
}