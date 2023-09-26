#include <iostream>
#include <vector>
#include <iomanip>
using  namespace std;
void Fill_M(int ** M  , int F , int C)
{
    for (int i = 0; i < F; ++i) {
        for (int j = 0; j < C; ++j) {
            M[i][j] = (rand()%100)+1;
        }
    }
}

void print_M(int ** M  , int F , int C)
{
    for (int i = 0; i < F; ++i) {
        for (int j = 0; j < C; ++j) {
            cout<<setw(3)<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void split(int ** M ,int ** M1 , int ** M2  , int F , int C   )
{

        for (int i = 0; i < F; ++i) {
            for (int j = 0; j < C; ++j) {

                if(j<C/2)
                {
                    M1[i][j]=M[i][j];
                }
                else{
                    M2[i][j%3]=M[i][j];

                }
            }
        }
}


int main()
{

    int F , C ;
    srand(time(nullptr));

        cout<<"Introducir los valores F y C en ese orden "<<endl;
        cin>>F>>C;


    int** M = new int *[F];
    int** M1 = new int *[F];
    int** M2 = new int *[F];
    for (int i = 0; i < F; ++i) {
        M[i] = new int[C];
    }
    for (int i = 0; i < F; ++i) {
        M1[i] = new int[C/2];
        M2[i] = new int[C/2];
    }
    Fill_M(M , F , C);
    cout<<"----------M-------"<<endl;
    print_M(M , F , C );
    split(M , M1 , M2 , F , C);
    cout<<"----------M1-------"<<endl;
    print_M(M1 , F  , C/2);
    cout<<"----------M2-------"<<endl;
    print_M(M2 , F  , C/2);



}