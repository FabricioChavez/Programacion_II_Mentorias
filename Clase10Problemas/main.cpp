#include <bits/stdc++.h>
using namespace std;

class punto2d{
private:

    float x , y;

public:

    punto2d(float x, float y) : x(x), y(y) {}

    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

    void setX(float x) {
        punto2d::x = x;
    }

    void setY(float y) {
        punto2d::y = y;
    }


    void print(){

        cout<<getX()<<" , "<<getY()<<" , ";
    }

    virtual ~punto2d() {

    }




};

class  punto3d: public punto2d // modo public como en modo privado
{
private:
    float z;
    float getZ() const {
        return z;
    }


public:
    punto3d(float x, float y, float z) : punto2d(x, y), z(z) {}


    void print()
    {
        punto2d::print();
        cout<<z<<endl;

    }


    float calcular_distancia( punto3d beta ) {

        return sqrt(pow(getX()-beta.getX(),2)+pow(getY()-beta.getY(),2) + pow(getZ()-beta.getZ(),2));
    }
};

class figura {
public:
    figura(){

    }
    virtual void nombre() = 0;
    virtual float calcular_area() =0;

};

class  triangulo:public  figura{
private:
    float altura , base ;

public:
    triangulo(float altura, float base) : altura(altura), base(base) {}

    void nombre() override{
        cout<<"Triangulo"<<endl;
    }

    float calcular_area() override{
        return  base*altura/2.0;
    }



};


class  circulo : public  figura {

private:
    float radio;
public:
     circulo(float radio) : radio(radio) {}

    void nombre() override{
        cout<<"Circulo"<<endl;
    }


    float calcular_area() override{

         return  float(M_PI*radio*radio);

     }


};


class rectangulo: public  figura{
private:
    float ancho , largo ;
public:
    rectangulo(float ancho, float largo) : ancho(ancho), largo(largo) {}
    void nombre() override {
        cout << "Rectangulo" << endl;
    }

        float calcular_area() override{
        return ancho*largo;
    }

};




int main(){

//    figura * tri = new triangulo(4,5);
//    figura * ci = new circulo(2.5);
//    figura * rec = new rectangulo (4 , 5);
//
////    cout<<(*tri).calcular_area()<<endl;//tri->calcular_area()
////    cout<<rec->calcular_area()<<endl;
////    cout<<ci->calcular_area()<<endl;
//
//    vector<figura*> figures;
//    figures.push_back(tri);
//    figures.push_back(ci);
//    figures.push_back(rec);
//
//    for(auto fig:figures)
//    {
//
//        fig->nombre();
//        cout<<fig->calcular_area()<<endl;
//    }




    punto3d alfa(1,2,3);

   alfa.print();
    return 0;

}