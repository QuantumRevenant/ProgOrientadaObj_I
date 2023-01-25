#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

*/

class alumno
{
private:
    int codigo;
    string nombre;

public:
    alumno();
    alumno(int, string);
    ~alumno();
    int getCodigo();
    string getNombre();
};

alumno::alumno()
{

}

alumno::alumno(int codigo, string nombre)
{
    this->codigo=codigo;
    this->nombre=nombre;
}

alumno::~alumno()
{
    
}

int alumno::getCodigo()
{
    return this->codigo;
}

string alumno::getNombre()
{
    return this->nombre;
}

int main(int argc, char *argv[])
{
    alumno* objAlumn=new alumno(1,"daniel");

    cout<<objAlumn->getCodigo()<<endl;

    delete objAlumn;
    return 0;
}