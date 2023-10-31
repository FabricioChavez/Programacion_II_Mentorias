#include <bits/stdc++.h>
using namespace std;
class Libro{
private:

    string  titulo , autor ;
    int nro_edi, cant_vend;
    double  precio;


public:

    Libro(const string &titulo, const string &autor, int nroEdi, int cantVend, double precio) : titulo(titulo),
                                                                                                autor(autor),
                                                                                                nro_edi(nroEdi),
                                                                                                cant_vend(cantVend),
                                                                                                precio(precio) {}
    Libro(){
        titulo="";
        autor="";
        nro_edi=-1;
        cant_vend=0;
        precio=-1;
    }
    void venta()
    {
        cant_vend++;
    }
    const string &getTitulo() const {
        return titulo;
    }

    const string &getAutor() const {
        return autor;
    }

    int getNroEdi() const {
        return nro_edi;
    }

    int getCantVend() const {
        return cant_vend;
    }

    double getPrecio() const {
        return precio;
    }

    void setTitulo(const string &titulo) {
        Libro::titulo = titulo;
    }

    void setAutor(const string &autor) {
        Libro::autor = autor;
    }

    void setNroEdi(int nroEdi) {
        nro_edi = nroEdi;
    }

    void setCantVend(int cantVend) {
        cant_vend = cantVend;
    }

    void setPrecio(double precio) {
        Libro::precio = precio;
    }

};



class  Libreria{
private:
vector<Libro*> stock;
int cant_vendidos;
double gananciat;
string ultimo , antepenultimo;
public:
    explicit Libreria(const vector<Libro *> &stock) : stock(stock) {

        cant_vendidos=0;
        gananciat=0.0;

    }


    void vender(int index){

        stock[index]->venta();

        if(cant_vendidos>1)
        {
            antepenultimo=ultimo;
            ultimo = stock[index]->getTitulo();
        }else{

            ultimo=stock[index]->getTitulo();
        }

        cant_vendidos++;


    }

    void agregar(Libro * l ){
        stock.push_back(l);
    }

    int obtener_cantidad(){
        return stock.size();
    }

    void informacion(){

        for(auto l:stock)
        {
            cout<<l->getTitulo()<<" "<<l->getPrecio()<<" "<<l->getAutor()<<" "
            <<l->getNroEdi() << " "<<l->getCantVend()<<endl;
        }

    }


    void dosultimos(){

    cout<<"ULTIMO : "<<ultimo<<endl;
    cout<<"ANTEPENULTIMO : "<<antepenultimo<<endl;
    }


    Libro* masvendidos(){

        double most_sold=stock[0]->getCantVend();
        int index=0;
        for (int i = 0; i < stock.size(); ++i) {

            if(most_sold<stock[i]->getCantVend())
            {
                most_sold=stock[i]->getCantVend();
                index=i;
            }
        }

        return stock[index];
    }


    void print_mas_vendido()
    {
        auto *l = masvendidos();
        cout<<l->getTitulo()<<" "<<l->getPrecio()<<" "<<l->getAutor()<<" "
            <<l->getNroEdi() << " "<<l->getCantVend()<<endl;
    }

};

int main(){



}