#include <iostream>
#include <string>

using namespace std;

/*
Ingresar notas:
Practica 1      (10%)
Practica 2      (10%)
Examen Parcial  (35%)
Examen Final    (45%)

Determine el Promedio.
*/
void IntroducirDatos(float param[]),
        ImprimirResultados(float promedio);
float CalcularPromedio(float param[]);

int main(int argc, char *argv[])
{
    float notas[4],
        promedio;
    string opcion;
    do
    {
        IntroducirDatos(notas);
        promedio=CalcularPromedio(notas);
        ImprimirResultados(promedio);

        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion=="S"||opcion=="s");
    
    return 0;
}
void IntroducirDatos(float param[])
{
    system("cls");
    cout<<"Introduce la nota de la práctica 1"<<endl;
    cin>>param[1];
    cout<<"Introduce la nota de la práctica 2"<<endl;
    cin>>param[2];
    cout<<"Introduce la nota del examen parcial"<<endl;
    cin>>param[3];
    cout<<"Introduce la nota del examen final"<<endl;
    cin>>param[4];
}
float CalcularPromedio(float param[])
{
    float promedio;
    promedio=param[1]*0.10+param[2]*0.10*param[3]*0.35+param[4]*0.45;
    return promedio;
}
void ImprimirResultados(float promedio)
{
    system("cls");
    cout<<"El Promedio es: "<<promedio<<endl;
}