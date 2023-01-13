#include <iostream>
#include <string>

using namespace std;

/*
Leer 10 números e imprimir solamente los números positivos
*/

class Numeros
{
private:
    float valores[10];

public:
    Numeros();
    Numeros(float valoresInicial[]);
    int getPositivos(float salida[]);
    int getNegativos(float salida[]);
};

Numeros::Numeros()
{
    for (int i = 0; i < 10; i++)
        valores[i] = 0;
}

Numeros::Numeros(float valoresInicial[])
{
    for (int i = 0; i < 10; i++)
        valores[i] = valoresInicial[i];
}

int Numeros::getPositivos(float salida[])
{
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > 0)
        {
            salida[j] = valores[i];
            j++;
        }
    }
    return j;
}
int Numeros::getNegativos(float salida[])
{
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > 0)
        {
            salida[j] = valores[i];
            j++;
        }
    }
    return j;
}

float getValue(string);
void printData(float, int);

int main(int argc, char *argv[])
{
    float valores[10];
    float positivos[10];
    int cantidadPositivos;

    for (int i = 0; i < 10; i++)
    {
        valores[i] = getValue("el Valor #" + to_string(i+1) + ": ");
    }
    system("cls");
    Numeros objNumeros(valores);
    cantidadPositivos = objNumeros.getPositivos(positivos);
    cout << "VALORES POSITIVOS" << endl
         << endl;
    for (int i = 0; i < cantidadPositivos; i++)
    {
        printData(positivos[i],i+1);
    }   

    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}

void printData(float value, int i)
{
    cout << "Valor #" << i << ": " << value << endl;
}