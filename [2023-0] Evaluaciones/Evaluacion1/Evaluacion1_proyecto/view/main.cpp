#include <iostream>
#include <string>

using namespace std;

/*

*/

float getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    int value,
        divisores[999],
        cantidadDivisores=0;
    
    value=(int)getValue("el valor");

    for(int i=1;i<=value;i++)
    {
        if(value%i==0)
        {
            divisores[cantidadDivisores]=i;
            cantidadDivisores++;
        }
    }

    for(int i=0;i<cantidadDivisores;i++)
        printData(to_string(i+1)+" es: "+to_string(divisores[i]));

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
    cout << "Divisor #"<<message<<endl;
}