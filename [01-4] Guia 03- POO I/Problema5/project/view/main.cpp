#include <iostream>
#include <string>
#include "../model/Conjunto.cpp"

using namespace std;

/*

*/

double getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    double *numeros;
    int cantidad;

    cantidad=(int)getValue("la cantidad de números");

    numeros=new double[cantidad];

    for(int i=0;i<cantidad;i++)
        *(numeros+i)=getValue("el "+to_string(i+1)+"° número: ");
    
    Conjunto objConjunto(numeros,cantidad);

    printData("El número con mayor valor introducido es: "+to_string(objConjunto.getMayor()));

    objConjunto.~Conjunto();
    delete[] numeros;
    return 0;
}

double getValue(string message)
{
    double salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}
 
void printData(string message)
{
    cout << message <<endl;
}