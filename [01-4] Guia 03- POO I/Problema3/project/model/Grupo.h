#ifndef GRUPOCLASS_H
#define GRUPOCLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Grupo
{
private:
float *Alumnos;
int cantidadAlumnos;
public:
Grupo();
Grupo(float[], int);
~Grupo();
float getCalificacionMayor();
float getCalificacionMenor();
float getCalificacionMedia();
};

#endif