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
    int getCodUsuario();
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

int alumno::getCodUsuario()
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

    cout<<objAlumn->getCodUsuario()<<endl;

    delete objAlumn;
    return 0;
}