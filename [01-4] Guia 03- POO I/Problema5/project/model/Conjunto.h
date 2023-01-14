#ifndef CONJUNTOCLASS_H
#define CONJUNTOCLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Conjunto
{
private:
double *numeros;
int cantidad;
public:
Conjunto();
Conjunto(double*, int);
~Conjunto();
double getMayor();
double getMenor();
};

#endif