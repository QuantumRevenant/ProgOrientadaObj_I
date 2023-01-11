#include <iostream>
#include <string>
#include "Compra.h"

Compra::Compra()
{
    codigo="null";
    cantidad=0;
}

Compra::Compra(string codigo, int cantidad)
{
    this->codigo = codigo;
    this->cantidad = cantidad;
}

Compra::~Compra()
{

}

float Compra::getPrecioPorLitro()
{
    float salida;
    if(codigo=="Primor")
        salida=5.99;
    else if (codigo=="Girasol")
        salida=5.50;
    else if(codigo=="Cil")
        salida=4.50;
    else if(codigo=="Cocinero")
        salida=4.70;
    else
        salida=-1;
    return salida;
}
float Compra::getDescuento()
{
    float salida;
    if(cantidad>=10)
        salida=12.5/100;
    else if(cantidad>=7)
        salida=10.0/100;
    else if(cantidad>=4)
        salida=7.5/100;
    else
        salida=5.0/100;
    return salida;
}
float Compra::getPrecioBase()
{
    return getPrecioPorLitro()*cantidad;
}
float Compra::getPrecioDescontar()
{
    return getPrecioBase()*getDescuento();
}
float Compra::getPrecioFinal()
{
    return getPrecioBase()-getPrecioDescontar();
}