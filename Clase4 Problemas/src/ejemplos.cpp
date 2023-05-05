#include <iostream>
using namespace std;
void fill(int ** M1 , int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            M1[i][j]=rand()%11;
        }
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
void printearM(int** M , int n)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
int ** sumar_cruz ( int ** origen , int lado )
{
    int **N = new int * [lado];
    for (int i = 0; i < lado; ++i) {
        N[i]=new int [lado];
    }
        int cont=0;
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
                cont=0;
                if(j+1<lado)
                    cont+=origen[i][j+1];

                if(j-1>=0)
                    cont+=origen[i][j-1];

                if(i+1<lado)
                    cont+=origen[i+1][j];

                if(i-1>=0)
                    cont+=origen[i-1][j];

                N[i][j]=cont+origen[i][j];

        }

        return N;
    }



}
int main(){

    srand(time(nullptr));
    int n;
    cin>>n;
    int **M = new int * [n];
    int **N2;
    for (int i = 0; i < n; ++i) {
        M[i]=new int [n];
    }
    fill(M,n);
    printearM(M,n);
    cout<<endl;
    N2=sumar_cruz(M,n);

    printearM(N2,n);



}