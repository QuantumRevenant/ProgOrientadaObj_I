#include <iostream>

using namespace std;

class Docente
{
private:
    int codigo;
    string nombre;
    string dni;
    int horasTrabajadas;
    float tarifaHora;

public:
    Docente(int, string, string, int, float);
    void setHorasTrabajadas(int);
    int getCodUsuario();
    string getNombre();
    string getDni();
    float getSueldo();
};
// Implementar
Docente::Docente(int codigo, string nombre, string dni, int horasTrabajadas, float tarifaHora)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->dni = dni;
    this->horasTrabajadas = horasTrabajadas;
    this->tarifaHora = tarifaHora;
}
void Docente::setHorasTrabajadas(int horasTrabajadas)
{
    this->horasTrabajadas = horasTrabajadas;
}
int Docente::getCodUsuario()
{
    return this->codigo;
}
string Docente::getNombre()
{
    return this->nombre;
}
string Docente::getDni()
{
    return this->dni;
}
float Docente::getSueldo()
{
    return horasTrabajadas * tarifaHora;
}
// prototipos de la funcion main
void listado(Docente x);
int main(int argc, char *argv[])
{
    // Crear el objeto
    Docente objDocente(1, "Carlos Panta", "16969658", 40, 40);
    listado(objDocente);
    objDocente.setHorasTrabajadas(50);
    cout << "Sueldo 02:" << objDocente.getSueldo() << endl;
    return 0;
}
// Implementar
void listado(Docente x)
{
    cout << "Codigo:" << x.getCodUsuario() << endl;
    cout << "Nombre:" << x.getNombre() << endl;
    cout << "Dni:" << x.getDni() << endl;
    cout << "Sueldo:" << x.getSueldo() << endl;
}