#include <iostream>
#include <algorithm>
using namespace std;

int moda(int arr[], int size) {
    sort(arr, arr + size); // Ordena el arreglo

    int rep = 1;
    int moda = arr[0];
    int repMax = 1;
    int *ptr = arr + 1; // Puntero al segundo elemento del arreglo

    while (ptr < arr + size) {
        if (*ptr == *(ptr - 1)) { // Si el elemento actual es igual al anterior
            ++rep;
        } else {
            if (rep > repMax) { // Si se encontró una moda más grande
                repMax = rep;
                moda = *(ptr - 1);
            }
            rep = 1;
        }
        ++ptr;
    }

    if (rep > repMax) { // Revisa el último conjunto de elementos repetidos
        repMax = rep;
        moda = *(ptr - 1);
    }

    return moda;
}

int main() {
    int arr[] = {1, 32, 6, 5, 4, 32, 6, 8,32};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = moda(arr, size);

    cout << "La moda del arreglo es: " << mode << endl;

    return 0;
}
