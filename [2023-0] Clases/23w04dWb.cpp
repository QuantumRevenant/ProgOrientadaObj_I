#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

*/

int main(int argc, char *argv[])
{
    vector<int> numero;
    vector<string> nombres;

    numero.push_back(10);
    numero.push_back(15);
    numero.push_back(16);
    numero.push_back(17);
    numero.push_back(20);
    nombres.push_back("pepe");

    cout<<numero[4]<<endl;
    cout<<numero.size()<<endl;

    return 0;
}