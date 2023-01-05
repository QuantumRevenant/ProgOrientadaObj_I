#include <iostream>
#include <string>

using namespace std;

/*
Se ofrece un descuento del 15%

Se da: Precio Unitario, Cantidad

Nos Piden: importe compra, importe descuento e importe pagar
*/

float GetPrecioUnitario(),
    GetImporteCompra(float precioUnitario, int cantidad),
    GetImporteDescuento(float importeCompra, float descuento),
    GetImportePagar(float importeCompra, float importeDescuento);
int GetCantidad();
void ImprimirData(float importeCompra, float importeDescuento, float importePagar);

int main(int argc, char *argv[])
{
    float precioUnitario,
        importeCompra,
        importeDescuento,
        importePagar;
    int cantidad;
    const float descuento = 0.15;
    string opcion;
    do
    {
        precioUnitario = GetPrecioUnitario();
        cantidad = GetCantidad();
        importeCompra = GetImporteCompra(precioUnitario, cantidad);
        importeDescuento = GetImporteDescuento(importeCompra, descuento);
        importePagar = GetImportePagar(importeCompra, importeDescuento);
        ImprimirData(importeCompra, importeDescuento, importePagar);

        cout << endl
             << "PARA CONTINUAR (S/s)" << endl;
        cin >> opcion;
    } while (opcion == "S" || opcion == "s");

    return 0;
}

float GetPrecioUnitario()
{
    float salida;
    system("cls");
    cout << "Introduce el precio unitario del producto" << endl;
    cin >> salida;
    return salida;
}

int GetCantidad()
{
    int salida;
    system("cls");
    cout << "Introduce la cantidad de producto" << endl;
    cin >> salida;
    return salida;
}

float GetImporteCompra(float precioUnitario, int cantidad)
{
    float salida;
    salida = precioUnitario * cantidad;
    return salida;
}

float GetImporteDescuento(float importeCompra, float descuento)
{
    float salida;
    salida = importeCompra * descuento;
    return salida;
}

float GetImportePagar(float importeCompra, float importeDescuento)
{
    float salida;
    salida = importeCompra - importeDescuento;
    return salida;
}

void ImprimirData(float importeCompra, float importeDescuento, float importePagar)
{
    system("cls");
    cout << "Precio Base: S/" << importeCompra << endl;
    cout << "Monto Descontado: S/" << importeDescuento << endl;
    cout << "Precio Final: S/" << importePagar << endl;
}
