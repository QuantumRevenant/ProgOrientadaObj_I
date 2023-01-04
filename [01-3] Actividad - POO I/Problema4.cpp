#include <iostream>
#include <string>

using namespace std;

/*
Ingresa la cantidad de datos de alumnos (código, nombre y nota)

Hallar el promedio, la máxima y la mínima nota (Una funcion individual por cada uno)
*/
float Promedio(float arreglo[], int cantidad);
float Suma(float arreglo[], int cantidad);
int CantidadElementos(),
    Maximo(float arreglo[], int cantidad),
    Minimo(float arreglo[], int cantidad);

int main()
{
    int cantidad, indexMaximo, indexMinimo;
    string alumnos[99][2], nombre;
    float notas[99], promedio;

    cantidad = CantidadElementos();
    for (int i = 0; i < cantidad; i++)
    {
        system("cls");
        cout << "Introduce los datos del alumno #" << i + 1 << ": " << endl;
        cout << "Código del alumno: " << endl;
        cin >> alumnos[i][1];
        cin.ignore(1000,'\n');
        cout << "Nombres y apellidos del alumno: " << endl;
        getline(cin,alumnos[i][2]);
        cout << "Nota del alumno " << alumnos[i][2] << ": " << endl;
        cin >> notas[i];
    }

    promedio = Promedio(notas, cantidad);
    indexMaximo = Maximo(notas, cantidad);
    indexMinimo = Minimo(notas, cantidad);

    cout << "El promedio de las notas es: " << promedio << endl;
    cout << "La mayor nota es: " << notas[indexMaximo] << ", de " << alumnos[indexMaximo][2] << " y su codigo " << alumnos[indexMaximo][1] << endl;
    cout << "La menor nota es: " << notas[indexMinimo] << ", de " << alumnos[indexMinimo][2] << " y su codigo " << alumnos[indexMinimo][1] << endl;

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

float Promedio(float arreglo[], int cantidad)
{
    float promedio = 0,
          suma;
    suma = Suma(arreglo, cantidad);
    promedio = suma / cantidad;
    return promedio;
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

int Maximo(float arreglo[], int cantidad)
{
    int index = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (arreglo[index] < arreglo[i])
            index = i;
    }
    return index;
}
int Minimo(float arreglo[], int cantidad)
{
    int index = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (arreglo[index] > arreglo[i])
            index = i;
    }
    return index;
}