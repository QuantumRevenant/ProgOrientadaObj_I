#include <iostream>
#include <string>
#include "../model/Categoria.cpp"

using namespace std;

/*

*/

float getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    float nota;
    char categoria;

    nota = getValue("su nota");
    
    Categoria objCategoria(nota);

    printData("Su categoría es: "+objCategoria.getCategoria());

    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}
 
void printData(string message)
{
    cout << message <<endl;
}