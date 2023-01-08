#include <iostream>
#include <string>

using namespace std;

/*
cuaderno 100 hojas mentor, nivel nacional
12% descuento 

importePagar=importeCompra-importeDescuento+costoTransporte

Da: precio por docena, cantidad de docenas, costo transporte

Pide: importe compra, importe del descuento, importe a pagar
*/

float GetValue(string message);
void ImprimirData(float importeCompra, float importeDescuento, float importePagar);

class Compra
{
private:
    float precioDocena;
    float precioTransporte;
    float descuento;
    int cantidad;
public:
    Compra()
    {
        precioDocena=precioTransporte=descuento=cantidad=0;
    }
    Compra(float prcBase, float prcTransp, int qnt)
    {
        precioDocena=prcBase;
        precioTransporte=prcTransp;
        cantidad=qnt;
        descuento=0;
    }
    Compra(float prcBase, float prcTransp, int qnt,float dscnt)
    {
        precioDocena=prcBase;
        precioTransporte=prcTransp;
        cantidad=qnt;
        descuento=dscnt;
    }
    float getImporteCompra()
    {
        return precioDocena*cantidad;
    }
    float getImporteDescuento()
    {
        return getImporteCompra()*descuento;
    }
    float getImportePagar()
    {
        return getImporteCompra()-getImporteDescuento()+precioTransporte;
    }

};

int main(int argc, char *argv[])
{
    float precioDocena,
            costoTransporte;
    const float descuento=0.12;
    int cantidadDocena;

    precioDocena=GetValue("el precio por docena");
    costoTransporte=GetValue("el costo de transporte");
    cantidadDocena=(int)GetValue("la cantidad de docenas:");

    Compra objCompra(precioDocena,costoTransporte,cantidadDocena,descuento);

    ImprimirData(objCompra.getImporteCompra(),objCompra.getImporteDescuento(),objCompra.getImportePagar());

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
    cout << "Precio Base de los Libros: S/" << importeCompra << endl;
    cout << "Precio a Descontar: S/" << importeDescuento << endl;
    cout << "Precio Final (+ Costo de Transporte): S/" << importePagar << endl;

}
