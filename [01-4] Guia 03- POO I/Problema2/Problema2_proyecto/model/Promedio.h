#ifndef PROMEDIOCLASS_H
#define PROMEDIOCLASS_H

#include <iostream>
#include <string>

using namespace std;

/*

*/

class Promedio
{
private:
float calificaciones[7];
public:
Promedio();
Promedio(float[]);
~Promedio();
float getPromedio();
};

#endif