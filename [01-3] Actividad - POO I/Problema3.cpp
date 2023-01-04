#include <iostream>
#include <string>

using namespace std;

/*
Ingresar N elementos en un Arreglo 1-Dimensional,
Mostrar los Divisores de todos los elementos ingresados
*/
int divisores(int valor, int posicion);
int CantidadElementos();

int main()
{
    int cantidad,
        arreglo[99];

    cantidad = CantidadElementos();
    for (int i = 0; i < cantidad; i++)
    {
        system("cls");
        cout << "Introduce el elemento #" << i + 1 << "/" << cantidad << endl;
        cin >> arreglo[i];
    }
    for (int i = 0; i < cantidad; i++)
    {
        divisores(arreglo[i], i + 1);
        cout << endl
             << endl;
    }
    cout << endl
         << "Fin" << endl;
    system("pause");
}

int divisores(int valor, int posicion)
{
    cout << "Posición #" << posicion << ") Divisores del número " << valor << " : " << endl;
    for (int i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
            cout << i << " ";
    }
}

int CantidadElementos()
{
    int cantidad = 0;
    do
    {
        system("cls");
        if (cantidad != 0)
            cout << "ERROR, VALOR INVÁLIDO (SOLO VALORES DEL 0 - 99)" << endl
                 << endl;
        cout << "Introduce la cantidad de elementos" << endl;
        cin >> cantidad;
    } while (cantidad <= 0 || cantidad > 99);
    return cantidad;
}