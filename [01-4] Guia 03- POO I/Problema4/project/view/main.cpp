#include <iostream>
#include <string>
#include "../model/Salario.cpp"

using namespace std;

/*
Salario semanal de cada uno de los obreros que laboran en ella

x<=40h -> $20 * xh
x> 40h -> $20 * 40h + $25 * (x-40)h
*/

float getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    float *pagoFinal;
    int cantidad, *registro;

    cantidad=(int)getValue("la cantidad de obreros:");
    registro=new int[cantidad];
    pagoFinal=new float[cantidad];

    for (int i = 0; i < cantidad; i++)
        *(registro+i)=getValue("las horas trabajadas por el obrero #"+to_string(i+1)+" (No fracciones)");

    Salario objSalario(registro,cantidad);
    
    for (int i=0; i<cantidad;i++)
        *(pagoFinal+i)=objSalario.getPagoTotal(i);

    for (int i = 0; i < cantidad; i++)
        printData("Pago del obrero #"+to_string(i+1)+" es: S/"+to_string(*(pagoFinal+i)));
    

    objSalario.~Salario();
    delete[] registro, pagoFinal;
    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}
 
void printData(string message)
{
    cout << message <<endl;
}