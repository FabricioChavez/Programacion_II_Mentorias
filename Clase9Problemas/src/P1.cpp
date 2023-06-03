#include <iostream>
#include <vector>
#include <string>
using namespace std;
class habitacion{
public:
    habitacion(int ncamas, bool isDisponible) : ncamas_(ncamas), is_disponible(isDisponible) {}

    virtual ~habitacion() {

    }

    int getNcamas() const {
        return ncamas_;
    }

    bool isDisponible() const {
        return is_disponible;
    }

    void setNcamas(int ncamas) {
        ncamas_ = ncamas;
    }

    void setIsDisponible(bool isDisponible) {
        is_disponible = isDisponible;
    }

private:

    int ncamas_;
    bool is_disponible;

};

class Hotel{
public:
    Hotel(string name):nombre(name){

        bool  dis= true;
        for (int i = 0; i < 10; ++i) {

            auto * nueva = new habitacion(2,dis);
            insert(nueva);
            dis=!dis;

        }
    }

    virtual ~Hotel() {

    }

    void insert(habitacion * nueva_hab){

        habitaciones.push_back(nueva_hab);
    }

    int calcular(){
        int cont=0;
        for(auto v:habitaciones)
        {
            if(v->isDisponible())
                cont++;
        }

        return cont;
    }

    void display(){

        for(auto v:habitaciones)
        {
            cout<<"Numero de camas  :"<<v->getNcamas()<<endl;
            cout<<boolalpha<<"Disponibilidad   "<<v->isDisponible()<<endl;

        }

    }

private:

    string nombre;
    vector<habitacion*> habitaciones;





};

int main(){

    Hotel real("real");
    real.display();
    cout<<endl;
    cout<<real.calcular();

    return 0;
}