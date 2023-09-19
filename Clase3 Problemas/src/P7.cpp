#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print_norepetidos(int arr[], int size) {
  int *ptr=arr;
  int max=*ptr;
  int *ptr2=arr;
    for (int i = 0; i < size; ++i,ptr++) {
        if(max<*ptr)
            max=*ptr;
    }

    bool repetidos[max+1];
    for (int i = 0; i < max+1; ++i) {
        repetidos[i]= true;
    }

    for (int i = 0; i < size; ++i,ptr2++) {
        if(repetidos[*ptr2])
        {
            cout<<*ptr2<<" ";
            repetidos[*ptr2]= false;
        }
    }


}

int main() {
    int arr[] = {1, 32, 6, 5, 4, 32, 6, 8,32}; //vector.size()
    int size = sizeof(arr) / sizeof(arr[0]);
    print_norepetidos(arr, size);


    return 0;
}
