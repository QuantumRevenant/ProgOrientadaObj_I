#include <iostream>
#include <string>

using namespace std;

/*
Descuento 10%+10% (dos descuentos sucesivos del 10%)

Descuento 1 -> Importe Compra, Descuento 2 -> ImporteDescontado1

Da: Precio Unitario, Cantidad de Unidades

Pide: Importe Compra, Importe Descuento Total, importe pagar
*/

float GetValue(string message);
void ImprimirData(float importeCompra, float importeDescuento, float importePagar);

class Compra
{
private:
    float precioUnitario;
    float descuento;
    int cantidad;
public:
    Compra()
    {
        precioUnitario=descuento=cantidad=0;
    }
    Compra(float prcUnit, int qnt)
    {
        precioUnitario=prcUnit;
        cantidad=qnt;
        descuento=0;
    }
    Compra(float prcUnit, int qnt, float dscnt)
    {
        precioUnitario=prcUnit;
        cantidad=qnt;
        descuento=dscnt;
    }
    float getImporteCompra()
    {
        return precioUnitario*cantidad;
    }
    float getDescuentoIterativos(int iteraciones=1)
    {   
        float salida;

        if(iteraciones<=1)
            salida=getImporteCompra();
        else
            salida=getDescuentoIterativos(iteraciones-1)*(1-descuento)+getImporteCompra();

        return salida;
    }
    float getDescuentoTotalConsecutivos(int iteraciones=1)
    {
        return descuento*getDescuentoIterativos(iteraciones);
    }
    float getImporteTotal(int iteraciones=1)
    {
        return getImporteCompra()-getDescuentoTotalConsecutivos(iteraciones);
    }
};


int main(int argc, char *argv[])
{
    float precioUnitario;
    int cantidad;
    const float descuento=0.1;
    const int iteraciones=2;

    precioUnitario=GetValue("el precio unitario: ");
    cantidad=(int)GetValue("la cantidad ");

    Compra objCompra(precioUnitario,cantidad,descuento);

    ImprimirData(objCompra.getImporteCompra(),objCompra.getDescuentoTotalConsecutivos(iteraciones),objCompra.getImporteTotal(iteraciones));

    return 0;
}

float GetValue(string message)
{
    float salida;
    cout << "Introduce "<<message<< endl;
    cin >> salida;
    return salida;
}
void ImprimirData(float importeCompra, float importeDescuento, float importePagar)
{
    cout << "Precio Base: S/" << importeCompra << endl;
    cout << "Precio a Descontar: S/" << importeDescuento << endl;
    cout << "Precio Final: S/" << importePagar << endl;

}