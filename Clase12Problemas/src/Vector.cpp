#include <bits/stdc++.h>
using namespace std;
template <typename T>
struct Arista{

    T inicio_;
    T final_;
    int peso;
    Arista(T a , T b , int w):inicio_(a),final_(b),peso(w){
    }

    void print()
    {
        cout<<inicio_<<" ,"<<final_;
    }

    bool operator ==(Arista b) const
    {
        return this->inicio_==b.inicio_   and this->final_==b.final_;
    }
   friend bool operator ==(Arista a ,Arista b)
    {
        return a.inicio_==b.inicio_   and a.final_==b.final_;
    }
    bool  operator !=(Arista b)
    {
        return !(*this==b);
    }
    friend ostream & operator<<(ostream & os , Arista& a)
    {
        cout<<a.inicio_<<" ,"<<a.final_<<"--->"<<a.peso<<endl;
        return os;
    }
    Arista operator++(){ //prefijo funciona de forma similar --

        ++inicio_;
        ++final_;
        return *this;

    }
    Arista operator++(int){ //posfijo funciona de forma similar --

        auto temp= this;
        inicio_++;
        final_++;
        return *this;

    }

    bool operator>(Arista generico)
    {
        return this->peso>generico.peso;
    }
    bool operator<(Arista generico)
    {
        return this->peso<generico.peso;
    }
    bool operator>=(Arista generico)
    {
        return this->peso>=generico.peso;
    }
    bool operator<=(Arista generico)
    {
        return this->peso<=generico.peso;
    }

    Arista operator+(Arista b)
    {
        Arista c(this->inicio_+b.inicio_, this->final_+b.final_, this->peso+b.peso);
        return c;

    }

};

struct nodoB{
    int* key;
   vector<nodoB*> next;
    int size;



};
template<typename  T >
bool comparador(T a , T b)
{
    return a==b;
}

bool comparador2(int a , int b)
{

    return a==b;
}



int main(){

//   vector<Arista*> alfa;
//char a , b;
//    for (int i = 0; i < 5; ++i) {
//        cin>>a>>b;
//
//        alfa.push_back( new Arista(a,b));
//    }
//
//    for(auto v:alfa)
//        v->print();

string p1="pa";
string p2="labra";
Arista a(p1,p1,10);
Arista b(p2,p2,15);
//    Arista c(4,4,20);
//    Arista d(-1,-1,1);
//
//vector<Arista<int>> cosa{a,b,c,d};
//
//    sort(cosa.begin() , cosa.end());

//for(auto  edge:cosa)
//    cout<<edge<<endl;

Arista h=a+b;
cout<<h;

}