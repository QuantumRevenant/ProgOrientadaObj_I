#include <iostream>
#include <string>

using namespace std;

/*
Ingresar edad en años y peso en kg de un adulto, determinar:
frecuencia cardiaca
*/
void IntroducirDatos(float param[]),
        ImprimirResultados(float frecuencia);
float CalcularFrecuencia(float param[]);

int main(int argc, char *argv[])
{
    float datos[2],
        frecuencia;
    string opcion;
    do
    {
        IntroducirDatos(datos);
        frecuencia=CalcularFrecuencia(datos);
        ImprimirResultados(frecuencia);

        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion=="S"||opcion=="s");
    
    return 0;
}
void IntroducirDatos(float param[])
{
    system("cls");
    cout<<"Introduce la edad del varón (años)"<<endl;
    cin>>param[1];
    cout<<"Introduce el peso del varón (Kg)"<<endl;
    cin>>param[2];
}
float CalcularFrecuencia(float param[])
{
    float frecuencia;
    frecuencia=210-(0.5*param[1])*(0.01*param[2]+4);
    return frecuencia;
}
void ImprimirResultados(float frecuencia)
{
    system("cls");
    cout<<"Frecuencia cardiaca: "<<frecuencia<<endl;
}