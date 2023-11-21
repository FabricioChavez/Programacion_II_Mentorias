#include <bits/stdc++.h>
#include <fstream>
using namespace std;
template <typename T>
class vector_m{
private:

T * arr;
int max_capacity;
int size;
public:
    explicit vector_m(int maxCapacity=10) : max_capacity(maxCapacity) {
        size=-1;
        arr= new T[maxCapacity];
    }

    void push_m(T data){
        if(size==-1){

            arr[0]=data;
            size=1;
        }else {
            if(size<=max_capacity)
            {
                ++size;
                arr[size-1]=data;
            }


        }
    }

    void pop_back()
    {
        size--;
    }

    T & operator [](int index)
    {   if(index<size)
        return arr[index];
    }

    void insert(int index , T data)
    {

        for (int i = size-1 ; i != index; --i) {
            arr[i]=arr[i-1];
        }
        arr[index]=data;
    }




};

int main(){


//    ofstream salida("ultima_clase_2.txt", ios::app );
//
//    if(!salida)
//    {
//        cerr<<"No se encontro el archivo ..."<<endl;
//        exit(1);
//    }
//
//    string clasificador="CELCIUS";
//    float celcius=25.2;
//   salida<<"UNIDAD DE TEMPERATURA"<<"||||"<<"VAlOR"<<endl;
//    for (int i = 0; i < 10; ++i) {
//        salida<<clasificador<<" "<<celcius<<endl;
//    }
//    float farenheit;
//    string new_word="Farenheit";
//    string prov;
//
//    ifstream lectura("ultima_clase_2.txt" , ios::in);
//
//    if(!lectura)
//    {
//        cerr<<"No se encontro el archivo ..."<<endl;
//        exit(1);
//    }
//cin>> --
//    vector<pair<string , float>> cosa;
//    while (lectura>>prov>>farenheit)
//    {
//        cout<<prov<<"-->"<<farenheit<<endl;
//        cosa.emplace_back(prov,farenheit);
//    }
//
//
//    ofstream conversion("ultima_clase_3.txt", ios::out );
//
//    for(auto valores:cosa)
//    {
//        conversion<<new_word<<" "<<valores.second<<" "<<float((float(9.0/5.0)*float(valores.second))+32.0)<<endl;
//    }

}