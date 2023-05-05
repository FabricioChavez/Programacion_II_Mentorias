#include <iostream>
#include <iomanip>
using namespace std;
void printearM(int** M , int n , int m)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<setw(3)<<M[i][j]<<" ";
        }
        cout<<endl;
    }

}
void fillM(int**M, int n , int m)
{
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            M[i][j]=rand()%5+1;
        }
    }

}
void nueva_m2(int ** M1 , int ** M2 , int **M3,  int f , int c)
{

    for (int i = 0; i <f ; ++i) {
        for (int j = 0; j < c; ++j) {

            if(j<c/2)
                M2[i][j]=M1[i][j];
            else if(j >=c/2)  M3[i][j-c/2]=M1[i][j];

        }
    }



}
int main(){
    int f , c ;

    srand(time(nullptr));
    cout<<"ingresa filas :";
    cin>>f;
    cout<<"Ingresa columnas :";
    cin>>c;
    int ** M1 = new int *[f];
    int ** M2;
    int ** M3;
    for (int i = 0; i < f; ++i) {
        M1[i]= new int[c];

    }
    M2 = new int *[f];
    M3 = new int *[f];
    for (int i = 0; i < f; ++i) {
        M3[i]= new int[c/2];
        M2[i]= new int[c/2];
    }
    fillM(M1,f , c);
    cout<<"FIRST" <<endl;
    printearM(M1,f , c);
    nueva_m2(M1,M2, M3,f ,c);

    cout<<endl;
    cout<<"SECOND"<<endl;
    printearM(M3, f ,c/2 );

    cout<<endl;
    cout<<"THIRD"<<endl;
    printearM(M2 , f ,c/2 );





    return 0;
}

