#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Date{ // Struct es clase / todos los atributos en public por defecto

    int day;
    int month;
    int year;

   explicit Date(int day, int month, int year) : day(day), month(month), year(year) {}


};


class Persona{

private:
    string nombre;
    string apellido_paterno;
    string apellido_materno;
    Date *fecha_;
public:
    Persona(const string &nombre, const string &apellidoPaterno, const string &apellidoMaterno, int day , int mes , int anho)
            : nombre(nombre), apellido_paterno(apellidoPaterno), apellido_materno(apellidoMaterno) {
                auto * n = new Date(day,mes,anho);
                fecha_=n;
    }

    virtual ~Persona() {

    }

    Persona(){

    }
    const string &getNombre() const {
        return nombre;
    }

    const string &getApellidoPaterno() const {
        return apellido_paterno;
    }

    const string &getApellidoMaterno() const {
        return apellido_materno;
    }

    Date *getFecha() const {
        return fecha_;
    }

    void setNombre(const string &nombre) {
        Persona::nombre = nombre;
    }

    void setApellidoPaterno(const string &apellidoPaterno) {
        apellido_paterno = apellidoPaterno;
    }

    void setApellidoMaterno(const string &apellidoMaterno) {
        apellido_materno = apellidoMaterno;
    }

    void setFecha(Date *fecha) {
        fecha_ = fecha;
    }

};



class Equipo{

private:
    string nombre_;
    vector<Persona*> mienbros_;
public:

    Equipo(const string &nombre, const vector<Persona *> &mienbros) : nombre_(nombre), mienbros_(mienbros) {}
   explicit Equipo(const string &nombre){


    }

    virtual ~Equipo() {

    }

    const string &getNombre() const {
        return nombre_;
    }

    const vector<Persona*> &getMienbros() const {
        return mienbros_;
    }

    void add_persona(Persona* nueva_persona){
        mienbros_.push_back(nueva_persona);
    }

    void imprimir() const{

        for(auto v:getMienbros())
        {   cout<<"------------------------------------------------------------"<<endl;
            cout<<"Nombre     :"<<v->getNombre()<<endl;
            cout<<"Apellido P :"<<v->getApellidoPaterno()<<endl;
            cout<<"Apellido M :"<<v->getApellidoMaterno()<<endl;
            cout<<"Fecha de Nacimiento :"<<v->getFecha()->day<<"/"<<v->getFecha()->month<<"/"<<v->getFecha()->year<<endl;
            cout<<"------------------------------------------------------------"<<endl;

        }

    }

    bool Comparar(Persona A , Persona B){ //sobrecarga de operadores
        return A.getNombre()==B.getNombre() and A.getApellidoPaterno()==B.getApellidoPaterno() and A.getApellidoMaterno()==B.getApellidoMaterno() and A.getFecha()->year==B.getFecha()->year
                and A.getFecha()->month==B.getFecha()->month and A.getFecha()->day==B.getFecha()->day;
    }


};
int main(){

    auto * p1= new Persona("P1","P","1",6,2,2023);
    auto * p2= new Persona("P2","P","2",7,2,2023);
    auto * p3= new Persona("P3","P","3",8,3,2023);
    auto * p4=new Persona("P4","P","4",9,3,2023);
    Equipo equipo1("UNO");
    Equipo euipo2("TRES");
    equipo1.add_persona(p1);
    equipo1.add_persona(p3);
    euipo2.add_persona(p2);
    euipo2.add_persona(p3);
    euipo2.add_persona(p4);
//    cout<<"EQUIPO1"<<endl;
//    equipo1.imprimir();
//    cout<<"EQUIPO2"<<endl;
//    euipo2.imprimir();
    vector<Persona*> equivalencias;


    for(auto E1:equipo1.getMienbros())
    {
        for (auto E2 :euipo2.getMienbros()) {

            if(euipo2.Comparar(*E1,*E2))
            {
                    equivalencias.push_back(E1);
            }


        }

    }

    for(auto coincidencias:equivalencias)
    {
        cout<<coincidencias->getNombre()<<endl;
    }



    return 0;
}