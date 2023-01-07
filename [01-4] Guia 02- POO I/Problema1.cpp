#include <iostream>
#include <string>

using namespace std;

/*
Se ofrece un descuento del 15%

Se da: Precio Unitario, Cantidad

Nos Piden: importe compra, importe descuento e importe pagar
*/

float GetPrecioUnitario();
int GetCantidad();
void ImprimirData(float importeCompra, float importeDescuento, float importePagar);

class Compra
{
private:
    float precioUnitario;
    int cantidad;
    float descuento;
public:
    Compra()
    {
        precioUnitario=cantidad=descuento=0;
    }
    Compra(float prUnit, int qnt)
    {
        precioUnitario=prUnit;
        cantidad=qnt;
        descuento=0;
    }
    Compra(float prUnit, int qnt, float dscnt)
    {
        precioUnitario=prUnit;
        cantidad=qnt;
        descuento=dscnt;
    }
    float getPrecioBase()
    {
        return cantidad*precioUnitario; 
    }
    float getPrecioDescuento()
    {
        return getPrecioBase()*descuento;
    }
    float getPrecioFinal()
    {
        return getPrecioBase()-getPrecioDescuento();
    }
};

int main(int argc, char *argv[])
{
    float precioUnitario;
    int     cantidad;
    const float descuento=0.15;

    precioUnitario=GetPrecioUnitario();
    cantidad=GetCantidad();

    Compra objCompra(precioUnitario,cantidad,descuento);

    ImprimirData(objCompra.getPrecioBase(),objCompra.getPrecioDescuento(),objCompra.getPrecioFinal());
    
    return 0;
}

float GetPrecioUnitario()
{
    float salida;
    cout << "Introduce el precio unitario del producto" << endl;
    cin >> salida;
    return salida;
}

int GetCantidad()
{
    int salida;
    cout << "Introduce la cantidad de producto" << endl;
    cin >> salida;
    return salida;
}

void ImprimirData(float importeCompra, float importeDescuento, float importePagar)
{
    cout << "Precio Base: S/" << importeCompra << endl;
    cout << "Monto Descontado: S/" << importeDescuento << endl;
    cout << "Precio Final: S/" << importePagar << endl;
}