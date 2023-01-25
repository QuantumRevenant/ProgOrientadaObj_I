#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &, int, int);
void quickSort(vector<int> &, int, int);

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
    quickSort(vec, 0, n-1);                                 //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    return 0;
}

int partition(vector<int> &vec, int low, int high) {
    int pivot = vec[high];                              //Establece como pivote el último elemento del arreglo
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {             //Recorrido del primer elemento hasta el penúltimo
        if (vec[j] < pivot) {                           //Compara cada elemento con el pivote
            i++;
            swap(vec[i], vec[j]);                       //Se intercambia el elemento actual con primer elemento mayor o igual al pivote
        }
    }
    swap(vec[i + 1], vec[high]);                        //Se intercambia el pivote con el primer elemento de los mayores e iguales al pivote
    return (i + 1);                                     //Se devuelve la ubicación del pivote
}

void quickSort(vector<int> &vec, int low, int high) {  
    if (low < high) {                                   //Verifica que el índice "low" sea menor al índice "high"
        int pi = partition(vec, low, high);             //Establece un pivote
        quickSort(vec, low, pi - 1);                    //Ordena la sublista de menores al pivote
        quickSort(vec, pi + 1, high);                   //Ordena la sublista de mayores al pivote
    }
}