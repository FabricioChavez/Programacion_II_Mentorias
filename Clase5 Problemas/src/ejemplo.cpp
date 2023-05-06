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

int main()
{


    srand(time(nullptr));
    int f , c;
    cout<<" Ingresar filas :";
    cin>>f;
    cout<<" Ingresar columnas :";
    cin>>c;
    string * soup = new string [f];
    for (int i = 0; i < f; ++i) {
        soup[i].resize(c);
    }
    Fill_Letters(soup, f ,c );
    cout<<"PRINT SOPA DE LETRAS "<<endl;
    print_M(soup,f , c);
    string s;
    cout<<"Ingresar lo que quiere buscar :";
    cin>>s;
    buscar(soup ,f , s);



//lista * algo = new lista;
//cout<<(*algo).ptr[0]<<endl;
//vector<int > *array = new vector{1,2,3,4};
//cout<<(*array)[1];

}