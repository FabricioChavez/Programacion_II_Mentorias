
#include <bits/stdc++.h>
using namespace std;
void printearM(int** M, int n);
void fillM(int**M, int n);
void Sumrara(int **M1, int ** M2 , int**M3 , int n);
void RotaAnti(int**M1, int **M2, int n);
int main()
{
    int n;
    cin>>n;
    srand(time(nullptr));
    int** M1,**M2, **M3,**M4;
    M1=new int*[n];
    M2=new int*[n];
    M3=new int*[n];
    M4=new int*[n];
    for (int i = 0; i < n; ++i) {
        M1[i]=new int[n];
        M2[i]=new int[n];
        M3[i]=new int[n];
        M4[i]=new int[n];

    }
    fillM(M1,n);
    fillM(M2,n);
    printearM(M1,n);
    cout<<endl;
    printearM(M2,n);
    Sumrara(M1,M2,M3, n);
    cout<<endl;
    printearM(M3,n);
    RotaAnti(M3 , M4 , n);
    cout<<endl;
    printearM(M4, n);
    for (int i = 0; i < n; ++i) {
        delete[] M1[i];
        delete[] M2[i];
        delete[] M3[i];
        delete[] M4[i];
    }
    delete[] M1;
    delete[] M2;
    delete[] M3;
    delete[] M4;

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
void Sumrara(int **M1, int ** M2 , int**M3 , int n)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==0 or j==0 or i==n-1 or j== n-1)
                M3[i][j]=M1[i][j]+M2[i][j];
            else M3[i][j]=0;
        }
    }
}
void RotaAnti(int**M1, int **M2, int n)
{

    int** M;
    M=new int*[n];
    for (int i = 0; i < n; ++i) {
        M[i] = new int[n];
    }
    int col=0;
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >=0; j--) {
            M[i][col]=M1[i][j];
            col++;
        }
        col=0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            M2[i][j]=M[j][i];
        }
    }


}