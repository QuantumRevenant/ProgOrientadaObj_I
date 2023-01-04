#include <iostream>
#include <string>

using namespace std;

/*
Ingresar radio y altura de un cilindro, determinar:
Área de la base
Área lateral
Área total
*/
void IntroducirDatos(float param[]),
        ImprimirResultados(float areaBase, float areaLateral, float areaTotal);
float CalcularAreaBase(float param[]),
    CalcularAreaLateral(float param[]),
    CalcularAreaTotal(float base, float lateral);

int main(int argc, char *argv[])
{
    float medidas[2],
        areaBase,
        areaLateral,
        areaTotal;
    string opcion;
    do
    {
        IntroducirDatos(medidas);
        areaBase=CalcularAreaBase(medidas);
        areaLateral=CalcularAreaLateral(medidas);
        areaTotal=CalcularAreaTotal(areaBase,areaLateral);
        ImprimirResultados(areaBase,areaLateral,areaTotal);
        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion=="S"||opcion=="s");
    
    return 0;
}
void IntroducirDatos(float param[])
{
    system("cls");
    cout<<"Introduce la medida del radio del cilindro (und)"<<endl;
    cin>>param[1];
    cout<<"Introduce la medida de la altura del cilindro (und)"<<endl;
    cin>>param[2];
}
float CalcularAreaBase(float param[])
{
    const float pi=3.1416;
    float area;
    area=pi*(param[1]*param[1]);
    return area;
}
float CalcularAreaLateral(float param[])
{
    const float pi=3.1416;
    float area;
    area=2*pi*(param[1]*param[2]);
    return area;
}
float CalcularAreaTotal(float base, float lateral)
{
    float area;
    area=2*base+lateral;
    return area;
}
void ImprimirResultados(float areaBase, float areaLateral, float areaTotal)
{
    system("cls");
    cout<<"Área de la base del Cilindro: "<<areaBase<<" und ^2."<<endl;
    cout<<"Área de lateral del Cilindro: "<<areaLateral<<" und ^2."<<endl;
    cout<<"Área total del Cilindro: "<<areaTotal<<" und ^2."<<endl;
}
