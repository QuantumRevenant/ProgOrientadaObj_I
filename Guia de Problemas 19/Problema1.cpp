#include <iostream>
#include <string>

using namespace std;
/*
P1 -> S/ 15.0
P2 -> S/ 17.5
P3 -> S/ 20.0

Por defecto se descuenta 7%; si adquiere más de 10 unidades del producto, 15%.

Diseñar programa que determine el importe de compra, el importe de descuento y el importe a pagar.
*/
string SeleccionarProducto();
int SeleccionarCantidad(string producto);

int main()
{
    string producto;
    unsigned int cantidad;
    float descuentoUsar,
        precioDescontar,
        precioBase,
        precioFinal;
    const float precioP1 = 15.0f,
                precioP2 = 17.5f,
                precioP3 = 20.0f,
                descuento1 = 0.07f,
                descuento2 = 0.15f;

    producto = SeleccionarProducto();
    cantidad = SeleccionarCantidad(producto);

    if (cantidad > 10)
        descuentoUsar = descuento2;
    else
        descuentoUsar = descuento1;

    if (producto == "P1")
        precioBase = precioP1 * cantidad;
    else if (producto == "P2")
        precioBase = precioP2 * cantidad;
    else
        precioBase = precioP3 * cantidad;

    if (cantidad > 10)
        precioDescontar = precioBase * descuento2;
    else
        precioDescontar = precioBase * descuento1;

    precioFinal = precioBase - precioDescontar;

    system("cls");
    cout << "RECIBO" << endl
         << "Producto: S/" << producto << endl
         << "Cantidad: S/" << cantidad << endl
         << "Precio Base: S/" << precioBase << endl
         << "Precio a descontar (" << descuentoUsar * 100 << "%): S/" << precioDescontar << endl
         << endl
         << "Precio Final: S/" << precioFinal << endl
         << endl
         << "Muchas Gracias por su compra ^-^";

    return 0;
}

string SeleccionarProducto()
{
    string input = "";
    do
    {
        system("cls");
        if (input != "")
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Introduce el nombre del producto (P1,P2,P3): " << endl;
        cin >> input;
    } while (input != "P1" && input != "P2" && input != "P3");
    return input;
}

int SeleccionarCantidad(string producto)
{
    int cantidad = 0;
    do
    {
        system("cls");
        if (cantidad != 0)
            cout << "ERROR, VALOR INVÁLIDO" << endl
                 << endl;
        cout << "Introduce la cantidad del producto " << producto << " :" << endl;
        cin >> cantidad;
    } while (cantidad < 0);
    return cantidad;
}
