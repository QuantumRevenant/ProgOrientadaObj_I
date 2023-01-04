#include <iostream>
#include <string>

using namespace std;

/*
Ingresar base y altura de un rectángulo, determinar:
Área del rectángulo
Perímetro del rectángulo
*/
void IntroducirDatos(float param[]),
        ImprimirResultados(float area, float perimetro);
float CalcularArea(float param[]),
    CalcularPerimetro(float param[]);

int main(int argc, char *argv[])
{
    float medidas[2],
        area,
        perimetro;
    string opcion;
    do
    {
        IntroducirDatos(medidas);
        area=CalcularArea(medidas);
        perimetro=CalcularPerimetro(medidas);
        ImprimirResultados(area,perimetro);

        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion=="S"||opcion=="s");
    
    return 0;
}
void IntroducirDatos(float param[])
{
    system("cls");
    cout<<"Introduce la medida de la base del rectángulo (und)"<<endl;
    cin>>param[1];
    cout<<"Introduce la medida de la altura del rectángulo (und)"<<endl;
    cin>>param[2];
}
float CalcularArea(float param[])
{
    float area;
    area=param[1]*param[2];
    return area;
}
float CalcularPerimetro(float param[])
{
    float perimetro;
    perimetro=2*(param[1]+param[2]);
    return perimetro;
}
void ImprimirResultados(float area, float perimetro)
{
    system("cls");
    cout<<"Área del Rectángulo: "<<area<<" und."<<endl;
    cout<<"Perímetro del Rectángulo: "<<perimetro<<" und."<<endl;
}