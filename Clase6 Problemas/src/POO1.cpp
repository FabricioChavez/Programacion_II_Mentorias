#include <iostream>
#include <vector>
using namespace std;


class estadistica{
private:
    vector<double> numeros_;

public:

    estadistica(const vector<double>& vec):numeros_(vec){

    }

    estadistica(){

    }
    double hallarMax(){
        double  maxi = numeros_[0];
        for(auto v:numeros_)
        {
            if(maxi<v)
                maxi=v;
        }

        return maxi;
    }

    double HallarMin(){
        double  mini = numeros_[0];
        for(auto v:numeros_)
        {
            if(mini>v)
                mini=v;
        }

        return mini;
    }

    double HallarMedia(){
            double  sum=0.0;
            for(auto v:numeros_)
                sum+=v;

        return double(sum)/double(numeros_.size());

    }
    void ordenar(){
        sort(numeros_.begin() , numeros_.end());

    }

    void MostrarDatos(){
        for(auto v:numeros_)
            cout<<v<<" ";
        cout<<endl;

    }

    const vector<double> &getNumeros() const {
        return numeros_;
    }

};


int main(){

    vector<double> alfa{3.5,6.9,7.8,1.1};
    estadistica Nums(alfa);
//    Nums.MostrarDatos();
//    Nums.ordenar();
//    Nums.MostrarDatos();
//    cout<<"EL MAXIMO ES "<<Nums.hallarMax()<<endl;
//    cout<<"EL MINIMO ES "<<Nums.HallarMin()<<endl;
//    cout<<"LA MEDIA ES "<<Nums.HallarMedia()<<endl;

for(auto v:Nums.getNumeros())
{
    cout<<v<<" ";
}

    return 0;
};