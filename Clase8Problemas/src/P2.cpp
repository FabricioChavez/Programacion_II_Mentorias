#include <iostream>
#include <vector>
using namespace std;
class cliente{
private:
    string nombre;
    string dni;
    string ciudad;
    string telefono;
public:
    cliente(const string &nombre, const string &dni, const string &ciudad, const string &telefono) : nombre(nombre),
                                                                                                     dni(dni),
                                                                                                     ciudad(ciudad),
                                                                                                     telefono(
                                                                                                             telefono) {}

    virtual ~cliente() {

    }

    const string &getDni() const {
        return dni;
    }

    const string &getCiudad() const {
        return ciudad;
    }

    void mostrar(){

        cout<<"Nombre   :"<<nombre<<endl;
        cout<<"DNI      :"<<dni<<endl;
        cout<<"Ciudad   :"<<ciudad<<endl;
        cout<<"Telefono :"<<telefono<<endl;

    }
};

class Empresa{
private:
    string Nombre;
    vector<cliente*> clientela;
public:
    explicit Empresa(const string &nombre) : Nombre(nombre) {}
    bool find_cliente(cliente * cliente_busca){

        for(auto client:clientela)
        {
            if(cliente_busca->getDni()==client->getDni())
                return true;
        }
        return false;
    }
    void add_cliente(cliente * cliente){
        if(!find_cliente(cliente))
            clientela.push_back(cliente);
    }

    void display(string ciudad){

        for(auto client:clientela)
        {
            if(client->getCiudad()==ciudad)
            client->mostrar();

            cout<<endl;
        }
    }

};


int main(){

    Empresa Empresa1("Telmex");
    cliente* c1 = new cliente("Miguel", "1" , "Lima" , "245");
    cliente* c2 = new cliente("Napoleon" ,"3" , "Lima" , "1815");
    cliente* c3 = new cliente("Napoleon III" ,"3","Lima", "1879");
    Empresa1.add_cliente(c1);
    Empresa1.add_cliente(c2);
    Empresa1.add_cliente(c3);
    Empresa1.display("Lima");

    return 0;
}