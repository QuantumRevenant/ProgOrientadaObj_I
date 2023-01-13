#include <iostream>
#include <string>
#include "../model/Promedio.cpp"

using namespace std;

/*

*/

float getValue(string);
void printData(float);

int main(int argc, char *argv[])
{
    float calificaciones[7],
            promedio;
    
    for (int i = 0; i < 7; i++)
        calificaciones[i]=getValue("la calificación #"+to_string(i+1)+": ");

    Promedio objPromedio(calificaciones);

    printData(objPromedio.getPromedio());

    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}

void printData(float value)
{
    cout << "El promedio del alumno en la materia de 'Diseño Estructurado de Algoritmos' es: " << endl
         << value << endl;
}