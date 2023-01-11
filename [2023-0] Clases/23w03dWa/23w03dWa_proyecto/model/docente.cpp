#include <iostream>
#include <string>
#include "docente.h"

using namespace std;

Docente::Docente(int codigo, string nombre, string dni, int horasTrabajadas, float tarifaHora)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->dni = dni;
    this->horasTrabajadas = horasTrabajadas;
    this->tarifaHora = tarifaHora;
}
void Docente::setHorasTrabajadas(int horasTrabajadas)
{
    this->horasTrabajadas = horasTrabajadas;
}
int Docente::getCodigo()
{
    return this->codigo;
}
string Docente::getNombre()
{
    return this->nombre;
}
string Docente::getDni()
{
    return this->dni;
}
float Docente::getSueldo()
{
    return horasTrabajadas * tarifaHora;
}