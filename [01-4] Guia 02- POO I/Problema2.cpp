#include <iostream>
#include <string>

using namespace std;

/*
35% extra por Semana Santa

3 chocolates por cada pasaje adquirido

Da: Precio Normal, Cantidad de Pasajes.

Pide: Precio Semana Santa, importe Total, cantidad de Chocolates
*/

float GetPrecioUnitario();
int GetCantidad();
void ImprimirData(float precioRecargo, float precioTotal, int cantidadBonos);

class Compra
{
private:
    float precioBase;
    float recargo;
    int cantidad;
    int bonoXTicket;
public:
    Compra()
    {
        precioBase=recargo=cantidad=bonoXTicket=0;
    }
    Compra(float pB, int qnt)
    {
        precioBase=pB;
        cantidad=qnt;
        recargo=bonoXTicket=0;
    }
    Compra(float pB, int qnt,float xtr,int bno)
    {
        precioBase=pB;
        cantidad=qnt;
        recargo=xtr;
        bonoXTicket=bno;
    }
    float getPrecioRecargo()
    {
        return precioBase*(1+recargo);
    }
    float getPrecioTotal()
    {
        return getPrecioRecargo()*cantidad;
    }
    int getCantidadBono()
    {
        return cantidad*bonoXTicket;
    }
};

int main(int argc, char *argv[])
{
    float precioBase;
    float const recargo=0.35;
    int cantidad;
    int const chocolates=3;

    precioBase=GetPrecioUnitario();
    cantidad=GetCantidad();

    Compra objCompra(precioBase,cantidad,recargo,chocolates);

    ImprimirData(objCompra.getPrecioRecargo(),objCompra.getPrecioTotal(),objCompra.getCantidadBono());

    return 0;
}

float GetPrecioUnitario()
{
    float salida;
    cout << "Introduce el precio base del ticket" << endl;
    cin >> salida;
    return salida;
}

int GetCantidad()
{
    int salida;
    cout << "Introduce la cantidad de tickets" << endl;
    cin >> salida;
    return salida;
}

void ImprimirData(float precioRecargo, float precioTotal, int cantidadBonos)
{
    cout << "Precio con Recargo: S/" << precioRecargo << endl;
    cout << "Precio total: S/" << precioTotal << endl;
    cout << "Como regalo le otorgamos esta cantidad de chocolates ^-^ : " << cantidadBonos << endl;
}