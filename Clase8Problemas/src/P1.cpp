#include <iostream>
#include <vector>
using namespace std;
class ingreso{
private:
    int mes_;
    double monto_;
public:
    ingreso(int mes ,double monto):mes_(mes),monto_(monto){

    }
    ~ingreso(){

    }

    int getMes() const {
        return mes_;
    }

    double getMonto() const {
        return monto_;
    }

    void setMes(int mes) {
        mes_ = mes;
    }

    void setMonto(double monto) {
        monto_ = monto;
    }
};
class Persona{
private:
    string nombre_;
    string ruc_;
    vector<ingreso*> ingreso_mes;
public:
    Persona(string nombre , string ruc):nombre_(nombre),ruc_(ruc){

        for (int i = 0; i < 12; ++i) {
            ingreso_mes.push_back(new ingreso(i+1,0.0));
        }
    }
    void  insertarIngreso(ingreso * nuevo_ingreso){
            int mes = nuevo_ingreso->getMes();
            double  montoTemp = ingreso_mes[mes-1]->getMonto();
            ingreso_mes[mes-1]->setMonto(montoTemp+nuevo_ingreso->getMonto());
    }

    double calcular_impuesto(){
        double sum=0.0;
        for(auto ingreso : ingreso_mes)
        {
            sum+=ingreso->getMonto();
        }
        return sum*0.05;
    }

    void display(){

        for(auto ingreso : ingreso_mes)
        {
                cout<<"Para el mes "<<ingreso->getMes()<<"el monto fue -->"<<ingreso->getMonto()<<endl;
        }

        cout<<"El impuesto anual fue :"<< calcular_impuesto();


    }
};


int main(){
    Persona primera("WWW","745684");
    primera.insertarIngreso(new ingreso(2,325.6));
    primera.insertarIngreso(new ingreso(1,125.6));
    primera.insertarIngreso(new ingreso(3,500.6));
    primera.display();


    return 0;
}