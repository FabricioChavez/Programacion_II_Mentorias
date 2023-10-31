#include <bits/stdc++.h>
using namespace std;
class atleta{
private:
    string nombre ;
    string numero ;
    string nacionalidad ;
    double  tiempo;

public:
    atleta(const string &nombre, string numero, const string &nacionalidad, double tiempo) : nombre(nombre),
                                                                                          numero(numero),
                                                                                          nacionalidad(nacionalidad),
                                                                                          tiempo(tiempo) {}

    const string &getNombre() const {
        return nombre;
    }

   const  string getNumero() const {
        return numero;
    }

    const string &getNacionalidad() const {
        return nacionalidad;
    }

    double getTiempo() const {
        return tiempo;
    }


};

class  Carrera{
private:
    vector<atleta*> COMPETIDORES;
    public:

    Carrera(const vector<atleta *> &competidores) : COMPETIDORES(competidores) {

    }
    void print()
    {

        cout<<"Nac\tNum\tAtleta\t\t\tTiempo"<<endl;
        for(auto competidor:COMPETIDORES)
        {

            cout<<setw(3)<<competidor->getNacionalidad()<<"\t"<<competidor->getNumero()<<"\t"<<competidor->getNombre()<<"\t\t"<<
            competidor->getTiempo()<<endl;

        }
        cout<<"Atleta mas veloz :"<<endl;
        auto competidor=WhoIsfastest();
        cout<<competidor->getNacionalidad()<<"\t"<<competidor->getNumero()<<"\t"<<competidor->getNombre()<<"\t\t"<<
        competidor->getTiempo()<<endl;

    }
    atleta* WhoIsfastest(){

        double max=COMPETIDORES[0]->getTiempo();
        int i=0;
        int index=0;
        for(auto c:COMPETIDORES)
        {
            if(c->getTiempo()<max)
            {
                max=c->getTiempo();
                index=i;
            }
               i++;
        }

        return COMPETIDORES[index];
    }


};
int get_int()
{
    return  rand()%20+1;
}
double get_time(){

    return double(double(get_int())+double(get_int()/100.0));

}




int main(){
    srand(time(nullptr));

    auto * a1 = new atleta("Juan Manuel" ,"01", "EUA" ,  get_time());
    auto * a2 = new atleta("Jesus Riofrio" ,"02", "ESP" ,  get_time());
    auto * a3 = new atleta("Rodolfo Campos" ,"03", "JAP" ,  get_time());
    auto * a4 = new atleta("Jaime Jimenez" ,"04", "PER" ,  get_time());

    vector<atleta*> comp{a1,a2,a3,a4};

    Carrera Panamericano(comp);

    Panamericano.print();



}