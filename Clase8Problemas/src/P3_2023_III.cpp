#include <bits/stdc++.h>
using namespace std;
int random_number_generator(int upper_bound){
    return  rand()%upper_bound;
}

string  random_string_generator(){
    string name = "";
    for (int i = 0; i < 10; ++i) {
        name.push_back(char(rand()%26+'A'));
    }
    return  name;
}



class Jugador{
private:

    string nombre;
    int nro_silla;
public:
    Jugador(const string &nombre, int nroSilla) : nombre(nombre), nro_silla(nroSilla) {}

    int getNroSilla() const {
        return nro_silla;
    }

    void setNroSilla(int nroSilla) {
        nro_silla = nroSilla;
    }
    void print ()
    {
        cout<< " NOMBRE      : " << nombre <<endl;
        cout<<"  NRO_SILLA   : " << nro_silla<<endl;
        cout<<endl;
    }
};

int main(){
   int n;
    srand(time(nullptr));
   cin>>n;
    vector<Jugador> players;
    for (int i = 0; i < n; ++i)
        players.emplace_back(random_string_generator(), i);
cout<<"BEFORE"<<endl;
    for(auto p:players)
        p.print();

//    players.erase(players.begin()+1);
//    players.erase(players.begin()+3);
//    players.erase(players.begin());
//    cout<<"AFTER"<<endl;
//
//    cout<<"EL JUGADOR QUE GANO ES : "<<endl;
//    players[0].print();
int s;
    while (players.size() > 1)
    { s= random_number_generator(10);
        vector<bool> repetidos(players.size() , false);
       if( s == 5)
       {
           cout<<"LA MUSICA SE DETIENE ..."<<endl;
           auto it = players.begin();
           int i=0;
           for(auto p:players)
           {
              if(p.getNroSilla() ==0)
                  break;

                  i++;
           }
           cout<<"SE ELIMINO A"<<endl;
           players[i].print();
           players.erase(players.begin()+i);

       }else {
           cout<<"LA MUSICA NO SE DETIENE ..."<<endl;
           for(auto  & p : players)  // DETALLE CORREGIDO --> Para modificar a los elementos en vector era necesario usar & en la parte de la iteracion para poder modificarlos como referencia
           {
               int nro_silla = random_number_generator(players.size());
               if (!repetidos[nro_silla])
               {
                   p.setNroSilla(nro_silla);
                   repetidos[nro_silla]=true;
               }
               else {

                   while (repetidos[nro_silla])
                   {

                       nro_silla = random_number_generator(players.size());
                       if(!repetidos[nro_silla])
                       {
                           p.setNroSilla(nro_silla);
                           repetidos[nro_silla]=true;
                           break;
                       }
                   }

               }

           }
           cout<<"LUEGO DE REASIGNADO "<<endl;
           for (auto p:players)
               p.print();

       }






    }

    cout<<"EL JUGADOR QUE GANO ES : "<<endl;
    players[0].print();


    return 0;
}