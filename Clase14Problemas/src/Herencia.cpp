#include <bits/stdc++.h>
#include <fstream>
using namespace std;

struct Fecha{
    int dia , mes , year ;

    Fecha(int dia, int mes, int year) : dia(dia), mes(mes), year(year) {}

    Fecha(){

    }
};

class Citas {
private:

    string Descripcion;
    Fecha date;

public:

    Citas(const string &descripcion, const Fecha &date) : Descripcion(descripcion), date(date) {

    }
    Citas(const string &descripcion, int dia , int  mes , int year ) : Descripcion(descripcion) {

        date.dia = dia;
        date.mes = mes ;
        date.year = year;
    }


    virtual void ocurre(int dias , int mes , int year ) = 0;

    const string &getDescripcion() const {
        return Descripcion;
    }

    const Fecha &getDate() const {
        return date;
    }

};

class diario : public Citas{

public:
    diario(const string &descripcion, int dia, int mes, int year) : Citas(descripcion, dia, mes, year) {}

    void ocurre(int dias, int mes, int year) override{
        cout << " SE HIZO LA ACTIVIDAD DIARIA :" << getDescripcion() <<endl;
    }


};
class semanal : public  Citas{

public:
    semanal(const string &descripcion, int dia, int mes, int year) : Citas(descripcion, dia, mes, year) {}
    void ocurre(int dias, int mes, int year) override{

       string print = " SE HIZO LA ACTIVIDAD SEMANAL :" ;
       print+= getDescripcion();

        if(getDate().dia != dias)
         {
             if( getDate().mes == mes )
             {

                 if((dias - getDate().dia)%7 == 0)
                     cout<<print<<endl;

             }else {

                     if(((30-getDate().dia)+dias)%7 == 0)
                         cout<<print<<endl;

             }
         }
    }

};


class Mensual : public  Citas {
public:
    Mensual(const string &descripcion, int dia, int mes, int year) : Citas(descripcion, dia, mes, year) {}
    void ocurre(int dias, int mes, int year) override{
        string print = " SE HIZO LA ACTIVIDAD Mensual :" ;
        print+= getDescripcion();

            if(dias  == getDate().dia)
            {
                cout<<print<<endl;
            }


    }

};

class  Unavez : public Citas{
public:
    Unavez(const string &descripcion, int dia, int mes, int year) : Citas(descripcion, dia, mes, year) {}

    void ocurre(int dias, int mes, int year) override{
        string print = " SE HIZO LA ACTIVIDAD Una vez:" ;
        print+= getDescripcion();
        if(dias == getDate().dia and mes == getDate().mes and year == getDate().year)
        {
            cout<<print<<endl;
        }

    }

};



int main(){



        vector < Citas * > citas ;
        Citas * uv1 = new Unavez ( "Cena Navidad ", 24 , 12 ,
                2020) ;
        Citas * d1 = new diario ("comprar pan", 22 , 12 , 2020 ) ;
        citas . push_back ( uv1 ) ;
        citas . push_back ( d1 ) ;
        for ( auto & cita : citas ) {

            cita-> ocurre (24 , 12 , 2020) ;

        }
// debe imprimir las dos citas



}