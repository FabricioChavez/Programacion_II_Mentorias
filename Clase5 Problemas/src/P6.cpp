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
           cin>>M[i][j];
        }
    }

}

void ice_break(int ** M , int f , int c , int x , int y){

    if(M[x][y]==1)
    {
        for (int i = 0; i <f ; ++i) {
            for (int j = 0; j <c ; ++j) {
                    M[i][j]=0;
            }
        }


    }else M[x][y]=0;


}

int main(){
    int f =6 ;
    int c=6;

    srand(time(nullptr));
    int ** M1 = new int *[f];
    for (int i = 0; i < f; ++i) {
        M1[i]= new int[c];

    }

    fillM(M1,f , c);
    cout<<"FIRST" <<endl;
    printearM(M1,f , c);
cout<<endl;
int x , y;
cout<<"INGRESE COORDENADAS :";
cin>>x>>y;
    ice_break(M1, f ,c , x ,y);
    cout<<"RESULT" <<endl;
    printearM(M1,f , c);

    return 0;
}

