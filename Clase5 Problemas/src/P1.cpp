#include <iostream>
using namespace std;
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
int ** nueva_m(int ** M1 , int ** M2 , int n)
{
    int ** M3 = new int *[n];
    for (int i = 0; i < n; ++i) {
        M3[i]= new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n ; ++j) {
            if(M1[i][j]==M2[i][j])
                M3[i][j]=1;
            else M3[i][j]=0;
        }
    }

    return M3;


}
int main(){
    int n;
    cout<<"Orden de la matriz cuadrada :";
    cin>>n;
    int ** M1 = new int *[n];
    int ** M2 = new int * [n];
    int ** Mn;
    for (int i = 0; i < n; ++i) {
        M1[i]= new int[n];
        M2[i]=new int [n];
    }
    fillM(M1,n);
    fillM(M2,n);
    cout<<"FIRST" <<endl;
    printearM(M1,n);

    cout<<endl;
    cout<<"SECOND"<<endl;
    printearM(M2,n);

    Mn= nueva_m(M1, M2, n);
    cout<<endl;
    cout<<"RESULTADO"<<endl;
    printearM(Mn,n);




    return 0;
}

