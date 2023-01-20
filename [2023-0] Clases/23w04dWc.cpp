#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

*/

int main(int argc, char *argv[])
{
    vector<int> numero;
    string flag;
    int n;

    do
    {
        cout << "Ingrese numero: ";
        cin >> n;
        numero.push_back(n);
        cout << "Continuar (S/s): ";
        cin >> flag;
    } while (flag == "S" || flag == "s");

    for (int x : numero)
    {
        cout << x << endl;
    }

    for (int i = 0; i < numero.size(); i++)
    {
        cout << numero[i] << endl;
    }

    return 0;
}