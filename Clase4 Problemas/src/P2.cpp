
#include <bits/stdc++.h>
using namespace std;
void printearM(int** M, int n);
void fillM(int**M, int n);
void Sumrara(int **M1, int ** M2 , int**M3 , int n);
void Rotahor(int**M1, int **M2, int n);
int main() {

    int n;
    cin>>n;
    srand(time(nullptr));
    int** M1,**M2, **M3,**M4;
    M1=new int*[n];
    M2=new int*[n];
    for (int i = 0; i < n; ++i) {
        M1[i]=new int[n];
        M2[i]=new int[n];


    }
    fillM(M1,n);
    printearM(M1, n);
    cout<<endl;
    Rotahor(M1,M2,n);
    printearM(M2,n);

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
void Rotahor(int**M1, int **M2, int n)
{

    int** M;
    M=new int*[n];
    for (int i = 0; i < n; ++i) {
        M[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            M[i][j]=M1[j][i];
        }
    }
    int col=0;
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >=0; j--) {
            M2[i][col]=M[i][j];
            col++;
        }
        col=0;
    }


}