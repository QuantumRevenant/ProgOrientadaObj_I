#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
Ingresar N pensiones a un arreglo, para luego imprimir la cantidad de veces
que se repite la pensión. Ejemplo: si el arreglo tiene los siguientes datos:
300,200,300,300,400,400,800,200, debe imprimir 300 3, 200 2, 400  2, 800 1

*/

struct Repeticion
{
    float pension;
    int cantidad = 0;
};

class Controller
{
private:
    vector<float> pensiones;
    vector<Repeticion> repeticiones;

public:
    Controller();
    Controller(vector<float>);
    ~Controller();
    void addPension(float);
    float getPension(int);
    void countPension();
    void getRepeticiones(vector<Repeticion> &);
    void printPosRepeticion(int);
};

Controller::Controller() {}
Controller::~Controller() {}
Controller::Controller(vector<float> datos)
{
    for (int i = 0; i < datos.size(); i++)
    {
        pensiones.push_back(datos[i]);
    }
}
void Controller::addPension(float dato)
{
    pensiones.push_back(dato);
}
float Controller::getPension(int pos)
{
    if (pos >= pensiones.size())
    {
        cout << "ERROR - Posición introducida en getPension es mayor al tamaño de la lista" << endl;
        return -1;
    }
    else
    {
        return pensiones[pos];
    }
}
void Controller::countPension()
{
    repeticiones.clear();
    Repeticion temporal;
    int key = 0,
        contador = 0,
        i, j, k;
    
    for (i = 0; i < pensiones.size(); i++)
    {
        key = pensiones[i];
        j = contador = 0;
        while (j < repeticiones.size() && contador == 0)
        {
            if (key == repeticiones[j].pension)
                contador++;
            j++;
        }
        if (contador == 0)
        {
            for (k = 0; k < pensiones.size(); k++)
            {
                if (key == pensiones[k])
                    contador++;
            }
            temporal.cantidad=contador;
            temporal.pension=key;
            repeticiones.push_back(temporal);
        }
    }
}

void Controller::getRepeticiones(vector<Repeticion> &datos)
{
    countPension();
    datos.clear();
    for (int i = 0; i < repeticiones.size(); i++)
    {
        datos.push_back(repeticiones[i]);
    }
}

void Controller::printPosRepeticion(int pos)
{
    if (pos >= repeticiones.size())
    {
        cout << "ERROR - Posición introducida en printPosRepeticion es mayor al tamaño de la lista" << endl;
    }
    else
    {
        cout<< repeticiones[pos].pension<<" "<<repeticiones[pos].cantidad<<endl;
    }
}

int main(int argc, char *argv[])
{
    int cantidad;
    float pension;
    vector<float> pensiones;
    vector<Repeticion> reps;
    cin>>cantidad;

    for(int i=0; i<cantidad;i++)
    {
        cin>>pension;
        pensiones.push_back(pension);
    }

    Controller objController(pensiones);

    objController.getRepeticiones(reps);

    for(int i=0;i<reps.size();i++)
    {
        objController.printPosRepeticion(i);
    }

    return 0;
}