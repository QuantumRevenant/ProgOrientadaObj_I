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
    if(codigo=="Laive")
        salida=3.90;
    else if (codigo=="Gloria")
        salida=3.80;
    else if(codigo=="Pura Vida")
        salida=4.20;
    else if(codigo=="Milkito")
        salida=3.60;
    else
        salida=-1;
    return salida;
}
float Compra::getDescuento()
{
    float salida=0;
    if(cantidad>=45)
        salida=11.5/100;
    else if(cantidad>=30)
        salida=9.0/100;
    else if(cantidad>=15)
        salida=6.5/100;
    else
        salida=4.0/100;
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