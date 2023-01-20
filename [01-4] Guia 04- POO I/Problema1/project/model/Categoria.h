#ifndef CATEGORIACLASS_H
#define CATEGORIACLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Categoria
{
private:
    float nota;
public:
    Categoria();
    Categoria(float);
    ~Categoria();
    string getCategoria();
};


#endif