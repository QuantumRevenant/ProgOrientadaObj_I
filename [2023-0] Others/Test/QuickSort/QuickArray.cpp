#include <iostream>
using namespace std;

int partition(int[], int, int);
void quickSort(int[], int, int);

int main(int argc, char const *argv[]) {                    
    int n;
    cout << "Ingrese el número de elementos: ";             //Cantidad de Elementos
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {                           //Ingresar todos los Elementos
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);                                 //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];                      //Establece como pivote el último elemento del arreglo
    int i = (low - 1);                          

    for (int j = low; j <= high - 1; j++) {     //Recorrido del primer elemento hasta el penúltimo
        if (arr[j] < pivot) {                   //Compara cada elemento con el pivote
            i++;
            swap(arr[i], arr[j]);               //Se intercambia el elemento actual con primer elemento mayor o igual al pivote
        }
    }
    swap(arr[i + 1], arr[high]);                //Se intercambia el pivote con el primer elemento de los mayores e iguales al pivote
    return (i + 1);                             //Se devuelve la ubicación del pivote
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {                           //Verifica que el índice "low" sea menor al índice "high"
        int pi = partition(arr, low, high);     //Establece un pivote
        quickSort(arr, low, pi - 1);            //Ordena la sublista de menores al pivote
        quickSort(arr, pi + 1, high);           //Ordena la sublista de mayores al pivote
    }
}