#include <iostream>
using namespace std;

void insertionSort(int[], int);

int main(int argc, char const *argv[]) {                    
    int n;
    cout << "Ingrese el número de elementos: ";             //Cantidad de Elementos
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {                           //Ingresar todos los Elementos
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
    insertionSort(arr, n);                                  //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {                //Recorrido por a lista desde el segundo elemento hasta el último
       key = arr[i];                        //Guardamos en key el elemento a ubicar
       j = i-1;                             //Guardamos en j la posición anterior al elemento

       while (j >= 0 && arr[j] > key) {     //Recorrido por la lista desde la posición actual hacia atrás
           arr[j+1] = arr[j];               //Movemos los elementos mayores a la derecha
           j = j-1;
       }
       arr[j+1] = key;                      //Ubicamos al elemento en su nueva posicion
   }
}
