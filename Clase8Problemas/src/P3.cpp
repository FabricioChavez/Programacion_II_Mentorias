#include <iostream>
using namespace std;
class bateria{
private:
    string m_serie;
    int m_carga;
public:
    bateria(string series):m_serie(series){
        m_carga=100;
    }

    virtual ~bateria() {

    }

    int getMCarga() const {
        return m_carga;
    }

    void setMCarga(int mCarga) {
        m_carga = mCarga;
    }

};

class celular{
private:
    string marca;
    bateria * bateriapropia;
    int inicial;
public:
    celular(const string &marca, bateria *bateriapropia) : marca(marca), bateriapropia(bateriapropia) {
        inicial = bateriapropia->getMCarga();
    }
    void llamar(string name){

        cout<<"Se esta llamando a"<<name<<"...";
        int temp=bateriapropia->getMCarga();
        bateriapropia->setMCarga(temp-10);
        finalizarllamada();
    }

    void finalizarllamada(){
        cout<<"Se termino la llamada ..."<<endl;

    }

    void Encender(){
        if(bateriapropia->getMCarga()>=0.5*(inicial))
            cout<<"EL CELULAR ENCIENDE"<<endl;
        else cout<<"NO ENCIENDE"<<endl;

    }




};
int main(){

    bateria * bt1 = new bateria("78715");
    celular A1("Apple" , bt1);
    A1.llamar("Pedro");
    A1.llamar("Pedro");
    A1.llamar("Pedro");
    A1.llamar("Pedro");
    A1.llamar("Pedro");
    A1.llamar("Pedro");
    A1.Encender();

    return 0;
}