#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class punto2d{
private:
    int x_;
    int y_;
    void foo(){

    }
public:

    punto2d(){
        x_=0;
        y_=0;

    }
    punto2d(int x , int y):x_(x),y_(y){

    }
    ~punto2d(){

    }

    int getX() const {
        return x_;
    }

    int getY() const {
        return y_;
    }

    void display(){

        cout<<"X :"<<x_<<endl;
        cout<<"Y :"<<y_<<endl;

    }


};

struct fecha{
    int dia ;
    int mes ;
    int year;
    vector<punto2d*> coords;

};

float distance( punto2d p1 , punto2d p2){

    return sqrt(pow(p1.getX()-p2.getX(),2)+pow(p1.getY()-p2.getY(),2));
}

int main(){

    punto2d* ptrTopunto2d = new punto2d(3,4);
        vector<int> algo;

    vector<punto2d*> coordenadas;
    int n=3;
    for (int i = 0; i < n; ++i) {
        coordenadas.push_back( new punto2d(5,5));
    }

    for (auto obj:coordenadas) {
      //  (*obj).display();
      obj->display();
        cout<<endl;
    }



//    float minima=10000;
//    for (int i = 0; i <n ; ++i) {
//        for (int j = i+1; j <n ; ++j) {
//            if(minima<distance(coordenadas[i],coordenadas[j]))
//                minima= distance(coordenadas[i],coordenadas[j]);
//        }
//    }
//


    return 0;
}