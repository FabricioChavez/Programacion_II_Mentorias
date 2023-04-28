#include <bits/stdc++.h>
using namespace std;
void printearM(int** M , int f, int c)
{
    for (int i = 0; i < f ; ++i) {
        for (int j = 0; j < c; ++j) {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
void fillM(int** M , int f, int c)
{
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin>>M[i][j];
        }
    }

}
int sumar_bordes ( int ** origen , int f , int c)
{ int val=0;
    for (int i = 0; i < f ; ++i) {
        for (int j = 0; j < c; ++j) {
            if(i==0 or j==c-1 or i==f-1 or j==0)
            {
                val+=origen[i][j];
            }
        }
    }
    return val;


}
int main() {

    int f,c;
    cin>>f>>c;
    srand(time(nullptr));
    int** M1,**M2;
    M1=new int*[f];
    for (int i = 0; i < f; ++i) {
        M1[i]=new int[c];
    }
    fillM(M1,f , c);
    printearM(M1,f,c);
    cout<<"la suma bordes es :"<<sumar_bordes(M1,f,c);



}
