#include <bits/stdc++.h>
using namespace std;
void printearM(int** M, int n);
void fillM(int**M, int n);
int sumar_dig ( int ** origen , int lado )
{ int val=0;
    for (int i = 0; i < lado ; ++i) {
        for (int j = 0; j < lado; ++j) {
           if(i==j)
               val+=origen[i][j];
        }
    }
    return val;


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
    cout<<"la suma diagonal es :"<<sumar_dig(M1,n);



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
            M[i][j]=rand()%100+1;
        }
    }

}