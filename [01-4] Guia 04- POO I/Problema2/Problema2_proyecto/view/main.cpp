#include <iostream>
#include <string>
#include "../model/Compra.cpp"

using namespace std;

/*

*/

int getValue(string);
string getValue();
void printData(float, float, float, float);

int main(int argc, char *argv[])
{
    string codigo;
    int cantidad;

    codigo = getValue();
    cout << endl;
    if (codigo != "null")
    {
        cantidad = getValue("la cantidad de aceite  (L): ");
        cout << endl;
        Compra objCompra(codigo, cantidad);
        printData(objCompra.getPrecioBase(),
                  objCompra.getPrecioDescontar(),
                  objCompra.getPrecioFinal(),
                  objCompra.getDescuento() * 100);
    }
    else
    {
        cout << "Saliendo..." << endl;
    }

    return 0;
}

int getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}

string getValue()
{
    string salida = "null";
    int opc = 0;

    do
    {
        system("cls");
        cout << "Introduce la opcion del aceite a comprar" << endl
             << endl;
        if (opc != 0)
            cout << "[OPCION NO VALIDA]" << endl
                 << endl;
        cout << "1) PRIMOR" << endl
             << "2) GIRASOL" << endl
             << "3) CIL" << endl
             << "4) COCINERO" << endl
             << "0) SALIR DEL PROGRAMA" << endl;
        cout << endl;
        cin >> opc;
    } while (opc < 0 || opc > 4);

    switch (opc)
    {
    case 1:
        salida = "Primor";
        break;
    case 2:
        salida = "Girasol";
        break;
    case 3:
        salida = "Cil";
        break;
    case 4:
        salida = "Cocinero";
        break;
    default:
        salida = "null";
        break;
    }
    return salida;
}

void printData(float precioBase, float precioDescuento, float precioFinal, float descuento)
{
    cout << "Precio Base: S/" << precioBase << endl;
    cout << "Monto a Descontar: S/" << precioDescuento << " (" << descuento << "%)" << endl;
    cout << "Precio Final: S/" << precioFinal << endl;
}