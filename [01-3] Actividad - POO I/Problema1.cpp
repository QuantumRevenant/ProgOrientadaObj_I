#include <iostream>
#include <string>

using namespace std;

/*
Ingresar N elementos en un Arreglo 1-Dimensional, proporcionar las opciones de:
Suma de todos los elementos
Promedio de todos los elementos
Suma de todos los elementos Pares e Impares

Generar un Menú, y que exista iteración
*/

int Menu(),
    CantidadElementos();
float Suma(float arreglo[], int cantidad);
void Promedio(float arreglo[], int cantidad),
    SumaImparesPares(float arreglo[], int cantidad);

int main()
{
    float arreglo[999];
    int cantidad = 0,
        opcion = 0;

    cantidad = CantidadElementos();
    for (int i = 0; i < cantidad; i++)
    {
        system("cls");
        cout << "Introduce el elemento #" << i + 1 << "/" << cantidad<<endl;
        cin >> arreglo[i];
    }

    do
    {
        opcion = Menu();
        switch (opcion)
        {
        case 1:
            cantidad = CantidadElementos();
            for (int i = 0; i < cantidad; i++)
            {
                system("cls");
                cout << "Introduce el elemento #" << i + 1 << "/" << cantidad<<endl;
                cin >> arreglo[i];
            }
            break;
        case 2:
            system("cls");
            cout << "Suma de elementos: " << endl
                 << Suma(arreglo, cantidad) << endl;
            system("pause");
            break;
        case 3:
            system("cls");
            Promedio(arreglo, cantidad);
            break;
        case 4:
            system("cls");
            SumaImparesPares(arreglo, cantidad);
            break;
        default:
            break;
        }
    } while (opcion != 0);

    return 0;
}

int CantidadElementos()
{
    int cantidad = 0;
    do
    {
        system("cls");
        if (cantidad != 0)
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Introduce la cantidad de elementos" << endl;
        cin >> cantidad;
    } while (cantidad <= 0);
    return cantidad;
}

int Menu()
{
    int opcion = 0;
    do
    {
        system("cls");
        if (opcion != 0)
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Escoge tu opción: " << endl
             << "1) Reintroducir Datos" << endl
             << "2) Calcular la Suma de los Elementos" << endl
             << "3) Calcular el Promedio de los Elementos" << endl
             << "4) Calcular la Suma de los Elementos Pares e Impares" << endl
             << "0) Salir del Programa" << endl;
        cin >> opcion;
    } while (opcion < 0 || opcion > 4);
    return opcion;
}

float Suma(float arreglo[], int cantidad)
{
    float suma = 0;
    for (int i = 0; i < cantidad; i++)
    {
        suma += arreglo[i];
    }
    return suma;
}

void Promedio(float arreglo[], int cantidad)
{
    float promedio = 0,
          suma;
    suma = Suma(arreglo, cantidad);
    promedio = suma / cantidad;
    system("cls");
    cout << "Promedio de elementos: " << endl
         << promedio << endl;
    system("pause");
}

void SumaImparesPares(float arreglo[], int cantidad)
{
    float arregloImpares[999],
        arregloPares[999];
    int cantidadImpares = 0,
        cantidadPares = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (((int)arreglo[i]) % 2 == 0)
        {
            arregloPares[cantidadPares]=arreglo[i];
            cantidadPares++;
        }
        else
        {
            arregloImpares[cantidadImpares]=arreglo[i];
            cantidadImpares++;
        }
    }
    system("cls");
    cout << "¡[SI EN EL ARREGLO TENEMOS ELEMENTOS VALORES NO ENTEROS, ESTE CALCULO PUEDE SER ERRADO]!" << endl
         << endl;
    cout << "Suma de elementos Pares: (" << cantidadPares << " elementos)" << endl
         << Suma(arregloPares, cantidadPares) << endl
         << endl;
    cout << "Suma de elementos Impares: (" << cantidadImpares << " elementos)" << endl
         << Suma(arregloImpares, cantidadImpares) << endl;
    system("pause");
}