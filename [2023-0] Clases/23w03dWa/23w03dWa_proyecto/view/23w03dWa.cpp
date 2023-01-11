#include <iostream>
#include <string>
#include "../model/docente.cpp"

using namespace std;

/*

*/

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
    cout << "Codigo:" << x.getCodigo() << endl;
    cout << "Nombre:" << x.getNombre() << endl;
    cout << "Dni:" << x.getDni() << endl;
    cout << "Sueldo:" << x.getSueldo() << endl;
}