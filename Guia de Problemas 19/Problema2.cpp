#include <iostream>
#include <string>

using namespace std;
/*
C11 -> S/ 27.5
C21 -> S/ 25.0
C31 -> S/ 23.5

Por defecto se descuenta 11%; si el sueldo bruto es mayor a S/ 3500, 15%.

Diseñar programa que determine el sueldo bruto, el descuento y el sueldo neto.
*/

string SeleccionarCategoria();
int SeleccionarHoras(string categoria);

int main()
{
    string categoria;
    unsigned int horas;
    float descuentoUsar,
        sueldoDescontar,
        sueldoBase,
        sueldoFinal;
    const float sueldoC11 = 27.5f,
                sueldoC21 = 25.0f,
                sueldoC31 = 23.5f,
                descuento1 = 0.11f,
                descuento2 = 0.15f;

    categoria = SeleccionarCategoria();
    horas = SeleccionarHoras(categoria);

    if (categoria == "C11")
        sueldoBase = sueldoC11 * horas;
    else if (categoria == "C21")
        sueldoBase = sueldoC21 * horas;
    else
        sueldoBase = sueldoC31 * horas;

    if (sueldoBase > 3500)
        descuentoUsar = descuento2;
    else
        descuentoUsar = descuento1;

    sueldoDescontar = sueldoBase * descuentoUsar;

    sueldoFinal = sueldoBase - sueldoDescontar;

    system("cls");
    cout << "REPORTE" << endl
         << "Categoria: S/" << categoria << endl
         << "Horas: S/" << horas << endl
         << "Sueldo Base: S/" << sueldoBase << endl
         << "Sueldo a descontar (" << descuentoUsar * 100 << "%): S/" << sueldoDescontar << endl
         << endl
         << "Sueldo Final: S/" << sueldoFinal;

    return 0;
}

string SeleccionarCategoria()
{
    string input = "";
    do
    {
        system("cls");
        if (input != "")
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Introduce el nombre del categoria (C11,C21,C31): " << endl;
        cin >> input;
    } while (input != "C11" && input != "C21" && input != "C31");
    return input;
}

int SeleccionarHoras(string categoria)
{
    int horas = 0;
    do
    {
        system("cls");
        if (horas != 0)
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Introduce la horas del categoria " << categoria << " :" << endl;
        cin >> horas;
    } while (horas < 0);
    return horas;
}