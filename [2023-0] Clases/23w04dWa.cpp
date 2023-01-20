#include <iostream>
#include <string>

using namespace std;

/*

*/

void imprimirSerie(int k)
{
    if(k%2==0)
        cout<<"k es par, comenzaremos con el impar inferior: "<<k-1<<endl<<endl;

    int n = (k + 1) / 2;

    if (n <= 1)
        cout << endl;
    else
    {
        cout << ((2 * n) - 1) << "/" << ((2 * (n - 1) - 1));
        if (n - 1 > 1)
            cout << ", ";
        imprimirSerie(k - 2);
    }
}

int main(int argc, char *argv[])
{
    imprimirSerie(20);
    return 0;
}