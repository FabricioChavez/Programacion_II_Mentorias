#include <bits/stdc++.h>
using namespace std;
void printearM(int** M, int n);
void fillM(int**M, int n);
int ** sumar_cruz ( int ** origen , int lado )
{
    int ** nueva = new int *[lado];
    for (int i = 0; i < lado; ++i) {
        nueva[i]= new int[lado];
    }
        int c=0;
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
        c=0;
           if(j+1<lado)
               c+=origen[i][j+1];


           if(j-1>=0)
               c+=origen[i][j-1];

           if(i+1<lado)
               c+=origen[i+1][j];

           if(i-1>=0)
               c+=origen[i-1][j];


           nueva[i][j]=c+origen[i][j];
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

    cout<<endl;
    M2= sumar_cruz(M1,n);
    cout<<"la suma cruz es :"<<endl;
    printearM(M2,n);

    for (int i = 0; i < n; ++i) {
         delete M1[i];
    }
    delete []M1;



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