#include <bits/stdc++.h>
using namespace std;

//
//class punto{//atributos y comportamientos
//private:
//    int x_;
//    int y_;
//    int *array;
//public:
//   punto (){//por defecto no tiene parametros
//       x_=0;
//       y_=0;
//   }
//    punto (int x , int y):x_(x),y_(y){//constructor estandar
//
//    }
//    punto (const punto & other){ // constructor por copia
//       x_=other.x_;
//       y_=other.y_;
//
//   }
//
//   void display() const{
//
//       cout<<this->x_<<"  "<<this->y_<<endl;
//   }
//
//    int getX() const {
//        return x_;
//    }
//
//    int getY() const {
//        return y_;
//    }
//
//    ~punto(){
//       cout<<"BORRADO ...";
//       delete array;
//   }
//
//};

class punto2d {

private: // usualmente atributos
    int x_ , y_ ;
    int *z;
public:
    punto2d(){
        x_=0;
        y_=0;
        z = new int[10];
    }

    punto2d(int x , int y):x_(x),y_(y){

    }

    punto2d(const  punto2d& other){
        x_=other.x_;
        y_=other.y_;
        z = other.z;
    }

    punto2d(int x, int y, int *z) : x_(x), y_(y), z(z) {

    }

    void print(){

        cout<<"( "<<x_ <<" , "<<y_<<")"<<endl;
    }

    double distance(const punto2d& other){

        return sqrt(pow(x_-other.x_,2) + pow(y_-other.y_,2));
    }


    int getX() const {
        return x_;
    }

    int getY() const {
        return y_;
    }

    int *getZ() const {
        return z;
    }

    void setX(int x) {
        x_ = x;
    }

    void setY(int y) {
        y_ = y;
    }

    void setZ(int *z) {
        punto2d::z = z;
    }

    ~punto2d(){
        delete z;
    }



};

struct punto2d_beta{
    int x , y;


};



int main(){

//    vector<punto2d*> puntos;
//    auto* a = new punto2d(1,1);
//    auto* b = new punto2d(2,2);
//    auto* c= new punto2d(4,3);
//    auto* d= new punto2d(5,5);
//
//    puntos.push_back(a);
//    puntos.push_back(b);
//    puntos.push_back(c);
//    puntos.push_back(d);
//
//
//
//    double min = a->distance(*b);
//    for (int i = 0; i < puntos.size(); ++i) {
//        for (int j = i+1; j < puntos.size(); ++j) {
//
//            if(min> puntos[i]->distance(*puntos[j]) )
//                min=puntos[i]->distance(*puntos[j]);
//        }
//    }
//
//    cout<<min<<endl;


punto2d b(3,3);
punto2d a(b);

a.print();


    return 0;
};