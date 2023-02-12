#ifndef DOCENTECLASS_H
#define DOCENTECLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Docente
{
private:
    int codigo;
    string nombre;
    string dni;
    int horasTrabajadas;
    float tarifaHora;

public:
    Docente(int, string, string, int, float);
    void setHorasTrabajadas(int);
    int getCodUsuario();
    string getNombre();
    string getDni();
    float getSueldo();
};

#endif