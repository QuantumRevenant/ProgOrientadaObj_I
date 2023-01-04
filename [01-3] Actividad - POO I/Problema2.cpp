#include <iostream>
#include <string>

using namespace std;

/*
Ingresar N elementos en un Arreglo 1-Dimensional,
Calcular el factorial de todos los elementos ingresados
*/
unsigned long long int factorial(unsigned long long int valor, int elemento);
int CantidadElementos();
void BarraCarga(int val1, int valmax);

int main()
{
    unsigned long long int arregloRespuestas[99];
    int cantidad,
        arreglo[99];

    cantidad = CantidadElementos();
    for (int i = 0; i < cantidad; i++)
    {
        system("cls");
        cout << "Introduce el elemento #" << i + 1 << "/" << cantidad<<endl;
        cin >> arreglo[i];
    }
    system("cls");
    for(int i=0;i<cantidad;i++)
    {
        BarraCarga(i+1,cantidad);
    }
    for (int i=0;i<cantidad;i++)
    {
        arregloRespuestas[i]=factorial(arreglo[i],i+1);
    }
    cout<<"Continue para imprimir todos los resultados"<<endl;
    system("pause");

    system("cls");
    cout<<"Si figura 0(cero), representa que una de las opciones fue inválida"<<endl<<endl;
    for(int i=0;i<cantidad;i++)
    {
        cout<<"Respuesta #"<<i+1<<" :	"<<arregloRespuestas[i]<<endl;
    }
    return 0;
}

unsigned long long int factorial(unsigned long long int valor, int elemento)
{
    unsigned long long int salida = 1;

    if (valor >= 21)
    {
        cout << "Valor muy alto, soportamos un factorial de 20 como máximo, Error en el elemento #" << elemento << endl;
        salida = 0;
    }
    else
    {
        if (valor <= 1)
            salida = 1;
        else
            salida = valor * factorial(valor - 1, elemento);
    }

    return salida;
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
    } while (cantidad <= 0||cantidad>99);
    return cantidad;
}

void BarraCarga(int val1, int valmax)
{
    float percent=(float)val1/valmax *100;
    system("cls");
    if(percent<10)
        cout<<"[**********]"<<endl;
    else if(percent<20)
        cout<<"[#*********]"<<endl;
    else if(percent<30)
        cout<<"[##********]"<<endl;
    else if(percent<40)
        cout<<"[###*******]"<<endl;
    else if(percent<50)
        cout<<"[####******]"<<endl;
    else if(percent<60)
        cout<<"[#####*****]"<<endl;
    else if(percent<70)
        cout<<"[######****]"<<endl;
    else if(percent<80)
        cout<<"[#######***]"<<endl;
    else if(percent<90)
        cout<<"[########**]"<<endl;
    else if(percent<100)
        cout<<"[#########*]"<<endl;
    else
        cout<<"[##########]"<<endl;
}