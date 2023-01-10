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
    float getSuma()
    {
        return numero1 + numero2;
    }
};

int main(int argc, char *argv[])
{
    // Crear una instancia de la clase
    CSuma objSuma;
    cout<<"La Suma es: "<<objSuma.getSuma()<<endl;

    CSuma objSuma2(20,20);
    cout<<"La Suma es: "<<objSuma2.getSuma()<<endl;

    return 0;
}