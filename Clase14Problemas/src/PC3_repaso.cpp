#include <bits/stdc++.h>
#include <fstream>
using namespace std;
const int COSTO_REALSTATE = 500;
class propiedades;
class  cjugador{

private:
    string pieza;
    int B1 , B5 , B10 , B20 , B50 , B100 , B500;
    int total;
    int posicion ;
    vector<propiedades*> posesiones;

public:
    cjugador(const string &pieza, int b1, int b5, int b10, int b20, int b50, int b100, int b500, int total,
             int posicion) : pieza(pieza), B1(b1), B5(b5), B10(b10), B20(b20), B50(b50), B100(b100), B500(b500),
                             total(total), posicion(posicion) {}

    void compra(propiedades* new_buy){
        posesiones.push_back( new_buy);
    }

    const string &getPieza() const {
        return pieza;
    }

    void setPieza(const string &pieza) {
        cjugador::pieza = pieza;
    }

    int getB1() const {
        return B1;
    }

    void setB1(int b1) {
        B1 = b1;
    }

    int getB5() const {
        return B5;
    }

    void setB5(int b5) {
        B5 = b5;
    }

    int getB10() const {
        return B10;
    }

    void setB10(int b10) {
        B10 = b10;
    }

    int getB20() const {
        return B20;
    }

    void setB20(int b20) {
        B20 = b20;
    }

    int getB50() const {
        return B50;
    }

    void setB50(int b50) {
        B50 = b50;
    }

    int getB100() const {
        return B100;
    }

    void setB100(int b100) {
        B100 = b100;
    }

    int getB500() const {
        return B500;
    }

    void setB500(int b500) {
        B500 = b500;
    }

    int getTotal() const {
        return total;
    }

    void setTotal(int total) {
        cjugador::total = total;
    }

    int getPosicion() const {
        return posicion;
    }

    void setPosicion(int posicion) {
        cjugador::posicion = posicion;
    }

    const vector<propiedades *> &getPosesiones() const {
        return posesiones;
    }
};


vector<cjugador*> partida;
map<string , bool> piezas; // Creas una

class propiedades{
private:
    cjugador* propietario;
    int casilla;
    int costo ;
    int n_constucciones ;
public:
    propiedades(int index){
        casilla=index;
        propietario = nullptr;
    }

    int getCasilla() const {
        return casilla;
    }

    void compra(cjugador*  comprador){
        propietario = comprador;
    }

    bool has_owner(){

        return  propietario == nullptr ;
    }

    void renta( cjugador * pagador)
    {
        int Apagar = costo+COSTO_REALSTATE*n_constucciones;
        if(Apagar > pagador->getTotal() )
        {
            int i =0;
            for(auto  player:partida)
            {

                if(player->getPieza() == pagador->getPieza())
                {
                    partida.erase(partida.begin()+i);
                    break;

                }
                    i++;
            }


        }else {
            pagador->setTotal(pagador->getTotal() - Apagar);

            int n500 , n100 , n50 , n20 , n10 , n5;
            //500

            if(pagador->getB500() > 0 and Apagar>=5 )
            {   n500 = Apagar/500;
                pagador->setB500(pagador->getB500()-n500);
                Apagar -= n500*500;
            }




            //100
            if(pagador->getB100() > 0 and Apagar>=5 )
            {
                n100 = Apagar/100;
                pagador->setB100(pagador->getB100()-n100);
                Apagar -= n100*100;
            }




            //50
            if(pagador->getB50() > 0  and Apagar>=5 )
            {
                n50 = Apagar/50;
                pagador->setB50(pagador->getB50()-n50);
                Apagar -= n50*50;
            }

            //20
            if(pagador->getB20() > 0 and Apagar>=5  )
            {
                n20 = Apagar/20;
                pagador->setB20(pagador->getB20()-n20);
                Apagar -= n20*20;
            }
            //10
            if(pagador->getB10() > 0 and Apagar>=5  )
            {
                n10 = Apagar/10;
                pagador->setB10(pagador->getB10()-n10);
                Apagar -= n10*10;
            }

            //5
            if(pagador->getB5() > 0  and Apagar>=5 )
            {
                n5 = Apagar/5;
                pagador->setB5(pagador->getB5()-n5);
                Apagar -= n5*5;
            }

        }
    }

};

class  tablero{
private:
    map<int , propiedades*> casillas;
public:
    explicit tablero(const map<int, propiedades *> &casillas) : casillas(casillas) {}
    tablero(){};
    const map<int, propiedades *> &getCasillas() const {
        return casillas;
    }

};

void escoger_igual(cjugador* actual  , string ficha_debatida ){

    for(auto players : partida)
    {
        //
    }

}

int tirar_dados(){

}


void save(){

    ofstream guardar("jugadores.txt"  , ios::app)  ;//ios::ate
    if(!guardar)
    {
        cerr<<"No se encontro el archivo ..."<<endl;
        exit(1);

    }
    string pieza;
    int B1 , B5 , B10 , B20 , B50 , B100 , B500;
    int total;
    int posicion ;
    vector<int> posesiones ;

    for(auto player : partida)
    {
        guardar<<pieza<<" "<<B1<<" "<<B5<<" "<<B10<<" "<<B20<<" "<<B50<<" "<<B100<<" "<<B500
                <<" "<<total<<" "<<posicion<<" ";

        for(auto  pose: player->getPosesiones())
        {
            guardar<<pose->getCasilla()<<" ";
        }
        guardar<<endl;
    }

    // METODO LOAD
    //cuando lecutura
    //cin --> lectura file --> lectura>>pieza<<B1<<B5<<B10...
//    while ( lectura>>pieza<<B1<<B5<<B10...)
//    {
//      //Reestablece datos en las clases
//    }
}

int main(){
    int n ; //numero de  players
    tablero alfa;
    cin>>n;


    for (int i = 0; i < n; ++i) {
        auto * nuevo_player = new cjugador("",5,5,5,6,2,2,2 ,1500, 1 );
    }
    piezas.insert(make_pair("Acorazado" , false));// insertando cada pieza
    //continuar
        //...
    //Escoger piezas
    for(auto  player:partida)
    {

        cout<<"ESCOGER"<<endl;
        string ficha;
        cin>>ficha;
        do{
            if(!piezas[ficha] ) // aumentar condicion de repeticion vector<string> map<string , bool> dentro de cjugador
                player->setPieza(ficha);
            else {
                escoger_igual(player , ficha);
            }

        } while (player->getPieza()=="");

    }


    //asignar puestos

    //
    vector<int> orden; // asignas el index del jugador en el vector partida

    while (partida.size()>1)
    {

        for (int i = 0; i < orden.size(); ++i) {

            int move = tirar_dados();
            int new_pos= partida[i]->getPosicion()+move;
            partida[i]->setPosicion(new_pos);
            auto beta = alfa.getCasillas();

            if(beta[new_pos]->has_owner())
            {
                beta[new_pos]->renta(partida[i]);
            }else {

                cout<<"COMPRAS ?";
                bool sino ;
                cin>>sino;
                if(sino)
                    beta[new_pos]->compra(partida[i]);
            }

            cout<<"quieres terminar el juego ?";
            bool sino ;

            if(sino)
            {
                save();
            }
        }




    }


}