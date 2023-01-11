#include <iostream>
#include <string>

using namespace std;

/*
Determine el IMC con la formula
Correspondiente al valor obtenido, determinar el grado de obesidad
x<20    ->  Delgado
20<=x<25->  Normal
25<=x<27->  SobrePeso
27<=x   ->  Obesidad
*/

class IMC
{
private:
    float peso;
    float estatura;

public:
    IMC();
    IMC(float, float);
    ~IMC();
    float getValorIMC();
    string getGradoObesidad();
};

IMC::IMC()
{
    peso=0;
    estatura=1;
}

IMC::IMC(float peso, float estatura)
{
    this->peso = peso;
    if (estatura == 0)
        this->estatura = 1;
    else
        this->estatura = estatura;
}

IMC::~IMC()
{
}
float IMC::getValorIMC()
{
    return peso / (estatura * estatura);
}
string IMC::getGradoObesidad()
{
    string salida;
    if (getValorIMC() < 20)
        salida = "Delgado";
    else if (getValorIMC() < 25)
        salida = "Normal";
    else if (getValorIMC() < 27)
        salida = "Sobrepeso";
    else
        salida = "Obesidad";
    return salida;
}

float getValue(string);
void printData(string,float);

int main(int argc, char *argv[])
{
    float peso,
            estatura;
    peso=getValue("tu peso (Kg)");
    estatura=getValue("tu estatura (m)");

    IMC objIMC(peso,estatura);

    printData(objIMC.getGradoObesidad(),objIMC.getValorIMC());

    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}

void printData(string data, float value)
{
    cout << "Posee un grado de obesidad: "<<data<<" ("<<value<<" IMC)"<<endl;
}