// TRABAJAMOS SOBRE EL ARCHIVO 23w04dWc.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

*/

void addArray(vector<int> &);
void listOfItems(vector<int> &);
int getSuma(vector<int> &);
int getFactorial(vector<int> &);

int main(int argc, char *argv[])
{
    vector<int> numero;

    addArray(numero);
    listOfItems(numero);
    cout << getSuma(numero) << endl;

    getFactorial(numero);
    return 0;
}

void addArray(vector<int> &numero)
{
    string flag;
    int n,
        count = 0;
    do
    {
        count++;
        cout << "Ingrese numero (" << count << "): ";
        cin >> n;
        numero.push_back(n);
        cout << "Continuar (S/s): ";
        cin >> flag;
    } while (flag == "S" || flag == "s");
}

void listOfItems(vector<int> &numero)
{
    for (int x : numero)
    {
        cout << x << endl;
    }

    // for (int i = 0; i < numero.size(); i++)
    // {
    //     cout << numero[i] << endl;
    // }
}

int getSuma(vector<int> &n)
{
    int suma=0;

    for (int x : n)
        suma += x;

    return suma;
}

int getFactorial(vector<int> &n)
{
    int temporal;
    for(int x:n)
    {
        temporal=1;
        for(int i=1;i<=x;i++)
        {
            if(i!=1)
                cout<<"x";
            cout<<i;
            temporal*=i;            
        }
        cout<<"="<<temporal<<endl;
    }
}