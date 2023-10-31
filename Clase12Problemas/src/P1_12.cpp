#include <bits/stdc++.h>
double  const   IMPUESTO_RUEDA=100;
double  const   IMPUESTO_ASIENTO_AVION = 200;
double  const   IMPUESTO_ASIENTO_OMNIBUS = 50;
double  const IMPUESTO_MOTORES = 100;
using namespace std;
class MedioTransporte{
private:

    string nombre , precio , placa ;
public:

    MedioTransporte(const string &nombre, const string &precio, const string &placa) : nombre(nombre), precio(precio),
                                                                                       placa(placa) {}

    [[nodiscard]] const string &getNombre() const {
        return nombre;
    }

    const string &getPrecio() const {
        return precio;
    }

    const string &getPlaca() const {
        return placa;
    }

    void setNombre(const string &nombre) {
        MedioTransporte::nombre = nombre;
    }

    void setPrecio(const string &precio) {
        MedioTransporte::precio = precio;
    }

    void setPlaca(const string &placa) {
        MedioTransporte::placa = placa;
    }


    virtual int Calcular_tasa() =0 ;

};

class omnibus : public MedioTransporte{
private:
    int nro_asientos , nro_ruedas;
public:
    omnibus(const string &nombre, const string &precio, const string &placa, int nroAsientos, int nroRuedas)
            : MedioTransporte(nombre, precio, placa), nro_asientos(nroAsientos), nro_ruedas(nroRuedas) {}
    int Calcular_tasa() override {
    return  IMPUESTO_RUEDA*nro_ruedas + IMPUESTO_ASIENTO_OMNIBUS*nro_asientos;
    }

};

class avion: public MedioTransporte{
private:
    int nro_asientos , nro_motores ;
public:
    avion(const string &nombre, const string &precio, const string &placa, int nroAsientos, int nroMotores)
            : MedioTransporte(nombre, precio, placa), nro_asientos(nroAsientos), nro_motores(nroMotores) {}
    int Calcular_tasa() override
    {
        return IMPUESTO_ASIENTO_AVION*nro_asientos + IMPUESTO_MOTORES*nro_motores;
    }


};
class Recaudadora {
private:
    vector<MedioTransporte*> Cobros;
public:
    Recaudadora(){

    }
    void Nuevo_aportante(MedioTransporte* nuevo)
    {
        Cobros.push_back(nuevo);
    }

    void print()
    {
        double  total=0.0;
        cout<<setw(20)<<"NOMBRE\t\tPRECIO\tPLACA\tCALCULO DE IMPUESTO"<<endl;
        for(auto APORTANTE : Cobros)
        {
            cout<<setw(3)<<APORTANTE->getNombre()<<"\t"<<APORTANTE->getPrecio()
            <<"\t"<<APORTANTE->getPlaca()<<"\t"<<APORTANTE->Calcular_tasa()<<endl;
            total+= APORTANTE->Calcular_tasa();
        }

        cout<<"TOTAL :"<<total<<endl;
    }



};

int main(){

    MedioTransporte *Boeing747 = new avion("Boeing747" , "100" , "12345678" , 200 , 4);
    MedioTransporte *busa = new avion("Marco Polo" , "50" , "1357911" , 50 , 8);

    Recaudadora Sunat;

    Sunat.Nuevo_aportante(Boeing747);
    Sunat.Nuevo_aportante(busa);

    Sunat.print();


}