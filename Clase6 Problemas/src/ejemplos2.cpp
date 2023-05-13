#include <iostream>
#include <vector>
using namespace std;

void fill_v(vector<int> &origen , int n){
    for (int i = 0; i < n; ++i) {
        origen.push_back(rand()%19+1);
    }

}


int main()
{
    srand(time(nullptr));
 vector<int> alfa;
 int n;
 cin>>n;
    fill_v(alfa , n);
    int maxi=alfa[0];
    for(auto v:alfa) { //HALLAR EL MAXIMO DEL VECTOR

        cout<<v<<" ";
        if(maxi<v)
            maxi=v;

    }
    cout<<endl;
    vector<int> rep(maxi+1,0); //INICIALIZAMOS EL VECTOR DE REPETICIONES
    // CON SIZE MAX+1 Y TODOS EN CERO

    for (auto v:alfa)
        rep[v]++; // ACTUALIZANDO VECTOR REPETICIONES //GENERAR TABLA DE FRECUENCIAS

    int moda = rep[0];

    for(auto v:rep)
    {
        if(moda<v) //HALLAR FRECUENCIA MAXIMA
            moda=v;
    }

    vector<int > modas;

    for (int i = 0; i < rep.size(); ++i) {

        if(rep[i]>=moda) //PUSHEAR VALORES QUE TIENEN FRECUENCIA >= A LA FRECUENCIA MAXIMA
        {
            modas.push_back(i);
        }
    }
    cout<<endl;
    for(auto repe : modas)
        cout<<repe<<" ";

    return 0;
}