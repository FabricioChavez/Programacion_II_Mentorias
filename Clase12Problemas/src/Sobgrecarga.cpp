#include <bits/stdc++.h>
using namespace std;

void foo(int a , int b) // void foo
{

}
int foo(int a){ //int foo

}
// + - * / >> << > < []

class  arista{
private:
    int inicio , fin , distancia ;
public:
    arista(int inicio, int fin, int distancia) : inicio(inicio), fin(fin), distancia(distancia) {

    }
    arista(){

    }

    int getInicio() const {
        return inicio;
    }

    int getFin() const {
        return fin;
    }

    int getDistancia() const {
        return distancia;
    }

    void setInicio(int inicio) {
        arista::inicio = inicio;
    }

    void setFin(int fin) {
        arista::fin = fin;
    }

    void setDistancia(int distancia) {
        arista::distancia = distancia;
    }

    // comparaciones devuelven booleanos

    bool operator<(arista other) const{ // sort necesita <
        return  distancia < other.distancia;
    }

     bool  operator==( arista b) const{
         return  inicio == b.inicio and fin == b.fin and distancia == b.distancia;
    }

    bool  operator!=(arista b) const {

        return !(*this == b) ;
    }

    friend ostream & operator<<(ostream & os , arista A) // FRIEND ES NECESARIO
    {

        cout<<"Incio : "<< A.inicio << " Fin : "<<A.fin << " Distancia : "<<A.distancia<<endl;
        return os; // me permite hacer cout concatenado
    }

    arista operator++(){ // Prefijo (antes) ++Arista
       cout<<"SUMANDO"<<endl;
        ++distancia;
        return  *this; // this es basicamente referencia de mi clase
    }

    arista operator++(int){ // Postfijo (despues) Arista++
       auto temp = this; //conserva
       distancia++; // actuliza
        return *temp;           //usa el valor no moficado en el momento
    }

    arista operator+(arista b) const
    {
        arista c;
        c.inicio = this->inicio+b.inicio;
        c.fin = this->fin + b.fin;
        c.distancia = this->distancia + b.distancia;

        return  c;
    }

    arista& operator=(arista other) // por referencia
    {
        if(other != *this) // reutilizar sobrecargas // verificar si no son iguales
        {
           this->inicio = other.inicio;
           this->fin = other.fin;
           this->distancia = other.distancia;

            return *this;
        }else return  *this;
    }




};

class  Varista{
private:
    arista* coleccion;
    int c_size=4;
    int position=0;
public:
    Varista(){
        coleccion = new arista[c_size];
    }

    int size() const
    {
        return position;
    }

    void push(arista nuevo){
        coleccion[position] = nuevo;
        position++;
    }
  // como los parametros son iguales debo diferenciarlas de otra forma
    arista operator[](int index)  const   // me permite leer READ
    {                           //const me permite hacer una sobracarga con los mismos parametros
        if(index< Varista::size())
            return coleccion[index];
        else return arista();
    }


    arista& operator[](int index) // para poder modificar en un index WRITE
    {
        return  coleccion[index];
    }
    // puedo usar () como cocherte o puedo usarla como functor



};


int main(){

arista a(1,2, 5);
arista b(2,3 , 2);
arista c(1 , 4 , 3);
arista d(4 , 5 , 7);

arista f = a+b;
Varista alfa;
alfa.push(a);
alfa.push(b);
alfa.push(c);
alfa.push(d);

alfa[2]=f;
cout<<alfa[2];


//b++;
//b++;
//
//arista f;
//
//f = a+b;
//
//if(a==b)
//    cout<<"SON IGUALES"<<endl;
//
//if(a!=b)
//    cout<<"SON DIFERENTES"<<endl;
//
//
//
//vector<arista> aristas{a , b ,c ,f}; // inicializacion por lista
//
//sort(aristas.begin() , aristas.end() );
//
//for(auto  A:aristas)
//{
//    cout<<A<<" ";
//}
//int i=0;
//vector<int> alfa {1,2,3};
//cout<<alfa[++i]; //i++
//cout<<endl;
}