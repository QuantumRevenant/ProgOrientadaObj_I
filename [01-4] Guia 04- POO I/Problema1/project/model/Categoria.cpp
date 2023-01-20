#include <iostream>
#include <string>
#include "Categoria.h"

Categoria::Categoria()
{
    nota=0;
}

Categoria::Categoria(float nota)
{
    this->nota=nota;
}

Categoria::~Categoria()
{

}

string Categoria::getCategoria()
{
    if(nota<12)
        return "D";
    else if(nota<14)
        return "C";
    else if(nota<17)
        return "B";
    else
        return "A";
}