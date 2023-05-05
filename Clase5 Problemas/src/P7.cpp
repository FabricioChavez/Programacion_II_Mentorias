#include <iostream>
#include <iomanip>
using namespace std;
void printearM(int** M , int n)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<setw(3)<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
void fillM(int**M, int n)
{   int val;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i<=j)
            {
                val=rand()%5+1;
                M[i][j]=val;
                M[j][i]=val;

            }

        }
    }

}

int main(){
    int n;
    cout<<"Orden de la matriz cuadrada :";
    cin>>n;
    int ** M1 = new int *[n];

    for (int i = 0; i < n; ++i) {
        M1[i]= new int[n];
    }
    fillM(M1,n);
    cout<<"RESULT"<<endl;
    printearM(M1,n);





    return 0;
}

