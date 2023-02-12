#include <iostream>
#include <string>
#include <vector>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

using namespace std;

/*
Se tienen 3 vectores el primero carga datos de números impares en el rango del 10 al 100,
el segundo carga datos del primer vector pero solamente los múltiplos de 7,
y el tercer vector se llena datos del máximo del primer vector y el mínimo del segundo vector.

vec1 -> impares 10<=x<=100
vec2 -> vec1, pero mult 7
vec3 -> mayor valor 1, menor valor 2
*/

void introducirValoresImPar(vector<int> &vec, int minvalue, int maxvalue)
{
    int valor;
    bool valido = false;
    string opt;
    do
    {
        do
        {
            system("cls");
            cout << "INTRODUCE UN VALOR NEGATIVO PARA SALIR" << endl;
            cin >> valor;
            if (valor % 2 == 0 || valor < minvalue || valor > maxvalue)
                cout << "ERROR, VALOR NO PERMITIDO" << endl;
            Sleep(1000);
        } while (valor % 2 == 0 || (valor < minvalue && valor >= 0) || valor > maxvalue);
        vec.push_back(valor);
        cout << "¿DESEA INTRODUCIR OTRO VALOR? (S/s)" << endl;
        cin >> opt;
    } while (opt == "s" || opt == "S");
}

void asignarValorMultiplos(vector<int> vecEntrada,vector<int> &vecSalida,int multiplo)
{
    for (int x : vecEntrada)
    {
        if(x%multiplo==0)
            vecSalida.push_back(x);
    }
}

void asignarMinimo(vector<int> vecEntrada,vector<int> &vecSalida)
{
    int minimo=vecEntrada[0];
    for (int x : vecEntrada)
    {
        if(x<minimo)
            minimo=x;
    }
    vecSalida.push_back(minimo);
}

void asignarMaximo(vector<int> vecEntrada,vector<int> &vecSalida)
{
    int maximo=vecEntrada[0];
    for (int x : vecEntrada)
    {
        if(x>maximo)
            maximo=x;
    }
    vecSalida.push_back(maximo);
}

void imprimirVector(vector<int> vec, string title)
{
    cout<<"__"<<title<<"__"<<endl<<endl;
    for(int x:vec)
        cout<<x<<endl;
    cout<<endl;
}

int main(int argc, char *argv[])
{
    vector<int> vec1, vec2, vec3;

    introducirValoresImPar(vec1,10,100);
    asignarValorMultiplos(vec1,vec2,7);
    asignarMaximo(vec1,vec3);
    asignarMinimo(vec2,vec3);

    imprimirVector(vec1,"Vector 1");
    imprimirVector(vec2,"Vector 2");
    imprimirVector(vec3,"Vector 3");

    return 0;
}