// TRABAJAMOS SOBRE EL ARCHIVO 23w02dFa.cpp

#include <iostream>
#include <string>

using namespace std;

/*
CLASE PARA HALLAR SUMA DE 2 NUMEROS
*/

class CSuma
{
private:
    float numero1;
    float numero2;

public:
    CSuma()
    {
        numero1 = 10;
        numero2 = 20;
    }
    CSuma(float numero1, float num2)
    {
        this->numero1=numero1;
        numero2=num2;
    }
    void setNumero1(float numero1)
    {
        this->numero1=numero1;
    }
    void setNumero2(float numero2)
    {
        this->numero2=numero2;
    }
    float getNumero1()
    {
        return numero1;
    }
    float getNumero2()
    {
        return numero2;
    }
    float getSuma()
    {
        return numero1 + numero2;
    }
};

int main(int argc, char *argv[])
{
    float   num1,
            num2;
    
    cout<<"Ingresar Numero 01: ";
    cin>>num1;
    cout<<"Ingresar Numero 02: ";
    cin>>num2;

    CSuma objSuma2;

    objSuma2.setNumero1(num1);
    objSuma2.setNumero2(num2);
    cout<<"El numero 01 es: "<<objSuma2.getNumero1()<<endl;
    cout<<"El numero 02 es: "<<objSuma2.getNumero2()<<endl;
    cout<<"La Suma es: "<<objSuma2.getSuma()<<endl;

    return 0;
}
