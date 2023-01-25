#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &, int, int);
void merge(vector<int> &, int, int, int);

int main(int argc, char const *argv[]) {
    int n, i;
    cout << "Ingrese el número de elementos: ";             //Cantidad de Elementos
    cin >> n;
    vector<int> vec;
    for (i = 0; i < n; i++) {                               //Ingresar todos los Elementos
        int element;
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> element;
        vec.push_back(element);
    }
    mergeSort(vec, 0, n - 1);                               //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (i = 0; i < n; i++)
        cout << vec[i] << " ";
    return 0;
}

// Función para dividir la lista en dos sublistas
void mergeSort(vector<int> &vec, int start, int end) {
    if (start < end) {                  //Si tenemos más de 1 elemento (o no incluimos valores errados)
        int mid = (start + end) / 2;    //Segmentamos en 2 la lista
        mergeSort(vec, start, mid);     //Rellamamos la funcion con la sublista 1
        mergeSort(vec, mid + 1, end);   //Rellamamos la funcion con la sublista 2
        merge(vec, start, mid, end);    //Unimos la sublista 1 y 2 y ordenamos
    }
}

// Función para combinar las sublistas ordenadas
void merge(vector<int> &vec, int start, int mid, int end) {
    int i, j, k;
    vector<int> temp;
    i = start;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= end) {      //Condicional para mantenerme en rango
        if (vec[i] < vec[j]) {          //Si vec[i]<vec[j] guardamos el valor de vec[i]
            temp.push_back(vec[i]);
            i++;
        } else {                        //Si vec[i]<vec[j] guardamos el valor de vec[i]
            temp.push_back(vec[j]);
            j++;
        }
    }
    while (i <= mid) {                  //Evitar perdida de valores
        temp.push_back(vec[i]);
        i++;
    }
    while (j <= end) {                  //Evitar perdida de valores
        temp.push_back(vec[j]);
        j++;
    }
    for (i = start; i <= end; i++) {    //Guardamos la lista ya ordenada
        vec[i] = temp[i - start];
    }
}