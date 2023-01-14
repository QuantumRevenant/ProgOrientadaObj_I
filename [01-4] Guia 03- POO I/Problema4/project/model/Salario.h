#ifndef SALARIOCLASS_H
#define SALARIOCLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Salario
{
private:
int *horas;
int cantidadTrabajadores;
public:
Salario();
Salario(int*, int);
~Salario();
float getPagoBajo(int);
float getPagoAlto(int);
float getPagoTotal(int);
};

#endif