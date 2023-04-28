#include <bits/stdc++.h>
using namespace std;
void printearM(int** M, int n);
void fillM(int**M, int n);
int ** reducir_matriz ( int ** origen , int lado , int
linea_remover )
{
    int ** nueva = new int *[lado-1];
    for (int i = 0; i < lado-1; ++i) {
        nueva[i]= new int[lado-1];
    }



    for (int i = 0; i < lado; ++i) {
        int ia=(i>linea_remover)?i-1:i;
        for (int j = 0; j < lado; ++j) {

            int ja=(j>linea_remover)?j-1:j;

            if(i!=linea_remover and j != linea_remover)
                nueva[ia][ja]=origen[i][j];

        }
    }

    return nueva;

}
int main() {

    int n;
    cin>>n;
    srand(time(nullptr));
    int** M1,**M2;
    M1=new int*[n];
    for (int i = 0; i < n; ++i) {
        M1[i]=new int[n];
    }
    fillM(M1,n);
    printearM(M1,n);
    int l;
    cout<<"Introducir lado a remover :";
    cin>>l;
    M2=reducir_matriz(M1,n,l);

    printearM(M2,n-1);



}
void printearM(int** M , int n)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
void fillM(int**M, int n)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j]=rand()%5+1;
        }
    }

}