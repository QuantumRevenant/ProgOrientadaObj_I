#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &, int);

int main(int argc, char const *argv[]) {                    
    int n;
    cout << "Ingrese el número de elementos: ";             //Cantidad de Elementos
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {                           //Ingresar todos los Elementos
        int element;
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> element;
        vec.push_back(element);
    }
    insertionSort(vec, n);                                  //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    return 0;
}

void insertionSort(vector<int> &vec, int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {                //Recorrido por a lista desde el segundo elemento hasta el último
       key = vec[i];                        //Guardamos en key el elemento a ubicar
       j = i-1;                             //Guardamos en j la posición anterior al elemento

       while (j >= 0 && vec[j] > key) {     //Recorrido por la lista desde la posición actual hacia atrás
           vec[j+1] = vec[j];               //Movemos los elementos mayores a la derecha
           j = j-1;                         
       }
       vec[j+1] = key;                      //Ubicamos al elemento en su nueva posicion
   }
}
