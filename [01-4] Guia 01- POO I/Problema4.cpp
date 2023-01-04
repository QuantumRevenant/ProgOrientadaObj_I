#include <iostream>
#include <string>

using namespace std;

/*
Ingresar peso en kg y altura en m de un adulto, determinar:
Indice de Masa Corporal
*/
void IntroducirDatos(float param[]),
        ImprimirResultados(float IMC);
float CalcularIMC(float param[]);

int main(int argc, char *argv[])
{
    float datos[2],
        imc;
    string opcion;
    do
    {
        IntroducirDatos(datos);
        imc=CalcularIMC(datos);
        ImprimirResultados(imc);

        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion=="S"||opcion=="s");
    
    return 0;
}
void IntroducirDatos(float param[])
{
    system("cls");
    cout<<"Introduce el peso de la persona (Kg)"<<endl;
    cin>>param[1];
    cout<<"Introduce la estatura de la persona (m)"<<endl;
    cin>>param[2];
}
float CalcularIMC(float param[])
{
    float imc;
    imc=param[1]/(param[2]*param[2]);
    return imc;
}
void ImprimirResultados(float IMC)
{
    system("cls");
    cout<<"El IMC es: "<<IMC<<endl;
}