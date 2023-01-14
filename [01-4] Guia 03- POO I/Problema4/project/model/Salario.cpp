#include <iostream>
#include <string>
#include "Salario.h"

using namespace std;

Salario::Salario()
{
}

Salario::Salario(int *registro, int cantidadRegistros)
{
    horas=new int[cantidadRegistros];
    cantidadTrabajadores=cantidadRegistros;
    for(int i=0;i<cantidadRegistros;i++)
        *(horas+i)=*(registro+i);
}

Salario::~Salario()
{
    delete[] horas;
}

float Salario::getPagoBajo(int time)
{
    return time*20.0;
}

float Salario::getPagoAlto(int time)
{
    return time*25.0;
}

float Salario::getPagoTotal(int iterador)
{
    if(*(horas+iterador)<=40)
        return getPagoBajo(*(horas+iterador));
    else
        return getPagoBajo(40)+getPagoAlto(*(horas+iterador)-40);
}
