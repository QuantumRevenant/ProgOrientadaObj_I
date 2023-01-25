#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

*/

float getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    vector<float> nota01;
    vector<float> nota02;
    vector<float> nota03;
    string flag;
    float numero;
    int i = 1;

    numero = getValue("el elemento #" + to_string(i) + " de la lista 1: ");
    i++;
    nota01.push_back(numero);
    cout << "Continuar (S/s)";
    cin >> flag;
    while (flag == "S" || flag == "s")
    {
        do
        {
            system("cls");
            if (nota01[nota01.size() - 1] > numero)
                cout << "[ELEMENTO INVALIDO, LISTA DEBE SER ASCENDENTE]" << endl;
            numero = getValue("el elemento #" + to_string(i) + " de la lista 1: ");
        } while (nota01[nota01.size() - 1] > numero);
        i++;
        cout << "Continuar (S/s)";
        cin >> flag;
    }
    system("cls");
    i=1;
    numero = getValue("el elemento #" + to_string(i) + " de la lista 2: ");
    i++;
    nota01.push_back(numero);
    cout << "Continuar (S/s)";
    cin >> flag;
    while (flag == "S" || flag == "s")
    {
        do
        {
            system("cls");
            if (nota02[nota02.size() - 1] < numero)
                cout << "[ELEMENTO INVALIDO, LISTA DEBE SER DESCENDENTE]" << endl;
            numero = getValue("el elemento #" + to_string(i) + " de la lista 1: ");
        } while (nota02[nota02.size() - 1] < numero);
        i++;
        cout << "Continuar (S/s)";
        cin >> flag;
    }

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
    cout << message << endl;
}