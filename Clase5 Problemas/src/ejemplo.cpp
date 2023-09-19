#include <iostream>
#include <vector>
#include <iomanip>
using  namespace std;
struct lista{
    int *ptr= new int [2];

    lista(){
        ptr[0]=20;
        ptr[1]=50;
    }

};
void Fill_Letters(string * arr , int f , int c)
{
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            arr[i][j]=char('A'+rand()%26);
        }
    }

}
void print_M(string * arr , int f , int c)
{
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout<<setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void buscar(string * soup , int f , string target  )
{
    pair<int , int > coordenas;
    bool encontrado = false;
    for (int i = 0; i < f; ++i) {
        if(soup[i].find(target)!=-1)
        {
            coordenas= make_pair(i,soup[i].find(target));
            encontrado= true;
        }

    }

if(encontrado)
{
    cout<<"INICIO"<<"("<<coordenas.first<<" , "<<coordenas.second<<")"<<endl;
    cout<<"FINAL"<<"("<<coordenas.first<<" , "<<coordenas.second+target.size()-1<<")"<<endl;


}else cout<<"NO SE ENCONTRO PALABRA"<<endl;



}


void fill(int ** M , int f  , int c)
{
    for (int i = 0; i < f ; ++i) {
        for (int j = 0; j < c; ++j) {
            M[i][j]=rand()%5+1;
        }
    }

}

void printearM(int** M , int f , int c)
{
    for (int i = 0; i < f ; ++i) {
        for (int j = 0; j < c; ++j) {
            cout<<M[i][j]<<" "; // M**
        }
        cout<<endl;
    }

}

int main()
{

//    //Reservar memoria
//    int f ,c ;
//    cin>>f>>c;
//    int  **a = new int*[f]; //  Reservar memoria para un arreglo de punteros // F
//    for (int i = 0; i < f; ++i) { // C //reservar memoria para cada arreglo de valores
//        a[i]= new int [c];
//    }
//    //LLenar de numeros aleatorios
//    fill(a, f ,c);
//    //Imprimir la matriz
//    printearM(a , f ,c);
//
//
//    for (int i = 0; i < f; ++i) {
//        delete a[i];
//    }
//    delete *a;
//



}