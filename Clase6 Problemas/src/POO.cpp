#include <iostream>
#include <vector>
using namespace std;


class punto{//atributos y comportamientos
private:
    int x_;
    int y_;
    int *array;
public:
   punto (){//por defecto no tiene parametros
       x_=0;
       y_=0;
   }
    punto (int x , int y):x_(x),y_(y){//constructor estandar

    }
    punto (const punto & other){ // constructor por copia
       x_=other.x_;
       y_=other.y_;

   }

   void display() const{

       cout<<this->x_<<"  "<<this->y_<<endl;
   }

    int getX() const {
        return x_;
    }

    int getY() const {
        return y_;
    }

    ~punto(){
       cout<<"BORRADO ...";
       delete array;
   }

};



int main(){

vector<punto*> coordenadas;

coordenadas.push_back(new punto(3,4));
coordenadas.push_back(new punto(1,1));
coordenadas.push_back(new punto(2,6));




for(auto punto_particular : coordenadas)
{
    punto_particular->display();
    cout<<endl;
}

    return 0;
};