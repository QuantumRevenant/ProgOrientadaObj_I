#include <iostream>

using namespace std;

void mergeSort(int *, int, int);
void merge(int *, int, int, int);

int main(int argc, char const *argv[]) {
    int n, i;
    cout << "Ingrese el número de elementos: ";             // Cantidad de Elementos
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {                               //Ingresar todos los Elementos
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);                               //Ordenar Lista
    cout << "Lista ordenada: ";                             //Imprimir Lista
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Función para dividir la lista en dos sublistas
void mergeSort(int *a, int start, int end) {
    if (start < end) {                  //Si tenemos más de 1 elemento (o no incluimos valores errados)
        int mid = (start + end) / 2;    //Segmentamos en 2 la lista
        mergeSort(a, start, mid);       //Rellamamos la funcion con la sublista 1
        mergeSort(a, mid + 1, end);     //Rellamamos la funcion con la sublista 2
        merge(a, start, mid, end);      //Unimos la sublista 1 y 2 y ordenamos
    }
}

// Función para combinar las sublistas ordenadas
void merge(int *a, int start, int mid, int end) {
    int i, j, k, temp[end - start + 1];
    i = start;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= end) {      //Condicional para mantenerme en rango
        if (a[i] < a[j]) {              //Si a[i]<a[j] guardamos el valor de a[i]
            temp[k] = a[i];
            k++;
            i++;
        } else {                        //Si a[i]>a[j] guardamos el valor de a[j]
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {                  //Evitar perdida de valores
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= end) {                  //Evitar perdida de valores
        temp[k] = a[j];
        k++;
        j++;
    }
    for (i = start; i <= end; i++) {    //Guardamos la lista ya ordenada
        a[i] = temp[i - start];
    }
}